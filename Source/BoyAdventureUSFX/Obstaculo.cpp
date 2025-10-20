// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

// Sets default values
AObstaculo::AObstaculo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MallaObstaculo;
	MallaObstaculo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>ObjetoMallaObstaculo(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if(ObjetoMallaObstaculo.Succeeded())
	{
		MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculo.Object);
	}
	/*
	void AObstaculo::Activarse()
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("El obstáculo se ha activado, pero no hace nada"));
	}
	void AObstaculo::Desactivarse()
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("El obstaculo se ha desactivado, pero no hace nada"));
	}
	*/

}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

