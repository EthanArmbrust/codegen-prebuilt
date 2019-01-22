#include <codegen/EnumReflection.h>

struct CFrustumPlanes {
	enum EFrustumSide : unsigned int;
};
template<>
const CEnumNameMap TEnumReflection<CFrustumPlanes::EFrustumSide>::skNameMap = {
 	{ 0, "kNearPlane" },
 	{ 1, "kFarPlane" },
 	{ 2, "kTopPlane" },
 	{ 3, "kBottomPlane" },
 	{ 4, "kLeftPlane" },
 	{ 5, "kRightPlane" },
 };
template<>
const int TEnumReflection<CFrustumPlanes::EFrustumSide>::skErrorValue = -1;

