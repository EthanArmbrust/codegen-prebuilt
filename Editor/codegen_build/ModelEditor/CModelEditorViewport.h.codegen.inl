#include <codegen/EnumReflection.h>

struct CModelEditorViewport {
	enum EDrawMode : unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<CModelEditorViewport::EDrawMode>::skNameMap = {
 	{ 0, "DrawMesh" },
 	{ 1, "DrawSphere" },
 	{ 2, "DrawSquare" },
 };
template<>
const int TEnumReflection<CModelEditorViewport::EDrawMode>::skErrorValue = -1;

