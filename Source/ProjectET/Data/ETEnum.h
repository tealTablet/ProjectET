// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EETEnumClass : uint8
{
	None, UMETA(DisplayName ="ChangeName")
	One,
};

UENUM(BlueprintType)
enum EETEnum
{
	None,
	One,
};

//UPROPERY(EditAnywhere, Meta = (Bitmask))
//int32 EnumFlags; //비트마스크형식으로 

//커스터마이징한 플래그 이름을 만들려면
UENUM(BlueprintType, Meta = (Bitflags))
enum class EETEnumBitflag : uint8
{
	None,
	One,
};
//UPROPERTY(EditAnywhere,Meta=(Bitmask, BitmaskEnum ="EETEnumBitflags"))
//int32 EnumFlags;