#include <codegen/EnumReflection.h>

enum ERenderCommand: int;


template<>
const CEnumNameMap TEnumReflection<ERenderCommand>::skNameMap = {
 	{ 0, "DrawMesh" },
 	{ 1, "DrawOpaqueParts" },
 	{ 2, "DrawTransparentParts" },
 	{ 3, "DrawSelection" },
 };
template<>
const int TEnumReflection<ERenderCommand>::skErrorValue = -1;

