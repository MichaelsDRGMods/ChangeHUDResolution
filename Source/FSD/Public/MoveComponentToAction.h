#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TickableActionBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "MoveComponentToAction.generated.h"

class UMoveComponentToAction;
class USceneComponent;
class UObject;

UCLASS(Blueprintable)
class UMoveComponentToAction : public UTickableActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedDelegate, USceneComponent*, Component);
    
protected:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedDelegate Completed;
    
public:
    UMoveComponentToAction();
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UMoveComponentToAction* EaseComponentTo(UObject* WorldContext, USceneComponent* InComponent, FTransform InEndTransform, TEnumAsByte<EEasingFunc::Type> InEasingMode, bool InWorldSpace, float InDuration);
    
};

