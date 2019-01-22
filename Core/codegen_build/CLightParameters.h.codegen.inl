#include <codegen/EnumReflection.h>

enum EWorldLightingOptions : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EWorldLightingOptions>::skNameMap = {
 	{ 0, "Unknown1" },
 	{ 1, "NormalLighting" },
 	{ 2, "Unknown2" },
 	{ 3, "DisableWorldLighting" },
 };
template<>
const int TEnumReflection<EWorldLightingOptions>::skErrorValue = 2;

