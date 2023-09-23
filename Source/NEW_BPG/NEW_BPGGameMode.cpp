// Copyright Epic Games, Inc. All Rights Reserved.

#include "NEW_BPGGameMode.h"
#include "NEW_BPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANEW_BPGGameMode::ANEW_BPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
