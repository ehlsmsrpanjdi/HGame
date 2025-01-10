// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_Game/C_Unit/C_CameraPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_CameraPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
RTS_INTERFACE_API UClass* Z_Construct_UClass_AC_CameraPawn();
RTS_INTERFACE_API UClass* Z_Construct_UClass_AC_CameraPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class AC_CameraPawn
void AC_CameraPawn::StaticRegisterNativesAC_CameraPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_CameraPawn);
UClass* Z_Construct_UClass_AC_CameraPawn_NoRegister()
{
	return AC_CameraPawn::StaticClass();
}
struct Z_Construct_UClass_AC_CameraPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Game/C_Unit/C_CameraPawn.h" },
		{ "ModuleRelativePath", "C_Game/C_Unit/C_CameraPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_CameraPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AC_CameraPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CameraPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_CameraPawn_Statics::ClassParams = {
	&AC_CameraPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_CameraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_CameraPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_CameraPawn()
{
	if (!Z_Registration_Info_UClass_AC_CameraPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_CameraPawn.OuterSingleton, Z_Construct_UClass_AC_CameraPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_CameraPawn.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<AC_CameraPawn>()
{
	return AC_CameraPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_CameraPawn);
AC_CameraPawn::~AC_CameraPawn() {}
// End Class AC_CameraPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_CameraPawn, AC_CameraPawn::StaticClass, TEXT("AC_CameraPawn"), &Z_Registration_Info_UClass_AC_CameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_CameraPawn), 3329363991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_37582274(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
