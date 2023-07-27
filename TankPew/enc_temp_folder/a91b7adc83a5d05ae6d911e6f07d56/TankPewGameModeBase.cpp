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
			playerTank->DisableInput(playerTank->GetPlayerController());
			playerController->SetPlayerEnabledState(false);
		}
	}
	else if (ATurret* destroyedTower = Cast<ATurret>(aDeadActor))
	{
		destroyedTower->HandleDestruction();
	}
}

void ATankPewGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	playerTank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));

	playerController = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
}