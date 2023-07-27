// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletOne.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABulletOne::ABulletOne()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bulletBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet Mesh"));
	RootComponent = bulletBase;

	projComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Proj Component"));

}

// Called when the game starts or when spawned
void ABulletOne::BeginPlay()
{
	Super::BeginPlay();
	
	bulletBase->OnComponentHit.AddDynamic(this, &ABulletOne::OnHit);
}

// Called every frame
void ABulletOne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABulletOne::OnHit(UPrimitiveComponent* aHitComp, AActor* aOtherActor, UPrimitiveComponent* aOtherComp, FVector aNormalImpulse, const FHitResult& aHit)
{
	AActor* owner = GetOwner();

	if (!owner)
		return;

	AController* ownerInstController = owner->GetInstigatorController();
	TSubclassOf<UDamageType> damageTypeClass = UDamageType::StaticClass();

	if (aOtherActor && aOtherActor != this && aOtherActor != owner)
	{
		UGameplayStatics::ApplyDamage(aOtherActor, damage, ownerInstController, this, damageTypeClass);

		Destroy();
	}
}