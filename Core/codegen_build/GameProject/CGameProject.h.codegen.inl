#include <codegen/EnumReflection.h>

enum EProjectVersion : unsigned int;


template<>
const CEnumNameMap TEnumReflection<EProjectVersion>::skNameMap = {
 	{ 0, "Initial" },
 	{ 1, "Max" },
 };
template<>
const int TEnumReflection<EProjectVersion>::skErrorValue = -1;

