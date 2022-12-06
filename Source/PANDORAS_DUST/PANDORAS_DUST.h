// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"

#define MYLOG_INFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define MYLOG_S(log_level) UE_LOG(LogTemp, log_level, TEXT("%s"), *MYLOG_INFO)
#define MYLOG(log_level, format, ...) UE_LOG(LogTemp, log_level, TEXT("%s %s"), *MYLOG_INFO, *FString::Printf(format, ##__VA_ARGS__))
