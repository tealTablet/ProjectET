// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include "ETEnum.h"
#include "ETStruct.generated.h"

/**
* BlueprintType 이 클래스를 블루프린트에서 변수로 사용 가능한 유형으로 노출시킵니다.
* Blueprintable 이 클래스 가지고 블루프린트를 만들 수 있는 클래스로 노출시킵니다.
* 이 키워드는 서브클래스에 상속됩니다
*/
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
