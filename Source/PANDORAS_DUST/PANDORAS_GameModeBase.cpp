// Fill out your copyright notice in the Description page of Project Settings.


#include "PANDORAS_GameModeBase.h"
#include "PANDORAS_Character__Diel_Eve.h"
#include "PANDORAS_PlayerController.h"

APANDORAS_GameModeBase::APANDORAS_GameModeBase()
{
	DefaultPawnClass = APANDORAS_Character__Diel_Eve::StaticClass();
	PlayerControllerClass = APANDORAS_PlayerController::StaticClass();
}