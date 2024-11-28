// Copyright Epic Games, Inc. All Rights Reserved.

#include "CICDExampleGameMode.h"
#include "CICDExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACICDExampleGameMode::ACICDExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
