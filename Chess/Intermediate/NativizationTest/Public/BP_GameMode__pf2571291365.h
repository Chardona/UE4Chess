#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
class ABP_ChessPiece_C__pf3645775807;
class ABP_Board_C__pf2614727661;
class ABP_Player_C__pf2571291365;
class ABP_PlayerController_C__pf2571291365;
class USceneComponent;
#include "BP_GameMode__pf2571291365.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Chess/Blueprints/BP_GameMode.BP_GameMode_C", OverrideNativeName="BP_GameMode_C"))
class ABP_GameMode_C__pf2571291365 : public AGameModeBase
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Controller Ref", Category="References", MultiLine="true", OverrideNativeName="PlayerControllerRef"))
	ABP_PlayerController_C__pf2571291365* bpv__PlayerControllerRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Ref", Category="References", MultiLine="true", OverrideNativeName="PlayerRef"))
	ABP_Player_C__pf2571291365* bpv__PlayerRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Board Ref", Category="References", MultiLine="true", OverrideNativeName="BoardRef"))
	ABP_Board_C__pf2614727661* bpv__BoardRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chess Pieces Ref", Category="References", MultiLine="true", OverrideNativeName="ChessPiecesRef"))
	TArray<ABP_ChessPiece_C__pf3645775807*> bpv__ChessPiecesRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selected Chess Ref", Category="References", MultiLine="true", OverrideNativeName="SelectedChessRef"))
	ABP_ChessPiece_C__pf3645775807* bpv__SelectedChessRef__pf;
	ABP_GameMode_C__pf2571291365(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category="Setup", OverrideNativeName="Initialize"))
	virtual void bpf__Initialize__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Setup", OverrideNativeName="SetPlayerControllerRef"))
	virtual void bpf__SetPlayerControllerRef__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Setup", OverrideNativeName="SetPlayerRef"))
	virtual void bpf__SetPlayerRef__pf();
public:
};
