// Fill out your copyright notice in the Description page of Project Settings.


#include "UsanAttributeSet.h"
#include "Net/UnrealNetwork.h"

UUsanAttributeSet::UUsanAttributeSet()
{
}

void UUsanAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(UUsanAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUsanAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
}

void UUsanAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUsanAttributeSet, Health, OldHealth);
}

void UUsanAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUsanAttributeSet, Stamina, OldStamina);
}
