// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HexTranslator.generated.h"

/**
 * 
 */
UCLASS()
class SPRINGPLOUGH_API UHexTranslator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	/*十六进制转十进制*/
	UFUNCTION(BlueprintCallable)
	static void HexToDecimal(const FString& Zero, const FString& Ten,int32& Decimal);
};
