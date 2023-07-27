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

private:

	ATank* playerTank;

	AMyPlayerController* playerController;

};
