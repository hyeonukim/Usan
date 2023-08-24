// Copyright Epic Games, Inc. All Rights Reserved.

#include "USANGameMode.h"
#include "USANCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUSANGameMode::AUSANGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
