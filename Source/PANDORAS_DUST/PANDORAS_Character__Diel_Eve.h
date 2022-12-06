// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PANDORAS_DUST.h"
#include "GameFramework/Character.h"
#include "PANDORAS_Character__Diel_Eve.generated.h"

UCLASS()
class PANDORAS_DUST_API APANDORAS_Character__Diel_Eve : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APANDORAS_Character__Diel_Eve();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* Camera;

private:
	void MoveForward(float NewAxisValue);
	void MoveRight(float NewAxisValue);
};
