#include <codegen/EnumReflection.h>

enum EIDLength: unsigned int;

template<>
const CEnumNameMap TEnumReflection<EIDLength>::skNameMap = {
 	{ 4, "k32Bit" },
 	{ 8, "k64Bit" },
 	{ 0, "kInvalidIDLength" },
 };
template<>
const int TEnumReflection<EIDLength>::skErrorValue = 0;

