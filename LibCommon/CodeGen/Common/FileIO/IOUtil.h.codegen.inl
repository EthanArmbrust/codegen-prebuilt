#include <codegen/EnumReflection.h>

enum EEndian: int;


template<>
const CEnumNameMap TEnumReflection<EEndian>::skNameMap = {
 	{ 0, "LittleEndian" },
 	{ 1, "BigEndian" },
 };
template<>
const int TEnumReflection<EEndian>::skErrorValue = -1;

