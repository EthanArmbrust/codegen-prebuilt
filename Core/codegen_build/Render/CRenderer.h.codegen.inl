#include <codegen/EnumReflection.h>

enum EBloomMode : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EBloomMode>::skNameMap = {
 	{ 0, "NoBloom" },
 	{ 1, "Bloom" },
 	{ 2, "BloomMaps" },
 	{ 3, "FakeBloom" },
 };
 template<>
const int TEnumReflection<EBloomMode>::skErrorValue = -1;

