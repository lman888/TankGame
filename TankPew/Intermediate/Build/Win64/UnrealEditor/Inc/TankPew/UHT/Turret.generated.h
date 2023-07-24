// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Turret.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKPEW_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define TANKPEW_Turret_generated_h

#define FID_TankPew_Source_TankPew_Turret_h_17_SPARSE_DATA
#define FID_TankPew_Source_TankPew_Turret_h_17_RPC_WRAPPERS
#define FID_TankPew_Source_TankPew_Turret_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TankPew_Source_TankPew_Turret_h_17_ACCESSORS
#define FID_TankPew_Source_TankPew_Turret_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankPew"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define FID_TankPew_Source_TankPew_Turret_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankPew"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define FID_TankPew_Source_TankPew_Turret_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurret(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	NO_API virtual ~ATurret();


#define FID_TankPew_Source_TankPew_Turret_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurret(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret) \
	NO_API virtual ~ATurret();


#define FID_TankPew_Source_TankPew_Turret_h_14_PROLOG
#define FID_TankPew_Source_TankPew_Turret_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TankPew_Source_TankPew_Turret_h_17_SPARSE_DATA \
	FID_TankPew_Source_TankPew_Turret_h_17_RPC_WRAPPERS \
	FID_TankPew_Source_TankPew_Turret_h_17_ACCESSORS \
	FID_TankPew_Source_TankPew_Turret_h_17_INCLASS \
	FID_TankPew_Source_TankPew_Turret_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TankPew_Source_TankPew_Turret_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TankPew_Source_TankPew_Turret_h_17_SPARSE_DATA \
	FID_TankPew_Source_TankPew_Turret_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TankPew_Source_TankPew_Turret_h_17_ACCESSORS \
	FID_TankPew_Source_TankPew_Turret_h_17_INCLASS_NO_PURE_DECLS \
	FID_TankPew_Source_TankPew_Turret_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKPEW_API UClass* StaticClass<class ATurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TankPew_Source_TankPew_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
