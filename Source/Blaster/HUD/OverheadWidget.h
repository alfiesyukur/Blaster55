// Copyright SF5Gaming, Inc.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadWidget.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class BLASTER_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:	
	virtual bool Initialize() override;
	virtual void NativeDestruct() override;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* DisplayText;

	void SetDisplayText(const FString& TextToDisplay) const;

	UFUNCTION(BlueprintCallable)
	void ShowPlayerNetRole(const APawn* InPawn) const;

protected:
	void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld);
	FDelegateHandle FDeOnLevelRemovedFromWorldHandle;
	
};
