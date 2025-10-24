// ?
// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoPared.h"

AObstaculoPared::AObstaculoPared()
{
	PrimaryActorTick.bCanEverTick = true;

	Estilo = "Pared no definida";
	Material = "Material no definido";
	Activo = true;
	AbiertoCompletamente = false;
	DesplazamientoPuerta = 0.0f;
	LimiteDesplazamientoPuerta = 500.0f;

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Gravel.M_Ground_Gravel'"));

	if (MaterialAsset.Succeeded())
	{
		MallaObstaculo->SetMaterial(0, MaterialAsset.Object);
	}
}

void AObstaculoPared::Activarse()
{
	FVector PosicionActual = GetActorLocation();
	if (PosicionActual.X >= LimiteDesplazamientoPuerta)
	{
		AbiertoCompletamente = true;
		Activo = false; //Desactiva el obst
		UE_LOG(LogTemp, Warning, TEXT("Obstáculo abierto completamente"));

	}
	else if (Activo)
	{
		
		float NuevoX = PosicionActual.X + 0.8f;
		FVector NuevaPosicion = FVector(NuevoX, PosicionActual.Y, PosicionActual.Z);
		SetActorLocation(NuevaPosicion);
	}
}

void AObstaculoPared::Desactivarse()
{
	Activo = false;
}

void AObstaculoPared::BeginPlay()
{
	Super::BeginPlay();
}

void AObstaculoPared::Tick(float Deltatime)
{
	Super::Tick(Deltatime);
		Activarse();

}

