// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Game/C_Unit/Selection_Pawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_Selection_Pawn_generated_h
#error "Selection_Pawn.generated.h already included, missing '#pragma once' in Selection_Pawn.h"
#endif
#define RTS_INTERFACE_Selection_Pawn_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASelection_Pawn(); \
	friend struct Z_Construct_UClass_ASelection_Pawn_Statics; \
public: \
	DECLARE_CLASS(ASelection_Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(ASelection_Pawn)


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASelection_Pawn(ASelection_Pawn&&); \
	ASelection_Pawn(const ASelection_Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASelection_Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASelection_Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASelection_Pawn) \
	NO_API virtual ~ASelection_Pawn();


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_12_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class ASelection_Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
