// Fill out your copyright notice in the Description page of Project Settings.


#include "PANDORAS_AnimInstance.h"

UPANDORAS_AnimInstance::UPANDORAS_AnimInstance()
	:CurrentPawnSpeed(0.0f)
{
}

void UPANDORAS_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
	}
}
