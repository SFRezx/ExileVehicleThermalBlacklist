//add this anywhere in the config
class CfgThermalOptions
{
	blacklistedThermals[] =
	{
		"B_MRAP_01_hmg_F",
		"B_MRAP_01_gmg_F"
	};
};


// add contents of this to CfgExileCustomCode
class CfgExileCustomCode
{
	ExileServer_object_vehicle_carefulCreateVehicle = "Overrides\ExileServer_object_vehicle_carefulCreateVehicle.sqf";
};