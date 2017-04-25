// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include <map>
#include "BioSyn.generated.h"



/**
 *
 */
UCLASS()
class MYPROJECT_API UBioSyn : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()
    UFUNCTION(BlueprintCallable, BlueprintCallable=true, Category="BioSyn", meta=(Keywords = "control", CompactNodeTitle = "BioSyn Key"))
        static bool SetKey(FString userKey);
    UFUNCTION(BlueprintCallable, Category="BioSyn", meta=(Keywords = "control", CompactNodeTitle = "BioSyn Make Sess"))
        static bool OpenSession();
    UFUNCTION(BlueprintCallable, Category="BioSyn", meta=(Keywords = "control", CompactNodeTitle = "BioSyn Upload"))
        static bool UploadData();
    UFUNCTION(BlueprintPure, Category="BioSyn", meta=(Keywords = "control", CompactNodeTitle = "BioSyn Get HeartRate"))
        static float GetHeartRate();

    static FString Key;






};
