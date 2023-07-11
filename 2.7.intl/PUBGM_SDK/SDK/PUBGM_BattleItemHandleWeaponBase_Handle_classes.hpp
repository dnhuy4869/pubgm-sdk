#pragma once

// PUBG MOBILE 2.7.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C
// 0x0081 (0x0581 - 0x0500)
class UBattleItemHandleWeaponBase_Handle_C : public UBackpackWeaponHandle
{
public:
	class ASTExtraPlayerController*                    OwningPlayerController;                                   // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBackpackComponent*                          OwningBackpackComponent;                                  // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	struct FTransform                                  WrapperPutdownTrans;                                      // 0x0510(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SourceWrapperTrans;                                       // 0x0540(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABaseAIController*                           OwningAIController;                                       // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	struct FName                                       TargetLogicSocket;                                        // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetAutoUse;                                            // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C");
		return pStaticClass;
	}


	bool CanDisuseOldWeapon(bool* bDisuseResult, EBattleItemUseReason* InReason);
	void GetBulletNumSaveToWrapper(int* Num);
	void ConditionalAddAdditionalData(TArray<struct FBattleItemAdditionalData>* InAdditionalData);
	void ConditionalAddAdditionalDataToWrapper(class APickUpWrapperActor* PickUpWrapper);
	void GetWeaponClassFromTable(bool* found, class UClass** WeaponClass);
	void EnableWeaponAttachmentBindDropToWeaponWrapper(bool* Out);
	void ParseAdditionalData(const struct FBattleItemPickupInfo& PickupInfo);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc, const struct FItemDefineID& InDefineID, class APickUpWrapperActor** TargetWrapper);
	class UWorld* GetWorldInternal();
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	struct FBattleItemData ExtractItemData();
};


}

