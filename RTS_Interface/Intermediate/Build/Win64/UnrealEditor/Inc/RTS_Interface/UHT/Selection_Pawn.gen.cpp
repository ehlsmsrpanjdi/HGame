// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_Game/C_Unit/Selection_Pawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelection_Pawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ASelection_Pawn();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ASelection_Pawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class ASelection_Pawn
void ASelection_Pawn::StaticRegisterNativesASelection_Pawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASelection_Pawn);
UClass* Z_Construct_UClass_ASelection_Pawn_NoRegister()
{
	return ASelection_Pawn::StaticClass();
}
struct Z_Construct_UClass_ASelection_Pawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Game/C_Unit/Selection_Pawn.h" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UCapsule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_USKeletal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Pawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DSelection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_USKeletal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelection_Pawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelection_Pawn_Statics::NewProp_DSelection = { "DSelection", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Pawn, DSelection), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DSelection_MetaData), NewProp_DSelection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelection_Pawn_Statics::NewProp_UCapsule = { "UCapsule", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Pawn, UCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UCapsule_MetaData), NewProp_UCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelection_Pawn_Statics::NewProp_USKeletal = { "USKeletal", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Pawn, USKeletal), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_USKeletal_MetaData), NewProp_USKeletal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASelection_Pawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Pawn_Statics::NewProp_DSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Pawn_Statics::NewProp_UCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Pawn_Statics::NewProp_USKeletal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Pawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASelection_Pawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Pawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASelection_Pawn_Statics::ClassParams = {
	&ASelection_Pawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASelection_Pawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Pawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Pawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASelection_Pawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASelection_Pawn()
{
	if (!Z_Registration_Info_UClass_ASelection_Pawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASelection_Pawn.OuterSingleton, Z_Construct_UClass_ASelection_Pawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASelection_Pawn.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<ASelection_Pawn>()
{
	return ASelection_Pawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASelection_Pawn);
ASelection_Pawn::~ASelection_Pawn() {}
// End Class ASelection_Pawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASelection_Pawn, ASelection_Pawn::StaticClass, TEXT("ASelection_Pawn"), &Z_Registration_Info_UClass_ASelection_Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASelection_Pawn), 1882983623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_548101970(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
