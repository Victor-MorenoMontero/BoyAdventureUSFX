// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.generated.h"

class AComponentePlataforma;

UCLASS()
class BOYADVENTUREUSFX_API APlataforma : public AActor
{
	GENERATED_BODY()

public:
	// Sets default valueComponentePlataformas for this actor's properties
	APlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float altoEntrePisos;
	float altoComponente;
	float anchoComponente;
	float profundidadComponente;
	float separacionComponentes;
	FVector posicionInicial;
	TMap<int32, int32> mComponentesPorPiso;
	TMap<int32, AComponentePlataforma*> mComponentesPlataformaTiles;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void setPosicionInicial(FVector _posicionInicial) { posicionInicial = _posicionInicial; };
	FVector getPosicionInicial() { return posicionInicial; };

	void setAltoEntrePisos(float _altoEntrePisos) {altoEntrePisos = _altoEntrePisos; };
	float getAltoEntrePisos() const { return altoEntrePisos; };

	void setAltoComponente(float _altoComponente) { altoComponente = _altoComponente; };
	float getAltoComponente() { return altoComponente; };

	void setAnchoComponente(float _anchoComponente) { anchoComponente = _anchoComponente; };
	float getAnchoComponente() { return anchoComponente; };

	void setProfundidadComponente(float _profundidadComponente) { profundidadComponente = _profundidadComponente; };
	float getProfundidadComponente() const { return profundidadComponente; };

	void setSeparacionComponentes(float _separacionComponentes) { separacionComponentes = _separacionComponentes; };
	float getSeparacionComponentes() { return separacionComponentes; };

	void generarPlataforma();
	void destruirPlataforma();
	void destruirComponentePlataforma(FVector posicion);
	void MoverComponenteAleatorio();
	void EliminarComponenteAleatorio();

	AComponentePlataforma* getComponentePlataforma(int _piso, int _numeroComponente);
	AComponentePlataforma* getComponentePlataformaTiles(int32 piso, int32 componente);
};
	
