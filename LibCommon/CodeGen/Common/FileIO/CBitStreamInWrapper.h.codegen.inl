#include <codegen/EnumReflection.h>

struct CBitStreamInWrapper {
	enum EChunkSize: unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<CBitStreamInWrapper::EChunkSize>::skNameMap = {
 	{ 8, "8Bit" },
 	{ 16, "16Bit" },
 	{ 32, "32Bit" },
 };
template<>
const int TEnumReflection<CBitStreamInWrapper::EChunkSize>::skErrorValue = -1;

