.set LOCALID_NURSE, 1

MiddleTownWest_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MiddleTownWest_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MiddleTownWest_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MIDDLE_TOWN_WEST
	end

MiddleTownWest_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
