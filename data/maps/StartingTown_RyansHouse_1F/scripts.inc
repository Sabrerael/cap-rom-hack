.set LOCALID_SABRE, 1
.set LOCALID_BULBASAUR_BALL, 2
.set LOCALID_CHARMANDER_BALL, 4
.set LOCALID_SQUIRTLE_BALL, 3

StartingTown_RyansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, StartingTown_RyansHouse_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StartingTown_RyansHouse_1F_OnFrame
	.byte 0

StartingTown_RyansHouse_1F_OnTransition:
	call_if_eq VAR_STARTING_TOWN_INTRO_STATE, 1, StartingTown_RyansHouse_1F_EventScript_MoveSabreToDoor
	call_if_eq VAR_STARTING_TOWN_INTRO_STATE, 3, StartingTown_RyansHouse_1F_EventScript_MoveSabreToStairs
	call_if_eq VAR_STARTING_TOWN_INTRO_STATE, 4, StartingTown_RyansHouse_1F_EventScript_MoveSabreToCenter
	end

StartingTown_RyansHouse_1F_EventScript_MoveSabreToDoor::
	setobjectxyperm LOCALID_SABRE, 9, 8
	setobjectmovementtype LOCALID_SABRE, MOVEMENT_TYPE_FACE_UP
	return

StartingTown_RyansHouse_1F_EventScript_MoveSabreToStairs::
	setobjectxyperm LOCALID_SABRE, 8, 4
	setobjectmovementtype LOCALID_SABRE, MOVEMENT_TYPE_FACE_UP
	return

StartingTown_RyansHouse_1F_EventScript_MoveSabreToCenter::
	setobjectxyperm LOCALID_SABRE, 7, 3
	setobjectmovementtype LOCALID_SABRE, MOVEMENT_TYPE_FACE_RIGHT
	return

StartingTown_RyansHouse_1F_OnFrame:
	map_script_2 VAR_STARTING_TOWN_INTRO_STATE, 1, StartingTown_RyansHouse_1F_EventScript_EnterHouseMovingIn
	map_script_2 VAR_STARTING_TOWN_INTRO_STATE, 3, StartingTown_RyansHouse_1F_EventScript_GoUpstairsToSetClock
	map_script_2 VAR_STARTING_TOWN_INTRO_STATE, 4, StartingTown_RyansHouse_1F_EventScript_ChoosePokemon
	.2byte 0

StartingTown_RyansHouse_1F_EventScript_EnterHouseMovingIn::
	lockall
	msgbox StartingTown_RyansHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
	applymovement LOCALID_SABRE, Common_Movement_FacePlayer
	waitmovement 0
	call StartingTown_RyansHouse_1F_EventScript_SabreFacePlayerMovingIn
	msgbox StartingTown_RyansHouse_1F_Text_MoversPokemonGoSetClock, MSGBOX_DEFAULT
	closemessage
	setvar VAR_STARTING_TOWN_INTRO_STATE, 2
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerWalkIn
	applymovement LOCALID_SABRE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	releaseall
	end

StartingTown_RyansHouse_1F_EventScript_SabreFacePlayerMovingIn::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

StartingTown_RyansHouse_1F_EventScript_GoUpstairsToSetClock::
	lockall
	msgbox StartingTown_RyansHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
	applymovement LOCALID_SABRE, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
	waitmovement 0
	warp MAP_STARTING_TOWN_RYANS_HOUSE_2F, 7, 1
	waitstate
	releaseall
	end

StartingTown_RyansHouse_1F_EventScript_ChoosePokemon::
	lockall
	setvar VAR_STARTING_TOWN_INTRO_STATE, 5
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	msgbox StartingTown_RyansHouse_1F_Text_ChoosePokemon, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

StartingTown_RyansHouse_1F_EventScript_BulbasaurPokeball::
	lockall
	call_if_set FLAG_SYS_POKEMON_GET, StartingTown_RyansHouse_1F_NoOneCanStopYou
	msgbox StartingTown_RyansHouse_1F_Text_TakeBallContainingBulbasaur, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_1F_EventScript_LeaveBulbasaur
	goto StartingTown_RyansHouse_1F_EventScript_GiveBulbasaur
	end

StartingTown_RyansHouse_1F_NoOneCanStopYou::
	msgbox StartingTown_RyansHouse_1F_Text_TakeOtherStarters, MSGBOX_DEFAULT
	return

StartingTown_RyansHouse_1F_EventScript_LeaveBulbasaur::
	msgbox StartingTown_RyansHouse_1F_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

StartingTown_RyansHouse_1F_EventScript_GiveBulbasaur::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BULBASAUR
	givemon SPECIES_BULBASAUR, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, StartingTown_RyansHouse_1F_EventScript_SendBulbasaurParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, StartingTown_RyansHouse_1F_EventScript_SendBulbasaurPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

StartingTown_RyansHouse_1F_EventScript_SendBulbasaurParty::
	call StartingTown_RyansHouse_1F_EventScript_ReceivedBulbasaurFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_1F_EventScript_ReceivedBulbasaur
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto StartingTown_RyansHouse_1F_EventScript_ReceivedBulbasaur
	end

StartingTown_RyansHouse_1F_EventScript_SendBulbasaurPC::
	call StartingTown_RyansHouse_1F_EventScript_ReceivedBulbasaurFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_1F_EventScript_BulbasaurTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto StartingTown_RyansHouse_1F_EventScript_BulbasaurTransferredToPC
	end

StartingTown_RyansHouse_1F_EventScript_BulbasaurTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto StartingTown_RyansHouse_1F_EventScript_ReceivedBulbasaur
	end

StartingTown_RyansHouse_1F_EventScript_ReceivedBulbasaurFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
	removeobject LOCALID_BULBASAUR_BALL
	playfanfare MUS_OBTAIN_ITEM
	message StartingTown_RyansHouse_1F_Text_ObtainedBulbasaur
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
	return

StartingTown_RyansHouse_1F_EventScript_ReceivedBulbasaur::
	setflag FLAG_HIDE_PLAYERS_HOUSE_2F_BULBASAUR_POKEBALL
	setflag FLAG_RECEIVED_BULBASAUR
	closemessage
	call_if_unset FLAG_SYS_POKEMON_GET, StartingTown_RyansHouse_1F_AfterBulbasaur
	end

StartingTown_RyansHouse_1F_EventScript_CharmanderPokeball::
	lockall
	call_if_set FLAG_SYS_POKEMON_GET, StartingTown_RyansHouse_1F_NoOneCanStopYou
	msgbox StartingTown_RyansHouse_1F_Text_TakeBallContainingCharmander, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_1F_EventScript_LeaveCharmander
	goto StartingTown_RyansHouse_1F_EventScript_GiveCharmander
	end

StartingTown_RyansHouse_1F_EventScript_LeaveCharmander::
	msgbox StartingTown_RyansHouse_1F_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

StartingTown_RyansHouse_1F_EventScript_GiveCharmander::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHARMANDER
	givemon SPECIES_CHARMANDER, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, StartingTown_RyansHouse_1F_EventScript_SendCharmanderParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, StartingTown_RyansHouse_1F_EventScript_SendCharmanderPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

StartingTown_RyansHouse_1F_EventScript_SendCharmanderParty::
	call StartingTown_RyansHouse_1F_EventScript_ReceivedCharmanderFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_1F_EventScript_ReceivedCharmander
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto StartingTown_RyansHouse_1F_EventScript_ReceivedCharmander
	end

StartingTown_RyansHouse_1F_EventScript_SendCharmanderPC::
	call StartingTown_RyansHouse_1F_EventScript_ReceivedCharmanderFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_1F_EventScript_CharmanderTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto StartingTown_RyansHouse_1F_EventScript_CharmanderTransferredToPC
	end

StartingTown_RyansHouse_1F_EventScript_CharmanderTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto StartingTown_RyansHouse_1F_EventScript_ReceivedCharmander
	end

StartingTown_RyansHouse_1F_EventScript_ReceivedCharmanderFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
	removeobject LOCALID_CHARMANDER_BALL
	playfanfare MUS_OBTAIN_ITEM
	message StartingTown_RyansHouse_1F_Text_ObtainedCharmander
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
	return

StartingTown_RyansHouse_1F_EventScript_ReceivedCharmander::
	setflag FLAG_HIDE_PLAYERS_HOUSE_2F_CHARMANDER_POKEBALL
	setflag FLAG_RECEIVED_CHARMANDER
	closemessage
	call_if_unset FLAG_SYS_POKEMON_GET, StartingTown_RyansHouse_1F_AfterCharmander
	end

StartingTown_RyansHouse_1F_EventScript_SquirtlePokeball::
	lockall
	call_if_set FLAG_SYS_POKEMON_GET, StartingTown_RyansHouse_1F_NoOneCanStopYou
	msgbox StartingTown_RyansHouse_1F_Text_TakeBallContainingSquirtle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_1F_EventScript_LeaveSquirtle
	goto StartingTown_RyansHouse_1F_EventScript_GiveSquirtle
	end

StartingTown_RyansHouse_1F_EventScript_LeaveSquirtle::
	msgbox StartingTown_RyansHouse_1F_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

StartingTown_RyansHouse_1F_EventScript_GiveSquirtle::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SQUIRTLE
	givemon SPECIES_SQUIRTLE, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, StartingTown_RyansHouse_1F_EventScript_SendSquirtleParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, StartingTown_RyansHouse_1F_EventScript_SendSquirtlePC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

StartingTown_RyansHouse_1F_EventScript_SendSquirtleParty::
	call StartingTown_RyansHouse_1F_EventScript_ReceivedSquirtleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_1F_EventScript_ReceivedSquirtle
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto StartingTown_RyansHouse_1F_EventScript_ReceivedSquirtle
	end

StartingTown_RyansHouse_1F_EventScript_SendSquirtlePC::
	call StartingTown_RyansHouse_1F_EventScript_ReceivedSquirtleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_RyansHouse_1F_EventScript_SquirtleTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto StartingTown_RyansHouse_1F_EventScript_SquirtleTransferredToPC
	end

StartingTown_RyansHouse_1F_EventScript_SquirtleTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto StartingTown_RyansHouse_1F_EventScript_ReceivedSquirtle
	end

StartingTown_RyansHouse_1F_EventScript_ReceivedSquirtleFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
	removeobject LOCALID_SQUIRTLE_BALL
	playfanfare MUS_OBTAIN_ITEM
	message StartingTown_RyansHouse_1F_Text_ObtainedSquirtle
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
	return

StartingTown_RyansHouse_1F_EventScript_ReceivedSquirtle::
	setflag FLAG_HIDE_PLAYERS_HOUSE_2F_SQUIRTLE_POKEBALL
	setflag FLAG_RECEIVED_SQUIRTLE
	closemessage
	call_if_unset FLAG_SYS_POKEMON_GET, StartingTown_RyansHouse_1F_AfterSquirtle
	end

StartingTown_RyansHouse_1F_AfterBulbasaur::
    applymovement OBJ_EVENT_ID_PLAYER, StartingTown_RyansHouse_1F_Movement_PlayerWalkToSabreBulbasaur
	waitmovement 0
	call StartingTown_RyansHouse_1F_AdventureGift
	end

StartingTown_RyansHouse_1F_AfterCharmander::
    applymovement OBJ_EVENT_ID_PLAYER, StartingTown_RyansHouse_1F_Movement_PlayerWalkToSabreCharmander
	waitmovement 0
	call StartingTown_RyansHouse_1F_AdventureGift
	end

StartingTown_RyansHouse_1F_AfterSquirtle::
    applymovement OBJ_EVENT_ID_PLAYER, StartingTown_RyansHouse_1F_Movement_PlayerWalkToSabreSquirtle
	waitmovement 0
	call StartingTown_RyansHouse_1F_AdventureGift
	end

StartingTown_RyansHouse_1F_AdventureGift::
	setflag FLAG_SYS_POKEMON_GET
	msgbox StartingTown_RyansHouse_1F_Text_SabreAfterPokemon, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message StartingTown_RyansHouse_1F_Text_ReceivedPokedex
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	playfanfare MUS_OBTAIN_ITEM
	message StartingTown_RyansHouse_1F_Text_ReceivedPokenav
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_HAS_MATCH_CALL
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	waitfanfare
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_POKE_BALL, 10
	waitmessage
	waitfanfare
	call StartingTown_RyansHouse_1F_ExplainAdventure
	end

StartingTown_RyansHouse_1F_ExplainAdventure::
    msgbox StartingTown_RyansHouse_1F_Text_SabreExplainAdventure, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement LOCALID_SABRE, StartingTown_RyansHouse_1F_Movement_SabreMoveDownNotebook
	applymovement OBJ_EVENT_ID_PLAYER, StartingTown_RyansHouse_1F_Movement_PlayerMoveDownNotebook
	waitmovement 0
	msgbox StartingTown_RyansHouse_1F_Text_SabreExplainNotebook, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement LOCALID_SABRE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox StartingTown_RyansHouse_1F_Text_SabreLeaving, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement LOCALID_SABRE, StartingTown_RyansHouse_1F_Movement_SabreLeave
	waitmovement 0
	setflag FLAG_HIDE_SABRE_RYANS_HOUSE
	releaseall
    end

StartingTown_RyansHouse_1F_EventScript_Sabre::
	lock
	faceplayer
	msgbox StartingTown_RyansHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
	release
	end

StartingTown_RyansHouse_1F_Fridge::
    msgbox StartingTown_RyansHouse_1F_Text_Fridge, MSGBOX_SIGN
	end

StartingTown_RyansHouse_1F_Movement_PlayerWalkDown:
	walk_down
	step_end

StartingTown_RyansHouse_1F_Movement_PlayerWalkToSabreBulbasaur:
	walk_left
	walk_up
	walk_in_place_faster_left
	step_end

StartingTown_RyansHouse_1F_Movement_PlayerWalkToSabreCharmander:
    walk_left
	walk_up
	walk_up
	walk_in_place_faster_left
	step_end

StartingTown_RyansHouse_1F_Movement_PlayerWalkToSabreSquirtle:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_left
	step_end

StartingTown_RyansHouse_1F_Movement_SabreMoveDownNotebook:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

StartingTown_RyansHouse_1F_Movement_PlayerMoveDownNotebook:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

StartingTown_RyansHouse_1F_Movement_SabreLeave:
	walk_down
	walk_down
	walk_right
	walk_down
	set_invisible
	step_end

StartingTown_RyansHouse_1F_Text_IsntItNiceInHere:
	.string "Sabre: Cozy little place.\n"
	.string "Like I said, everything has been\p"
	.string "unpacked for you.$"

StartingTown_RyansHouse_1F_Text_MoversPokemonGoSetClock:
	.string "{PLAYER}, your room is upstairs.\n"
	.string "Go ahead and check it out!\p"
	.string "There's a clock you should\n"
	.string "go set.$"

StartingTown_RyansHouse_1F_Text_GoSetTheClock:
	.string "Come on, {PLAYER}.\p"
	.string "Go set the clock so we\n"
	.string "move on.$"

StartingTown_RyansHouse_1F_Text_ChoosePokemon:
	.string "And now for the fun part!\p"
	.string "Now you get to choose a Pokémon\n"
	.string "to go on your adventure with.\p"
	.string "I've got some familiar friends\n"
	.string "to pick from. Go ahead.$"

StartingTown_RyansHouse_1F_Text_TakeBallContainingBulbasaur:
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "Bulbasaur.\p"
	.string "Take the Bulbasaur?$"

StartingTown_RyansHouse_1F_Text_ObtainedBulbasaur:
	.string "{PLAYER} obtained a Bulbasaur.$"

StartingTown_RyansHouse_1F_Text_TakeBallContainingCharmander:
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "Charmander.\p"
	.string "Take the Charmander?$"

StartingTown_RyansHouse_1F_Text_ObtainedCharmander:
	.string "{PLAYER} obtained a Charmander.$"

StartingTown_RyansHouse_1F_Text_TakeBallContainingSquirtle:
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "Squirtle.\p"
	.string "Take the Squirtle?$"

StartingTown_RyansHouse_1F_Text_ObtainedSquirtle:
	.string "{PLAYER} obtained a Squirtle.$"

StartingTown_RyansHouse_1F_Text_LeftPokeBallWhereItWas:
	.string "{PLAYER} left the POKé BALL where\n"
	.string "it was.$"

StartingTown_RyansHouse_1F_Text_TakeOtherStarters:
	.string "No one is going to stop you…$"

StartingTown_RyansHouse_1F_Text_SabreAfterPokemon:
    .string "Excellent choice. Now that you've\n"
	.string "selected your partner, let me give\l"
	.string "a few gifts.$"

StartingTown_RyansHouse_1F_Text_ReceivedPokedex:
	.string "{PLAYER} received the Pokédex!$"

StartingTown_RyansHouse_1F_Text_ReceivedPokenav:
	.string "{PLAYER} received the PokéNav!$"

StartingTown_RyansHouse_1F_Text_ReceivedPokeBalls:
	.string "{PLAYER} received 10 PokéBalls!$"

StartingTown_RyansHouse_1F_Text_SabreExplainAdventure:
	.string "With that out of the way, let me\n"
	.string "explain how this adventure is a\l"
	.string "little bit different than you might\l"
	.string "be used to.\p"
	.string "This game is not linear; you can\n"
	.string "explore in any direction and\l"
	.string "challenge the Gyms in any order.\p"
	.string "As you collect badges, the Guild\n"
	.string "Hall will unlock new benefits for\l"
	.string "you, ranging from items to helpful\l"
	.string "NPCs. You'll want to return after\l"
	.string "each Gym to collect your rewards.\p"
	.string "Past that, it's a normal Pokémon\n"
	.string "adventure! Collect, fight, and become\l"
	.string "the Pokémon League Champion!$"

StartingTown_RyansHouse_1F_Text_SabreExplainNotebook:
	.string "I've left a notebook with this\n"
	.string "info along with other changes\l"
	.string "you'll want to know about.$"

StartingTown_RyansHouse_1F_Text_SabreLeaving:
	.string "I think that's everything. With\n"
	.string "that, I need to head out. Don't\l"
	.string "worry, I'll see you later.\p"
	.string "Have fun!$"

StartingTown_RyansHouse_1F_Text_Fridge:
	.string "The fridge is packed full of Taco Bell\n"
	.string "and cans of an undisclosed energy drink.$"
