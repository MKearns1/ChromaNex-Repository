// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChromaNex/ElectronicInterface_UsingC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicInterface_UsingC() {}
// Cross Module References
	CHROMANEX_API UClass* Z_Construct_UClass_UElectronicInterface_UsingC();
	CHROMANEX_API UClass* Z_Construct_UClass_UElectronicInterface_UsingC_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ChromaNex();
// End Cross Module References
	DEFINE_FUNCTION(IElectronicInterface_UsingC::execOffC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OffC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IElectronicInterface_UsingC::execInteractC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractC_Implementation();
		P_NATIVE_END;
	}
	void IElectronicInterface_UsingC::InteractC()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractC instead.");
	}
	void IElectronicInterface_UsingC::OffC()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OffC instead.");
	}
	void UElectronicInterface_UsingC::StaticRegisterNativesUElectronicInterface_UsingC()
	{
		UClass* Class = UElectronicInterface_UsingC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InteractC", &IElectronicInterface_UsingC::execInteractC },
			{ "OffC", &IElectronicInterface_UsingC::execOffC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElectronicInterface_UsingC_InteractC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElectronicInterface_UsingC_InteractC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "ElectronicInterface_UsingC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UElectronicInterface_UsingC_InteractC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElectronicInterface_UsingC, nullptr, "InteractC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElectronicInterface_UsingC_InteractC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UElectronicInterface_UsingC_InteractC_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UElectronicInterface_UsingC_InteractC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UElectronicInterface_UsingC_InteractC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElectronicInterface_UsingC_OffC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElectronicInterface_UsingC_OffC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off" },
		{ "ModuleRelativePath", "ElectronicInterface_UsingC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UElectronicInterface_UsingC_OffC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElectronicInterface_UsingC, nullptr, "OffC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElectronicInterface_UsingC_OffC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UElectronicInterface_UsingC_OffC_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UElectronicInterface_UsingC_OffC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UElectronicInterface_UsingC_OffC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UElectronicInterface_UsingC);
	UClass* Z_Construct_UClass_UElectronicInterface_UsingC_NoRegister()
	{
		return UElectronicInterface_UsingC::StaticClass();
	}
	struct Z_Construct_UClass_UElectronicInterface_UsingC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElectronicInterface_UsingC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChromaNex,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicInterface_UsingC_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UElectronicInterface_UsingC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElectronicInterface_UsingC_InteractC, "InteractC" }, // 2491484471
		{ &Z_Construct_UFunction_UElectronicInterface_UsingC_OffC, "OffC" }, // 3729525745
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicInterface_UsingC_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicInterface_UsingC_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ElectronicInterface_UsingC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElectronicInterface_UsingC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IElectronicInterface_UsingC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UElectronicInterface_UsingC_Statics::ClassParams = {
		&UElectronicInterface_UsingC::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicInterface_UsingC_Statics::Class_MetaDataParams), Z_Construct_UClass_UElectronicInterface_UsingC_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UElectronicInterface_UsingC()
	{
		if (!Z_Registration_Info_UClass_UElectronicInterface_UsingC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElectronicInterface_UsingC.OuterSingleton, Z_Construct_UClass_UElectronicInterface_UsingC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UElectronicInterface_UsingC.OuterSingleton;
	}
	template<> CHROMANEX_API UClass* StaticClass<UElectronicInterface_UsingC>()
	{
		return UElectronicInterface_UsingC::StaticClass();
	}
	UElectronicInterface_UsingC::UElectronicInterface_UsingC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElectronicInterface_UsingC);
	UElectronicInterface_UsingC::~UElectronicInterface_UsingC() {}
	static FName NAME_UElectronicInterface_UsingC_InteractC = FName(TEXT("InteractC"));
	void IElectronicInterface_UsingC::Execute_InteractC(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UElectronicInterface_UsingC::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UElectronicInterface_UsingC_InteractC);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IElectronicInterface_UsingC*)(O->GetNativeInterfaceAddress(UElectronicInterface_UsingC::StaticClass())))
		{
			I->InteractC_Implementation();
		}
	}
	static FName NAME_UElectronicInterface_UsingC_OffC = FName(TEXT("OffC"));
	void IElectronicInterface_UsingC::Execute_OffC(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UElectronicInterface_UsingC::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UElectronicInterface_UsingC_OffC);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IElectronicInterface_UsingC*)(O->GetNativeInterfaceAddress(UElectronicInterface_UsingC::StaticClass())))
		{
			I->OffC_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_ElectronicInterface_UsingC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_ElectronicInterface_UsingC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UElectronicInterface_UsingC, UElectronicInterface_UsingC::StaticClass, TEXT("UElectronicInterface_UsingC"), &Z_Registration_Info_UClass_UElectronicInterface_UsingC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElectronicInterface_UsingC), 2012103294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_ElectronicInterface_UsingC_h_197925598(TEXT("/Script/ChromaNex"),
		Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_ElectronicInterface_UsingC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_ElectronicInterface_UsingC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
