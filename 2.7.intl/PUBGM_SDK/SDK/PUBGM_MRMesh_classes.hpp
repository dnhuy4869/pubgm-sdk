#pragma once

// PUBG MOBILE 2.7.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MRMesh.MeshReconstructorBase
// 0x0004 (0x0020 - 0x001C)
class UMeshReconstructorBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return pStaticClass;
	}


	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	struct FMRMeshConfiguration ConnectMRMesh(class UMRMeshComponent* Mesh);
};


// Class MRMesh.MRMeshComponent
// 0x0040 (0x0650 - 0x0610)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0610(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0614(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMeshReconstructorBase*                      MeshReconstructor;                                        // 0x0618(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x061C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x061D(0x0003) MISSED OFFSET
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x0620(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x24];                                      // 0x062C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return pStaticClass;
	}


	class UMeshReconstructorBase* GetReconstructor();
	void ConnectReconstructor(class UMeshReconstructorBase* Reconstructor);
};


}

