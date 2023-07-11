#pragma once

// PUBG MOBILE 2.7.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UAEStateMachine.UAEStateMachineComponent
// 0x0088 (0x0148 - 0x00C0)
class UUAEStateMachineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAfterTransientEvent;                                    // 0x00C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     Tag;                                                      // 0x00D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UUAEState*>                           States;                                                   // 0x00E0(0x000C) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FUAEStateMachineTransition> Transitions;                                              // 0x00EC(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FUAETransitionState                         StartState;                                               // 0x0128(0x000C) (Edit, DisableEditOnInstance)
	struct FUAETransitionState                         EndState;                                                 // 0x0134(0x000C) (Edit, DisableEditOnInstance)
	class UUAEState*                                   CurrentState;                                             // 0x0140(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEStateMachineComponent");
		return pStaticClass;
	}


	void Start();
	void SetTag(const struct FString& InTag);
	void OnTransientEvent__DelegateSignature(const struct FString& TransientEvent, const struct FString& CurrentState, const struct FString& TransientToState);
	bool IsInState(const struct FString& StateName);
	class UUAEState* GetCurrentState();
	void ForceDoEvent(const struct FString& EventName);
	void Finish();
	void DoEvent(const struct FString& EventName);
	bool CanDoEvent(const struct FString& EventName);
};


// Class UAEStateMachine.UAEState
// 0x0004 (0x0020 - 0x001C)
class UUAEState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEState");
		return pStaticClass;
	}


	void Update(float DeltaTime);
	void OnLeave(class UUAEState* TranitToState);
	void OnEnter(class UUAEState* PrevState);
};


// Class UAEStateMachine.TestStatemachine
// 0x0008 (0x0310 - 0x0308)
class ATestStatemachine : public AActor
{
public:
	class UUAEStateMachineComponent*                   UAEStateMachineComponent;                                 // 0x0308(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.TestStatemachine");
		return pStaticClass;
	}

};


}

