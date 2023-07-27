// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

class UCapsuleComponent;
class ABulletOne;
class UCameraShakeBase;

UCLASS()
class TANKPEW_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	void HandleDestruction();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void RotateTurret(FVector aLookAtTarget);

	void Fire();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"));
	UStaticMeshComponent* pawnBody;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"));
	UStaticMeshComponent* pawnTurret;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"));
	UCapsuleComponent* capsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"));
	USceneComponent* pawnProjSpawnPoint;

	UPROPERTY(EditAnywhere, Category = "Settings")
	float turretRotSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABulletOne> bullet;

	UPROPERTY(EditAnywhere, Category = "Effects", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* deathEffect;

	UPROPERTY(EditAnywhere, Category = "Effects", meta = (AllowPrivateAccess = "true"))
	USoundBase* deathSound;

	UPROPERTY(EditAnywhere, Category = "Effects", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UCameraShakeBase> deathShake;
};
