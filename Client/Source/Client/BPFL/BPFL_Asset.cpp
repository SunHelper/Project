// Fill out your copyright notice in the Description page of Project Settings.

#include "BPFL_Asset.h"

UTexture2D* UBPFL_Asset::LoadTexture2D(const FString& Path) {
	return LoadObject<UTexture2D>(nullptr, *Path, nullptr, LOAD_None, nullptr);
}

UMaterial* UBPFL_Asset::LoadMaterial(const FString& Path) {
	return LoadObject<UMaterial>(nullptr, *Path, nullptr, LOAD_None, nullptr);
}

UStaticMesh* UBPFL_Asset::LoadStaticMesh(const FString& Path) {
	return LoadObject<UStaticMesh>(nullptr, *Path, nullptr, LOAD_None, nullptr);
}

USkeletalMesh* UBPFL_Asset::LoadSkeletalMesh(const FString& Path) {
	return LoadObject<USkeletalMesh>(nullptr, *Path, nullptr, LOAD_None, nullptr);
}

TSubclassOf<AActor> UBPFL_Asset::LoadActorClass(const FString& Path) {
	return LoadClass<AActor>(nullptr, *Path, nullptr, LOAD_None, nullptr);
}

TSubclassOf<UAnimInstance> UBPFL_Asset::LoadAnimClass(const FString& Path) {
	return LoadClass<UAnimInstance>(nullptr, *Path, nullptr, LOAD_None, nullptr);
}