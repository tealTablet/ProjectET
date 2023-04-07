// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <Kismet/BlueprintFunctionLibrary.h>
#include <ETBlueprintFunctionLibrary.generated.h>

/**
 * 블루프린트에서 사용할 전역함수용 클래스
 * 이 클래스는 블루프린터에 노출된 모든 함수 라이브러리 클래스입니다. 메서드는 정적이어야 한다.
 */
UCLASS()
class PROJECTET_API UETBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

};
