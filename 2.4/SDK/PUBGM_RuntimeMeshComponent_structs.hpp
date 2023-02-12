#pragma once

// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum RuntimeMeshComponent.EUpdateFrequency
enum class EUpdateFrequency : uint8_t
{
	EUpdateFrequency__Average      = 0,
	EUpdateFrequency__Frequent     = 1,
	EUpdateFrequency__Infrequent   = 2,
	EUpdateFrequency__EUpdateFrequency_MAX = 3
};


// Enum RuntimeMeshComponent.ERuntimeMeshCollisionCookingMode
enum class ERuntimeMeshCollisionCookingMode : uint8_t
{
	ERuntimeMeshCollisionCookingMode__CollisionPerformance = 0,
	ERuntimeMeshCollisionCookingMode__CookingPerformance = 1,
	ERuntimeMeshCollisionCookingMode__ERuntimeMeshCollisionCookingMode_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RuntimeMeshComponent.RuntimeMeshCollisionSection
// 0x0018
struct FRuntimeMeshCollisionSection
{
	TArray<struct FVector>                             VertexBuffer;                                             // 0x0000(0x000C) (ZeroConstructor)
	TArray<int>                                        IndexBuffer;                                              // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct RuntimeMeshComponent.RuntimeConvexCollisionSection
// 0x0028
struct FRuntimeConvexCollisionSection
{
	TArray<struct FVector>                             VertexBuffer;                                             // 0x0000(0x000C) (ZeroConstructor)
	struct FBox                                        BoundingBox;                                              // 0x000C(0x001C) (IsPlainOldData)
};

// ScriptStruct RuntimeMeshComponent.RuntimeMeshComponentPrePhysicsTickFunction
// 0x0004 (0x003C - 0x0038)
struct FRuntimeMeshComponentPrePhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
};

// ScriptStruct RuntimeMeshComponent.RuntimeMeshTangent
// 0x0010
struct FRuntimeMeshTangent
{
	struct FVector                                     TangentX;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bFlipTangentY;                                            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

}

