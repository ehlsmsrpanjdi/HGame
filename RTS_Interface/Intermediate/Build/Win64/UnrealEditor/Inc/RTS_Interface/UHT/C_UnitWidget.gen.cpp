// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_Game/C_Widget/C_UnitWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_UnitWidget() {}

// Begin Cross Module References
RTS_INTERFACE_API UClass* Z_Construct_UClass_ASelection_Unit_NoRegister();
RTS_INTERFACE_API UClass* Z_Construct_UClass_UC_UnitWidget();
RTS_INTERFACE_API UClass* Z_Construct_UClass_UC_UnitWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class UC_UnitWidget
void UC_UnitWidget::StaticRegisterNativesUC_UnitWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_UnitWidget);
UClass* Z_Construct_UClass_UC_UnitWidget_NoRegister()
{
	return UC_UnitWidget::StaticClass();
}
struct Z_Construct_UClass_UC_UnitWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "C_Game/C_Widget/C_UnitWidget.h" },
		{ "ModuleRelativePath", "C_Game/C_Widget/C_UnitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "C_UnitWidget" },
		{ "ModuleRelativePath", "C_Game/C_Widget/C_UnitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_Unit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "C_UnitWidget" },
		{ "ModuleRelativePath", "C_Game/C_Widget/C_UnitWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Unit_Image;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Widget_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_UnitWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UC_UnitWidget_Statics::NewProp_Unit_Image = { "Unit_Image", nullptr, (EPropertyFlags)0x002408000008000d, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_UnitWidget, Unit_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_Image_MetaData), NewProp_Unit_Image_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UC_UnitWidget_Statics::NewProp_Widget_Unit = { "Widget_Unit", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_UnitWidget, Widget_Unit), Z_Construct_UClass_ASelection_Unit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_Unit_MetaData), NewProp_Widget_Unit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_UnitWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_UnitWidget_Statics::NewProp_Unit_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_UnitWidget_Statics::NewProp_Widget_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_UnitWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC_UnitWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_UnitWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_UnitWidget_Statics::ClassParams = {
	&UC_UnitWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UC_UnitWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UC_UnitWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC_UnitWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UC_UnitWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC_UnitWidget()
{
	if (!Z_Registration_Info_UClass_UC_UnitWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_UnitWidget.OuterSingleton, Z_Construct_UClass_UC_UnitWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC_UnitWidget.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<UC_UnitWidget>()
{
	return UC_UnitWidget::StaticClass();
}
UC_UnitWidget::UC_UnitWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC_UnitWidget);
UC_UnitWidget::~UC_UnitWidget() {}
// End Class UC_UnitWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC_UnitWidget, UC_UnitWidget::StaticClass, TEXT("UC_UnitWidget"), &Z_Registration_Info_UClass_UC_UnitWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_UnitWidget), 2216366549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_530320893(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
