// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BoyAdventureUSFXGameMode.generated.h"

class AObstaculo;
class AObstaculoPared;
class AParedMetal;
class APlataforma;
class AComponentePlataforma;

UCLASS(minimalapi)
class ABoyAdventureUSFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABoyAdventureUSFXGameMode();

	virtual void BeginPlay() override;
	//virtual void Tick(float DeltaTime) override;

private:
	AObstaculoPared* Obstaculo;
	AParedMetal* ParedMetal01;
	AParedMetal* ParedMetal02;
	APlataforma* Plataforma01;

	FTimerHandle MovimientoComponentesPlataformaTimer;
	FTimerHandle EliminarComponentePlataformaTimer;


public:
	void MoverComponentePlataforma();
};





