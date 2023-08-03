// Copyright Epic Games, Inc. All Rights Reserved.


#include "TankPewGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Turret.h"
#include "MyPlayerController.h"

void ATankPewGameModeBase::ActorDied(AActor* aDeadActor)
{
	if (aDeadActor == playerTank)
	{
		playerTank->HandleDestruction();

		if (playerController)
		{
			playerController->SetPlayerEnabledState(false);
		}

		GameOver(false);
	}
	else if (ATurret* destroyedTower = Cast<ATurret>(aDeadActor))
	{
		destroyedTower->HandleDestruction();
		targetTowers--;

		if (targetTowers <= 0)
		{
			GameOver(true);
		}

		if (targetTowers == 3)
		{
			playerTank->LevelUp();

			for (int i = 0; i < towers.Num(); i++)
			{
				if (AActor* turret = towers[i])
				{
					if (ATurret* turretToUpgrade = Cast<ATurret>(turret))
					{
						turretToUpgrade->LevelUp();
					}
				}
			}
		}

		if (targetTowers == 2)
		{
			playerTank->LevelUp();

			for (int i = 0; i < towers.Num(); i++)
			{
				if (AActor* turret = towers[i])
				{
					if (ATurret* turretToUpgrade = Cast<ATurret>(turret))
					{
						turretToUpgrade->LevelUp();
					}
				}
			}
		}

		UpgradeTurretsAndPlayer();
	}
}

void ATankPewGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	HandleGameStart();
}

void ATankPewGameModeBase::UpgradeTurretsAndPlayer()
{
	if (targetTowers % 3 == 0 && currentLevel != maxLevel)
	{
		playerTank->LevelUp();

		for (int i = 0; i < towers.Num(); i++)
		{
			if (AActor* turret = towers[i])
			{
				if (ATurret* turretToUpgrade = Cast<ATurret>(turret))
				{
					turretToUpgrade->LevelUp();
				}
			}
		}

		currentLevel++;
	}
}

int32 ATankPewGameModeBase::GetTargetTowerCount()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurret::StaticClass(), towers);

	return towers.Num();
}

void ATankPewGameModeBase::HandleGameStart()
{
	targetTowers = GetTargetTowerCount();
	playerTank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
	playerController = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	StartGame();

	if (playerController)
	{
		playerController->SetPlayerEnabledState(false);
		FTimerHandle playerEnableTimerHandle;
		FTimerDelegate playerEnableTimerDelegate = FTimerDelegate::CreateUObject(playerController, &AMyPlayerController::SetPlayerEnabledState, true);
		GetWorldTimerManager().SetTimer(playerEnableTimerHandle, playerEnableTimerDelegate, startDelay, false);
	}
}