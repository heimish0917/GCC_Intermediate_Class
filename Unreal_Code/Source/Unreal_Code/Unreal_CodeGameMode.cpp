// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_CodeGameMode.h"
#include "Unreal_CodeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_CodeGameMode::AUnreal_CodeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
