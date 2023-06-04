#pragma once

// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0020 (0x0B40 - 0x0B20)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0B20(0x0010) MISSED OFFSET
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0B30(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0B30(0x0001) (Edit)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0B30(0x0001) (Edit)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0B31(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
		return pStaticClass;
	}


	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};


// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
		return pStaticClass;
	}


	static void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
	static void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};


}

