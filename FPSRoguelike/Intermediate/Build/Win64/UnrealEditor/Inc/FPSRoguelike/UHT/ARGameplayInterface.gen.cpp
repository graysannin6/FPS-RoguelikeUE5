// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSRoguelike/ARGameplayInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARGameplayInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_UARGameplayInterface();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_UARGameplayInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSRoguelike();
// End Cross Module References
	DEFINE_FUNCTION(IARGameplayInterface::execInteract)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_InstigatorPawn);
		P_NATIVE_END;
	}
	struct ARGameplayInterface_eventInteract_Parms
	{
		APawn* InstigatorPawn;
	};
	void IARGameplayInterface::Interact(APawn* InstigatorPawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UARGameplayInterface::StaticRegisterNativesUARGameplayInterface()
	{
		UClass* Class = UARGameplayInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &IARGameplayInterface::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARGameplayInterface_Interact_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARGameplayInterface_eventInteract_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARGameplayInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGameplayInterface, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::PropPointers), sizeof(ARGameplayInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::PropPointers) < 2048);
	static_assert(sizeof(ARGameplayInterface_eventInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UARGameplayInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGameplayInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARGameplayInterface);
	UClass* Z_Construct_UClass_UARGameplayInterface_NoRegister()
	{
		return UARGameplayInterface::StaticClass();
	}
	struct Z_Construct_UClass_UARGameplayInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARGameplayInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSRoguelike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARGameplayInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UARGameplayInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARGameplayInterface_Interact, "Interact" }, // 319298507
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARGameplayInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGameplayInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARGameplayInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARGameplayInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IARGameplayInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARGameplayInterface_Statics::ClassParams = {
		&UARGameplayInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARGameplayInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UARGameplayInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UARGameplayInterface()
	{
		if (!Z_Registration_Info_UClass_UARGameplayInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARGameplayInterface.OuterSingleton, Z_Construct_UClass_UARGameplayInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARGameplayInterface.OuterSingleton;
	}
	template<> FPSROGUELIKE_API UClass* StaticClass<UARGameplayInterface>()
	{
		return UARGameplayInterface::StaticClass();
	}
	UARGameplayInterface::UARGameplayInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARGameplayInterface);
	UARGameplayInterface::~UARGameplayInterface() {}
	static FName NAME_UARGameplayInterface_Interact = FName(TEXT("Interact"));
	void IARGameplayInterface::Execute_Interact(UObject* O, APawn* InstigatorPawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UARGameplayInterface::StaticClass()));
		ARGameplayInterface_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UARGameplayInterface_Interact);
		if (Func)
		{
			Parms.InstigatorPawn=InstigatorPawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IARGameplayInterface*)(O->GetNativeInterfaceAddress(UARGameplayInterface::StaticClass())))
		{
			I->Interact_Implementation(InstigatorPawn);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARGameplayInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARGameplayInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARGameplayInterface, UARGameplayInterface::StaticClass, TEXT("UARGameplayInterface"), &Z_Registration_Info_UClass_UARGameplayInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARGameplayInterface), 2857095542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARGameplayInterface_h_2839321699(TEXT("/Script/FPSRoguelike"),
		Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARGameplayInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARGameplayInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
