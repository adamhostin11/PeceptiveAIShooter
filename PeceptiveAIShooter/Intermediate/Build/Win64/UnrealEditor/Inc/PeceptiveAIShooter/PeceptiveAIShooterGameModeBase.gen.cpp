// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PeceptiveAIShooter/PeceptiveAIShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeceptiveAIShooterGameModeBase() {}
// Cross Module References
	PECEPTIVEAISHOOTER_API UClass* Z_Construct_UClass_APeceptiveAIShooterGameModeBase_NoRegister();
	PECEPTIVEAISHOOTER_API UClass* Z_Construct_UClass_APeceptiveAIShooterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PeceptiveAIShooter();
// End Cross Module References
	void APeceptiveAIShooterGameModeBase::StaticRegisterNativesAPeceptiveAIShooterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APeceptiveAIShooterGameModeBase);
	UClass* Z_Construct_UClass_APeceptiveAIShooterGameModeBase_NoRegister()
	{
		return APeceptiveAIShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APeceptiveAIShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeceptiveAIShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PeceptiveAIShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeceptiveAIShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PeceptiveAIShooterGameModeBase.h" },
		{ "ModuleRelativePath", "PeceptiveAIShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeceptiveAIShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeceptiveAIShooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APeceptiveAIShooterGameModeBase_Statics::ClassParams = {
		&APeceptiveAIShooterGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APeceptiveAIShooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APeceptiveAIShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeceptiveAIShooterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APeceptiveAIShooterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APeceptiveAIShooterGameModeBase.OuterSingleton, Z_Construct_UClass_APeceptiveAIShooterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APeceptiveAIShooterGameModeBase.OuterSingleton;
	}
	template<> PECEPTIVEAISHOOTER_API UClass* StaticClass<APeceptiveAIShooterGameModeBase>()
	{
		return APeceptiveAIShooterGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeceptiveAIShooterGameModeBase);
	struct Z_CompiledInDeferFile_FID_PeceptiveAIShooter_Source_PeceptiveAIShooter_PeceptiveAIShooterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PeceptiveAIShooter_Source_PeceptiveAIShooter_PeceptiveAIShooterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APeceptiveAIShooterGameModeBase, APeceptiveAIShooterGameModeBase::StaticClass, TEXT("APeceptiveAIShooterGameModeBase"), &Z_Registration_Info_UClass_APeceptiveAIShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APeceptiveAIShooterGameModeBase), 610930239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PeceptiveAIShooter_Source_PeceptiveAIShooter_PeceptiveAIShooterGameModeBase_h_681832412(TEXT("/Script/PeceptiveAIShooter"),
		Z_CompiledInDeferFile_FID_PeceptiveAIShooter_Source_PeceptiveAIShooter_PeceptiveAIShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PeceptiveAIShooter_Source_PeceptiveAIShooter_PeceptiveAIShooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
