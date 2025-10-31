// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComponentePlataforma.generated.h"

UCLASS()
class BOYADVENTUREUSFX_API AComponentePlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComponentePlataforma();

	bool bEnMovimiento;

	float desplazamientoPX;
	float desplazamientoNX;
	float desplazamientoPY;
	float desplazamientoNY;	
	float desplazamientoPZ;
	float desplazamientoNZ;

	float incrementoX;
	float incrementoY;
	float incrementoZ;
	FVector posicionInicial;
	
	FVector GetPosicionActual();
	void MoverseX();
	void MoverseY();
	void MoverseZ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* MallaComponentePlataforma;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
