// Copyright Epic Games, Inc. All Rights Reserved.

#include "PANDORAS_DUSTGameMode.h"
#include "PANDORAS_DUSTCharacter.h"
#include "UObject/ConstructorHelpers.h"

APANDORAS_DUSTGameMode::APANDORAS_DUSTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
