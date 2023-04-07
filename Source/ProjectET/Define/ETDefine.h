// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

/** Unreal Engine 로우레벨 헤더*/
//#include <CoreFwd.h>//전방선언만
#include <CoreMinimal.h>//최소화
//#include <Core.h>//모든 헤더(사용하지 말 것)

//C# 리플레션, 가비지컬렉터, 프로퍼티 등
//#include <CoreUObject.h>

/** Unreal Engine 전방선언 헤더*/
//#include <EngineFWD.h>

/** Unreal Engine 핵심 헤더만 */
//#include <EngineMinimal.h>

/** Unreal Engine 모든 헤더 */
//#include <Engine.h>(사용하지 말 것)
//#include <UnrealEd.h>(사용하지 말 것)

#pragma region MACRO
//빨간 에러 표시줄 거슬려서 수정 
#undef DECLARE_LOG_CATEGORY_EXTERN
#define DECLARE_LOG_CATEGORY_EXTERN(CategoryName, DefaultVerbosity, CompileTimeVerbosity) \
		struct FLogCategory##CategoryName : public FLogCategory<ELogVerbosity::DefaultVerbosity, ELogVerbosity::CompileTimeVerbosity> \
		{ \
			FORCEINLINE FLogCategory##CategoryName() : FLogCategory(TEXT(#CategoryName)) {} \
		}; \
		extern FLogCategory##CategoryName CategoryName;

//화면 출력용 디버깅 로그
#define DISPLAY_LOG(fmt,...) \
		if(GEngine) GEngine->AddOnScreenDebugMessage (-1, 5.f, FColor::Red, FString::Printf(TEXT(fmt), __VA_ARGS__));

/** 디버그용 전역 로그구조체 선언
* ProjectET.cpp파일에 선언됨
*/
DECLARE_LOG_CATEGORY_EXTERN(ET_TEST, Log, All)
DECLARE_LOG_CATEGORY_EXTERN(ET_MSG, Log, All)
/** 귀찮은 테스트 로그 이걸로*/
#define PRINT_LOG(Str)		UE_LOG(ET_TEST, Warning, TEXT(Str))
#define PRINT_FUNCTION()	UE_LOG(ET_TEST, Warning, TEXT("%s"), __FUNCTIONW__)

#pragma endregion
#pragma region TypeDefine

#pragma endregion
#pragma region Struct

#pragma endregion
#pragma region EnumClass_Enum
/** Enum Table Auto Generated. */
//#include "ETEnumTable.h"

#pragma endregion
#pragma region ForwardDeclaration

#pragma endregion