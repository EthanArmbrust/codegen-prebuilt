#include <codegen/EnumReflection.h>

enum EPassSettings : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EPassSettings>::skNameMap = {
 	{ 0, "None" },
 	{ 4, "EmissiveBloom" },
 	{ 16, "InvertOpacityMap" },
 };
template<>
const int TEnumReflection<EPassSettings>::skErrorValue = -1;

