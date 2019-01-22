#include <codegen/EnumReflection.h>

enum EResEntryFlag : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EResEntryFlag>::skNameMap = {
 	{ 1, "NeedsRecook" },
 	{ 2, "IsBaseGameResource" },
 	{ 4, "Hidden" },
 	{ 8, "HasBeenModified" },
 	{ 16, "AutoResName" },
 	{ 32, "AutoResDir" },
 };
template<>
const int TEnumReflection<EResEntryFlag>::skErrorValue = -1;

