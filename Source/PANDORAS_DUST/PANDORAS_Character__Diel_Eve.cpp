// Fill out your copyright notice in the Description page of Project Settings.


#include "PANDORAS_Character__Diel_Eve.h"

// Sets default values
APANDORAS_Character__Diel_Eve::APANDORAS_Character__Diel_Eve()
	: SpringArm (CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM")))
	, Camera (CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA")))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void APANDORAS_Character__Diel_Eve::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APANDORAS_Character__Diel_Eve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APANDORAS_Character__Diel_Eve::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APANDORAS_Character__Diel_Eve::MoveForward(float NewAxisValue)
{
}

void APANDORAS_Character__Diel_Eve::MoveRight(float NewAxisValue)
{
}

