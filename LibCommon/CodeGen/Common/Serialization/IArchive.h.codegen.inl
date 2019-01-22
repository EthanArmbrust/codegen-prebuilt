#include <codegen/EnumReflection.h>

enum ESerialHint: unsigned int;

enum EArchiveFlags: unsigned int;

struct IArchive {
	enum EArchiveVersion: unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<ESerialHint>::skNameMap = {
 	{ 1, "SH_HexDisplay" },
 	{ 2, "SH_Optional" },
 	{ 4, "SH_NeverSave" },
 	{ 8, "SH_AlwaysSave" },
 	{ 16, "SH_Attribute" },
 	{ 32, "SH_IgnoreName" },
 	{ 64, "SH_InheritHints" },
 	{ 128, "SH_Proxy" },
 };
template<>
const int TEnumReflection<ESerialHint>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<EArchiveFlags>::skNameMap = {
 	{ 1, "AF_Reader" },
 	{ 2, "AF_Writer" },
 	{ 4, "AF_Text" },
 	{ 8, "AF_Binary" },
 	{ 16, "AF_NoSkipping" },
 };
template<>
const int TEnumReflection<EArchiveFlags>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<IArchive::EArchiveVersion>::skNameMap = {
 	{ 0, "ArVer_Initial" },
 	{ 1, "ArVer_32BitBinarySize" },
 	{ 2, "ArVer_Refactor" },
 	{ 3, "ArVer_MapAttributes" },
 	{ 4, "ArVer_GameEnumClass" },
 	{ 5, "ArVer_Max" },
 };
template<>
const int TEnumReflection<IArchive::EArchiveVersion>::skErrorValue = -1;

