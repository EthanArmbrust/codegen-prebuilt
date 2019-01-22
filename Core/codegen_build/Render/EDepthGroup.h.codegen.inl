#include <codegen/EnumReflection.h>

enum EDepthGroup: int;


template<>
const CEnumNameMap TEnumReflection<EDepthGroup>::skNameMap = {
 	{ 0, "Background" },
 	{ 1, "Midground" },
 	{ 2, "Foreground" },
 	{ 3, "UI" },
 };
template<>
const int TEnumReflection<EDepthGroup>::skErrorValue = -1;

