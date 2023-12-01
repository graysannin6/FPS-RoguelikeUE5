// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSRoguelike/ARItemChest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemChest() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_AARItemChest();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_AARItemChest_NoRegister();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_UARGameplayInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSRoguelike();
// End Cross Module References
	void AARItemChest::StaticRegisterNativesAARItemChest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARItemChest);
	UClass* Z_Construct_UClass_AARItemChest_NoRegister()
	{
		return AARItemChest::StaticClass();
	}
	struct Z_Construct_UClass_AARItemChest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LidMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LidMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARItemChest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSRoguelike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARItemChest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARItemChest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARItemChest.h" },
		{ "ModuleRelativePath", "ARItemChest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARItemChest_Statics::NewProp_TargetPitch_MetaData[] = {
		{ "Category", "ARItemChest" },
		{ "ModuleRelativePath", "ARItemChest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARItemChest_Statics::NewProp_TargetPitch = { "TargetPitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARItemChest, TargetPitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARItemChest_Statics::NewProp_TargetPitch_MetaData), Z_Construct_UClass_AARItemChest_Statics::NewProp_TargetPitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARItemChest_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "ARItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARItemChest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AARItemChest_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARItemChest, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARItemChest_Statics::NewProp_BaseMesh_MetaData), Z_Construct_UClass_AARItemChest_Statics::NewProp_BaseMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARItemChest_Statics::NewProp_LidMesh_MetaData[] = {
		{ "Category", "ARItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARItemChest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AARItemChest_Statics::NewProp_LidMesh = { "LidMesh", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARItemChest, LidMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARItemChest_Statics::NewProp_LidMesh_MetaData), Z_Construct_UClass_AARItemChest_Statics::NewProp_LidMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARItemChest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARItemChest_Statics::NewProp_TargetPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARItemChest_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARItemChest_Statics::NewProp_LidMesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AARItemChest_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UARGameplayInterface_NoRegister, (int32)VTABLE_OFFSET(AARItemChest, IARGameplayInterface), false },  // 2857095542
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARItemChest_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARItemChest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARItemChest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARItemChest_Statics::ClassParams = {
		&AARItemChest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AARItemChest_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AARItemChest_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARItemChest_Statics::Class_MetaDataParams), Z_Construct_UClass_AARItemChest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARItemChest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AARItemChest()
	{
		if (!Z_Registration_Info_UClass_AARItemChest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARItemChest.OuterSingleton, Z_Construct_UClass_AARItemChest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARItemChest.OuterSingleton;
	}
	template<> FPSROGUELIKE_API UClass* StaticClass<AARItemChest>()
	{
		return AARItemChest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARItemChest);
	AARItemChest::~AARItemChest() {}
	struct Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARItemChest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARItemChest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARItemChest, AARItemChest::StaticClass, TEXT("AARItemChest"), &Z_Registration_Info_UClass_AARItemChest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARItemChest), 3279866696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARItemChest_h_739347196(TEXT("/Script/FPSRoguelike"),
		Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARItemChest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARItemChest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
