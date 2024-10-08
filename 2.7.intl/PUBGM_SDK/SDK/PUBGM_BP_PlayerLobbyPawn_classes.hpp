#pragma once

// PUBG MOBILE 2.7.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C
// 0x01AD (0x097D - 0x07D0)
class ABP_PlayerLobbyPawn_C : public ASTExtraLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0004) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x07D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_LobbyWeaponManager_C*                    BP_LobbyWeaponManager;                                    // 0x07D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULobbyPlayEmoteComponent_BP_C*               LobbyPlayEmoteComponent_BP;                               // 0x07DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULobbyWeaponAnimationComponent_C*            LobbyWeaponAnimationComponent;                            // 0x07E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSkeletalMesh;                                       // 0x07E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAvatarComp2_BP_C*                  CharacterAvatarComp2_BP;                                  // 0x07E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAELobbyCharAnimListComp*                    AELobbyCharAnimListComp;                                  // 0x07EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Time_DFD4E0A94A64AF2CC7AD9DB7F31CA12E;         // 0x07F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_DFD4E0A94A64AF2CC7AD9DB7F31CA12E;   // 0x07F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x07F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                headid;                                                   // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               press;                                                    // 0x0804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0805(0x0003) MISSED OFFSET
	float                                              LocationX;                                                // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	int                                                LobbyPosition;                                            // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              curEquipingWeapon;                                        // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<int, class UBackpackEmoteHandle*>             EmoteItemIDToHandleMap;                                   // 0x0818(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerKey;                                                // 0x0854(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HeadIsVisible;                                            // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRotate;                                                // 0x0861(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0862(0x0002) MISSED OFFSET
	int                                                LuaID;                                                    // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayAction;                                             // 0x0868(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStopAction;                                             // 0x0874(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeEquipment;                                        // 0x0880(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBackpackEmoteHandle*                        CurEmoteHandle;                                           // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEmoteLooping;                                          // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0891(0x0003) MISSED OFFSET
	int                                                CurrentActionID;                                          // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChangingHead;                                           // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0899(0x0003) MISSED OFFSET
	int                                                PlayOnChangingHeadAcionID;                                // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurPlayEmoteId;                                           // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingAction;                                          // 0x08A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	float                                              RotateTime;                                               // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetRotation;                                           // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartRotateFlag;                                          // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x08B1(0x0003) MISSED OFFSET
	float                                              ClothAnimDyAlpha;                                         // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurClothAnimDyAlpha;                                      // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClothAnimDyAlphaDiff;                                     // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMVPMotion;                                              // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x08C1(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnchangeGender;                                           // 0x08C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeWeapon;                                           // 0x08D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bEquipingSkateAircraft;                                   // 0x08DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isAutoTest;                                               // 0x08DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x08DE(0x0002) MISSED OFFSET
	struct FVector                                     LocationBeforeEmote;                                      // 0x08E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                AvatarLevel;                                              // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Inten;                                                    // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEquipClothStateChange;                                  // 0x08F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               ForceUseDefaultIdle;                                      // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0901(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetForceUseDefaultIdle;                                 // 0x0904(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<int, int>                                     DynamicMatClothMap;                                       // 0x0910(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              WindSpeed_Editor;                                         // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindStrength_Editor;                                      // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindRadius_Editor;                                        // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WindSpeed;                                                // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccumelateWindTime;                                       // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAvatarComponentAllMeshLoaded;                           // 0x0960(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSceneType2Change;                                       // 0x096C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                SceneType2;                                               // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedLookAtCam;                                            // 0x097C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C");
		return pStaticClass;
	}


	void SetCompRotate(class USceneComponent* RotateComp, float Rotate);
	void SetAddCharacterWeaponAnimListHandle(TArray<struct FLobbyCharacterWeaponAnimData>* addAnimData, bool* Suc);
	void CharEquipWeaponPendant(int WeaponId, EWeaponPendantSocketType PendantSocketType);
	void WeaponAllAssetLoadFinish();
	void CharUnEquipWeaponByResId(int resID, const struct FName& SocketName);
	void CharUnEquipExtraWeapon();
	void SetForceUseDefaultIdle(bool force);
	void UpdateClothInten(float leten);
	void UpdateClothMatParam(float RotateSpeed);
	void StopActionCamera();
	void RotateOnTickInternal();
	void GetCurrentActionID(int* ActionID);
	void SetAvatarLevel(int Level);
	void OnAvatarAllMeshLoaded();
	void TryRotateAvatar();
	void SetAvatarVisibleForEmote(bool Visible);
	void RequestWeaponDIYData(const struct FString& InPlayerUID, int WeaponAvatarID, int InDIYPlanID);
	void SetIsMVPMotion(bool isMVPMotion);
	void SyncWeaponMontage();
	void InitDefaultAvatarByResID(int AGender, int Head, int Hair);
	void SetClothAnimDyAlphaInst(float Alpha);
	void SetClothAnimDyAlphaGrad(float Alpha);
	void SetClothAnimDyAlpha(float Alpha);
	void RotateOnTick(float RotateTime, float TargetRotation);
	void OnEndActionHandle(int ActionID);
	void OnPlayActionHandle(int ActionID);
	void SetConflictRuleEnable(bool bEnableConflictRule);
	void PutOffEquipmentBySlot(EAvatarSlotType SlotType, bool* Result);
	void PlayEmoteLoop();
	void ShouldCurEmoteShowWeapon(bool* Result);
	void HandleWeaponDisplayWhenPlayEmote();
	void GetAllEquipmentList(TArray<int>* Result);
	void SetCanRotate(bool CanRotate);
	void PutoffEquipmentByResid(int resID, bool* Result);
	void PutOnEquipmentByResID(int resID, int ColorID, int PatternID, bool* Result);
	void HideWeapon(bool isHide);
	void CharPlayEmoteByResId(int EmoteId, const struct FString& ExtraInfo);
	void CharUnEquipWeapon();
	void CharEquipWeaponByResId(int resID, bool bUse, bool bAsync, const struct FName& SocketName, class ASTExtraWeapon** Weapon);
	class UBackpackEmoteHandle* GetEmoteHandle(int* ItemID);
	void GetBPID(int RowName, int* BPID);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void TickClothLeten(float from);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_PlayerLobbyPawn(int EntryPoint);
	void OnSceneType2Change__DelegateSignature(int sceneType);
	void OnAvatarComponentAllMeshLoaded__DelegateSignature();
	void OnSetForceUseDefaultIdle__DelegateSignature(bool force);
	void OnEquipClothStateChange__DelegateSignature(class UBackpackAvatarHandle* AvatarHandle, bool IsEuqiped, int ItemID, int SlotType);
	void OnChangeWeapon__DelegateSignature();
	void OnchangeGender__DelegateSignature();
	void OnChangeEquipment__DelegateSignature();
	void OnStopAction__DelegateSignature(int ActionID);
	void OnPlayAction__DelegateSignature(int ActionID);
};


}

