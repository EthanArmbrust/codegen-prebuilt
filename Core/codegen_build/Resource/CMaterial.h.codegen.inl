#include <codegen/EnumReflection.h>

enum EMaterialOption : unsigned long int;

struct CMaterial {
	enum EShaderStatus : unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<EMaterialOption>::skNameMap = {
 	{ 0, "None" },
 	{ 8, "Konst" },
 	{ 16, "Transparent" },
 	{ 32, "Masked" },
 	{ 64, "Reflection" },
 	{ 128, "DepthWrite" },
 	{ 256, "SurfaceReflection" },
 	{ 512, "Occluder" },
 	{ 1024, "IndStage" },
 	{ 2048, "Lightmap" },
 	{ 8192, "ShortTexCoord" },
 	{ 12280, "AllMP1Settings" },
 	{ 524288, "DrawWhiteAmbientDKCR" },
 };
template<>
const int TEnumReflection<EMaterialOption>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<CMaterial::EShaderStatus>::skNameMap = {
 	{ 0, "NoShader" },
 	{ 1, "ShaderExists" },
 	{ 2, "ShaderFailed" },
 };
template<>
const int TEnumReflection<CMaterial::EShaderStatus>::skErrorValue = -1;

