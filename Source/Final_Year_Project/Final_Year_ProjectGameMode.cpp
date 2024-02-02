// Copyright Epic Games, Inc. All Rights Reserved.

#include "Final_Year_ProjectGameMode.h"
#include "Final_Year_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinal_Year_ProjectGameMode::AFinal_Year_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
