// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_Game/C_Widget/C_SelectAreaWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_SelectAreaWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
RTS_INTERFACE_API UClass* Z_Construct_UClass_UC_SelectAreaWidget();
RTS_INTERFACE_API UClass* Z_Construct_UClass_UC_SelectAreaWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class UC_SelectAreaWidget Function AddWidget
struct Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics
{
	struct C_SelectAreaWidget_eventAddWidget_Parms
	{
		UUserWidget* _Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_Game/C_Widget/C_SelectAreaWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::NewProp__Widget = { "_Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_SelectAreaWidget_eventAddWidget_Parms, _Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Widget_MetaData), NewProp__Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::NewProp__Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_SelectAreaWidget, nullptr, "AddWidget", nullptr, nullptr, Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::C_SelectAreaWidget_eventAddWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::C_SelectAreaWidget_eventAddWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_SelectAreaWidget::execAddWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param__Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWidget(Z_Param__Widget);
	P_NATIVE_END;
}
// End Class UC_SelectAreaWidget Function AddWidget

// Begin Class UC_SelectAreaWidget Function RemoveWidget
struct Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics
{
	struct C_SelectAreaWidget_eventRemoveWidget_Parms
	{
		UUserWidget* _Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_Game/C_Widget/C_SelectAreaWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::NewProp__Widget = { "_Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_SelectAreaWidget_eventRemoveWidget_Parms, _Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Widget_MetaData), NewProp__Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::NewProp__Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_SelectAreaWidget, nullptr, "RemoveWidget", nullptr, nullptr, Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::C_SelectAreaWidget_eventRemoveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::C_SelectAreaWidget_eventRemoveWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_SelectAreaWidget::execRemoveWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param__Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWidget(Z_Param__Widget);
	P_NATIVE_END;
}
// End Class UC_SelectAreaWidget Function RemoveWidget

// Begin Class UC_SelectAreaWidget
void UC_SelectAreaWidget::StaticRegisterNativesUC_SelectAreaWidget()
{
	UClass* Class = UC_SelectAreaWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWidget", &UC_SelectAreaWidget::execAddWidget },
		{ "RemoveWidget", &UC_SelectAreaWidget::execRemoveWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_SelectAreaWidget);
UClass* Z_Construct_UClass_UC_SelectAreaWidget_NoRegister()
{
	return UC_SelectAreaWidget::StaticClass();
}
struct Z_Construct_UClass_UC_SelectAreaWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "C_Game/C_Widget/C_SelectAreaWidget.h" },
		{ "ModuleRelativePath", "C_Game/C_Widget/C_SelectAreaWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Game/C_Widget/C_SelectAreaWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Game/C_Widget/C_SelectAreaWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizentalSize_MetaData[] = {
		{ "ModuleRelativePath", "C_Game/C_Widget/C_SelectAreaWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizentalSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_SelectAreaWidget_AddWidget, "AddWidget" }, // 1232592002
		{ &Z_Construct_UFunction_UC_SelectAreaWidget_RemoveWidget, "RemoveWidget" }, // 1756569846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_SelectAreaWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC_SelectAreaWidget_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SelectAreaWidget, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC_SelectAreaWidget_Statics::NewProp_HorizontalBox = { "HorizontalBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SelectAreaWidget, HorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBox_MetaData), NewProp_HorizontalBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_SelectAreaWidget_Statics::NewProp_HorizentalSize = { "HorizentalSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_SelectAreaWidget, HorizentalSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizentalSize_MetaData), NewProp_HorizentalSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_SelectAreaWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SelectAreaWidget_Statics::NewProp_CanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SelectAreaWidget_Statics::NewProp_HorizontalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_SelectAreaWidget_Statics::NewProp_HorizentalSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_SelectAreaWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC_SelectAreaWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_SelectAreaWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_SelectAreaWidget_Statics::ClassParams = {
	&UC_SelectAreaWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UC_SelectAreaWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UC_SelectAreaWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC_SelectAreaWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UC_SelectAreaWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC_SelectAreaWidget()
{
	if (!Z_Registration_Info_UClass_UC_SelectAreaWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_SelectAreaWidget.OuterSingleton, Z_Construct_UClass_UC_SelectAreaWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC_SelectAreaWidget.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<UC_SelectAreaWidget>()
{
	return UC_SelectAreaWidget::StaticClass();
}
UC_SelectAreaWidget::UC_SelectAreaWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC_SelectAreaWidget);
UC_SelectAreaWidget::~UC_SelectAreaWidget() {}
// End Class UC_SelectAreaWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC_SelectAreaWidget, UC_SelectAreaWidget::StaticClass, TEXT("UC_SelectAreaWidget"), &Z_Registration_Info_UClass_UC_SelectAreaWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_SelectAreaWidget), 1751762036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_1794788430(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
