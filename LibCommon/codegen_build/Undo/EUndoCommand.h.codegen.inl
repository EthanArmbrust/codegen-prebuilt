#include <codegen/EnumReflection.h>

enum EUndoCommand: int;


template<>
const CEnumNameMap TEnumReflection<EUndoCommand>::skNameMap = {
 	{ 0, "TranslateNodeCmd" },
 	{ 1, "RotateNodeCmd" },
 	{ 2, "ScaleNodeCmd" },
 	{ 3, "EditPropertyCmd" },
 };
template<>
const int TEnumReflection<EUndoCommand>::skErrorValue = -1;

