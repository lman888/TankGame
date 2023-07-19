// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankPew/TankPewGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPewGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TANKPEW_API UClass* Z_Construct_UClass_ATankPewGameModeBase();
	TANKPEW_API UClass* Z_Construct_UClass_ATankPewGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TankPew();
// End Cross Module References
	void ATankPewGameModeBase::StaticRegisterNativesATankPewGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankPewGameModeBase);
	UClass* Z_Construct_UClass_ATankPewGameModeBase_NoRegister()
	{
		return ATankPewGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATankPewGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPewGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TankPew,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPewGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TankPewGameModeBase.h" },
		{ "ModuleRelativePath", "TankPewGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPewGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPewGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankPewGameModeBase_Statics::ClassParams = {
		&ATankPewGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATankPewGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPewGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPewGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATankPewGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankPewGameModeBase.OuterSingleton, Z_Construct_UClass_ATankPewGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankPewGameModeBase.OuterSingleton;
	}
	template<> TANKPEW_API UClass* StaticClass<ATankPewGameModeBase>()
	{
		return ATankPewGameModeBase::StaticClass();
	}
	ATankPewGameModeBase::ATankPewGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPewGameModeBase);
	ATankPewGameModeBase::~ATankPewGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankPewGameModeBase, ATankPewGameModeBase::StaticClass, TEXT("ATankPewGameModeBase"), &Z_Registration_Info_UClass_ATankPewGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankPewGameModeBase), 3454245979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_2912832111(TEXT("/Script/TankPew"),
		Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
