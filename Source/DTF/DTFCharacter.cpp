// Fill out your copyright notice in the Description page of Project Settings.

#include "DTF.h"
#include "DTFCharacter.h"


// Sets default values
ADTFCharacter::ADTFCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADTFCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADTFCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ADTFCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

