// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

class AController;
class ATankPewGameModeBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANKPEW_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	void OnLevelUp();

private:

	UPROPERTY(EditAnywhere, Category = "Settings")
	float maxHealth = 100.0f;
	float health = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Settings")
	float healthOnLevel = 50;

	ATankPewGameModeBase* tankPewGameModeBase;

	UFUNCTION()
	void DamageTaken(AActor* aDamagedActor, float aDamage, const UDamageType* aDamageType, AController* aInstigator, AActor* aDamageCauser);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
