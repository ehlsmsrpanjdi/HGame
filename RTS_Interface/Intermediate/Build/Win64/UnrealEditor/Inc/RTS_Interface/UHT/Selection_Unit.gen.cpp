// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_Game/C_Unit/Selection_Unit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelection_Unit() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ASelection_Unit();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ASelection_Unit_NoRegister();
RTS_INTERFACE_API UClass* Z_Construct_UClass_UC_UnitWidget_NoRegister();
RTS_INTERFACE_API UEnum* Z_Construct_UEnum_RTS_Interface_EUnitType();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Enum EUnitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnitType;
static UEnum* EUnitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUnitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUnitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTS_Interface_EUnitType, (UObject*)Z_Construct_UPackage__Script_RTS_Interface(), TEXT("EUnitType"));
	}
	return Z_Registration_Info_UEnum_EUnitType.OuterSingleton;
}
template<> RTS_INTERFACE_API UEnum* StaticEnum<EUnitType>()
{
	return EUnitType_StaticEnum();
}
struct Z_Construct_UEnum_RTS_Interface_EUnitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Building.Comment", "// \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Building.DisplayName", "Building" },
		{ "Building.Name", "EUnitType::Building" },
		{ "Building.ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EUnitType::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "Unit.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Unit.DisplayName", "Unit" },
		{ "Unit.Name", "EUnitType::Unit" },
		{ "Unit.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUnitType::None", (int64)EUnitType::None },
		{ "EUnitType::Unit", (int64)EUnitType::Unit },
		{ "EUnitType::Building", (int64)EUnitType::Building },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTS_Interface_EUnitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTS_Interface,
	nullptr,
	"EUnitType",
	"EUnitType",
	Z_Construct_UEnum_RTS_Interface_EUnitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTS_Interface_EUnitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTS_Interface_EUnitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTS_Interface_EUnitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTS_Interface_EUnitType()
{
	if (!Z_Registration_Info_UEnum_EUnitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnitType.InnerSingleton, Z_Construct_UEnum_RTS_Interface_EUnitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUnitType.InnerSingleton;
}
// End Enum EUnitType

// Begin Class ASelection_Unit Function WidgetHover
struct Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics
{
	struct Selection_Unit_eventWidgetHover_Parms
	{
		bool _Hover;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
#endif // WITH_METADATA
	static void NewProp__Hover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__Hover;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::NewProp__Hover_SetBit(void* Obj)
{
	((Selection_Unit_eventWidgetHover_Parms*)Obj)->_Hover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::NewProp__Hover = { "_Hover", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Selection_Unit_eventWidgetHover_Parms), &Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::NewProp__Hover_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::NewProp__Hover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelection_Unit, nullptr, "WidgetHover", nullptr, nullptr, Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::Selection_Unit_eventWidgetHover_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::Selection_Unit_eventWidgetHover_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASelection_Unit_WidgetHover()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelection_Unit_WidgetHover_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASelection_Unit::execWidgetHover)
{
	P_GET_UBOOL(Z_Param__Hover);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WidgetHover(Z_Param__Hover);
	P_NATIVE_END;
}
// End Class ASelection_Unit Function WidgetHover

// Begin Class ASelection_Unit
void ASelection_Unit::StaticRegisterNativesASelection_Unit()
{
	UClass* Class = ASelection_Unit::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WidgetHover", &ASelection_Unit::execWidgetHover },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASelection_Unit);
UClass* Z_Construct_UClass_ASelection_Unit_NoRegister()
{
	return ASelection_Unit::StaticClass();
}
struct Z_Construct_UClass_ASelection_Unit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Game/C_Unit/Selection_Unit.h" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_Widget_MetaData[] = {
		{ "Category", "Selection_Unit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Unit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_Image_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Unit" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_Widget_Class_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Unit" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Unit" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Unit" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Unit" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit_Widget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DSelection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit_Image;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Unit_Widget_Class;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UnitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UnitType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASelection_Unit_WidgetHover, "WidgetHover" }, // 2546510251
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelection_Unit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelection_Unit_Statics::NewProp_Unit_Widget = { "Unit_Widget", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Unit, Unit_Widget), Z_Construct_UClass_UC_UnitWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_Widget_MetaData), NewProp_Unit_Widget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelection_Unit_Statics::NewProp_DSelection = { "DSelection", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Unit, DSelection), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DSelection_MetaData), NewProp_DSelection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelection_Unit_Statics::NewProp_Unit_Image = { "Unit_Image", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Unit, Unit_Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_Image_MetaData), NewProp_Unit_Image_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASelection_Unit_Statics::NewProp_Unit_Widget_Class = { "Unit_Widget_Class", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Unit, Unit_Widget_Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UC_UnitWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_Widget_Class_MetaData), NewProp_Unit_Widget_Class_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASelection_Unit_Statics::NewProp_UnitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASelection_Unit_Statics::NewProp_UnitType = { "UnitType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Unit, UnitType), Z_Construct_UEnum_RTS_Interface_EUnitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitType_MetaData), NewProp_UnitType_MetaData) }; // 3572760594
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelection_Unit_Statics::NewProp_NormalMaterial = { "NormalMaterial", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Unit, NormalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalMaterial_MetaData), NewProp_NormalMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelection_Unit_Statics::NewProp_SelectionMaterial = { "SelectionMaterial", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Unit, SelectionMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMaterial_MetaData), NewProp_SelectionMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASelection_Unit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Unit_Statics::NewProp_Unit_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Unit_Statics::NewProp_DSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Unit_Statics::NewProp_Unit_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Unit_Statics::NewProp_Unit_Widget_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Unit_Statics::NewProp_UnitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Unit_Statics::NewProp_UnitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Unit_Statics::NewProp_NormalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Unit_Statics::NewProp_SelectionMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Unit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASelection_Unit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Unit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASelection_Unit_Statics::ClassParams = {
	&ASelection_Unit::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASelection_Unit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Unit_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Unit_Statics::Class_MetaDataParams), Z_Construct_UClass_ASelection_Unit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASelection_Unit()
{
	if (!Z_Registration_Info_UClass_ASelection_Unit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASelection_Unit.OuterSingleton, Z_Construct_UClass_ASelection_Unit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASelection_Unit.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<ASelection_Unit>()
{
	return ASelection_Unit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASelection_Unit);
ASelection_Unit::~ASelection_Unit() {}
// End Class ASelection_Unit

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUnitType_StaticEnum, TEXT("EUnitType"), &Z_Registration_Info_UEnum_EUnitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3572760594U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASelection_Unit, ASelection_Unit::StaticClass, TEXT("ASelection_Unit"), &Z_Registration_Info_UClass_ASelection_Unit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASelection_Unit), 281567742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_380285030(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
