// Copyright Epic Games, Inc. All Rights Reserved.

#include "BoyAdventureUSFXGameMode.h"
#include "BoyAdventureUSFXCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Obstaculo.h"
#include "ObstaculoPared.h"
#include "ParedMetal.h"
#include "Plataforma.h"
#include "ComponentePlataforma.h"

ABoyAdventureUSFXGameMode::ABoyAdventureUSFXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABoyAdventureUSFXGameMode::BeginPlay()
{
	UWorld* Mundo = GetWorld();
	if (Mundo)
	{
		FVector Ubicacion(0.0f, 0.0f, 400.0f);
		FRotator Rotacion(0.0f, 0.0f, 0.0f);
		FActorSpawnParameters ParametrosSpawn;
		ParametrosSpawn.Owner = this;
		ParametrosSpawn.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		Obstaculo = Mundo->SpawnActor<AObstaculoPared>(AObstaculoPared::StaticClass(), Ubicacion, Rotacion, ParametrosSpawn);
		if(Obstaculo)
		{
			UE_LOG(LogTemp, Warning, TEXT("Obstaculo creado exitosamente"));
		}


		FVector Ubicacion01(-100.0f, -300.0f, 200.0f);
		FRotator Rotacion01(0.f, 0.f, 0.f);
		ParedMetal01 = Mundo->SpawnActor<AParedMetal>(AParedMetal::StaticClass(), Ubicacion01, Rotacion01);

		FVector Ubicacion02(-100.0f, 1200.0f, 200.0f);
		FRotator Rotacion02(0.f, 0.f, 0.f);
		ParedMetal02 = Mundo->SpawnActor<AParedMetal>(AParedMetal::StaticClass(), Ubicacion02, Rotacion02);

		Plataforma01 = Mundo->SpawnActor<APlataforma>(APlataforma::StaticClass());
		if (Plataforma01)
		{
			//Plataforma01->setAltoEntrePisos(100.f);
			Plataforma01->setAltoComponente(70.f);
			Plataforma01->setAnchoComponente(200.f);
			//Plataforma01->setProfundidadComponente(100.f);
			Plataforma01->setSeparacionComponentes(150.f);
			Plataforma01->setPosicionInicial(FVector(200.f, -300.f, 250.f));
			Plataforma01->generarPlataforma();
		}
	}

	GetWorld()->GetTimerManager().SetTimer(
		MovimientoComponentesPlataformaTimer,
		this,
		&ABoyAdventureUSFXGameMode::MoverComponentePlataforma,
		4.0f,
		true
	);
}

void ABoyAdventureUSFXGameMode::MoverComponentePlataforma()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Moviendo componente plataforma"));
	if (Plataforma01)
	{
		Plataforma01->MoverComponenteAleatorio();
	}
}
