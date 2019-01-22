#include <codegen/EnumReflection.h>

enum EKeyInput: int;


template<>
const CEnumNameMap TEnumReflection<EKeyInput>::skNameMap = {
 	{ 1, "Ctrl" },
 	{ 2, "Shift" },
 	{ 4, "Q" },
 	{ 8, "W" },
 	{ 16, "E" },
 	{ 32, "A" },
 	{ 64, "S" },
 	{ 128, "D" },
 };
template<>
const int TEnumReflection<EKeyInput>::skErrorValue = -1;

