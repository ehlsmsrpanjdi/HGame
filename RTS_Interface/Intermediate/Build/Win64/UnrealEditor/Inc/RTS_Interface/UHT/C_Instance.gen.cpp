// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_Game/C_Instance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Instance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
RTS_INTERFACE_API UClass* Z_Construct_UClass_UC_Instance();
RTS_INTERFACE_API UClass* Z_Construct_UClass_UC_Instance_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class UC_Instance
void UC_Instance::StaticRegisterNativesUC_Instance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_Instance);
UClass* Z_Construct_UClass_UC_Instance_NoRegister()
{
	return UC_Instance::StaticClass();
}
struct Z_Construct_UClass_UC_Instance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "C_Game/C_Instance.h" },
		{ "ModuleRelativePath", "C_Game/C_Instance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_Instance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UC_Instance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_Instance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_Instance_Statics::ClassParams = {
	&UC_Instance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC_Instance_Statics::Class_MetaDataParams), Z_Construct_UClass_UC_Instance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC_Instance()
{
	if (!Z_Registration_Info_UClass_UC_Instance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_Instance.OuterSingleton, Z_Construct_UClass_UC_Instance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC_Instance.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<UC_Instance>()
{
	return UC_Instance::StaticClass();
}
UC_Instance::UC_Instance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC_Instance);
UC_Instance::~UC_Instance() {}
// End Class UC_Instance

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC_Instance, UC_Instance::StaticClass, TEXT("UC_Instance"), &Z_Registration_Info_UClass_UC_Instance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_Instance), 3851687428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_3237289360(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
