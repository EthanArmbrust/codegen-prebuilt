#include <codegen/EnumReflection.h>

enum EDatabaseVersion : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EDatabaseVersion>::skNameMap = {
 	{ 0, "Initial" },
 	{ 1, "Max" },
 };
template<>
const int TEnumReflection<EDatabaseVersion>::skErrorValue = -1;

