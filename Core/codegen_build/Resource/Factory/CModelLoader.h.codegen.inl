#include <codegen/EnumReflection.h>

enum EModelLoaderFlag : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EModelLoaderFlag>::skNameMap = {
 	{ 0, "None" },
 	{ 1, "HalfPrecisionPositions" },
 	{ 2, "HalfPrecisionNormals" },
 	{ 4, "LightmapUVs" },
 	{ 8, "VisibilityGroups" },
 	{ 16, "Skinned" },
 };
template<>
const int TEnumReflection<EModelLoaderFlag>::skErrorValue = -1;

