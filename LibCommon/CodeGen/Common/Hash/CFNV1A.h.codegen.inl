#include <codegen/EnumReflection.h>

struct CFNV1A {
	enum EHashLength: unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<CFNV1A::EHashLength>::skNameMap = {
 	{ 0, "32Bit" },
 	{ 1, "64Bit" },
 };
template<>
const int TEnumReflection<CFNV1A::EHashLength>::skErrorValue = -1;

