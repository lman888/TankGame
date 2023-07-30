// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Turret.generated.h"

class ATank;

/**
 * 
 */
UCLASS()
class TANKPEW_API ATurret : public ABasePawn
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;


public:

	void LevelUp();

	void HandleDestruction();

	virtual void Tick(float DeltaTime) override;

private:

	bool IsTankInRange();

	void CheckFireCondition();

	ATank* playerTank;

	UPROPERTY(EditAnywhere, Category = "Settings", meta = (AllowPrivateAccess = true))
	float sightDistance;

	FTimerHandle fireRateTimerHandle;

	UPROPERTY(EditAnywhere, Category = "Settings", meta = (AllowPrivateAccess = true))
	float fireRate = 2.0f;
};
