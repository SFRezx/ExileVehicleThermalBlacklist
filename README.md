this will only work for vehicles created using ExileServer_object_vehicle_carefulCreateVehicle (this should work for any default stuff like trader or the virtual garage ) for example if you spawn a vehicle using infistar it wont apply


copy the contents of Exile.MAPNAME/config.cpp to your config
add any vehicles you dont want having thermal into blacklistedThermals[]

FOR DMS MISSIONS
if you use the a3_dms missions system replace a3_dms\scripts\fn_SpawnNonPersistentVehicle.sqf with the file provided


to add support for addition mods find where the vehicle is created and modify below to fit it

private _vehicleClassName = typeOf _vehicleObject;

if (_vehicleClassName in getArray(missionConfigFile >> "CfgThermalOptions" >> "blacklistedThermals")) then 
{
	_vehicleObject disableTIEquipment true;
};



# License:
This work is protected by [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)](https://creativecommons.org/licenses/by-nc-sa/4.0/). By using, downloading, or copying any of the work contained, you agree to the license included.
