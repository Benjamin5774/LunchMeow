// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaunchMeowGameMode.h"
#include "LaunchMeowCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaunchMeowGameMode::ALaunchMeowGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
