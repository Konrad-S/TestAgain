// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestAgainGameMode.h"
#include "TestAgainCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestAgainGameMode::ATestAgainGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
