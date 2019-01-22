#include <codegen/EnumReflection.h>

struct CGizmo {
	enum EGizmoMode : unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<CGizmo::EGizmoMode>::skNameMap = {
 	{ 0, "Translate" },
 	{ 1, "Rotate" },
 	{ 2, "Scale" },
 	{ 3, "Off" },
 };
template<>
const int TEnumReflection<CGizmo::EGizmoMode>::skErrorValue = -1;

