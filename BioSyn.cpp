// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "BioSyn.h"
#include <math.h>       /* sin */
#include <sstream>


FString UBioSyn::Key;



bool UBioSyn::SetKey(FString userKey){
    UBioSyn::Key= userKey;
    return true;
}


bool UBioSyn::OpenSession(){
  return true;
}

bool UBioSyn::UploadData(){
    return true;
}
float UBioSyn::GetHeartRate(){

    float realtimeSeconds =     FDateTime::Now().GetSecond();
    return 95.0+(sin((realtimeSeconds*PI)/300.0)*45.0);
}
