// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSERIALCOM_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SERIALCOM;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SERIALCOM()
	{
		if (!Z_Registration_Info_UPackage__Script_SERIALCOM.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SERIALCOM",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0008C4E9,
				0x55B23CC3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SERIALCOM.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SERIALCOM.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SERIALCOM(Z_Construct_UPackage__Script_SERIALCOM, TEXT("/Script/SERIALCOM"), Z_Registration_Info_UPackage__Script_SERIALCOM, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0008C4E9, 0x55B23CC3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
