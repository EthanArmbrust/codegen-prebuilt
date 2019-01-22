#include <codegen/EnumReflection.h>

struct CScriptTemplate {
	enum ERotationType : unsigned int;
	enum EScaleType : unsigned int;
	struct SEditorAsset {
		enum EAssetType : unsigned int;
		enum EAssetSource : unsigned int;
	};
};

enum EAttachType : unsigned int;

template<>
const CEnumNameMap TEnumReflection<EAttachType>::skNameMap = {
 	{ 0, "Attach" },
 	{ 1, "Follow" },
 };
template<>
const int TEnumReflection<EAttachType>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<CScriptTemplate::ERotationType>::skNameMap = {
 	{ 0, "RotationEnabled" },
 	{ 1, "RotationDisabled" },
 };
template<>
const int TEnumReflection<CScriptTemplate::ERotationType>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<CScriptTemplate::EScaleType>::skNameMap = {
 	{ 0, "ScaleEnabled" },
 	{ 1, "ScaleDisabled" },
 	{ 2, "ScaleVolume" },
 };

template<>
const int TEnumReflection<CScriptTemplate::EScaleType>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<CScriptTemplate::SEditorAsset::EAssetType>::skNameMap = {
 	{ 0, "Model" },
 	{ 1, "AnimParams" },
 	{ 2, "Billboard" },
 	{ 3, "Collision" },
 };

template<>
const int TEnumReflection<CScriptTemplate::SEditorAsset::EAssetType>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<CScriptTemplate::SEditorAsset::EAssetSource>::skNameMap = {
 	{ 0, "Property" },
 	{ 1, "File" },
 };
template<>
const int TEnumReflection<CScriptTemplate::SEditorAsset::EAssetSource>::skErrorValue = -1;

