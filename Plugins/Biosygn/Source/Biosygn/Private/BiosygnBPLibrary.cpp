// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Biosygn.h"
#include "BiosygnBPLibrary.h"

UBiosygnBPLibrary::UBiosygnBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString UBiosygnBPLibrary::Key;


bool UBiosygnBPLibrary::SetKey(FString userKey){
    UBiosygnBPLibrary::Key= userKey;
    return true;
}


bool UBiosygnBPLibrary::OpenSession(){
  return true;
}

bool UBiosygnBPLibrary::UploadData(){
    return true;
}


float UBiosygnBPLibrary::GetHeartRate(){
  return 0;
}
