// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BoyAdventureUSFXGameMode.generated.h"

class AObstaculo;
class AObstaculoPared;
class AParedMetal;

UCLASS(minimalapi)
class ABoyAdventureUSFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABoyAdventureUSFXGameMode();

	virtual void BeginPlay() override;
private:
	AObstaculoPared* Obstaculo;
	AParedMetal* ParedMetal01;
	AParedMetal* ParedMetal02;
};





