// Fill out your copyright notice in the Description page of Project Settings.


#include "ParedMetal.h"


AParedMetal::AParedMetal()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>ObjetoMallaObstaculo(TEXT("StaticMesh'/Game/StarterContent/Imported_Meshes/Castle_wall_pCube1.Castle_wall_pCube1'"));

	if (ObjetoMallaObstaculo.Succeeded())
	{
		MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculo.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface>MaterialParedAsset(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));

	if (MaterialParedAsset.Succeeded())
	{
		MallaObstaculo->SetMaterial(0, MaterialParedAsset.Object);
		MallaObstaculo->SetWorldScale3D(FVector(5.0f,10.0f, 10.0f));
	}
	DesplazamientoPuerta = 0;
	LimiteDesplazamientoPuerta = 150.f;
	Activo = true;
	IncrementoDesplazamiento = 0.8f;
}

void AParedMetal :: Activarse() 
{
	if (DesplazamientoPuerta >= LimiteDesplazamientoPuerta)
	{
		IncrementoDesplazamiento = -FMath::Abs(IncrementoDesplazamiento);
	}
	else if (DesplazamientoPuerta <= 0.0f)
	{
		IncrementoDesplazamiento = FMath::Abs(IncrementoDesplazamiento);
	}

	if (Activo)
	{
		FVector RotacionActual = GetActorRotation().Euler();
		FVector PosicionActual = GetActorLocation();
		float NuevoY = PosicionActual.Y + IncrementoDesplazamiento;
		DesplazamientoPuerta += IncrementoDesplazamiento;
		FVector NuevaPosicion = FVector(PosicionActual.X, NuevoY, PosicionActual.Z);
		SetActorLocation(NuevaPosicion);
		SetActorRotation(FRotator(RotacionActual.X, RotacionActual.Y, RotacionActual.Z));
	}
}

void AParedMetal::Desactivarse()
{
	Activo = false;
}

void AParedMetal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Activarse();
}

