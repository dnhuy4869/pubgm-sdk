#pragma once

// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Common_DragDrop_Data.Common_DragDrop_Data_C
// 0x0014 (0x0074 - 0x0060)
class UCommon_DragDrop_Data_C : public UDragDropOperation
{
public:
	int                                                dragItem;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     dragExtendData;                                           // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                dragInst;                                                 // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Common_DragDrop_Data.Common_DragDrop_Data_C");
		return pStaticClass;
	}

};


}

