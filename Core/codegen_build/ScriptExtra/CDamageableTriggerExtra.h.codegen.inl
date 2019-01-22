#include <codegen/EnumReflection.h>

struct CDamageableTriggerExtra {
	enum ERenderSide : unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<CDamageableTriggerExtra::ERenderSide>::skNameMap = {
 	{ 0, "NoRender" },
 	{ 1, "North" },
 	{ 2, "South" },
 	{ 4, "West" },
 	{ 8, "East" },
 	{ 16, "Up" },
 	{ 32, "Down" },
 };
template<>
const int TEnumReflection<CDamageableTriggerExtra::ERenderSide>::skErrorValue = -1;

