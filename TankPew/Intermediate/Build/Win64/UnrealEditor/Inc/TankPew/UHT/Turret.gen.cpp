// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankPew/Turret.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurret() {}
// Cross Module References
	TANKPEW_API UClass* Z_Construct_UClass_ABasePawn();
	TANKPEW_API UClass* Z_Construct_UClass_ATurret();
	TANKPEW_API UClass* Z_Construct_UClass_ATurret_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TankPew();
// End Cross Module References
	void ATurret::StaticRegisterNativesATurret()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurret);
	UClass* Z_Construct_UClass_ATurret_NoRegister()
	{
		return ATurret::StaticClass();
	}
	struct Z_Construct_UClass_ATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sightDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sightDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fireRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TankPew,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Turret.h" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_sightDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_sightDistance = { "sightDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATurret, sightDistance), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_sightDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_sightDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_fireRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_fireRate = { "fireRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATurret, fireRate), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_fireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_fireRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurret_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_sightDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_fireRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
		&ATurret::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurret()
	{
		if (!Z_Registration_Info_UClass_ATurret.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurret.OuterSingleton, Z_Construct_UClass_ATurret_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATurret.OuterSingleton;
	}
	template<> TANKPEW_API UClass* StaticClass<ATurret>()
	{
		return ATurret::StaticClass();
	}
	ATurret::ATurret() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
	ATurret::~ATurret() {}
	struct Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Turret_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Turret_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATurret, ATurret::StaticClass, TEXT("ATurret"), &Z_Registration_Info_UClass_ATurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurret), 1080138249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Turret_h_422812688(TEXT("/Script/TankPew"),
		Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Turret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_Turret_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
