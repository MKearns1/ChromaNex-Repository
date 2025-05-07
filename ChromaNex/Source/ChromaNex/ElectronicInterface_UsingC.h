// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ElectronicInterface_UsingC.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UElectronicInterface_UsingC : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CHROMANEX_API IElectronicInterface_UsingC
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, Category= "Interact")
	void InteractC();

	UFUNCTION(BlueprintNativeEvent, Category = "Off")
	void OffC();
};
