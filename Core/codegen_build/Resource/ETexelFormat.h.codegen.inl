#include <codegen/EnumReflection.h>

enum ETexelFormat: int;

enum EGXPaletteFormat: int;


template<>
const CEnumNameMap TEnumReflection<ETexelFormat>::skNameMap = {
 	{ 0, "GX_I4" },
 	{ 1, "GX_I8" },
 	{ 2, "GX_IA4" },
 	{ 3, "GX_IA8" },
 	{ 4, "GX_C4" },
 	{ 5, "GX_C8" },
 	{ 6, "GX_C14x2" },
 	{ 7, "GX_RGB565" },
 	{ 8, "GX_RGB5A3" },
 	{ 9, "GX_RGBA8" },
 	{ 10, "GX_CMPR" },
 	{ 11, "Luminance" },
 	{ 12, "LuminanceAlpha" },
 	{ 13, "RGBA4" },
 	{ 14, "RGB565" },
 	{ 15, "RGBA8" },
 	{ 16, "DXT1" },
 	{ -1, "Invalid" },
 };
template<>
const int TEnumReflection<ETexelFormat>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<EGXPaletteFormat>::skNameMap = {
 	{ 0, "IA8" },
 	{ 1, "RGB565" },
 	{ 2, "RGB5A3" },
 };
template<>
const int TEnumReflection<EGXPaletteFormat>::skErrorValue = -1;

