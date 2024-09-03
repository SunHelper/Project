// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroAttributeSet.h"

UHeroAttributeSet::UHeroAttributeSet() {
	InitHP(100);
	InitMP(100);
	InitAttackSpeed(100);
	InitMoveSpeed(400);
	InitEXP(0);
	InitPickUpRange(256);
}
