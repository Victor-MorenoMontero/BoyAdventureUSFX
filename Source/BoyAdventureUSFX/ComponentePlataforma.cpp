// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentePlataforma.h"

// Sets default values
AComponentePlataforma::AComponentePlataforma()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
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
}

// Called when the game starts or when spawned
void AComponentePlataforma::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComponentePlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

