// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "MyProjectGameMode.generated.h"

UCLASS(minimalapi)
class AMyProjectGameMode : public AGameMode
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = TDLHelpers)
	static FString GetCurrentMapReference(AActor * sourceActor);

};



