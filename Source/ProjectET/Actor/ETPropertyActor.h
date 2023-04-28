// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <GameFramework/Actor.h>
#include "ETPropertyActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTestProepertyDelegate);

UCLASS()
class PROJECTET_API AETPropertyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AETPropertyActor() {}

	/**
	* UPROPERTY([specifier, ...], [meta(key = value ...)])
	* Type VariableName;
	*/

	/***/
	UPROPERTY(EditAnywhere)
	int32 IntEditAnywhere;
	/** 블루프린트에디터에서만 값을 변경가능*/
	UPROPERTY(EditDefaultsOnly)
	int32 IntEditDefaultsOnly;
	/** 월드에 배치된 오브젝트의 값만 변경가능*/
	UPROPERTY(EditInstanceOnly)
	int32 IntEditInstanceOnly;

	/***/
	UPROPERTY(VisibleAnywhere)
	int32 IntVisibleAnywhere;
	/***/
	UPROPERTY(VisibleDefaultsOnly)
	int32 IntVisibleDefaultsOnly;
	/***/
	UPROPERTY(VisibleInstanceOnly)
	int32 IntVisibleInstanceOnly;

	/** 포인터 클래스 변수는 Visible로 해야 클래스의 속성들을 수정가능
	* Edit로 하면 클래스 자체를 수정가능해짐
	*/

	/** 다이나믹 멀티캐스트 델리게이트 전용
	* 블루프린트에서 할당가능
	*/
	UPROPERTY(BlueprintAssignable)
	FTestProepertyDelegate OnBlueprintAssignable;
	/** 다이나믹 멀티캐스트 델리게이트 전용
	* 블루프린트에서 호출가능
	*/
	UPROPERTY(BlueprintCallable)
	FTestProepertyDelegate OnBlueprintCallable;

	/** 블루프린트에서 읽기가능*/
	UPROPERTY(BlueprintReadOnly)
	int32 IntBlueprintReadOnly;
	/** 블루프린트에서 수정가능*/
	UPROPERTY(BlueprintReadWrite)
	int32 IntBlueprintReadWrite;

	/** 지정하지않으면 기본적으로 BlueprintReadOnly를 내포*/
	UPROPERTY(BlueprintGetter = GetInt)
	int32 IntBlueprintGetter;
	UFUNCTION(BlueprintPure)
	int32 GetInt() { return 0; }
	/** 지정하지않으면 기본적으로 BlueprintReadOnly를 내포*/
	UPROPERTY(BlueprintSetter= SetInt)
	int32 IntBlueprintSetter;
	UFUNCTION(BlueprintCallable)
	void SetInt(int32 Int) {}


	/** 일반*/
	UPROPERTY(SimpleDisplay)
	int32 IntSimpleDisplay;
	/***/
	/** 에디터상에서 접기 가능*/
	UPROPERTY(AdvancedDisplay)
	int32 IntAdvancedDisplay;
	/***/
	UPROPERTY(AssetRegistrySearchable)
	int32 IntAssetRegistrySearchable;
	/***/
	UPROPERTY(EditFixedSize)
	int32 IntEditFixedSize;
	/** 다이나믹 멀티캐스트 델리게이트 전용*/
	UPROPERTY(BlueprintAuthorityOnly)
	FTestProepertyDelegate OnBlueprintAuthorityOnly;
	/***/
	UPROPERTY(DuplicateTransient)
	int32 IntDuplicateTransient;


	//private 이어도 접근가능
	//meta = (AllowPrivateAccess = "true")
	//최소 최대치 지정
	//meta = (UIMin = 0, UIMAX = 10)
};
