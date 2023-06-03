#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile_Internal(System.String,System.UInt32,System.UInt64)
extern void AssetBundle_LoadFromFile_Internal_mC5A549D462272D3E202D62CF295BDAF44F4E4B7C (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
extern void AssetBundle_LoadFromFile_mE9B8D7BC74F2F67AE710881EFBBB541E8A8F6B3A (void);
// 0x00000004 T UnityEngine.AssetBundle::LoadAsset(System.String)
// 0x00000005 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern void AssetBundle_LoadAsset_m9139320F8B6D3E43B7D29AA7A60030306AE0A2C6 (void);
// 0x00000006 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern void AssetBundle_LoadAsset_Internal_mFB165539087545C4B5763BA8B590D84318C6FE1B (void);
static Il2CppMethodPointer s_methodPointers[6] = 
{
	AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71,
	AssetBundle_LoadFromFile_Internal_mC5A549D462272D3E202D62CF295BDAF44F4E4B7C,
	AssetBundle_LoadFromFile_mE9B8D7BC74F2F67AE710881EFBBB541E8A8F6B3A,
	NULL,
	AssetBundle_LoadAsset_m9139320F8B6D3E43B7D29AA7A60030306AE0A2C6,
	AssetBundle_LoadAsset_Internal_mFB165539087545C4B5763BA8B590D84318C6FE1B,
};
static const int32_t s_InvokerIndices[6] = 
{
	1664,
	2120,
	2553,
	-1,
	748,
	748,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000004, { 0, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, 58 },
	{ (Il2CppRGCTXDataType)2, 58 },
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AssetBundleModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	6,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	g_UnityEngine_AssetBundleModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
