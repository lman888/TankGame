// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

class USpringArmComponent;
class UCameraComponent;
class ABulletOne;

/**
 * 
 */
UCLASS()
class TANKPEW_API ATank : public ABasePawn
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	ATank();

	void HandleDestruction();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	APlayerController* GetPlayerController();

private:

	void MoveForwardAndBackward(float aValue);

	void MoveLeftAndRight(float aValue);

	UPROPERTY(EditAnywhere, Category = "Settings", meta = (AllowPrivateAccess = "true"))
	float playerSpeed;

	UPROPERTY(EditAnywhere, Category = "Settings", meta = (AllowPrivateAccess = "true"))
	float playerRotationSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* springArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* cameraComp;

	APlayerController* playerController;
};