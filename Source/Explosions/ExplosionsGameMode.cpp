// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExplosionsGameMode.h"
#include "ExplosionsHUD.h"
#include "ExplosionsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExplosionsGameMode::AExplosionsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AExplosionsHUD::StaticClass();
}
