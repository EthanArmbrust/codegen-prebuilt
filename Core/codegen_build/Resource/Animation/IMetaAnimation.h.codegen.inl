#include <codegen/EnumReflection.h>

enum EMetaAnimType : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EMetaAnimType>::skNameMap = {
 	{ 0, "Play" },
 	{ 1, "Blend" },
 	{ 2, "PhaseBlend" },
 	{ 3, "Random" },
 	{ 4, "Sequence" },
 };
 
template<>
const int TEnumReflection<EMetaAnimType>::skErrorValue = -1;

