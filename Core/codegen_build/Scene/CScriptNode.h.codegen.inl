#include <codegen/EnumReflection.h>

struct CScriptNode {
	enum EGameModeVisibility : unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<CScriptNode::EGameModeVisibility>::skNameMap = {
 	{ 0, "Visible" },
 	{ 1, "NotVisible" },
 	{ 2, "Untested" },
 };
template<>
const int TEnumReflection<CScriptNode::EGameModeVisibility>::skErrorValue = -1;

