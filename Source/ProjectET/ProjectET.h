// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Define/ETDefine.h"//CoreMinimal.h 포함

/** 이 게임 모듈의 헤더파일이 아닌 경우(엔진, 플러그인 헤더) < > 시스템경로 괄호로 헤더를 감싼다.*/
/** 헤더파일의 경우 CoreMinimal.h, 매개변수.h, 상속클래스.h를 차례대로 포함한후, 게임 모듈의 헤더를 포함. 마지막은 자신의 .generated.h (UCLASS, USTRUCT의 경우)*/
/** 나머지는 전방선언*/

/** CPP 파일의 경우 자신의 H를 제일 먼저 포함한후 구현하기 위한 헤더파일 포함*/


/*주로 사용하는 엔진 헤더들
#include <CoreMinimal.h>//
#include <UObject/NoExportTypes.h>//UObject
#include <Templates/SubclassOf.h>//TSubclassOf<T>

#include <Engine/GameInstance.h>//GameInstance->UObject

#include <GameFramework/Actor.h>//Actor->UObject
//#include <GameFramework/Info.h>//GameMode, GameState
#include <GameFramework/GameModeBase.h>
#include <GameFramework/GameMode.h>
#include <GameFramework/GameStateBase.h>
#include <GameFramework/HUD.h>//Actor

#include <GameFramework/Controller.h>
#include <GameFramework/PlayerController.h>
#include <GameFramework/PlayerState.h>
#include <GameFramework/Pawn.h>
#include <GameFramework/Character.h>



#include <Camera/CameraActor.h>

#include <InputActionValue.h>//FInputActionValue

#include <Components/>
#include <Kismet/GameplayStatics.h>
//
#include <UObject/ObjectMacros.h>
#include <UObject/ScriptsMacros.h>

*/

/** 히스토리
2023.03.30: 초기 작성일

...
*/
