#include <codegen/EnumReflection.h>

enum ETransformSpace: int;


template<>
const CEnumNameMap TEnumReflection<ETransformSpace>::skNameMap = {
 	{ 0, "World" },
 	{ 1, "Local" },
 };
template<>
const int TEnumReflection<ETransformSpace>::skErrorValue = -1;

