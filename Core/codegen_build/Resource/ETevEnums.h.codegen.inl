#include <codegen/EnumReflection.h>

enum ETevColorInput: unsigned int;

enum ETevAlphaInput: unsigned int;

enum ETevOutput: unsigned int;

enum ETevKSel: unsigned int;

enum ETevRasSel: unsigned int;

enum EUVAnimMode: int;


template<>
const CEnumNameMap TEnumReflection<ETevColorInput>::skNameMap = {
 	{ 0, "PrevRGB" },
 	{ 1, "PrevAAA" },
 	{ 2, "Color0RGB" },
 	{ 3, "Color0AAA" },
 	{ 4, "Color1RGB" },
 	{ 5, "Color1AAA" },
 	{ 6, "Color2RGB" },
 	{ 7, "Color2AAA" },
 	{ 8, "TextureRGB" },
 	{ 9, "TextureAAA" },
 	{ 10, "RasRGB" },
 	{ 11, "RasAAA" },
 	{ 12, "OneRGB" },
 	{ 13, "HalfRGB" },
 	{ 14, "KonstRGB" },
 	{ 15, "ZeroRGB" },
 };
template<>
const int TEnumReflection<ETevColorInput>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<ETevAlphaInput>::skNameMap = {
 	{ 0, "PrevAlpha" },
 	{ 1, "Color0Alpha" },
 	{ 2, "Color1Alpha" },
 	{ 3, "Color2Alpha" },
 	{ 4, "TextureAlpha" },
 	{ 5, "RasAlpha" },
 	{ 6, "KonstAlpha" },
 	{ 7, "ZeroAlpha" },
 };
template<>
const int TEnumReflection<ETevAlphaInput>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<ETevOutput>::skNameMap = {
 	{ 0, "PrevReg" },
 	{ 1, "Color0Reg" },
 	{ 2, "Color1Reg" },
 	{ 3, "Color2Reg" },
 };
template<>
const int TEnumReflection<ETevOutput>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<ETevKSel>::skNameMap = {
 	{ 0, "KonstOne" },
 	{ 1, "KonstSevenEighths" },
 	{ 2, "KonstThreeFourths" },
 	{ 3, "KonstFiveEighths" },
 	{ 4, "KonstOneHalf" },
 	{ 5, "KonstThreeEighths" },
 	{ 6, "KonstOneFourth" },
 	{ 7, "KonstOneEighth" },
 	{ 12, "Konst0_RGB" },
 	{ 13, "Konst1_RGB" },
 	{ 14, "Konst2_RGB" },
 	{ 15, "Konst3_RGB" },
 	{ 16, "Konst0_R" },
 	{ 17, "Konst1_R" },
 	{ 18, "Konst2_R" },
 	{ 19, "Konst3_R" },
 	{ 20, "Konst0_G" },
 	{ 21, "Konst1_G" },
 	{ 22, "Konst2_G" },
 	{ 23, "Konst3_G" },
 	{ 24, "Konst0_B" },
 	{ 25, "Konst1_B" },
 	{ 26, "Konst2_B" },
 	{ 27, "Konst3_B" },
 	{ 28, "Konst0_A" },
 	{ 29, "Konst1_A" },
 	{ 30, "Konst2_A" },
 	{ 31, "Konst3_A" },
 };
template<>
const int TEnumReflection<ETevKSel>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<ETevRasSel>::skNameMap = {
 	{ 0, "RasColor0" },
 	{ 1, "RasColor1" },
 	{ 2, "RasAlpha0" },
 	{ 3, "RasAlpha1" },
 	{ 4, "RasColor0A0" },
 	{ 5, "RasColor1A1" },
 	{ 6, "RasColorZero" },
 	{ 7, "RasAlphaBump" },
 	{ 8, "RasAlphaBumpN" },
 	{ 255, "RasColorNull" },
 };
template<>
const int TEnumReflection<ETevRasSel>::skErrorValue = -1;

template<>
const CEnumNameMap TEnumReflection<EUVAnimMode>::skNameMap = {
 	{ 0, "InverseMV" },
 	{ 1, "InverseMVTranslated" },
 	{ 2, "UVScroll" },
 	{ 3, "UVRotation" },
 	{ 4, "HFilmstrip" },
 	{ 5, "VFilmstrip" },
 	{ 6, "ModelMatrix" },
 	{ 7, "ConvolutedModeA" },
 	{ 8, "ConvolutedModeB" },
 	{ 10, "SimpleMode" },
 	{ -1, "NoUVAnim" },
 };
template<>
const int TEnumReflection<EUVAnimMode>::skErrorValue = -1;

