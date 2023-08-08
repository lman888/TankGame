// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/GameplayStatics.h"
#include "CollisionDebugDrawingPublic.h"
#include "GameFramework/Character.h"


void ATank::BeginPlay()
{
	Super::BeginPlay();

	playerController = Cast<APlayerController>(GetController());
	if (!playerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not found!"));
	}

	isAlive = true;
}

void ATank::LevelUp()
{
	Super::LevelUp();
}

ATank::ATank()
{
	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm Component"));
	springArm->SetupAttachment(RootComponent);

	cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	cameraComp->SetupAttachment(springArm);

	pawnMoveComp = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement Component"));

	isInAir = false;
	jumping = false;
}

void ATank::HandleDestruction()
{
	Super::HandleDestruction();
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);
	isAlive = false;
}

void ATank::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::MoveForwardAndBackward);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::MoveLeftAndRight);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ATank::Fire);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ATank::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ATank::StopJumping);
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

	isInAir = pawnMoveComp->Velocity.Z != 0;

	if (jumping)
	{
		pawnMoveComp->Velocity.Z += 180.0f;

		//When I reach a certain height, turn off is jumping
		if (pawnTurret->GetComponentLocation().Z >= maxJumpHeight)
		{
			jumping = false;
		}
	}
	else
	{
		pawnMoveComp->Velocity.Z -= 100.0f;
	}
}

APlayerController* ATank::GetPlayerController()
{
	return playerController;
}

bool ATank::GetIsAilve()
{
	return isAlive;
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

void ATank::StartJump()
{
	//TODO MAKE PAWN JUMP
	//

	//Do a line trace, a dick smidge one that checks if we are are in the air
	FVector startVec = FVector(pawnBody->GetComponentLocation().X, pawnBody->GetComponentLocation().Y, pawnBody->GetComponentLocation().Z);
	FVector endVec = FVector(pawnBody->GetComponentLocation().X, pawnBody->GetComponentLocation().Y, pawnBody->GetComponentLocation().Z - 5);

	FHitResult hitResult;
	FCollisionQueryParams colParams;
	colParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(hitResult, startVec, endVec, ECC_Visibility, colParams))
	{
		if (hitResult.GetActor()->ActorHasTag("Ground") && !isInAir)
		{
			jumping = true;
		}
	}
}

void ATank::StopJumping()
{
	jumping = false;
}