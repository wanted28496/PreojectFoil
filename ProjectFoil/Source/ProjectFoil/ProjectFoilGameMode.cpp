// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProjectFoilGameMode.h"
#include "ProjectFoilHUD.h"
#include "ProjectFoilCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectFoilGameMode::AProjectFoilGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	//HUDClass = AProjectFoilHUD::StaticClass();
}
