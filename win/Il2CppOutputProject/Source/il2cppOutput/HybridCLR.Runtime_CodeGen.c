#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 HybridCLR.LoadImageErrorCode HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte[],HybridCLR.HomologousImageMode)
extern void RuntimeApi_LoadMetadataForAOTAssembly_mD15C8DCD1C877BDB177EB5C96E4729784E99832A (void);
// 0x00000002 System.Int32 HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte*,System.Int32,System.Int32)
extern void RuntimeApi_LoadMetadataForAOTAssembly_mD2460ED7B4B51D4F5AB4B1C7F8E7835281C87A1E (void);
static Il2CppMethodPointer s_methodPointers[2] = 
{
	RuntimeApi_LoadMetadataForAOTAssembly_mD15C8DCD1C877BDB177EB5C96E4729784E99832A,
	RuntimeApi_LoadMetadataForAOTAssembly_mD2460ED7B4B51D4F5AB4B1C7F8E7835281C87A1E,
};
static const int32_t s_InvokerIndices[2] = 
{
	2271,
	2060,
};
extern const CustomAttributesCacheGenerator g_HybridCLR_Runtime_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_HybridCLR_Runtime_CodeGenModule;
const Il2CppCodeGenModule g_HybridCLR_Runtime_CodeGenModule = 
{
	"HybridCLR.Runtime.dll",
	2,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_HybridCLR_Runtime_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
