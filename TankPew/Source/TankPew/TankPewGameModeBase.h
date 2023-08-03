// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankPewGameModeBase.generated.h"

class ATank;
class AMyPlayerController;

/**
 * 
 */
UCLASS()
class TANKPEW_API ATankPewGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	void ActorDied(AActor* aDeadActor);

protected:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent)
	void GameOver(bool aWonGame);

private:

	void UpgradeTurretsAndPlayer();

	ATank* playerTank;

	AMyPlayerController* playerController;

	float startDelay = 3.0f;

	int32 targetTowers = 0;
	int32 GetTargetTowerCount();

	int maxLevel = 2;
	int currentLevel = 0;

	TArray<AActor*> towers;

	void HandleGameStart();
};
