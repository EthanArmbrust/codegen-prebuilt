#include <codegen/EnumReflection.h>

enum ERenderOption : unsigned int;

template<>
const CEnumNameMap TEnumReflection<ERenderOption>::skNameMap = {
 	{ 0, "None" },
 	{ 1, "EnableUVScroll" },
 	{ 2, "EnableBackfaceCull" },
 	{ 4, "EnableOccluders" },
 	{ 8, "NoMaterialSetup" },
 	{ 16, "EnableBloom" },
 	{ 32, "NoAlpha" },
 };
 template<>
const int TEnumReflection<ERenderOption>::skErrorValue = -1;

