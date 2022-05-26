// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ExplosionsHUD.generated.h"

UCLASS()
class AExplosionsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AExplosionsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

