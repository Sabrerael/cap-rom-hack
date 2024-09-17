.set LOCALID_RIVAL, 1
.set LOCALID_BULBASAUR_BALL, 19
.set LOCALID_CHARMANDER_BALL, 18
.set LOCALID_SQUIRTLE_BALL, 17

LittlerootTown_BrendansHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
	.byte 0

LittlerootTown_BrendansHouse_2F_OnTransition:
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
	call SecretBase_EventScript_SetDecorationFlags
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos

LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
	@ Odd that the MaysHouse equivalent was used below instead
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
	setobjectxyperm LOCALID_RIVAL, 0, 2
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_2F_EventScript_Ret::
	return

LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
	return

LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
	return

LittlerootTown_BrendansHouse_2F_OnWarp:
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
	.2byte 0

LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
	end

LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
	lockall
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
	delay 10
	addobject LOCALID_RIVAL
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	delay 10
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
	waitmovement 0
	return

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
	waitmovement 0
	return

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
	waitmovement 0
	return

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
	waitmovement 0
	return

LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
	walk_left
	walk_left
	walk_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
	walk_left
	walk_left
	walk_down
	walk_in_place_faster_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
	delay_8
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
	walk_up
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

@ Unused, the player is already facing this direction so its unneeded
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

LittlerootTown_BrendansHouse_2F_EventScript_PC::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
	releaseall
	end

PlayersHouse_2F_EventScript_Notebook::
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	end

PlayersHouse_2F_EventScript_GameCube::
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
	end

PlayersHouse_2F_EventScript_BulbasaurPokeball::
	lockall
	msgbox PlayersHouse_2F_Text_TakeBallContainingBulbasaur, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PlayersHouse_2F_EventScript_LeaveBulbasaur
	goto PlayersHouse_2F_EventScript_GiveBulbasaur
	end

PlayersHouse_2F_EventScript_LeaveBulbasaur::
	msgbox PlayersHouse_2F_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

PlayersHouse_2F_EventScript_GiveBulbasaur::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BULBASAUR
	givemon SPECIES_BULBASAUR, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, PlayersHouse_2F_EventScript_SendBulbasaurParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, PlayersHouse_2F_EventScript_SendBulbasaurPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

PlayersHouse_2F_EventScript_SendBulbasaurParty::
	call PlayersHouse_2F_EventScript_ReceivedBulbasaurFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PlayersHouse_2F_EventScript_ReceivedBulbasaur
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto PlayersHouse_2F_EventScript_ReceivedBulbasaur
	end

PlayersHouse_2F_EventScript_SendBulbasaurPC::
	call PlayersHouse_2F_EventScript_ReceivedBulbasaurFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PlayersHouse_2F_EventScript_BulbasaurTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto PlayersHouse_2F_EventScript_BulbasaurTransferredToPC
	end

PlayersHouse_2F_EventScript_BulbasaurTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto PlayersHouse_2F_EventScript_ReceivedBulbasaur
	end

PlayersHouse_2F_EventScript_ReceivedBulbasaurFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
	removeobject LOCALID_BULBASAUR_BALL
	playfanfare MUS_OBTAIN_ITEM
	message PlayersHouse_2F_Text_ObtainedBulbasaur
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
	return

PlayersHouse_2F_EventScript_ReceivedBulbasaur::
	setflag FLAG_HIDE_PLAYERS_HOUSE_2F_BULBASAUR_POKEBALL
	setflag FLAG_RECEIVED_BULBASAUR
	releaseall
	end

PlayersHouse_2F_EventScript_CharmanderPokeball::
	lockall
	msgbox PlayersHouse_2F_Text_TakeBallContainingCharmander, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PlayersHouse_2F_EventScript_LeaveCharmander
	goto PlayersHouse_2F_EventScript_GiveCharmander
	end

PlayersHouse_2F_EventScript_LeaveCharmander::
	msgbox PlayersHouse_2F_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

PlayersHouse_2F_EventScript_GiveCharmander::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHARMANDER
	givemon SPECIES_CHARMANDER, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, PlayersHouse_2F_EventScript_SendCharmanderParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, PlayersHouse_2F_EventScript_SendCharmanderPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

PlayersHouse_2F_EventScript_SendCharmanderParty::
	call PlayersHouse_2F_EventScript_ReceivedCharmanderFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PlayersHouse_2F_EventScript_ReceivedCharmander
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto PlayersHouse_2F_EventScript_ReceivedCharmander
	end

PlayersHouse_2F_EventScript_SendCharmanderPC::
	call PlayersHouse_2F_EventScript_ReceivedCharmanderFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PlayersHouse_2F_EventScript_CharmanderTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto PlayersHouse_2F_EventScript_CharmanderTransferredToPC
	end

PlayersHouse_2F_EventScript_CharmanderTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto PlayersHouse_2F_EventScript_ReceivedCharmander
	end

PlayersHouse_2F_EventScript_ReceivedCharmanderFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
	removeobject LOCALID_CHARMANDER_BALL
	playfanfare MUS_OBTAIN_ITEM
	message PlayersHouse_2F_Text_ObtainedCharmander
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
	return

PlayersHouse_2F_EventScript_ReceivedCharmander::
	setflag FLAG_HIDE_PLAYERS_HOUSE_2F_CHARMANDER_POKEBALL
	setflag FLAG_RECEIVED_CHARMANDER
	releaseall
	end

PlayersHouse_2F_EventScript_SquirtlePokeball::
	lockall
	msgbox PlayersHouse_2F_Text_TakeBallContainingSquirtle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PlayersHouse_2F_EventScript_LeaveSquirtle
	goto PlayersHouse_2F_EventScript_GiveSquirtle
	end

PlayersHouse_2F_EventScript_LeaveSquirtle::
	msgbox PlayersHouse_2F_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

PlayersHouse_2F_EventScript_GiveSquirtle::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SQUIRTLE
	givemon SPECIES_SQUIRTLE, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, PlayersHouse_2F_EventScript_SendSquirtleParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, PlayersHouse_2F_EventScript_SendSquirtlePC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

PlayersHouse_2F_EventScript_SendSquirtleParty::
	call PlayersHouse_2F_EventScript_ReceivedSquirtleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PlayersHouse_2F_EventScript_ReceivedSquirtle
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto PlayersHouse_2F_EventScript_ReceivedSquirtle
	end

PlayersHouse_2F_EventScript_SendSquirtlePC::
	call PlayersHouse_2F_EventScript_ReceivedSquirtleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PlayersHouse_2F_EventScript_SquirtleTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto PlayersHouse_2F_EventScript_SquirtleTransferredToPC
	end

PlayersHouse_2F_EventScript_SquirtleTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto PlayersHouse_2F_EventScript_ReceivedSquirtle
	end

PlayersHouse_2F_EventScript_ReceivedSquirtleFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
	removeobject LOCALID_SQUIRTLE_BALL
	playfanfare MUS_OBTAIN_ITEM
	message PlayersHouse_2F_Text_ObtainedSquirtle
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
	return

PlayersHouse_2F_EventScript_ReceivedSquirtle::
	setflag FLAG_HIDE_PLAYERS_HOUSE_2F_SQUIRTLE_POKEBALL
	setflag FLAG_RECEIVED_SQUIRTLE
	releaseall
	end

PlayersHouse_2F_Text_ClockIsStopped:
	.string "The clock is stopped…\p"
	.string "Better set it and start it!$"

PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
	.string "MOM: {PLAYER}, how do you like your\n"
	.string "new room?\p"
	.string "Good! Everything's put away neatly!\p"
	.string "They finished moving everything in\n"
	.string "downstairs, too.\p"
	.string "POKéMON movers are so convenient!\p"
	.string "Oh, you should make sure that\n"
	.string "everything's all there on your desk.$"

PlayersHouse_2F_Text_Notebook:
	.string "{PLAYER} flipped open the notebook.\p"
	.string "ADVENTURE RULE NO. 1\n"
	.string "Open the MENU with START.\p"
	.string "ADVENTURE RULE NO. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "The remaining pages are blank…$"

Common_Text_LookCloserAtMap:
	.string "{PLAYER} took a closer look at the\n"
	.string "HOENN region map.$"

PlayersHouse_2F_Text_ItsAGameCube:
	.string "It's a Nintendo GameCube.\p"
	.string "A Game Boy Advance is connected to\n"
	.string "serve as the Controller.$"

PlayersHouse_2F_Text_TakeBallContainingBulbasaur:
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "Bulbasaur.\p"
	.string "Take the POKé BALL?$"

PlayersHouse_2F_Text_ObtainedBulbasaur:
	.string "{PLAYER} obtained a Bulbasaur.$"

PlayersHouse_2F_Text_TakeBallContainingCharmander:
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "Charmander.\p"
	.string "Take the POKé BALL?$"

PlayersHouse_2F_Text_ObtainedCharmander:
	.string "{PLAYER} obtained a Charmander.$"

PlayersHouse_2F_Text_TakeBallContainingSquirtle:
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "Squirtle.\p"
	.string "Take the POKé BALL?$"

PlayersHouse_2F_Text_ObtainedSquirtle:
	.string "{PLAYER} obtained a Squirtle.$"

PlayersHouse_2F_Text_LeftPokeBallWhereItWas:
	.string "{PLAYER} left the POKé BALL where\n"
	.string "it was.$"
