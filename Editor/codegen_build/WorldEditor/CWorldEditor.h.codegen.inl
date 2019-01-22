#include <codegen/EnumReflection.h>

enum EWorldEditorMode : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EWorldEditorMode>::skNameMap = {
 	{ 0, "WEM_EditWorldInfo" },
 	{ 1, "WEM_EditScript" },
 	{ 2, "WEM_EditPOIMappings" },
 };
template<>
const int TEnumReflection<EWorldEditorMode>::skErrorValue = -1;

