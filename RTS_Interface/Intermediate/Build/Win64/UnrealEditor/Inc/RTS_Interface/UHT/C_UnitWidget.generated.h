// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Game/C_Widget/C_UnitWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_C_UnitWidget_generated_h
#error "C_UnitWidget.generated.h already included, missing '#pragma once' in C_UnitWidget.h"
#endif
#define RTS_INTERFACE_C_UnitWidget_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_UnitWidget(); \
	friend struct Z_Construct_UClass_UC_UnitWidget_Statics; \
public: \
	DECLARE_CLASS(UC_UnitWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(UC_UnitWidget)


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_UnitWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC_UnitWidget(UC_UnitWidget&&); \
	UC_UnitWidget(const UC_UnitWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_UnitWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_UnitWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_UnitWidget) \
	NO_API virtual ~UC_UnitWidget();


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_13_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class UC_UnitWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_UnitWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
