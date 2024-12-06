.set LOCALID_NURSE, 1

CastleTownTreble_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CastleTownTreble_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CastleTownTreble_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CASTLE_TOWN_TREBLE
	end

CastleTownTreble_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
