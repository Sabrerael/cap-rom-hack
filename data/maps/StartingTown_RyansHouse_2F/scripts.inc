StartingTown_RyansHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, StartingTown_RyansHouse_2F_OnTransition
	.byte 0

StartingTown_RyansHouse_2F_OnTransition:
	call_if_eq VAR_STARTING_TOWN_INTRO_STATE, 2, StartingTown_RyansHouse_2F_EventScript_BlockStairsUntilClockIsSet
	end

StartingTown_RyansHouse_2F_EventScript_BlockStairsUntilClockIsSet::
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
	return

StartingTown_RyansHouse_2F_EventScript_WallClock::
	setvar VAR_0x8004, MALE
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
	call PlayersHouse_2F_EventScript_SetWallClock
	delay 30
	setvar VAR_STARTING_TOWN_INTRO_STATE, 4
	setflag FLAG_SET_WALL_CLOCK
	clearFlag FLAG_HIDE_PLAYERS_HOUSE_2F_BULBASAUR_POKEBALL
	clearFlag FLAG_HIDE_PLAYERS_HOUSE_2F_CHARMANDER_POKEBALL
	clearFlag FLAG_HIDE_PLAYERS_HOUSE_2F_SQUIRTLE_POKEBALL
	releaseall
	end

StartingTown_RyansHouse_2F_EventScript_CheckPlayersPC::
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

StartingTown_RyansHouse_2F_TotsComputer::
    msgbox StartingTown_RyansHouse_2F_Text_TotsComputer, MSGBOX_SIGN
	end

StartingTown_RyansHouse_2F_GameCube::
    msgbox StartingTown_RyansHouse_2F_Text_GameCube, MSGBOX_SIGN
	end

StartingTown_RyansHouse_2F_Text_TotsComputer:
    .string "This is Tot's computer. Looks like\n"
	.string "she's in the middle of an art project.$"

StartingTown_RyansHouse_2F_Text_GameCube:
    .string "It's Ryan's PS5. Just ignore that\n"
	.string "it looks like a GameCube.$"
