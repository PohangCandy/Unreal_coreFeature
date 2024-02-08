// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(Raven, Error, All);

class MYPROJECT2_API CLog
{
public:
	static void Log(const UObject* InObject);
	static void Log(const int32 InValue);
	static void Log(...);
};
