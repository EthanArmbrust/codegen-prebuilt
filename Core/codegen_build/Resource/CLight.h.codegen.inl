#include <codegen/EnumReflection.h>

enum ELightType : unsigned int;

template<>
const CEnumNameMap TEnumReflection<ELightType>::skNameMap = {
 	{ 0, "LocalAmbient" },
 	{ 1, "Directional" },
 	{ 3, "Spot" },
 	{ 2, "Custom" },
 };
 template<>
const int TEnumReflection<ELightType>::skErrorValue = -1;

