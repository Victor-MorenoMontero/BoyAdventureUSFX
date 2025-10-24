// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma.h"
#include "ComponentePlataforma.h"
#include "Math//UnrealMathUtility.h"

// Sets default values
APlataforma::APlataforma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	posicionInicial = FVector(200.f, 100.f, 100.f);
	altoComponente = 20.f;
	anchoComponente = 100.f;
	profundidadComponente = 100.f;
	separacionComponentes = 50.f;

	mComponentesPorPiso = {
		{1,10},
		{2,6},
		{3,5},
		{4,6},
		{5,3} };
}

// Called when the game starts or when spawned
void APlataforma::BeginPlay()
{
	Super::BeginPlay();

	//generarPlataforma();
}

// Called every frame
void APlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlataforma::generarPlataforma()
{
	//Num() obtiene el número de elementos del TMap
	int numeroPisos = mComponentesPorPiso.Num();
	int numeroComponentesPorPiso = 0;

	for (int i = 0; i < numeroPisos; i++)
	{
		numeroComponentesPorPiso = mComponentesPorPiso[i + 1];
		for (int j = 0; j < numeroComponentesPorPiso; j++)
		{
			FVector posicionComponente = getPosicionInicial() + FVector(j * (anchoComponente + separacionComponentes), 0.f, i * (altoComponente + separacionComponentes));
		
			int llave = (i + 1) * 100 + j; //Llave generada en bae a su piso y posición
			AComponentePlataforma* nuevoComponente = GetWorld()->SpawnActor<AComponentePlataforma>(AComponentePlataforma::StaticClass(), posicionComponente, FRotator::ZeroRotator);
			if (nuevoComponente)
			{
				mComponentesPlataformaTiles.Add(llave, nuevoComponente);
			}
		}
	}
}

void APlataforma::destruirPlataforma()
{

}


void APlataforma::destruirComponentePlataforma(FVector posicion)
{

}

AComponentePlataforma* APlataforma::getComponentePlataforma(int _piso, int _numeroComponente)
{
	int llave = _piso * 100 + _numeroComponente;//Genera llave única

	if (mComponentesPlataformaTiles.Contains(llave))
	{
		return mComponentesPlataformaTiles[llave];
	}
	return nullptr;
}

AComponentePlataforma* APlataforma::getComponentePlataformaTiles(int32 piso, int32 componente)
{
	return nullptr;
}

void APlataforma::EliminarComponenteAleatorio()
{

}