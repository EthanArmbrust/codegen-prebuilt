#include <codegen/EnumReflection.h>

enum ECollisionFlag : long long int;

template<>
const CEnumNameMap TEnumReflection<ECollisionFlag>::skNameMap = {
 	{ 1, "CF_Unknown" },
 	{ 2, "CF_Stone" },
 	{ 4, "CF_Metal" },
 	{ 8, "CF_Grass" },
 	{ 16, "CF_Ice" },
 	{ 32, "CF_MetalGrating" },
 	{ 64, "CF_Phazon" },
 	{ 128, "CF_Dirt" },
 	{ 256, "CF_Lava" },
 	{ 512, "CF_AltMetal" },
 	{ 1024, "CF_Snow" },
 	{ 2048, "CF_Fabric" },
 	{ 4096, "CF_SlowMud" },
 	{ 8192, "CF_Mud" },
 	{ 16384, "CF_Glass" },
 	{ 32768, "CF_Shield" },
 	{ 65536, "CF_Sand" },
 	{ 131072, "CF_MothSeedOrganics" },
 	{ 262144, "CF_Web" },
 	{ 524288, "CF_Wood" },
 	{ 1048576, "CF_Organic" },
 	{ 2097152, "CF_Rubber" },
 	{ 4194304, "CF_ShootThru" },
 	{ 8388608, "CF_CameraThru" },
 	{ 16777216, "CF_ScanThru" },
 	{ 33554432, "CF_AiWalkThru" },
 	{ 67108864, "CF_FlippedTri" },
 	{ 134217728, "CF_Ceiling" },
 	{ 268435456, "CF_Wall" },
 	{ 536870912, "CF_Floor" },
 	{ 1073741824, "CF_AiBlock" },
 	{ -2147483648, "CF_JumpNotAllowed" },
 };
template<>
const int TEnumReflection<ECollisionFlag>::skErrorValue = 1;

