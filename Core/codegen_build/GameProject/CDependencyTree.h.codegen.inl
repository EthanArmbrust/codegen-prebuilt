#include <codegen/EnumReflection.h>

enum EDependencyNodeType : unsigned long long int;

template<>
const CEnumNameMap TEnumReflection<EDependencyNodeType>::skNameMap = {
 	{ 1414677829, "DependencyTree" },
 	{ 1381188688, "Resource" },
 	{ 1396918606, "ScriptInstance" },
 	{ 1396920402, "ScriptProperty" },
 	{ 1129467986, "CharacterProperty" },
 	{ 1396918354, "SetCharacter" },
 	{ 1396788813, "SetAnimation" },
 	{ 1163284052, "AnimEvent" },
 	{ 1095910721, "Area" },
 };
template<>
const int TEnumReflection<EDependencyNodeType>::skErrorValue = -1;

