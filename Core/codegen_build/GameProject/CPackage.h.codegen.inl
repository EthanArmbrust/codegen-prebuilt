#include <codegen/EnumReflection.h>

enum EPackageDefinitionVersion : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EPackageDefinitionVersion>::skNameMap = {
 	{ 0, "Initial" },
 	{ 1, "Max" },
 };
template<>
const int TEnumReflection<enum EPackageDefinitionVersion>::skErrorValue = -1;

