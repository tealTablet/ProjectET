// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ETStruct.generated.h"


UENUM(BlueprintType)
enum class EExampleEnum :uint8
{
	None,
	Test
};

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
	UPROPERTY(BlueprintReadWrite) EExampleEnum Enum;


	GENERATED_USTRUCT_BODY()
public:
	FETStruct() {}
};
