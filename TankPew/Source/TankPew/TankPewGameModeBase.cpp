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
	}
}

void ATankPewGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	HandleGameStart();
}

int32 ATankPewGameModeBase::GetTargetTowerCount()
{
	TArray<AActor*> towers;
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