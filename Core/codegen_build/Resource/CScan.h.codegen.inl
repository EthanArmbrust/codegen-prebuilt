#include <codegen/EnumReflection.h>

struct CScan {
	enum ELogbookCategory : unsigned int;
};
template<>
const CEnumNameMap TEnumReflection<CScan::ELogbookCategory>::skNameMap = {
 	{ 0, "None" },
 	{ 1, "PirateData" },
 	{ 2, "ChozoLore" },
 	{ 3, "Creatures" },
 	{ 4, "Research" },
 };
template<>
const int TEnumReflection<CScan::ELogbookCategory>::skErrorValue = -1;

