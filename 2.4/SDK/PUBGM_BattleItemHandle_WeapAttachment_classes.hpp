#pragma once

// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C
// 0x0030 (0x0390 - 0x0360)
class UBattleItemHandle_WeapAttachment_C : public UBackpackWeaponAttachHandle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0004) (Transient, DuplicateTransient)
	class ASTExtraShootWeapon*                         Weapon;                                                   // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBackpackComponent*                          OwningBackpackComponent;                                  // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandle_MainWeapon_C*              CachedWeaponHandle;                                       // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FItemDefineID                               ReplacedDefineID;                                         // 0x0378(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C");
		return pStaticClass;
	}


	void ClearWeaponActor();
	void ReAutoEquip(class ASTExtraBaseCharacter* ACharacter, class UBattleItemHandleWeaponBase_Handle_C* Weapon);
	void RemoveParentAdditionData();
	void CanDisuseToBackpackWithoutSelf(const struct FItemDefineID& DefineID, bool* bCanDisuse);
	void CheckCanUseWithPackage(bool* bCanUse);
	void GetCanEquipWeapon(bool bCanSwap, class ASTExtraBaseCharacter* ACharater, bool bReplace, struct FBattleItemUseTarget* Target, bool* HasTarget, class UBattleItemHandle_MainWeapon_C** TargetWeaponHandle, class ASTExtraWeapon** WeaponActor);
	void GetItemBaseBySlot(TEnumAsByte<ESurviveWeaponPropSlot> Slot, class ASTExtraBaseCharacter* ACharacter, class UItemHandleBase** NewParam);
	void CheckTargetValid(class UItemHandleBase* ItemHandleBase, bool CanSwap, bool bReplace, struct FBattleItemUseTarget* Target, bool* HasTarget, class UBattleItemHandle_MainWeapon_C** TargetWeaponHandle, class ASTExtraWeapon** WeaponActor);
	bool CheckCanUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	void ReplaceAttach(class UBattleItemHandle_MainWeapon_C* TWeaponItemHandle);
	void CanSwap(class UBackpackWeaponAttachHandle* SpecificID, bool* Can);
	void FilterWeaponItemHandle(class UBattleItemHandleBase* InputItemHandle, bool IsPickupDirectlyEquip, struct FBattleItemUseTarget* Target, bool* HasTarget, class UBattleItemHandle_MainWeapon_C** TargetWeaponHandle, class ASTExtraWeapon** WeaponActor);
	struct FBattleItemData ExtractItemData();
	class UWorld* GetWorldInternal();
	void CreateWrapperOnGround(int Count);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	void ReturnWeaponAdditionalBulletsToBackpack(class ASTExtraShootWeapon** Weapon, int* BulletNum);
	void ExecuteUbergraph_BattleItemHandle_WeapAttachment(int EntryPoint);
};


}

