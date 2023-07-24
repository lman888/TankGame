// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	capsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Component"));
	RootComponent = capsuleComp;

	pawnBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	pawnBody->SetupAttachment(RootComponent);

	pawnTurret = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	pawnTurret->SetupAttachment(pawnBody);

	pawnProjSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	pawnProjSpawnPoint->SetupAttachment(pawnTurret);

}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABasePawn::RotateTurret(FVector aLookAtTarget)
{
	FVector toTarget = aLookAtTarget - pawnTurret->GetComponentLocation();

	FRotator lookAtRotation = FRotator(0.0f, toTarget.Rotation().Yaw, 0.0f);

	pawnTurret->SetWorldRotation(FMath::RInterpTo(pawnTurret->GetComponentRotation(), lookAtRotation, UGameplayStatics::GetWorldDeltaSeconds(this), turretRotSpeed));
}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}