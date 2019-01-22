#include <codegen/EnumReflection.h>

enum EBlendFactor: int;

enum EPrimitiveType: int;


template<>
const CEnumNameMap TEnumReflection<EBlendFactor>::skNameMap = {
 	{ 0, "Zero" },
 	{ 1, "One" },
 	{ 768, "SrcColor" },
 	{ 769, "InvSrcColor" },
 	{ 770, "SrcAlpha" },
 	{ 771, "InvSrcAlpha" },
 	{ 772, "DstAlpha" },
 	{ 773, "InvDstAlpha" },
 };
template<>
const int TEnumReflection<EBlendFactor>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<EPrimitiveType>::skNameMap = {
 	{ 128, "Quads" },
 	{ 144, "Triangles" },
 	{ 152, "TriangleStrip" },
 	{ 160, "TriangleFan" },
 	{ 168, "Lines" },
 	{ 176, "LineStrip" },
 	{ 184, "Points" },
 };
template<>
const int TEnumReflection<EPrimitiveType>::skErrorValue = -1;

