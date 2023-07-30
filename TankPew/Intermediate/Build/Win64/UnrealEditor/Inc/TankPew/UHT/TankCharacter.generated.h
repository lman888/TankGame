// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TankCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKPEW_TankCharacter_generated_h
#error "TankCharacter.generated.h already included, missing '#pragma once' in TankCharacter.h"
#endif
#define TANKPEW_TankCharacter_generated_h

#define FID_TankPew_Source_TankPew_TankCharacter_h_12_SPARSE_DATA
#define FID_TankPew_Source_TankPew_TankCharacter_h_12_RPC_WRAPPERS
#define FID_TankPew_Source_TankPew_TankCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TankPew_Source_TankPew_TankCharacter_h_12_ACCESSORS
#define FID_TankPew_Source_TankPew_TankCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankCharacter(); \
	friend struct Z_Construct_UClass_ATankCharacter_Statics; \
public: \
	DECLARE_CLASS(ATankCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankPew"), NO_API) \
	DECLARE_SERIALIZER(ATankCharacter)


#define FID_TankPew_Source_TankPew_TankCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATankCharacter(); \
	friend struct Z_Construct_UClass_ATankCharacter_Statics; \
public: \
	DECLARE_CLASS(ATankCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankPew"), NO_API) \
	DECLARE_SERIALIZER(ATankCharacter)


#define FID_TankPew_Source_TankPew_TankCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankCharacter(ATankCharacter&&); \
	NO_API ATankCharacter(const ATankCharacter&); \
public: \
	NO_API virtual ~ATankCharacter();


#define FID_TankPew_Source_TankPew_TankCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankCharacter(ATankCharacter&&); \
	NO_API ATankCharacter(const ATankCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankCharacter) \
	NO_API virtual ~ATankCharacter();


#define FID_TankPew_Source_TankPew_TankCharacter_h_9_PROLOG
#define FID_TankPew_Source_TankPew_TankCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_SPARSE_DATA \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_RPC_WRAPPERS \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_ACCESSORS \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_INCLASS \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TankPew_Source_TankPew_TankCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_SPARSE_DATA \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_ACCESSORS \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_TankPew_Source_TankPew_TankCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKPEW_API UClass* StaticClass<class ATankCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TankPew_Source_TankPew_TankCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
