// Fill out your copyright notice in the Description page of Project Settings.


#include "PANDORAS_GameModeBase.h"
#include "PANDORAS_Character__Diel_Eve.h"
#include "PANDORAS_PlayerController.h"

APANDORAS_GameModeBase::APANDORAS_GameModeBase()
{
	static ConstructorHelpers::FClassFinder<ACharacter> Character__Diel_Eve(TEXT("/Game/PandorasDust/Characters/Diel_Eve/Blueprints/BP_PANDORAS_Character__Diel_Eve"));
	if (Character__Diel_Eve.Succeeded())
	{
		DefaultPawnClass = Character__Diel_Eve.Class;
	}

	//DefaultPawnClass = APANDORAS_Character__Diel_Eve::StaticClass();
	PlayerControllerClass = APANDORAS_PlayerController::StaticClass();
}