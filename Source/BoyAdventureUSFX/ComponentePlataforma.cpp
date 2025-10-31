// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentePlataforma.h"

AComponentePlataforma::AComponentePlataforma()
{
	PrimaryActorTick.bCanEverTick = true;

	MallaComponentePlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaComponentePlataforma"));
	RootComponent = MallaComponentePlataforma;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaPlataforma(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (MallaPlataforma.Succeeded())
	{
		MallaComponentePlataforma->SetStaticMesh(MallaPlataforma.Object);
		MallaComponentePlataforma->SetWorldScale3D(FVector(2.0f, 2.f, 0.2f));
	}
	static	ConstructorHelpers::FObjectFinder<UMaterialInterface>MaterialPlataformaAsset(TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Rough.M_CobbleStone_Rough'"));
	if (MaterialPlataformaAsset.Succeeded())
	{
		MallaComponentePlataforma->SetMaterial(0, MaterialPlataformaAsset.Object);
	}

	bEnMovimiento = false;

	desplazamientoPX = 100.0f;
	desplazamientoNX = 100.0f;	
	desplazamientoPY = 100.0f;
	desplazamientoNY = 100.0f;
	desplazamientoPZ = 100.0f;
	desplazamientoNZ = 100.0f;

	incrementoX = 1.0f;
	incrementoY = 1.0f;
	incrementoZ = 1.0f;
}

void AComponentePlataforma::BeginPlay()
{
	Super::BeginPlay();
	posicionInicial = GetActorLocation();
}

void AComponentePlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverseX();
	MoverseY();
	MoverseZ();
}

//FVector AComponentePlataforma::GetPosicionActual()
//{
//	return GetActorLocation();
//}

void AComponentePlataforma::MoverseX() 
{
	FVector posicionActual = GetActorLocation();
	if (bEnMovimiento)
	{
		if (posicionActual.X >= (posicionInicial.X + desplazamientoPX))
		{
			incrementoX = -FMath::Abs(incrementoX);
		}
		else if (posicionActual.X <= (posicionInicial.X - desplazamientoNX))
		{
			incrementoX = FMath::Abs(incrementoX);
		}
		posicionActual.X += incrementoX;
		SetActorLocation(posicionActual);
	}
}

void AComponentePlataforma::MoverseY()
{
	FVector posicionActual = GetActorLocation();
	if (bEnMovimiento)
	{
		if (posicionActual.Y >= (posicionInicial.Y + desplazamientoPY))
		{
			incrementoY = -FMath::Abs(incrementoY);
		}
		else if (posicionActual.Y <= (posicionInicial.Y - desplazamientoNY))
		{
			incrementoY = FMath::Abs(incrementoY);
		}
		posicionActual.Y += incrementoY;
		SetActorLocation(posicionActual);
	}
}

void AComponentePlataforma::MoverseZ()
{
	FVector posicionActual = GetActorLocation();
	if (bEnMovimiento)
	{
		if (posicionActual.Z >= (posicionInicial.Z + desplazamientoPZ))
		{
			incrementoZ = -FMath::Abs(incrementoZ);
		}
		else if (posicionActual.Z <= (posicionInicial.Z - desplazamientoNZ))
		{
			incrementoZ = FMath::Abs(incrementoZ);
		}
		posicionActual.Z += incrementoZ;
		SetActorLocation(posicionActual);
	}
}

