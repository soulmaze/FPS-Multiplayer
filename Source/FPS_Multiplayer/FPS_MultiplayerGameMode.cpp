// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_MultiplayerGameMode.h"
#include "FPS_MultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_MultiplayerGameMode::AFPS_MultiplayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
