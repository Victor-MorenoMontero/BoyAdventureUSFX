// Copyright Epic Games, Inc. All Rights Reserved.

#include "BoyAdventureUSFXGameMode.h"
#include "BoyAdventureUSFXCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Obstaculo.h"
#include "ObstaculoPared.h"
#include "ParedMetal.h"

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
	}
}