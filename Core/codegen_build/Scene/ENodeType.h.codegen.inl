#include <codegen/EnumReflection.h>

enum ENodeType : unsigned int;

template<>
const CEnumNameMap TEnumReflection<ENodeType>::skNameMap = {
 	{ 0, "None" },
 	{ 1, "Root" },
 	{ 2, "Model" },
 	{ 4, "Character" },
 	{ 8, "Static" },
 	{ 16, "Collision" },
 	{ 32, "Script" },
 	{ 64, "ScriptExtra" },
 	{ 128, "ScriptAttach" },
 	{ 256, "Light" },
 	{ -1, "All" },
 };
template<>
const int TEnumReflection<ENodeType>::skErrorValue = -1;

