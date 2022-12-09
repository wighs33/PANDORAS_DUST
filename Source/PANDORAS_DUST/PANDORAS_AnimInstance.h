// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PANDORAS_DUST.h"
#include "Animation/AnimInstance.h"
#include "PANDORAS_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PANDORAS_DUST_API UPANDORAS_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPANDORAS_AnimInstance();

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = "true"))
		float CurrentPawnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = "true"))
		bool IsInAir;
};
