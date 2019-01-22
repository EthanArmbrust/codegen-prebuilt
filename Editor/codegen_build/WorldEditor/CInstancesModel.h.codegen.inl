#include <codegen/EnumReflection.h>

struct CInstancesModel {
	enum EInstanceModelType : unsigned int;
};
template<>
const CEnumNameMap TEnumReflection<CInstancesModel::EInstanceModelType>::skNameMap = {
 	{ 0, "Layers" },
 	{ 1, "Types" },
 };
 
template<> 
const int TEnumReflection<CInstancesModel::EInstanceModelType>::skErrorValue = -1;

