// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

void ATurret::BeginPlay()
{
	Super::BeginPlay();

	playerTank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	if (!playerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot Find Player Tank."));
	}

	GetWorldTimerManager().SetTimer(fireRateTimerHandle, this, &ATurret::CheckFireCondition, fireRate, true);
}

void ATurret::LevelUp()
{
	Super::LevelUp();
}

void ATurret::HandleDestruction()
{
	Super::HandleDestruction();
	Destroy();
}

void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Find Distance to Tank

	if (IsTankInRange())
	{
		RotateTurret(playerTank->GetActorLocation());
	}
}

bool ATurret::IsTankInRange()
{
	if (playerTank && playerTank->GetIsAilve())
	{
		float dist = FVector::Dist(GetActorLocation(), playerTank->GetActorLocation());

		if (dist <= sightDistance)
			return true;
		else
			return false;
	}

	return false;
}

void ATurret::CheckFireCondition()
{
	if (IsTankInRange())
	{
		Fire();
	}
}
