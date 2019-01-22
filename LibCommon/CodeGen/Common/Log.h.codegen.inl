#include <codegen/EnumReflection.h>

namespace NLog {
	enum EMsgType: int;
}

template<>
const CEnumNameMap TEnumReflection<NLog::EMsgType>::skNameMap = {
 	{ 0, "Standard" },
 	{ 1, "Warning" },
 	{ 2, "Error" },
 	{ 3, "Fatal" },
 };
template<>
const int TEnumReflection<NLog::EMsgType>::skErrorValue = -1;

