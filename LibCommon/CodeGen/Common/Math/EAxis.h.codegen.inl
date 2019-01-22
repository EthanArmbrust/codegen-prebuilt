#include <codegen/EnumReflection.h>

enum EAxis: int;


template<>
const CEnumNameMap TEnumReflection<EAxis>::skNameMap = {
 	{ 0, "None" },
 	{ 1, "X" },
 	{ 2, "Y" },
 	{ 4, "Z" },
 	{ 3, "XY" },
 	{ 5, "XZ" },
 	{ 6, "YZ" },
 	{ 7, "XYZ" },
 };
template<>
const int TEnumReflection<EAxis>::skErrorValue = -1;

