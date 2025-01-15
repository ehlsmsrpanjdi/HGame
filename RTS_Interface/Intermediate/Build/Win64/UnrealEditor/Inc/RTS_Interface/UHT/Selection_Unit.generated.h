// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Game/C_Unit/Selection_Unit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_Selection_Unit_generated_h
#error "Selection_Unit.generated.h already included, missing '#pragma once' in Selection_Unit.h"
#endif
#define RTS_INTERFACE_Selection_Unit_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWidgetHover);


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASelection_Unit(); \
	friend struct Z_Construct_UClass_ASelection_Unit_Statics; \
public: \
	DECLARE_CLASS(ASelection_Unit, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(ASelection_Unit)


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASelection_Unit(ASelection_Unit&&); \
	ASelection_Unit(const ASelection_Unit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASelection_Unit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASelection_Unit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASelection_Unit) \
	NO_API virtual ~ASelection_Unit();


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_23_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_26_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class ASelection_Unit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h


#define FOREACH_ENUM_EUNITTYPE(op) \
	op(EUnitType::None) \
	op(EUnitType::Unit) \
	op(EUnitType::Building) 

enum class EUnitType : uint8;
template<> struct TIsUEnumClass<EUnitType> { enum { Value = true }; };
template<> RTS_INTERFACE_API UEnum* StaticEnum<EUnitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
