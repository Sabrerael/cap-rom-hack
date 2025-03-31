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

CastleTownTreble_PokemonCenter_1F_EventScript_Man::
	msgbox CastleTownTreble_PokemonCenter_1F_Text_Man, MSGBOX_NPC
	end

CastleTownTreble_PokemonCenter_1F_EventScript_OldWoman::
	msgbox CastleTownTreble_PokemonCenter_1F_Text_OldWoman, MSGBOX_NPC
	end

CastleTownTreble_PokemonCenter_1F_Text_Man:
    .string "Have you heard? Apparently, a crew\n"
	.string "of pirates got caught recently.\p"
	.string "But their ship? It flew off into\n"
	.string "the sky with all the treasure!$"

CastleTownTreble_PokemonCenter_1F_Text_OldWoman:
    .string "I love sitting here with a nice\n"
	.string "cup of tea…\p"
	.string "It's so relaxing.$"
