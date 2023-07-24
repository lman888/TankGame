// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankPew/Tank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TANKPEW_API UClass* Z_Construct_UClass_ABasePawn();
	TANKPEW_API UClass* Z_Construct_UClass_ATank();
	TANKPEW_API UClass* Z_Construct_UClass_ATank_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TankPew();
// End Cross Module References
	void ATank::StaticRegisterNativesATank()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATank);
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	struct Z_Construct_UClass_ATank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_springArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TankPew,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tank.h" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_playerSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_playerSpeed = { "playerSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATank, playerSpeed), METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_playerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_playerSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_playerRotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_playerRotationSpeed = { "playerRotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATank, playerRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_playerRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_playerRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_springArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATank, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_springArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_cameraComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_cameraComp = { "cameraComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATank, cameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_cameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_cameraComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_playerSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_playerRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_springArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_cameraComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATank_Statics::ClassParams = {
		&ATank::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATank()
	{
		if (!Z_Registration_Info_UClass_ATank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATank.OuterSingleton, Z_Construct_UClass_ATank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATank.OuterSingleton;
	}
	template<> TANKPEW_API UClass* StaticClass<ATank>()
	{
		return ATank::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
	ATank::~ATank() {}
	struct Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Tank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Tank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATank, ATank::StaticClass, TEXT("ATank"), &Z_Registration_Info_UClass_ATank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATank), 2868988769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Tank_h_3632776048(TEXT("/Script/TankPew"),
		Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Tank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Tank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
