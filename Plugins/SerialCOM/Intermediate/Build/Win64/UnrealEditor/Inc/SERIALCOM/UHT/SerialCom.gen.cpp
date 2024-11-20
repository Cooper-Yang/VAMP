// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SERIALCOM/Public/SerialCom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerialCom() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SERIALCOM_API UClass* Z_Construct_UClass_USerialCom();
SERIALCOM_API UClass* Z_Construct_UClass_USerialCom_NoRegister();
SERIALCOM_API UEnum* Z_Construct_UEnum_SERIALCOM_ELineEnd();
UPackage* Z_Construct_UPackage__Script_SERIALCOM();
// End Cross Module References

// Begin Enum ELineEnd
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELineEnd;
static UEnum* ELineEnd_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELineEnd.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELineEnd.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SERIALCOM_ELineEnd, (UObject*)Z_Construct_UPackage__Script_SERIALCOM(), TEXT("ELineEnd"));
	}
	return Z_Registration_Info_UEnum_ELineEnd.OuterSingleton;
}
template<> SERIALCOM_API UEnum* StaticEnum<ELineEnd>()
{
	return ELineEnd_StaticEnum();
}
struct Z_Construct_UEnum_SERIALCOM_ELineEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Communication Serial" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
		{ "n.DisplayName", "\n" },
		{ "n.Name", "ELineEnd::n" },
		{ "nr.DisplayName", "\nr" },
		{ "nr.Name", "ELineEnd::nr" },
		{ "r.DisplayName", "r" },
		{ "r.Name", "ELineEnd::r" },
		{ "rn.DisplayName", "r\n" },
		{ "rn.Name", "ELineEnd::rn" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELineEnd::rn", (int64)ELineEnd::rn },
		{ "ELineEnd::n", (int64)ELineEnd::n },
		{ "ELineEnd::r", (int64)ELineEnd::r },
		{ "ELineEnd::nr", (int64)ELineEnd::nr },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SERIALCOM_ELineEnd_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SERIALCOM,
	nullptr,
	"ELineEnd",
	"ELineEnd",
	Z_Construct_UEnum_SERIALCOM_ELineEnd_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SERIALCOM_ELineEnd_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SERIALCOM_ELineEnd_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SERIALCOM_ELineEnd_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SERIALCOM_ELineEnd()
{
	if (!Z_Registration_Info_UEnum_ELineEnd.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELineEnd.InnerSingleton, Z_Construct_UEnum_SERIALCOM_ELineEnd_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELineEnd.InnerSingleton;
}
// End Enum ELineEnd

// Begin Class USerialCom Function BytesToFloat
struct Z_Construct_UFunction_USerialCom_BytesToFloat_Statics
{
	struct SerialCom_eventBytesToFloat_Parms
	{
		TArray<uint8> Bytes;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Utility function to convert 4 bytes into a float. If the input array's length is not 4, returns 0.0.\n\x09 *\n\x09 * @param Bytes A byte array with 4 values representing the float in IEEE 754 standard format.\n\x09 * @return The final float value or 0.0 for an invalid array.\n\x09 */" },
#endif
		{ "DisplayName", "Serial Bytes to Float" },
		{ "Keywords", "communication com SERIALCOM duino arduino serial cast concatenate group bit bitwise bytes to float" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility function to convert 4 bytes into a float. If the input array's length is not 4, returns 0.0.\n\n@param Bytes A byte array with 4 values representing the float in IEEE 754 standard format.\n@return The final float value or 0.0 for an invalid array." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventBytesToFloat_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventBytesToFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "BytesToFloat", nullptr, nullptr, Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::SerialCom_eventBytesToFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::SerialCom_eventBytesToFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_BytesToFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_BytesToFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execBytesToFloat)
{
	P_GET_TARRAY(uint8,Z_Param_Bytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USerialCom::BytesToFloat(Z_Param_Bytes);
	P_NATIVE_END;
}
// End Class USerialCom Function BytesToFloat

// Begin Class USerialCom Function BytesToInt
struct Z_Construct_UFunction_USerialCom_BytesToInt_Statics
{
	struct SerialCom_eventBytesToInt_Parms
	{
		TArray<uint8> Bytes;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Utility function to convert 4 bytes into an Integer. If the input array's length is not 4, returns 0.\n\x09 *\n\x09 * @param Bytes A byte array with 4 values representing the integer in little-endian format.\n\x09 * @return The final integer value or 0 for an invalid array.\n\x09 *///////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "DisplayName", "Serial Bytes to Int" },
		{ "Keywords", "communication com SERIALCOM duino arduino serial cast concatenate group bit bitwise bytes to int" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility function to convert 4 bytes into an Integer. If the input array's length is not 4, returns 0.\n\n@param Bytes A byte array with 4 values representing the integer in little-endian format.\n@return The final integer value or 0 for an invalid array.\n        //////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerialCom_BytesToInt_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerialCom_BytesToInt_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventBytesToInt_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_BytesToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventBytesToInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_BytesToInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_BytesToInt_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_BytesToInt_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_BytesToInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_BytesToInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_BytesToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "BytesToInt", nullptr, nullptr, Z_Construct_UFunction_USerialCom_BytesToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_BytesToInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_BytesToInt_Statics::SerialCom_eventBytesToInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_BytesToInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_BytesToInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_BytesToInt_Statics::SerialCom_eventBytesToInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_BytesToInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_BytesToInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execBytesToInt)
{
	P_GET_TARRAY(uint8,Z_Param_Bytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USerialCom::BytesToInt(Z_Param_Bytes);
	P_NATIVE_END;
}
// End Class USerialCom Function BytesToInt

// Begin Class USerialCom Function Close
struct Z_Construct_UFunction_USerialCom_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Close and end the communication with the serial port. If not open, do nothing.\n\x09 */////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "DisplayName", "Close Serial Port" },
		{ "Keywords", "communication com SERIALCOM duino arduino serial end finish release close port" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Close and end the communication with the serial port. If not open, do nothing.\n        ////////////////////////////////////////////////////////////////////" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "Close", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_Close_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USerialCom_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close();
	P_NATIVE_END;
}
// End Class USerialCom Function Close

// Begin Class USerialCom Function FloatToBytes
struct Z_Construct_UFunction_USerialCom_FloatToBytes_Statics
{
	struct SerialCom_eventFloatToBytes_Parms
	{
		float Float;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Utility function to get the 4 bytes that make a float.\n\x09 *\n\x09 * @param Float The float value to be converted.\n\x09 * @return A byte array containing the 4 bytes that make the float, in IEEE 754 standard format.\n\x09 */" },
#endif
		{ "DisplayName", "Serial Float to Bytes" },
		{ "Keywords", "communication com SERIALCOM duino arduino serial cast separate bit bitwise flowat to bytes" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility function to get the 4 bytes that make a float.\n\n@param Float The float value to be converted.\n@return A byte array containing the 4 bytes that make the float, in IEEE 754 standard format." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventFloatToBytes_Parms, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventFloatToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "FloatToBytes", nullptr, nullptr, Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::SerialCom_eventFloatToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::SerialCom_eventFloatToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_FloatToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_FloatToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execFloatToBytes)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Float);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USerialCom::FloatToBytes(Z_Param_Out_Float);
	P_NATIVE_END;
}
// End Class USerialCom Function FloatToBytes

// Begin Class USerialCom Function Flush
struct Z_Construct_UFunction_USerialCom_Flush_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clean the serial port by reading everything left to be read. */" },
#endif
		{ "DisplayName", "Flush Serial Port" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clean the serial port by reading everything left to be read." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_Flush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "Flush", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Flush_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_Flush_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USerialCom_Flush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_Flush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execFlush)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Flush();
	P_NATIVE_END;
}
// End Class USerialCom Function Flush

// Begin Class USerialCom Function GetBaud
struct Z_Construct_UFunction_USerialCom_GetBaud_Statics
{
	struct SerialCom_eventGetBaud_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Read the selected BaudRate for this Serial instance.\n\x09 * @return The baud rate.\n\x09 */" },
#endif
		{ "DisplayName", "Get Serial Port Baud Rate" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read the selected BaudRate for this Serial instance.\n@return The baud rate." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_GetBaud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventGetBaud_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_GetBaud_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_GetBaud_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_GetBaud_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_GetBaud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "GetBaud", nullptr, nullptr, Z_Construct_UFunction_USerialCom_GetBaud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_GetBaud_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_GetBaud_Statics::SerialCom_eventGetBaud_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_GetBaud_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_GetBaud_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_GetBaud_Statics::SerialCom_eventGetBaud_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_GetBaud()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_GetBaud_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execGetBaud)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBaud();
	P_NATIVE_END;
}
// End Class USerialCom Function GetBaud

// Begin Class USerialCom Function GetPort
struct Z_Construct_UFunction_USerialCom_GetPort_Statics
{
	struct SerialCom_eventGetPort_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Read the number of the serial port selected for this Serial instance.\n\x09 * @return The number of the serial port.\n\x09 */" },
#endif
		{ "DisplayName", "Get Serial Port Number" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read the number of the serial port selected for this Serial instance.\n@return The number of the serial port." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_GetPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventGetPort_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_GetPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_GetPort_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_GetPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_GetPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "GetPort", nullptr, nullptr, Z_Construct_UFunction_USerialCom_GetPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_GetPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_GetPort_Statics::SerialCom_eventGetPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_GetPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_GetPort_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_GetPort_Statics::SerialCom_eventGetPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_GetPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_GetPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execGetPort)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPort();
	P_NATIVE_END;
}
// End Class USerialCom Function GetPort

// Begin Class USerialCom Function IntToBytes
struct Z_Construct_UFunction_USerialCom_IntToBytes_Statics
{
	struct SerialCom_eventIntToBytes_Parms
	{
		int32 Int;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Utility function to get the 4 bytes that make an integer.\n\x09 *\n\x09 * @param Int The integer value to be converted.\n\x09 * @return A byte array containing the 4 bytes that make the integer, starting from the least significant one (little endian).\n\x09 */" },
#endif
		{ "DisplayName", "Serial Int to Bytes" },
		{ "Keywords", "communication com SERIALCOM duino arduino serial cast separate bit bitwise int to bytes" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility function to get the 4 bytes that make an integer.\n\n@param Int The integer value to be converted.\n@return A byte array containing the 4 bytes that make the integer, starting from the least significant one (little endian)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_IntToBytes_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventIntToBytes_Parms, Int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int_MetaData), NewProp_Int_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerialCom_IntToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerialCom_IntToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventIntToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_IntToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_IntToBytes_Statics::NewProp_Int,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_IntToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_IntToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_IntToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_IntToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "IntToBytes", nullptr, nullptr, Z_Construct_UFunction_USerialCom_IntToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_IntToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_IntToBytes_Statics::SerialCom_eventIntToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_IntToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_IntToBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_IntToBytes_Statics::SerialCom_eventIntToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_IntToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_IntToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execIntToBytes)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Int);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USerialCom::IntToBytes(Z_Param_Out_Int);
	P_NATIVE_END;
}
// End Class USerialCom Function IntToBytes

// Begin Class USerialCom Function IsOpened
struct Z_Construct_UFunction_USerialCom_IsOpened_Statics
{
	struct SerialCom_eventIsOpened_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the serial port is open.\n\x09 * @return True if the serial port is open.\n\x09 */" },
#endif
		{ "DisplayName", "Is Serial Port Open?" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the serial port is open.\n@return True if the serial port is open." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USerialCom_IsOpened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SerialCom_eventIsOpened_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_IsOpened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventIsOpened_Parms), &Z_Construct_UFunction_USerialCom_IsOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_IsOpened_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_IsOpened_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_IsOpened_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_IsOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "IsOpened", nullptr, nullptr, Z_Construct_UFunction_USerialCom_IsOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_IsOpened_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_IsOpened_Statics::SerialCom_eventIsOpened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_IsOpened_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_IsOpened_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_IsOpened_Statics::SerialCom_eventIsOpened_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_IsOpened()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_IsOpened_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execIsOpened)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOpened();
	P_NATIVE_END;
}
// End Class USerialCom Function IsOpened

// Begin Class USerialCom Function LineEndToStr
struct Z_Construct_UFunction_USerialCom_LineEndToStr_Statics
{
	struct SerialCom_eventLineEndToStr_Parms
	{
		ELineEnd LineEnd;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Converts a LineEnd enum value to String.\n\x09 * @param LineEnd LineEnd enum value.\n\x09 * @return The LineEnd value in string format.\n\x09 */" },
#endif
		{ "DisplayName", "Serial Line End to String" },
		{ "keywords", "communication com SERIALCOM duino arduino serial cast convert line end to string" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a LineEnd enum value to String.\n@param LineEnd LineEnd enum value.\n@return The LineEnd value in string format." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineEnd_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineEnd;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::NewProp_LineEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::NewProp_LineEnd = { "LineEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventLineEndToStr_Parms, LineEnd), Z_Construct_UEnum_SERIALCOM_ELineEnd, METADATA_PARAMS(0, nullptr) }; // 3127375430
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventLineEndToStr_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::NewProp_LineEnd_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::NewProp_LineEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "LineEndToStr", nullptr, nullptr, Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::SerialCom_eventLineEndToStr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::SerialCom_eventLineEndToStr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_LineEndToStr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_LineEndToStr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execLineEndToStr)
{
	P_GET_ENUM(ELineEnd,Z_Param_LineEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->LineEndToStr(ELineEnd(Z_Param_LineEnd));
	P_NATIVE_END;
}
// End Class USerialCom Function LineEndToStr

// Begin Class USerialCom Function OpenComPort
struct Z_Construct_UFunction_USerialCom_OpenComPort_Statics
{
	struct SerialCom_eventOpenComPort_Parms
	{
		bool bOpened;
		int32 Port;
		int32 BaudRate;
		USerialCom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Utility function to convert 4 bytes into an Integer. If the input array's length is not 4, returns 0.\n\x09 *\n\x09 * @param Bytes A byte array with 4 values representing the integer in little-endian format.\n\x09 * @return The final integer value or 0 for an invalid array.\n\x09 *///////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "CPP_Default_BaudRate", "9600" },
		{ "CPP_Default_Port", "1" },
		{ "DisplayName", "Open Serial Port" },
		{ "Keywords", "communication com SERIALCOM duino arduino serial port start open serial" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility function to convert 4 bytes into an Integer. If the input array's length is not 4, returns 0.\n\n@param Bytes A byte array with 4 values representing the integer in little-endian format.\n@return The final integer value or 0 for an invalid array.\n        //////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bOpened_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpened;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaudRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_bOpened_SetBit(void* Obj)
{
	((SerialCom_eventOpenComPort_Parms*)Obj)->bOpened = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_bOpened = { "bOpened", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventOpenComPort_Parms), &Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventOpenComPort_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_BaudRate = { "BaudRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventOpenComPort_Parms, BaudRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventOpenComPort_Parms, ReturnValue), Z_Construct_UClass_USerialCom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_OpenComPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_bOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_BaudRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPort_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_OpenComPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_OpenComPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "OpenComPort", nullptr, nullptr, Z_Construct_UFunction_USerialCom_OpenComPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_OpenComPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_OpenComPort_Statics::SerialCom_eventOpenComPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_OpenComPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_OpenComPort_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_OpenComPort_Statics::SerialCom_eventOpenComPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_OpenComPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_OpenComPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execOpenComPort)
{
	P_GET_UBOOL_REF(Z_Param_Out_bOpened);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_GET_PROPERTY(FIntProperty,Z_Param_BaudRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USerialCom**)Z_Param__Result=USerialCom::OpenComPort(Z_Param_Out_bOpened,Z_Param_Port,Z_Param_BaudRate);
	P_NATIVE_END;
}
// End Class USerialCom Function OpenComPort

// Begin Class USerialCom Function OpenComPortWithFlowControl
struct Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics
{
	struct SerialCom_eventOpenComPortWithFlowControl_Parms
	{
		bool bOpened;
		int32 Port;
		int32 BaudRate;
		bool DTR;
		bool RTS;
		USerialCom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Open a serial port and return the created Serial instance.\n\x09 * Don't forget to close the port before exiting the game.\n\x09 *\n\x09 * @param bOpened If the serial port was successfully opened.\n\x09 * @param Port The serial port to open.\n\x09 * @param BaudRate BaudRate to open the serial port with.\n\x09 * @param DTR Enable/Disable DTR communication protocol.\n\x09 * @param RTS Enable/Disable RTS communication protocol.\n\x09 * @return A Serial instance to work with the opened port.\n\x09 */" },
#endif
		{ "CPP_Default_BaudRate", "9600" },
		{ "CPP_Default_DTR", "true" },
		{ "CPP_Default_Port", "1" },
		{ "CPP_Default_RTS", "true" },
		{ "DisplayName", "Open Serial Port With Flow Control" },
		{ "Keywords", "communication com SERIALCOM duino arduino serial port start open serial with flow control" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open a serial port and return the created Serial instance.\nDon't forget to close the port before exiting the game.\n\n@param bOpened If the serial port was successfully opened.\n@param Port The serial port to open.\n@param BaudRate BaudRate to open the serial port with.\n@param DTR Enable/Disable DTR communication protocol.\n@param RTS Enable/Disable RTS communication protocol.\n@return A Serial instance to work with the opened port." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bOpened_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpened;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaudRate;
	static void NewProp_DTR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DTR;
	static void NewProp_RTS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RTS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_bOpened_SetBit(void* Obj)
{
	((SerialCom_eventOpenComPortWithFlowControl_Parms*)Obj)->bOpened = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_bOpened = { "bOpened", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventOpenComPortWithFlowControl_Parms), &Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventOpenComPortWithFlowControl_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_BaudRate = { "BaudRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventOpenComPortWithFlowControl_Parms, BaudRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_DTR_SetBit(void* Obj)
{
	((SerialCom_eventOpenComPortWithFlowControl_Parms*)Obj)->DTR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_DTR = { "DTR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventOpenComPortWithFlowControl_Parms), &Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_DTR_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_RTS_SetBit(void* Obj)
{
	((SerialCom_eventOpenComPortWithFlowControl_Parms*)Obj)->RTS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_RTS = { "RTS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventOpenComPortWithFlowControl_Parms), &Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_RTS_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventOpenComPortWithFlowControl_Parms, ReturnValue), Z_Construct_UClass_USerialCom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_bOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_BaudRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_DTR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_RTS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "OpenComPortWithFlowControl", nullptr, nullptr, Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::SerialCom_eventOpenComPortWithFlowControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::SerialCom_eventOpenComPortWithFlowControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execOpenComPortWithFlowControl)
{
	P_GET_UBOOL_REF(Z_Param_Out_bOpened);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_GET_PROPERTY(FIntProperty,Z_Param_BaudRate);
	P_GET_UBOOL(Z_Param_DTR);
	P_GET_UBOOL(Z_Param_RTS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USerialCom**)Z_Param__Result=USerialCom::OpenComPortWithFlowControl(Z_Param_Out_bOpened,Z_Param_Port,Z_Param_BaudRate,Z_Param_DTR,Z_Param_RTS);
	P_NATIVE_END;
}
// End Class USerialCom Function OpenComPortWithFlowControl

// Begin Class USerialCom Function OpenWFC
struct Z_Construct_UFunction_USerialCom_OpenWFC_Statics
{
	struct SerialCom_eventOpenWFC_Parms
	{
		int32 Port;
		int32 BaudRate;
		bool DTR;
		bool RTS;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "CPP_Default_BaudRate", "9600" },
		{ "CPP_Default_DTR", "true" },
		{ "CPP_Default_Port", "2" },
		{ "CPP_Default_RTS", "true" },
		{ "DisplayName", "Open Serial Port With Target and Flow Control" },
		{ "Keywords", "communication com SERIALCOM duino arduino serial start init open port" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaudRate;
	static void NewProp_DTR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DTR;
	static void NewProp_RTS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RTS;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventOpenWFC_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_BaudRate = { "BaudRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventOpenWFC_Parms, BaudRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_DTR_SetBit(void* Obj)
{
	((SerialCom_eventOpenWFC_Parms*)Obj)->DTR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_DTR = { "DTR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventOpenWFC_Parms), &Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_DTR_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_RTS_SetBit(void* Obj)
{
	((SerialCom_eventOpenWFC_Parms*)Obj)->RTS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_RTS = { "RTS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventOpenWFC_Parms), &Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_RTS_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SerialCom_eventOpenWFC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventOpenWFC_Parms), &Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_OpenWFC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_BaudRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_DTR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_RTS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_OpenWFC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_OpenWFC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_OpenWFC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "OpenWFC", nullptr, nullptr, Z_Construct_UFunction_USerialCom_OpenWFC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_OpenWFC_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_OpenWFC_Statics::SerialCom_eventOpenWFC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_OpenWFC_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_OpenWFC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_OpenWFC_Statics::SerialCom_eventOpenWFC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_OpenWFC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_OpenWFC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execOpenWFC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_GET_PROPERTY(FIntProperty,Z_Param_BaudRate);
	P_GET_UBOOL(Z_Param_DTR);
	P_GET_UBOOL(Z_Param_RTS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenWFC(Z_Param_Port,Z_Param_BaudRate,Z_Param_DTR,Z_Param_RTS);
	P_NATIVE_END;
}
// End Class USerialCom Function OpenWFC

// Begin Class USerialCom Function Print
struct Z_Construct_UFunction_USerialCom_Print_Statics
{
	struct SerialCom_eventPrint_Parms
	{
		FString String;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Writes a string without newline to the serial port.\n\x09 * @param String The string to be sent to the serial port.\n\x09 * @return True if the string was sent.\n\x09 */" },
#endif
		{ "DisplayName", "Serial Print" },
		{ "keywords", "communication com SERIALCOM duino arduino serial print send write string words text characters" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Writes a string without newline to the serial port.\n@param String The string to be sent to the serial port.\n@return True if the string was sent." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerialCom_Print_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventPrint_Parms, String), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_Print_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SerialCom_eventPrint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_Print_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventPrint_Parms), &Z_Construct_UFunction_USerialCom_Print_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_Print_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_Print_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_Print_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Print_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_Print_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "Print", nullptr, nullptr, Z_Construct_UFunction_USerialCom_Print_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Print_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_Print_Statics::SerialCom_eventPrint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Print_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_Print_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_Print_Statics::SerialCom_eventPrint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_Print()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_Print_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execPrint)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Print(Z_Param_String);
	P_NATIVE_END;
}
// End Class USerialCom Function Print

// Begin Class USerialCom Function Println
struct Z_Construct_UFunction_USerialCom_Println_Statics
{
	struct SerialCom_eventPrintln_Parms
	{
		FString String;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Writes a string with newline (\\n) appended at the end to the serial port.\n\x09 * @param String The string to be sent to the serial port.\n\x09 * @return True if the string was sent.\n\x09 */" },
#endif
		{ "DisplayName", "Serial Print Line" },
		{ "keywords", "communication com SERIALCOM duino arduino serial print line send write string words text characters" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Writes a string with newline (\\n) appended at the end to the serial port.\n@param String The string to be sent to the serial port.\n@return True if the string was sent." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerialCom_Println_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventPrintln_Parms, String), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_Println_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SerialCom_eventPrintln_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_Println_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventPrintln_Parms), &Z_Construct_UFunction_USerialCom_Println_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_Println_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_Println_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_Println_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Println_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_Println_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "Println", nullptr, nullptr, Z_Construct_UFunction_USerialCom_Println_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Println_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_Println_Statics::SerialCom_eventPrintln_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Println_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_Println_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_Println_Statics::SerialCom_eventPrintln_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_Println()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_Println_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execPrintln)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Println(Z_Param_String);
	P_NATIVE_END;
}
// End Class USerialCom Function Println

// Begin Class USerialCom Function ReadByte
struct Z_Construct_UFunction_USerialCom_ReadByte_Statics
{
	struct SerialCom_eventReadByte_Parms
	{
		bool bSuccess;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reads a byte from the serial port.\n\x09 * @param bSuccess True if there were 4 bytes to read.\n\x09 * @return The read value\n\x09 */" },
#endif
		{ "DisplayName", "Serial Read Byte" },
		{ "keywords", "communication com SERIALCOM duino arduino serial read a byte get read receive" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reads a byte from the serial port.\n@param bSuccess True if there were 4 bytes to read.\n@return The read value" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USerialCom_ReadByte_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SerialCom_eventReadByte_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_ReadByte_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventReadByte_Parms), &Z_Construct_UFunction_USerialCom_ReadByte_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerialCom_ReadByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventReadByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_ReadByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadByte_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_ReadByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "ReadByte", nullptr, nullptr, Z_Construct_UFunction_USerialCom_ReadByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_ReadByte_Statics::SerialCom_eventReadByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_ReadByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_ReadByte_Statics::SerialCom_eventReadByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_ReadByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_ReadByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execReadByte)
{
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->ReadByte(Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class USerialCom Function ReadByte

// Begin Class USerialCom Function ReadBytes
struct Z_Construct_UFunction_USerialCom_ReadBytes_Statics
{
	struct SerialCom_eventReadBytes_Parms
	{
		int32 Limit;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reads up to Limit bytes from the serial port. If there are less than Limit,\n\x09 * reads all of them and return True.\n\x09 * @param bSuccess True if there was at least 1 byte to read.\n\x09 * @return An array containing the read bytes\n\x09 */" },
#endif
		{ "CPP_Default_Limit", "256" },
		{ "DisplayName", "Serial Read Bytes" },
		{ "keywords", "communication com SERIALCOM duino arduino serial read bytes get read receive" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reads up to Limit bytes from the serial port. If there are less than Limit,\nreads all of them and return True.\n@param bSuccess True if there was at least 1 byte to read.\n@return An array containing the read bytes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_ReadBytes_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventReadBytes_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerialCom_ReadBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerialCom_ReadBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventReadBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_ReadBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadBytes_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_ReadBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "ReadBytes", nullptr, nullptr, Z_Construct_UFunction_USerialCom_ReadBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_ReadBytes_Statics::SerialCom_eventReadBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_ReadBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_ReadBytes_Statics::SerialCom_eventReadBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_ReadBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_ReadBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execReadBytes)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->ReadBytes(Z_Param_Limit);
	P_NATIVE_END;
}
// End Class USerialCom Function ReadBytes

// Begin Class USerialCom Function ReadFloat
struct Z_Construct_UFunction_USerialCom_ReadFloat_Statics
{
	struct SerialCom_eventReadFloat_Parms
	{
		bool bSuccess;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reads a float from the serial port (sent as 4 bytes).\n\x09 * @param bSuccess True if there were 4 bytes to read.\n\x09 * @return The read value\n\x09 */" },
#endif
		{ "DisplayName", "Serial Read Float" },
		{ "keywords", "communication com SERIALCOM duino arduino serial read a float get read receive" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reads a float from the serial port (sent as 4 bytes).\n@param bSuccess True if there were 4 bytes to read.\n@return The read value" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USerialCom_ReadFloat_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SerialCom_eventReadFloat_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_ReadFloat_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventReadFloat_Parms), &Z_Construct_UFunction_USerialCom_ReadFloat_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USerialCom_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventReadFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_ReadFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadFloat_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "ReadFloat", nullptr, nullptr, Z_Construct_UFunction_USerialCom_ReadFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_ReadFloat_Statics::SerialCom_eventReadFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_ReadFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_ReadFloat_Statics::SerialCom_eventReadFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_ReadFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_ReadFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execReadFloat)
{
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ReadFloat(Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class USerialCom Function ReadFloat

// Begin Class USerialCom Function ReadInt
struct Z_Construct_UFunction_USerialCom_ReadInt_Statics
{
	struct SerialCom_eventReadInt_Parms
	{
		bool bSuccess;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reads an integer from the serial port (sent as 4 bytes).\n\x09 * @param bSuccess True if there were 4 bytes to read.\n\x09 * @return The read value\n\x09 */" },
#endif
		{ "DisplayName", "Serial Read Int" },
		{ "keywords", "communication com SERIALCOM duino arduino serial read an int get read receive integer" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reads an integer from the serial port (sent as 4 bytes).\n@param bSuccess True if there were 4 bytes to read.\n@return The read value" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USerialCom_ReadInt_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SerialCom_eventReadInt_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_ReadInt_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventReadInt_Parms), &Z_Construct_UFunction_USerialCom_ReadInt_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_ReadInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventReadInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_ReadInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadInt_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "ReadInt", nullptr, nullptr, Z_Construct_UFunction_USerialCom_ReadInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_ReadInt_Statics::SerialCom_eventReadInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_ReadInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_ReadInt_Statics::SerialCom_eventReadInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_ReadInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_ReadInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execReadInt)
{
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ReadInt(Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class USerialCom Function ReadInt

// Begin Class USerialCom Function Readln
struct Z_Construct_UFunction_USerialCom_Readln_Statics
{
	struct SerialCom_eventReadln_Parms
	{
		bool bSuccess;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Will read characters from Serial port until \\r\\n (Arduino println line end) is found.\n\x09 *\n\x09 * @param bSuccess If there was anything to read.\n\x09 * @return The read string\n\x09 */" },
#endif
		{ "DisplayName", "Serial Read Line" },
		{ "keywords", "communication com SERIALCOM duino arduino serial read line get read receive string words text characters" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will read characters from Serial port until \\r\\n (Arduino println line end) is found.\n\n@param bSuccess If there was anything to read.\n@return The read string" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USerialCom_Readln_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SerialCom_eventReadln_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_Readln_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventReadln_Parms), &Z_Construct_UFunction_USerialCom_Readln_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerialCom_Readln_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventReadln_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_Readln_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_Readln_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_Readln_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Readln_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_Readln_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "Readln", nullptr, nullptr, Z_Construct_UFunction_USerialCom_Readln_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Readln_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_Readln_Statics::SerialCom_eventReadln_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_Readln_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_Readln_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_Readln_Statics::SerialCom_eventReadln_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_Readln()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_Readln_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execReadln)
{
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->Readln(Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class USerialCom Function Readln

// Begin Class USerialCom Function ReadString
struct Z_Construct_UFunction_USerialCom_ReadString_Statics
{
	struct SerialCom_eventReadString_Parms
	{
		bool bSuccess;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Will read characters from Serial port until \\0 (null char) is found or there are no\n\x09 * characters left to read.\n\x09 *\n\x09 * @param bSuccess If there was anything to read.\n\x09 * @return The read string\n\x09 */" },
#endif
		{ "DisplayName", "Serial Read String" },
		{ "keywords", "read string communication com SERIALCOM duino arduino serial get read receive string words text characters" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will read characters from Serial port until \\0 (null char) is found or there are no\ncharacters left to read.\n\n@param bSuccess If there was anything to read.\n@return The read string" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USerialCom_ReadString_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SerialCom_eventReadString_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_ReadString_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventReadString_Parms), &Z_Construct_UFunction_USerialCom_ReadString_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerialCom_ReadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventReadString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_ReadString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadString_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_ReadString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_ReadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "ReadString", nullptr, nullptr, Z_Construct_UFunction_USerialCom_ReadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_ReadString_Statics::SerialCom_eventReadString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_ReadString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_ReadString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_ReadString_Statics::SerialCom_eventReadString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_ReadString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_ReadString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execReadString)
{
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ReadString(Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class USerialCom Function ReadString

// Begin Class USerialCom Function WriteByte
struct Z_Construct_UFunction_USerialCom_WriteByte_Statics
{
	struct SerialCom_eventWriteByte_Parms
	{
		uint8 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Writes a byte value to the serial port.\n\x09 * @param Value The value to be sent to the serial port.\n\x09 * @return True if the byte was sent.\n\x09 */" },
#endif
		{ "DisplayName", "Serial Write Byte" },
		{ "keywords", "communication com SERIALCOM duino arduino serial write a byte send" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Writes a byte value to the serial port.\n@param Value The value to be sent to the serial port.\n@return True if the byte was sent." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerialCom_WriteByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventWriteByte_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_WriteByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SerialCom_eventWriteByte_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_WriteByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventWriteByte_Parms), &Z_Construct_UFunction_USerialCom_WriteByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_WriteByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_WriteByte_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_WriteByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_WriteByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "WriteByte", nullptr, nullptr, Z_Construct_UFunction_USerialCom_WriteByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_WriteByte_Statics::SerialCom_eventWriteByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_WriteByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_WriteByte_Statics::SerialCom_eventWriteByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_WriteByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_WriteByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execWriteByte)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteByte(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USerialCom Function WriteByte

// Begin Class USerialCom Function WriteBytes
struct Z_Construct_UFunction_USerialCom_WriteBytes_Statics
{
	struct SerialCom_eventWriteBytes_Parms
	{
		TArray<uint8> Buffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Writes a byte array as a sequence of bytes to the serial port.\n\x09 * @param Buffer The byte array to be sent to the serial port.\n\x09 * @return True if the bytes were sent.\n\x09 */" },
#endif
		{ "DisplayName", "Serial Write Bytes" },
		{ "keywords", "communication com SERIALCOM duino arduino serial write bytes send" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Writes a byte array as a sequence of bytes to the serial port.\n@param Buffer The byte array to be sent to the serial port.\n@return True if the bytes were sent." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerialCom_WriteBytes_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerialCom_WriteBytes_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventWriteBytes_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_WriteBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SerialCom_eventWriteBytes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_WriteBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventWriteBytes_Parms), &Z_Construct_UFunction_USerialCom_WriteBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_WriteBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_WriteBytes_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_WriteBytes_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_WriteBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_WriteBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "WriteBytes", nullptr, nullptr, Z_Construct_UFunction_USerialCom_WriteBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_WriteBytes_Statics::SerialCom_eventWriteBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_WriteBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_WriteBytes_Statics::SerialCom_eventWriteBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_WriteBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_WriteBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execWriteBytes)
{
	P_GET_TARRAY(uint8,Z_Param_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteBytes(Z_Param_Buffer);
	P_NATIVE_END;
}
// End Class USerialCom Function WriteBytes

// Begin Class USerialCom Function WriteFloat
struct Z_Construct_UFunction_USerialCom_WriteFloat_Statics
{
	struct SerialCom_eventWriteFloat_Parms
	{
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Writes a float value to the serial port as 4 bytes.\n\x09 * @param Value The value to be sent to the serial port.\n\x09 * @return True if the bytes were sent.\n\x09 */" },
#endif
		{ "DisplayName", "Serial Write Float" },
		{ "keywords", "communication com SERIALCOM duino arduino serial write a float send" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Writes a float value to the serial port as 4 bytes.\n@param Value The value to be sent to the serial port.\n@return True if the bytes were sent." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USerialCom_WriteFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventWriteFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_WriteFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SerialCom_eventWriteFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_WriteFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventWriteFloat_Parms), &Z_Construct_UFunction_USerialCom_WriteFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_WriteFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_WriteFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_WriteFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_WriteFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "WriteFloat", nullptr, nullptr, Z_Construct_UFunction_USerialCom_WriteFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_WriteFloat_Statics::SerialCom_eventWriteFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_WriteFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_WriteFloat_Statics::SerialCom_eventWriteFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_WriteFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_WriteFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execWriteFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteFloat(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USerialCom Function WriteFloat

// Begin Class USerialCom Function WriteInt
struct Z_Construct_UFunction_USerialCom_WriteInt_Statics
{
	struct SerialCom_eventWriteInt_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Communication Serial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Writes an integer value to the serial port as 4 bytes.\n\x09 * @param Value The value to be sent to the serial port.\n\x09 * @return True if the bytes were sent.\n\x09 */" },
#endif
		{ "DisplayName", "Serial Write Int" },
		{ "keywords", "communication com SERIALCOM duino arduino serial write an int integer send" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Writes an integer value to the serial port as 4 bytes.\n@param Value The value to be sent to the serial port.\n@return True if the bytes were sent." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerialCom_WriteInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialCom_eventWriteInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USerialCom_WriteInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SerialCom_eventWriteInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialCom_WriteInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialCom_eventWriteInt_Parms), &Z_Construct_UFunction_USerialCom_WriteInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialCom_WriteInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_WriteInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialCom_WriteInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialCom_WriteInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialCom, nullptr, "WriteInt", nullptr, nullptr, Z_Construct_UFunction_USerialCom_WriteInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialCom_WriteInt_Statics::SerialCom_eventWriteInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialCom_WriteInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialCom_WriteInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USerialCom_WriteInt_Statics::SerialCom_eventWriteInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USerialCom_WriteInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialCom_WriteInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USerialCom::execWriteInt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteInt(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USerialCom Function WriteInt

// Begin Class USerialCom
void USerialCom::StaticRegisterNativesUSerialCom()
{
	UClass* Class = USerialCom::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BytesToFloat", &USerialCom::execBytesToFloat },
		{ "BytesToInt", &USerialCom::execBytesToInt },
		{ "Close", &USerialCom::execClose },
		{ "FloatToBytes", &USerialCom::execFloatToBytes },
		{ "Flush", &USerialCom::execFlush },
		{ "GetBaud", &USerialCom::execGetBaud },
		{ "GetPort", &USerialCom::execGetPort },
		{ "IntToBytes", &USerialCom::execIntToBytes },
		{ "IsOpened", &USerialCom::execIsOpened },
		{ "LineEndToStr", &USerialCom::execLineEndToStr },
		{ "OpenComPort", &USerialCom::execOpenComPort },
		{ "OpenComPortWithFlowControl", &USerialCom::execOpenComPortWithFlowControl },
		{ "OpenWFC", &USerialCom::execOpenWFC },
		{ "Print", &USerialCom::execPrint },
		{ "Println", &USerialCom::execPrintln },
		{ "ReadByte", &USerialCom::execReadByte },
		{ "ReadBytes", &USerialCom::execReadBytes },
		{ "ReadFloat", &USerialCom::execReadFloat },
		{ "ReadInt", &USerialCom::execReadInt },
		{ "Readln", &USerialCom::execReadln },
		{ "ReadString", &USerialCom::execReadString },
		{ "WriteByte", &USerialCom::execWriteByte },
		{ "WriteBytes", &USerialCom::execWriteBytes },
		{ "WriteFloat", &USerialCom::execWriteFloat },
		{ "WriteInt", &USerialCom::execWriteInt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USerialCom);
UClass* Z_Construct_UClass_USerialCom_NoRegister()
{
	return USerialCom::StaticClass();
}
struct Z_Construct_UClass_USerialCom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Communication Serial" },
		{ "IncludePath", "SerialCom.h" },
		{ "Keywords", "com arduino serial arduino duino" },
		{ "ModuleRelativePath", "Public/SerialCom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteLineEnd_MetaData[] = {
		{ "Category", "Communication Serial | String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines the line ending used when writing lines to serial port with PrintLine. */" },
#endif
		{ "ModuleRelativePath", "Public/SerialCom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the line ending used when writing lines to serial port with PrintLine." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WriteLineEnd_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WriteLineEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USerialCom_BytesToFloat, "BytesToFloat" }, // 4273135577
		{ &Z_Construct_UFunction_USerialCom_BytesToInt, "BytesToInt" }, // 1706403176
		{ &Z_Construct_UFunction_USerialCom_Close, "Close" }, // 2669582614
		{ &Z_Construct_UFunction_USerialCom_FloatToBytes, "FloatToBytes" }, // 1130145581
		{ &Z_Construct_UFunction_USerialCom_Flush, "Flush" }, // 3468424333
		{ &Z_Construct_UFunction_USerialCom_GetBaud, "GetBaud" }, // 3769199425
		{ &Z_Construct_UFunction_USerialCom_GetPort, "GetPort" }, // 948138035
		{ &Z_Construct_UFunction_USerialCom_IntToBytes, "IntToBytes" }, // 2100910734
		{ &Z_Construct_UFunction_USerialCom_IsOpened, "IsOpened" }, // 3845454873
		{ &Z_Construct_UFunction_USerialCom_LineEndToStr, "LineEndToStr" }, // 1572281953
		{ &Z_Construct_UFunction_USerialCom_OpenComPort, "OpenComPort" }, // 1096209874
		{ &Z_Construct_UFunction_USerialCom_OpenComPortWithFlowControl, "OpenComPortWithFlowControl" }, // 546240
		{ &Z_Construct_UFunction_USerialCom_OpenWFC, "OpenWFC" }, // 4122654203
		{ &Z_Construct_UFunction_USerialCom_Print, "Print" }, // 1515788537
		{ &Z_Construct_UFunction_USerialCom_Println, "Println" }, // 3558092558
		{ &Z_Construct_UFunction_USerialCom_ReadByte, "ReadByte" }, // 2545204294
		{ &Z_Construct_UFunction_USerialCom_ReadBytes, "ReadBytes" }, // 42438506
		{ &Z_Construct_UFunction_USerialCom_ReadFloat, "ReadFloat" }, // 514450338
		{ &Z_Construct_UFunction_USerialCom_ReadInt, "ReadInt" }, // 284373341
		{ &Z_Construct_UFunction_USerialCom_Readln, "Readln" }, // 2461232821
		{ &Z_Construct_UFunction_USerialCom_ReadString, "ReadString" }, // 3213423882
		{ &Z_Construct_UFunction_USerialCom_WriteByte, "WriteByte" }, // 2409214487
		{ &Z_Construct_UFunction_USerialCom_WriteBytes, "WriteBytes" }, // 3129766485
		{ &Z_Construct_UFunction_USerialCom_WriteFloat, "WriteFloat" }, // 2519221190
		{ &Z_Construct_UFunction_USerialCom_WriteInt, "WriteInt" }, // 847082539
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USerialCom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USerialCom_Statics::NewProp_WriteLineEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USerialCom_Statics::NewProp_WriteLineEnd = { "WriteLineEnd", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USerialCom, WriteLineEnd), Z_Construct_UEnum_SERIALCOM_ELineEnd, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteLineEnd_MetaData), NewProp_WriteLineEnd_MetaData) }; // 3127375430
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USerialCom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerialCom_Statics::NewProp_WriteLineEnd_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerialCom_Statics::NewProp_WriteLineEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USerialCom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USerialCom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SERIALCOM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USerialCom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USerialCom_Statics::ClassParams = {
	&USerialCom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USerialCom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USerialCom_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USerialCom_Statics::Class_MetaDataParams), Z_Construct_UClass_USerialCom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USerialCom()
{
	if (!Z_Registration_Info_UClass_USerialCom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USerialCom.OuterSingleton, Z_Construct_UClass_USerialCom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USerialCom.OuterSingleton;
}
template<> SERIALCOM_API UClass* StaticClass<USerialCom>()
{
	return USerialCom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USerialCom);
// End Class USerialCom

// Begin Registration
struct Z_CompiledInDeferFile_FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELineEnd_StaticEnum, TEXT("ELineEnd"), &Z_Registration_Info_UEnum_ELineEnd, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3127375430U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USerialCom, USerialCom::StaticClass, TEXT("USerialCom"), &Z_Registration_Info_UClass_USerialCom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USerialCom), 3074473685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_1156723289(TEXT("/Script/SERIALCOM"),
	Z_CompiledInDeferFile_FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
