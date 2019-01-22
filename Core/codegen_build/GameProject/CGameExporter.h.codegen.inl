#include <codegen/EnumReflection.h>

struct CGameExporter {
	enum EExportStep : unsigned int;
};

enum EDiscType : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EDiscType>::skNameMap = {
 	{ 0, "Normal" },
 	{ 1, "WiiDeAsobu" },
 	{ 2, "Trilogy" },
 };
template<>
const int TEnumReflection<EDiscType>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<CGameExporter::EExportStep>::skNameMap = {
 	{ 0, "ES_ExtractDisc" },
 	{ 1, "ES_ExportCooked" },
 	{ 2, "ES_GenerateRaw" },
 	{ 3, "ES_NumSteps" },
 };
template<>
const int TEnumReflection<CGameExporter::EExportStep>::skErrorValue = -1;

