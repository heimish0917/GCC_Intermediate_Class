// Copyright Epic Games, Inc. All Rights Reserved.

#include "Day_2_ReviewGameMode.h"
#include "Day_2_ReviewCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADay_2_ReviewGameMode::ADay_2_ReviewGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
