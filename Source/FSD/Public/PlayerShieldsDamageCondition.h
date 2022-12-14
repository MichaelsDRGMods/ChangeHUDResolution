#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DamageCondition.h"
#include "PlayerShieldsDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlayerShieldsDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval ShieldPercentageRequired;
    
public:
    UPlayerShieldsDamageCondition();
};

