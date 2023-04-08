// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <UObject/NoExportTypes.h>
#include "ETObject.generated.h"

/**
 * UObject란 메모리 관리 받는 클래스입니다.
 * CDO(Class Default Object)
 * Refection
 * Gabage Collection
 * Serialization
 * Delegate
 * Replication
 * Editor Integration
 */
UCLASS()
class PROJECTET_API UETObject : public UObject
{
	GENERATED_BODY()

public:
	/** 일반적인 C++ 생성자: 프로그램 실행시에 CDO(Class Default Object)를 생성하기 위해 단한번 호출됩니다.
	* 이후에는 팩토리 메서드로 생성되기 때문에 호출되지 않습니다.
	*/
	UETObject();
	/** 멤버속성들을 초기화한 후에 호출됩니다.*/
	virtual void PostInitProperties() override;

	/** CDO로부터 초기화된 경우 호출됩니다.*/
	virtual void PostReinitProperties() override;

	/** 개체를 파괴하기 전에 호출됩니다. 이것은 객체를 파괴하기로 결정하는 즉시 호출되어 객체가 작업을 시작할 수 있도록 합니다. */
	virtual void BeginDestroy() override;

	/** 개체 파괴를 완료하기 위해 호출됩니다. UObject::Finish Destroy가 호출된 후에는 오브젝트의 메모리에 더 이상 액세스할 수 없습니다. */
	virtual void FinishDestroy() override;
};
