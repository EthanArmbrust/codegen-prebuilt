#include <codegen/EnumReflection.h>

enum ENameCasing : unsigned int;

template<>
const CEnumNameMap TEnumReflection<ENameCasing>::skNameMap = {
 	{ 0, "PascalCase" },
 	{ 1, "Snake_Case" },
 	{ 2, "camelCase" },
 };
template<>
const int TEnumReflection<ENameCasing>::skErrorValue = -1;

