// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ygame/Unit/CameraPawn/CameraPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ygame();
YGAME_API UClass* Z_Construct_UClass_ABasePawn();
YGAME_API UClass* Z_Construct_UClass_ACameraPawn();
YGAME_API UClass* Z_Construct_UClass_ACameraPawn_NoRegister();
// End Cross Module References

// Begin Class ACameraPawn
void ACameraPawn::StaticRegisterNativesACameraPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraPawn);
UClass* Z_Construct_UClass_ACameraPawn_NoRegister()
{
	return ACameraPawn::StaticClass();
}
struct Z_Construct_UClass_ACameraPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Unit/CameraPawn/CameraPawn.h" },
		{ "ModuleRelativePath", "Unit/CameraPawn/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Unit/CameraPawn/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Unit/CameraPawn/CameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Unit/CameraPawn/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CameraRotation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotation_MetaData), NewProp_CameraRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Ygame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraPawn_Statics::ClassParams = {
	&ACameraPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACameraPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraPawn()
{
	if (!Z_Registration_Info_UClass_ACameraPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraPawn.OuterSingleton, Z_Construct_UClass_ACameraPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraPawn.OuterSingleton;
}
template<> YGAME_API UClass* StaticClass<ACameraPawn>()
{
	return ACameraPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraPawn);
ACameraPawn::~ACameraPawn() {}
// End Class ACameraPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraPawn, ACameraPawn::StaticClass, TEXT("ACameraPawn"), &Z_Registration_Info_UClass_ACameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraPawn), 1686066715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_3754418599(TEXT("/Script/Ygame"),
	Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
