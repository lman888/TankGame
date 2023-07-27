// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletOne.generated.h"

class UProjectileMovementComponent;

UCLASS()
class TANKPEW_API ABulletOne : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABulletOne();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditAnywhere)
	float damage = 20.0f;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* aHitComp, AActor* aOtherActor, UPrimitiveComponent* aOtherComp, FVector aNormalImpulse, const FHitResult& aHit);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"))
	UStaticMeshComponent* bulletBase;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* projComp;
};
