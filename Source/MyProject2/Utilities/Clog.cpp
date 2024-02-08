// Copyright Epic Games, Inc. All Rights Reserved.

#include "Utilites/CLog.h"

void Clog::Log(int32 InValue)
{
	UE_LOG(LogTemp, Warning, TExt("The integer value is : %d"), InValue);

}
void Clog::Log(float InValue)
{
	UE_LOG(LogTemp, Warning, TExt("The float value is : %f"), InValue);

}
