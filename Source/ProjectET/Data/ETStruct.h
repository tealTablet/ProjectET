// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include "ETEnum.h"
#include "ETStruct.generated.h"

USTRUCT(BlueprintType)
struct PROJECTET_API FETStruct
{
	UPROPERTY(BlueprintReadWrite) int32 Intger;
	UPROPERTY(BlueprintReadWrite) float Float;
	UPROPERTY(BlueprintReadWrite) FString String;
	UPROPERTY(BlueprintReadWrite) FText Text;
	UPROPERTY(BlueprintReadWrite) FName Name;
	UPROPERTY(BlueprintReadWrite) TArray<int32> ArrayIntger;
	UPROPERTY(BlueprintReadWrite) TArray<float> ArrayFloat;
	UPROPERTY(BlueprintReadWrite) TMap<int32,float> MapIF;
	UPROPERTY(BlueprintReadWrite) EETEnumClass Enum;
	UPROPERTY(BlueprintReadWrite,Meta=(Bitmask, BitmaskEnum ="EETEnumBitflags")) int32 EnumFlags;
	GENERATED_USTRUCT_BODY()
public:
	FETStruct() {}
};
