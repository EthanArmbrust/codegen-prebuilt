#include <codegen/EnumReflection.h>

enum EPropertyFlag : long long int;

enum EPropertyType: unsigned long long int;

enum ECookPreference : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EPropertyFlag>::skNameMap = {
 	{ 1, "IsInitialized" },
 	{ 2, "IsArchetype" },
 	{ 4, "IsArrayArchetype" },
 	{ 8, "IsAtomic" },
 	{ 16, "IsIntrinsic" },
 	{ 32, "IsDirty" },
 	{ 1073741824, "HasCachedNameCheck" },
 	{ -2147483648, "HasCorrectPropertyName" },
 	{ 14, "InheritableFlags" },
 };
template<>
const int TEnumReflection<EPropertyFlag>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<EPropertyType>::skNameMap = {
 	{ 1112493900, "Bool" },
 	{ 1113150533, "Byte" },
 	{ 1397248596, "Short" },
 	{ 1229870112, "Int" },
 	{ 1380270412, "Float" },
 	{ 1128812361, "Choice" },
 	{ 1162761549, "Enum" },
 	{ 1179402567, "Flags" },
 	{ 1398035015, "String" },
 	{ 1447379796, "Vector" },
 	{ 1129270354, "Color" },
 	{ 1095979860, "Asset" },
 	{ 1397706308, "Sound" },
 	{ 1095649613, "Animation" },
 	{ 1095650643, "AnimationSet" },
 	{ 1397837379, "Sequence" },
 	{ 1397771342, "Spline" },
 	{ 1196771652, "Guid" },
 	{ 1347310674, "Pointer" },
 	{ 1398035011, "Struct" },
 	{ 1095914073, "Array" },
 	{ 1229870660, "Invalid" },
 };
template<>
const int TEnumReflection<EPropertyType>::skErrorValue = 1229870660;

template<>
const CEnumNameMap TEnumReflection<ECookPreference>::skNameMap = {
 	{ 0, "Default" },
 	{ 1, "Always" },
 	{ 2, "Never" },
 };
template<>
const int TEnumReflection<ECookPreference>::skErrorValue = -1;

