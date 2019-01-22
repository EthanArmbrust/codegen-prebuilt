#include <codegen/EnumReflection.h>

enum ELinkType : unsigned int;

template<>
const CEnumNameMap TEnumReflection<ELinkType>::skNameMap = {
 	{ 0, "Incoming" },
 	{ 1, "Outgoing" },
 };
template<>
const int TEnumReflection<ELinkType>::skErrorValue = -1;

