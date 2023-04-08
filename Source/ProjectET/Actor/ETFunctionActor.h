// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <GameFramework/Actor.h>
#include "ETFunctionActor.generated.h"

/**
* UFUNCTION에 대한 예제
*/
UCLASS()
class PROJECTET_API AETFunctionActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AETFunctionActor() {}

	/**
	* UFUNCTION([specifier...],[meta(key=value...)])
	* ReturnType FunctionName([Parameter...]);
	*/


	/** 블루프린트서버에서만 호출가능한 함수*/
	UFUNCTION(BlueprintAuthorityOnly)
	void CallBlueprintAuthorityOnly() {}
	/** 블루프린트에서 호출가능해진다.*/
	UFUNCTION(BlueprintCallable)
	void CallBlueprintCallable() {}
	/** 데디케이트 서버에서 사용불가*/
	UFUNCTION(BlueprintCosmetic)
	void CallBlueprintCosmetic() {}
	/** 블루프린트에서 접근자로 사용하는 함수
	* BlueprintPure, BlueprintCallable을 내포
	*/
	UFUNCTION(BlueprintGetter)
	int32 CallBlueprintGetter() { return 0; }
	/** 블루프린트에서 지정자로 사용하는 함수
	* BlueprintCallable을 내포
	*/
	UFUNCTION(BlueprintSetter)
	void CallBlueprintSetter() {}
	
	/***/
	UFUNCTION(BlueprintInternalUseOnly)
	void CallBlueprintInternalUseOnly() {}
	/** 블루프린트에서 구현해서 사용하는 함수
	* C++에서 구현하면 안된다.
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void CallBlueprintImplementableEvent();
	/** 블루프린트에서 재정의해서 사용할 수 있는 함수
	* C++에서 구현한 함수는 원래함수명에 '_Implementation'를 붙힌 뒤 구현한다.
	*/
	UFUNCTION(BlueprintNativeEvent)
	void CallBlueprintNativeEvent();
	void CallBlueprintNativeEvent_Implementation() {}
	/** 멤버의 변경없이 결과값을 뱉는 Const함수인셈*/
	UFUNCTION(BlueprintPure)
	int32 CallBlueprintPure() { return 0; }
	/**Server 나 Client를 같이 사용해야 적용됩니다.*/
	//UFUNCTION(Reliable, Client)
	//void CallReliable() {}
	/**Server 나 Client를 같이 사용해야 적용됩니다.*/
	//UFUNCTION(Reliable, Client)
	//void CallUnreliable() {}
	/***/
	UFUNCTION(Reliable, Client)
	void CallClient();
	void CallClient_Implementation() {}
	/***/
	UFUNCTION(Reliable, Server)
	void CallServer();
	void CallServer_Implementation() {}

	
};
