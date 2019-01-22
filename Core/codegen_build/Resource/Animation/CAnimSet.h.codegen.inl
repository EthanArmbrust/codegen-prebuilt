#include <codegen/EnumReflection.h>

enum EOverlayType : unsigned long int;

template<>
const CEnumNameMap TEnumReflection<EOverlayType>::skNameMap = {
 	{ 1179802190, "Frozen" },
 	{ 1213812818, "Hypermode" },
 	{ 1094928708, "Acid" },
 	{ 1481785689, "XRay" },
 };
template<>
const int TEnumReflection<EOverlayType>::skErrorValue = -1;

