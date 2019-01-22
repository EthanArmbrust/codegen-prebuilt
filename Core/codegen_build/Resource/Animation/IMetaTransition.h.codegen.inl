#include <codegen/EnumReflection.h>

enum EMetaTransType : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EMetaTransType>::skNameMap = {
 	{ 0, "MetaAnim" },
 	{ 1, "Trans" },
 	{ 2, "PhaseTrans" },
 	{ 3, "Snap" },
 	{ 4, "Type4" },
 };
template<>
const int TEnumReflection<EMetaTransType>::skErrorValue = -1;

