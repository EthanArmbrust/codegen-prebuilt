#include <codegen/EnumReflection.h>

struct CPoiMapSidebar {
	enum EHighlightMode : unsigned int;
	enum EPickType : unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<CPoiMapSidebar::EHighlightMode>::skNameMap = {
 	{ 0, "HighlightAll" },
 	{ 1, "HighlightNone" },
 	{ 2, "HighlightSelected" },
 };
template<>
const int TEnumReflection<CPoiMapSidebar::EHighlightMode>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<CPoiMapSidebar::EPickType>::skNameMap = {
 	{ 0, "NotPicking" },
 	{ 1, "AddMeshes" },
 	{ 2, "RemoveMeshes" },
 	{ 3, "AddPOIs" },
 };
template<>
const int TEnumReflection<enum CPoiMapSidebar::EPickType>::skErrorValue = -1;

