// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"


void ATank::BeginPlay()
{
	Super::BeginPlay();

	playerController = Cast<APlayerController>(GetController());
	if (!playerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not found!"));
	}
}

ATank::ATank()
{
	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm Component"));
	springArm->SetupAttachment(RootComponent);

	cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	cameraComp->SetupAttachment(springArm);
}

void ATank::HandleDestruction()
{
	Super::HandleDestruction();
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);
}

void ATank::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::MoveForwardAndBackward);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::MoveLeftAndRight);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ATank::Fire);
}

void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (playerController)
	{
		FHitResult hitResult;
		playerController->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, hitResult);

		RotateTurret(hitResult.ImpactPoint);
	}
}

APlayerController* ATank::GetPlayerController()
{
	return playerController;
}

void ATank::MoveForwardAndBackward(float aValue)
{
	FVector moveLocation = FVector::ZeroVector;

	moveLocation.X += aValue * UGameplayStatics::GetWorldDeltaSeconds(this) * playerSpeed;

	AddActorLocalOffset(moveLocation, true);
}

void ATank::MoveLeftAndRight(float aValue)
{
	FRotator rotation = FRotator::ZeroRotator;

	rotation.Yaw += aValue * UGameplayStatics::GetWorldDeltaSeconds(this) * playerRotationSpeed;

	AddActorLocalRotation(rotation, true);
}