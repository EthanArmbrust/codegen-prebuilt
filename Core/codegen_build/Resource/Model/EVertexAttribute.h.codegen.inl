#include <codegen/EnumReflection.h>

enum EVertexAttribute : unsigned long int;

template<>
const CEnumNameMap TEnumReflection<EVertexAttribute>::skNameMap = {
 	{ 0, "None" },
 	{ 1, "Position" },
 	{ 2, "Normal" },
 	{ 4, "Color0" },
 	{ 8, "Color1" },
 	{ 16, "Tex0" },
 	{ 32, "Tex1" },
 	{ 64, "Tex2" },
 	{ 128, "Tex3" },
 	{ 256, "Tex4" },
 	{ 512, "Tex5" },
 	{ 1024, "Tex6" },
 	{ 2048, "Tex7" },
 	{ 4096, "BoneIndices" },
 	{ 8192, "BoneWeights" },
 	{ 16384, "PosMtx" },
 	{ 32768, "Tex0Mtx" },
 	{ 65536, "Tex1Mtx" },
 	{ 131072, "Tex2Mtx" },
 	{ 262144, "Tex3Mtx" },
 	{ 524288, "Tex4Mtx" },
 	{ 1048576, "Tex5Mtx" },
 	{ 2097152, "Tex6Mtx" },
 };
template<>
const int TEnumReflection<EVertexAttribute>::skErrorValue = -1;

