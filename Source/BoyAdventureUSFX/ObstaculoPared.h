// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoPared.generated.h"

/**
 * 
 */
UCLASS()
class BOYADVENTUREUSFX_API AObstaculoPared : public AObstaculo
{
	GENERATED_BODY()
	
protected:
	bool Activo;
	bool AbiertoCompletamente;
	float DesplazamientoPuerta;
	float LimiteDesplazamientoPuerta;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	AObstaculoPared();

	FString Estilo;
	FString Material;

	virtual void Activarse() override;
	virtual void Desactivarse() override;

};
