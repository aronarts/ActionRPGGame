// Fill out your copyright notice in the Description page of Project Settings.

#include "GameAbilities.h"
#include "GAAbilitiesComponent.h"
#include "IGAAbilities.h"
#include "GASAnimNotifyBase.h"




void UGASAnimNotifyBase::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	IIGAAbilities* IAbilities = Cast<IIGAAbilities>(MeshComp->GetOwner());
	if (!IAbilities)
		return;

	UGAAbilitiesComponent* Comp = IAbilities->GetAbilityComp();
}