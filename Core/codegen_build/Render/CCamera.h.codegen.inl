#include <codegen/EnumReflection.h>

enum ECameraMoveMode : unsigned int;

template<>
const CEnumNameMap TEnumReflection<ECameraMoveMode>::skNameMap = {
 	{ 0, "Free" },
 	{ 1, "Orbit" },
 };
 template<>
const int TEnumReflection<ECameraMoveMode>::skErrorValue = -1;

