// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"

void AMyPlayerController::SetPlayerEnabledState(bool aPlayerEnabled)
{
	if (aPlayerEnabled)
	{
		GetPawn()->EnableInput(this);
	}
	else
	{
		GetPawn()->DisableInput(this);
	}

	bShowMouseCursor = aPlayerEnabled;
}