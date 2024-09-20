.set LOCALID_BULBASAUR_BALL, 1
.set LOCALID_CHARMANDER_BALL, 2
.set LOCALID_SQUIRTLE_BALL, 3

StartingTown_RyansHouse_2F_MapScripts::
	.byte 0

StartingTown_RyansHouse_2F_EventScript_BulbasaurPokeball::
	lockall
	msgbox StartingTown_RyansHouse_2F_Text_TakeBallContainingBulbasaur, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_2F_EventScript_LeaveBulbasaur
	goto StartingTown_RyansHouse_2F_EventScript_GiveBulbasaur
	end

StartingTown_RyansHouse_2F_EventScript_LeaveBulbasaur::
	msgbox StartingTown_RyansHouse_2F_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

StartingTown_RyansHouse_2F_EventScript_GiveBulbasaur::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BULBASAUR
	givemon SPECIES_BULBASAUR, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, StartingTown_RyansHouse_2F_EventScript_SendBulbasaurParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, StartingTown_RyansHouse_2F_EventScript_SendBulbasaurPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

StartingTown_RyansHouse_2F_EventScript_SendBulbasaurParty::
	call StartingTown_RyansHouse_2F_EventScript_ReceivedBulbasaurFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_2F_EventScript_ReceivedBulbasaur
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto StartingTown_RyansHouse_2F_EventScript_ReceivedBulbasaur
	end

StartingTown_RyansHouse_2F_EventScript_SendBulbasaurPC::
	call StartingTown_RyansHouse_2F_EventScript_ReceivedBulbasaurFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_2F_EventScript_BulbasaurTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto StartingTown_RyansHouse_2F_EventScript_BulbasaurTransferredToPC
	end

StartingTown_RyansHouse_2F_EventScript_BulbasaurTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto StartingTown_RyansHouse_2F_EventScript_ReceivedBulbasaur
	end

StartingTown_RyansHouse_2F_EventScript_ReceivedBulbasaurFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
	removeobject LOCALID_BULBASAUR_BALL
	playfanfare MUS_OBTAIN_ITEM
	message StartingTown_RyansHouse_2F_Text_ObtainedBulbasaur
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
	return

StartingTown_RyansHouse_2F_EventScript_ReceivedBulbasaur::
	setflag FLAG_HIDE_PLAYERS_HOUSE_2F_BULBASAUR_POKEBALL
	setflag FLAG_RECEIVED_BULBASAUR
	releaseall
	end

StartingTown_RyansHouse_2F_EventScript_CharmanderPokeball::
	lockall
	msgbox StartingTown_RyansHouse_2F_Text_TakeBallContainingCharmander, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_2F_EventScript_LeaveCharmander
	goto StartingTown_RyansHouse_2F_EventScript_GiveCharmander
	end

StartingTown_RyansHouse_2F_EventScript_LeaveCharmander::
	msgbox StartingTown_RyansHouse_2F_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

StartingTown_RyansHouse_2F_EventScript_GiveCharmander::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHARMANDER
	givemon SPECIES_CHARMANDER, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, StartingTown_RyansHouse_2F_EventScript_SendCharmanderParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, StartingTown_RyansHouse_2F_EventScript_SendCharmanderPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

StartingTown_RyansHouse_2F_EventScript_SendCharmanderParty::
	call StartingTown_RyansHouse_2F_EventScript_ReceivedCharmanderFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_2F_EventScript_ReceivedCharmander
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto StartingTown_RyansHouse_2F_EventScript_ReceivedCharmander
	end

StartingTown_RyansHouse_2F_EventScript_SendCharmanderPC::
	call StartingTown_RyansHouse_2F_EventScript_ReceivedCharmanderFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_2F_EventScript_CharmanderTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto StartingTown_RyansHouse_2F_EventScript_CharmanderTransferredToPC
	end

StartingTown_RyansHouse_2F_EventScript_CharmanderTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto StartingTown_RyansHouse_2F_EventScript_ReceivedCharmander
	end

StartingTown_RyansHouse_2F_EventScript_ReceivedCharmanderFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
	removeobject LOCALID_CHARMANDER_BALL
	playfanfare MUS_OBTAIN_ITEM
	message StartingTown_RyansHouse_2F_Text_ObtainedCharmander
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
	return

StartingTown_RyansHouse_2F_EventScript_ReceivedCharmander::
	setflag FLAG_HIDE_PLAYERS_HOUSE_2F_CHARMANDER_POKEBALL
	setflag FLAG_RECEIVED_CHARMANDER
	releaseall
	end

StartingTown_RyansHouse_2F_EventScript_SquirtlePokeball::
	lockall
	msgbox StartingTown_RyansHouse_2F_Text_TakeBallContainingSquirtle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_2F_EventScript_LeaveSquirtle
	goto StartingTown_RyansHouse_2F_EventScript_GiveSquirtle
	end

StartingTown_RyansHouse_2F_EventScript_LeaveSquirtle::
	msgbox StartingTown_RyansHouse_2F_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

StartingTown_RyansHouse_2F_EventScript_GiveSquirtle::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SQUIRTLE
	givemon SPECIES_SQUIRTLE, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, StartingTown_RyansHouse_2F_EventScript_SendSquirtleParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, StartingTown_RyansHouse_2F_EventScript_SendSquirtlePC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

StartingTown_RyansHouse_2F_EventScript_SendSquirtleParty::
	call StartingTown_RyansHouse_2F_EventScript_ReceivedSquirtleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_2F_EventScript_ReceivedSquirtle
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto StartingTown_RyansHouse_2F_EventScript_ReceivedSquirtle
	end

StartingTown_RyansHouse_2F_EventScript_SendSquirtlePC::
	call StartingTown_RyansHouse_2F_EventScript_ReceivedSquirtleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_2F_EventScript_SquirtleTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto StartingTown_RyansHouse_2F_EventScript_SquirtleTransferredToPC
	end

StartingTown_RyansHouse_2F_EventScript_SquirtleTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto StartingTown_RyansHouse_2F_EventScript_ReceivedSquirtle
	end

StartingTown_RyansHouse_2F_EventScript_ReceivedSquirtleFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
	removeobject LOCALID_SQUIRTLE_BALL
	playfanfare MUS_OBTAIN_ITEM
	message StartingTown_RyansHouse_2F_Text_ObtainedSquirtle
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
	return

StartingTown_RyansHouse_2F_EventScript_ReceivedSquirtle::
	setflag FLAG_HIDE_PLAYERS_HOUSE_2F_SQUIRTLE_POKEBALL
	setflag FLAG_RECEIVED_SQUIRTLE
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

StartingTown_RyansHouse_2F_Text_TakeBallContainingBulbasaur:
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "Bulbasaur.\p"
	.string "Take the POKé BALL?$"

StartingTown_RyansHouse_2F_Text_ObtainedBulbasaur:
	.string "{PLAYER} obtained a Bulbasaur.$"

StartingTown_RyansHouse_2F_Text_TakeBallContainingCharmander:
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "Charmander.\p"
	.string "Take the POKé BALL?$"

StartingTown_RyansHouse_2F_Text_ObtainedCharmander:
	.string "{PLAYER} obtained a Charmander.$"

StartingTown_RyansHouse_2F_Text_TakeBallContainingSquirtle:
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "Squirtle.\p"
	.string "Take the POKé BALL?$"

StartingTown_RyansHouse_2F_Text_ObtainedSquirtle:
	.string "{PLAYER} obtained a Squirtle.$"

StartingTown_RyansHouse_2F_Text_LeftPokeBallWhereItWas:
	.string "{PLAYER} left the POKé BALL where\n"
	.string "it was.$"

StartingTown_RyansHouse_2F_Text_TotsComputer:
    .string "This is Tot's computer. Looks like\n"
	.string "she's in the middle of an art project.$"

StartingTown_RyansHouse_2F_Text_GameCube:
    .string "It's Ryan's PS5. Just ignore that\n"
	.string "it looks like a GameCube.$"
