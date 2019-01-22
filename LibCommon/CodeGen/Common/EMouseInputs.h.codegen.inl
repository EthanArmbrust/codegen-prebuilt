#include <codegen/EnumReflection.h>

enum EMouseInput: int;


template<>
const CEnumNameMap TEnumReflection<EMouseInput>::skNameMap = {
 	{ 1, "LeftButton" },
 	{ 2, "MiddleButton" },
 	{ 4, "RightButton" },
 };
template<>
const int TEnumReflection<EMouseInput>::skErrorValue = -1;

