// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

class UCapsuleComponent;


UCLASS()
class TANKPEW_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"));
	UStaticMeshComponent* pawnBody;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"));
	UStaticMeshComponent* pawnTurret;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"));
	UCapsuleComponent* capsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"));
	USceneComponent* pawnProjSpawnPoint;
};
