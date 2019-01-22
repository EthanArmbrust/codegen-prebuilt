#include <codegen/EnumReflection.h>

struct CGraphics {
	enum ELightingMode : unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<CGraphics::ELightingMode>::skNameMap = {
 	{ 0, "None" },
 	{ 1, "Basic" },
 	{ 2, "World" },
 };
template<>
const int TEnumReflection<CGraphics::ELightingMode>::skErrorValue = -1;

