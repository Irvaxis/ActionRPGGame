// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "ARHUD.generated.h"

UCLASS()
class AARHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

public:
	virtual void DrawHUD() override;

	TSharedPtr<class SARHUDWidget> HUDWidget;
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = "HUD|Inventory")
		bool DrawInventoryWidget;

private:
	UTexture2D* CrosshairTex;
};


