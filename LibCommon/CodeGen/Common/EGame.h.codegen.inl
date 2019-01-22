#include <codegen/EnumReflection.h>

enum EGame : int;

enum ERegion : int;

template<>
const CEnumNameMap TEnumReflection<enum EGame>::skNameMap = {
 	{ 0, "PrimeDemo" },
 	{ 1, "Prime" },
 	{ 2, "EchoesDemo" },
 	{ 3, "Echoes" },
 	{ 4, "CorruptionProto" },
 	{ 5, "Corruption" },
 	{ 6, "DKCReturns" },
 	{ 7, "Max" },
 	{ -1, "Invalid" },
 };
 template<>
const int TEnumReflection<enum EGame>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<ERegion>::skNameMap = {
 	{ 0, "NTSC" },
 	{ 1, "PAL" },
 	{ 2, "JPN" },
 	{ -1, "Unknown" },
 };
 template<>
const int TEnumReflection<ERegion>::skErrorValue = -1;

