#include <codegen/EnumReflection.h>

struct CModelEditorWindow {
	enum EModelEditorWidget : unsigned int;
};

template<>
const CEnumNameMap TEnumReflection<CModelEditorWindow::EModelEditorWidget>::skNameMap = {
 	{ 0, "SetSelectComboBox" },
 	{ 1, "MatSelectComboBox" },
 	{ 2, "EnableTransparencyCheckBox" },
 	{ 3, "EnablePunchthroughCheckBox" },
 	{ 4, "EnableReflectionCheckBox" },
 	{ 5, "EnableSurfaceReflectionCheckBox" },
 	{ 6, "EnableDepthWriteCheckBox" },
 	{ 7, "EnableOccluderCheckBox" },
 	{ 8, "EnableLightmapCheckBox" },
 	{ 9, "EnableLightingCheckBox" },
 	{ 10, "SourceBlendComboBox" },
 	{ 11, "DestBlendComboBox" },
 	{ 12, "IndTextureResSelector" },
 	{ 13, "KonstColorPickerA" },
 	{ 14, "KonstColorPickerB" },
 	{ 15, "KonstColorPickerC" },
 	{ 16, "KonstColorPickerD" },
 	{ 17, "PassTableWidget" },
 	{ 18, "TevKColorSelComboBox" },
 	{ 19, "TevKAlphaSelComboBox" },
 	{ 20, "TevRasSelComboBox" },
 	{ 21, "TevTexSelComboBox" },
 	{ 22, "TevTexSourceComboBox" },
 	{ 23, "PassTextureResSelector" },
 	{ 24, "TevColorComboBoxA" },
 	{ 25, "TevColorComboBoxB" },
 	{ 26, "TevColorComboBoxC" },
 	{ 27, "TevColorComboBoxD" },
 	{ 28, "TevColorOutputComboBox" },
 	{ 29, "TevAlphaComboBoxA" },
 	{ 30, "TevAlphaComboBoxB" },
 	{ 31, "TevAlphaComboBoxC" },
 	{ 32, "TevAlphaComboBoxD" },
 	{ 33, "TevAlphaOutputComboBox" },
 	{ 34, "AnimModeComboBox" },
 	{ 35, "AnimParamASpinBox" },
 	{ 36, "AnimParamBSpinBox" },
 	{ 37, "AnimParamCSpinBox" },
 	{ 38, "AnimParamDSpinBox" },
 };
 template<>
const int TEnumReflection<CModelEditorWindow::EModelEditorWidget>::skErrorValue = -1;

