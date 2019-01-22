#include <codegen/EnumReflection.h>

enum EShowFlag : int;

template<>
const CEnumNameMap TEnumReflection<EShowFlag>::skNameMap = {
 	{ 0, "None" },
 	{ 1, "SplitWorld" },
 	{ 2, "MergedWorld" },
 	{ 4, "WorldCollision" },
 	{ 8, "ObjectGeometry" },
 	{ 16, "ObjectCollision" },
 	{ 24, "Objects" },
 	{ 32, "Lights" },
 	{ 64, "Sky" },
 	{ 128, "Skeletons" },
 	{ -1, "All" },
 };
template<>
const int TEnumReflection<EShowFlag>::skErrorValue = -1;

