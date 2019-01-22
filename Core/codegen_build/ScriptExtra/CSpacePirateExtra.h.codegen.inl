#include <codegen/EnumReflection.h>

enum EVulnerabilityTypeMP1 : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EVulnerabilityTypeMP1>::skNameMap = {
 	{ 0, "DoubleDamage" },
 	{ 1, "Normal" },
 	{ 2, "Reflect" },
 	{ 3, "Immune" },
 	{ 4, "PassThru" },
 	{ 5, "DirectDouble" },
 	{ 6, "DirectNormal" },
 	{ 7, "DirectImmune" },
 };
template<>
const int TEnumReflection<EVulnerabilityTypeMP1>::skErrorValue = -1;

