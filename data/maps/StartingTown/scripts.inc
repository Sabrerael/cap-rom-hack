.set LOCALID_PEHBBLE, 1
.set LOCALID_SABRE, 3
.set LOCALID_PEHBBLE_2, 5
.set LOCALID_JADEDOSA, 9

StartingTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, StartingTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StartingTown_OnFrame
	.byte 0

StartingTown_OnTransition:
	setflag FLAG_VISITED_STARTING_TOWN
	end

StartingTown_OnFrame:
	map_script_2 VAR_STARTING_TOWN_INTRO_STATE, 0, StartingTown_EventScript_StepOffTruck
	.2byte 0

StartingTown_EventScript_PehbbleFight1Trigger0::
	lockall
	setvar VAR_0x8008, 0
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 20, 8
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger1::
	lockall
	setvar VAR_0x8008, 1
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 21, 8
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger2::
	lockall
	setvar VAR_0x8008, 2
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 11, 19
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger3::
	lockall
	setvar VAR_0x8008, 3
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 11, 18
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger4::
	lockall
	setvar VAR_0x8008, 4
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 18, 31
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger5::
	lockall
	setvar VAR_0x8008, 5
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 19, 31
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger6::
	lockall
	setvar VAR_0x8008, 6
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 20, 31
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger7::
	lockall
	setvar VAR_0x8008, 7
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 21, 31
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger8::
	lockall
	setvar VAR_0x8008, 8
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 28, 18
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger9::
	lockall
	setvar VAR_0x8008, 9
	addobject LOCALID_PEHBBLE
	setobjectxy LOCALID_PEHBBLE, 28, 19
	goto StartingTown_EventScript_PehbbleFight1Trigger
	end

StartingTown_EventScript_PehbbleFight1Trigger::
    msgbox Pehbble_Text_HeyYou, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, StartingTown_EventScript_RivalApproachPlayer0
	call_if_eq VAR_0x8008, 1, StartingTown_EventScript_RivalApproachPlayer1
	call_if_eq VAR_0x8008, 2, StartingTown_EventScript_RivalApproachPlayer2
	call_if_eq VAR_0x8008, 3, StartingTown_EventScript_RivalApproachPlayer3
	call_if_eq VAR_0x8008, 4, StartingTown_EventScript_RivalApproachPlayer4
	call_if_eq VAR_0x8008, 5, StartingTown_EventScript_RivalApproachPlayer5
	call_if_eq VAR_0x8008, 6, StartingTown_EventScript_RivalApproachPlayer6
	call_if_eq VAR_0x8008, 7, StartingTown_EventScript_RivalApproachPlayer7
	call_if_eq VAR_0x8008, 8, StartingTown_EventScript_RivalApproachPlayer8
	call_if_eq VAR_0x8008, 9, StartingTown_EventScript_RivalApproachPlayer9
	msgbox Pehbble_Text_BattleOneIntro, MSGBOX_DEFAULT
	goto StartingTown_EventScript_StartPehbbleBattle
	end

StartingTown_EventScript_RivalApproachPlayer0::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer0
	waitmovement 0
	return

StartingTown_EventScript_RivalApproachPlayer1::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer1
	waitmovement 0
	return

StartingTown_EventScript_RivalApproachPlayer2::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer2
	waitmovement 0
	return

StartingTown_EventScript_RivalApproachPlayer3::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer3
	waitmovement 0
	return

StartingTown_EventScript_RivalApproachPlayer4::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer4
	waitmovement 0
	return

StartingTown_EventScript_RivalApproachPlayer5::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer5
	waitmovement 0
	return

StartingTown_EventScript_RivalApproachPlayer6::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer6
	waitmovement 0
	return

StartingTown_EventScript_RivalApproachPlayer7::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer7
	waitmovement 0
	return

StartingTown_EventScript_RivalApproachPlayer8::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer8
	waitmovement 0
	return

StartingTown_EventScript_RivalApproachPlayer9::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalApproachPlayer9
	waitmovement 0
	return

StartingTown_EventScript_StartPehbbleBattle::
	trainerbattle_no_intro TRAINER_PEHBBLE_1, Pehbble_Text_BattleOneDefeated
	goto StartingTown_EventScript_AfterPehbbleBattle
	end

StartingTown_EventScript_AfterPehbbleBattle::
	msgbox Pehbble_Text_AfterBattleOne, MSGBOX_DEFAULT
	waitmessage
	closemessage
	delay 15
	msgbox Pehbble_Text_AfterLeavingBattleOne, MSGBOX_DEFAULT
	call StartingTown_EventScript_RivalExit
	end

StartingTown_EventScript_RivalExit::
	closemessage
	call_if_eq VAR_0x8008, 0, StartingTown_EventScript_RivalLeavePlayer0
	call_if_eq VAR_0x8008, 1, StartingTown_EventScript_RivalLeavePlayer0
	call_if_eq VAR_0x8008, 2, StartingTown_EventScript_RivalLeavePlayer1
	call_if_eq VAR_0x8008, 3, StartingTown_EventScript_RivalLeavePlayer1
	call_if_eq VAR_0x8008, 4, StartingTown_EventScript_RivalLeavePlayer1
	call_if_eq VAR_0x8008, 5, StartingTown_EventScript_RivalLeavePlayer1
	call_if_eq VAR_0x8008, 6, StartingTown_EventScript_RivalLeavePlayer2
	call_if_eq VAR_0x8008, 7, StartingTown_EventScript_RivalLeavePlayer2
	call_if_eq VAR_0x8008, 8, StartingTown_EventScript_RivalLeavePlayer3
	call_if_eq VAR_0x8008, 9, StartingTown_EventScript_RivalLeavePlayer3
	end

StartingTown_EventScript_RivalLeavePlayer0::
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalLeavePlayer0
	waitmovement 0
	goto StartingTown_EventScript_RivalEnd
	end

StartingTown_EventScript_RivalLeavePlayer1::
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalLeavePlayer1
	waitmovement 0
	goto StartingTown_EventScript_RivalEnd
	end

StartingTown_EventScript_RivalLeavePlayer2::
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalLeavePlayer2
	waitmovement 0
	goto StartingTown_EventScript_RivalEnd
	end

StartingTown_EventScript_RivalLeavePlayer3::
	applymovement LOCALID_PEHBBLE, StartingTown_Movement_RivalLeavePlayer3
	waitmovement 0
	goto StartingTown_EventScript_RivalEnd
	end

StartingTown_EventScript_RivalEnd::
	removeobject LOCALID_PEHBBLE
	clearflag FLAG_HIDE_PEHBBLE_BATTLE_2
	setvar VAR_PEHBBLE_STATE, 1
	setflag FLAG_HIDE_STARTING_TOWN_PEHBBLE
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

StartingTown_EventScript_StepOffTruck::
	lockall
	setvar VAR_0x8004, 5
	setvar VAR_0x8005, 8
	call StartingTown_EventScript_GoInsideWithSabre
	setflag FLAG_HIDE_STARTING_TOWN_TRUCK
	warpsilent MAP_STARTING_TOWN_RYANS_HOUSE_1F, 8, 8
	waitstate
	releaseall
	end

StartingTown_EventScript_GoInsideWithSabre::
	delay 15
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, StartingTown_Movement_PlayerStepOffTruck
	waitmovement 0
	msgbox StartingTown_Text_SabreText, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SABRE, StartingTown_Movement_SabreApproachDoor
	applymovement OBJ_EVENT_ID_PLAYER, StartingTown_Movement_PlayerApproachDoor
	waitmovement 0
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_SABRE, StartingTown_Movement_SabreEnterHouse
	applymovement OBJ_EVENT_ID_PLAYER, StartingTown_Movement_PlayerEnterHouse
	waitmovement 0
	setflag FLAG_HIDE_SABRE_STARTING_TOWN
	setvar VAR_STARTING_TOWN_INTRO_STATE, 1
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


StartingTown_EventScript_PehbbleFight3Trigger0::
	lockall
	setvar VAR_0x8008, 0
	goto StartingTown_EventScript_PehbbleFight3Trigger
	end

StartingTown_EventScript_PehbbleFight3Trigger1::
	lockall
	setvar VAR_0x8008, 1
	goto StartingTown_EventScript_PehbbleFight3Trigger
	end

StartingTown_EventScript_PehbbleFight3Trigger::
    msgbox Pehbble_Text_IgnoreOutsideGuildHall, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, StartingTown_EventScript_Pehbble3ApproachPlayer0
	call_if_eq VAR_0x8008, 1, StartingTown_EventScript_Pehbble3ApproachPlayer1
	goto StartingTown_EventScript_StartPehbbleBattleThree
	end

StartingTown_EventScript_Pehbble3ApproachPlayer0::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_PEHBBLE_2, StartingTown_Movement_Pehbble3ApproachPlayer0
	waitmovement 0
	return

StartingTown_EventScript_Pehbble3ApproachPlayer1::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_PEHBBLE_2, StartingTown_Movement_Pehbble3ApproachPlayer1
	waitmovement 0
	return

StartingTown_EventScript_StartPehbbleBattleThree::
	lockall
	msgbox Pehbble_Text_BattleThreeIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PEHBBLE_3, Pehbble_Text_BattleThreeDefeated
	goto StartingTown_EventScript_AfterPehbbleBattleThree
	end

StartingTown_EventScript_AfterPehbbleBattleThree::
	msgbox Pehbble_Text_AfterBattleThree, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement LOCALID_PEHBBLE, Common_Movement_WalkInPlaceFasterUp
	setvar VAR_PEHBBLE_STATE, 3
	setflag FLAG_HIDE_PEHBBLE_BATTLE_3
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

StartingTown_EventScript_HouseSign::
	msgbox StartingTown_Text_HouseSign, MSGBOX_SIGN
	end

StartingTown_EventScript_GuildHallSign::
	msgbox StartingTown_Text_GuildHallSign, MSGBOX_SIGN
	end

StartingTown_EventScript_GuildCommonsSign::
	msgbox StartingTown_Text_GuildCommonsSign, MSGBOX_SIGN
	end

StartingTown_EventScript_PokemonLeagueSign::
	msgbox StartingTown_Text_PokemonLeagueSign, MSGBOX_SIGN
	end

StartingTown_EventScript_TechnologyGuy::
	msgbox StartingTown_Text_TechnologyGuy, MSGBOX_DEFAULT
	release
	end

StartingTown_EventScript_ExerciseGirl::
	msgbox StartingTown_Text_ExerciseGirl, MSGBOX_DEFAULT
	release
	end

StartingTown_EventScript_GuySeekingPlayer::
	msgbox StartingTown_Text_GuySeekingPlayer, MSGBOX_DEFAULT
	release
	end

StartingTown_EventScript_PokemonLeagueWoman::
	msgbox StartingTown_Text_PokemonLeagueWoman, MSGBOX_DEFAULT
	release
	end

StartingTown_Movement_RivalApproachPlayer0:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

StartingTown_Movement_RivalApproachPlayer1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

StartingTown_Movement_RivalApproachPlayer2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

StartingTown_Movement_RivalApproachPlayer3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

StartingTown_Movement_RivalApproachPlayer4:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

StartingTown_Movement_RivalApproachPlayer5:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

StartingTown_Movement_RivalApproachPlayer6:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

StartingTown_Movement_RivalApproachPlayer7:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

StartingTown_Movement_RivalApproachPlayer8:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

StartingTown_Movement_RivalApproachPlayer9:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

StartingTown_Movement_RivalLeavePlayer0:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

StartingTown_Movement_RivalLeavePlayer1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

StartingTown_Movement_RivalLeavePlayer2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

StartingTown_Movement_RivalLeavePlayer3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

StartingTown_Movement_PlayerStepOffTruck:
	jump_right
	delay_16
	delay_16
	step_end

StartingTown_Movement_SabreApproachDoor:
	delay_16
	delay_8
	walk_up
	step_end

StartingTown_Movement_SabreEnterHouse:
	walk_up
	set_invisible
	step_end

StartingTown_Movement_PlayerApproachDoor:
	delay_16
	delay_8
	walk_right
	walk_in_place_faster_up
	step_end

StartingTown_Movement_PlayerEnterHouse:
	walk_up
	walk_up
	step_end

StartingTown_Movement_Pehbble3ApproachPlayer0:
	walk_right
	walk_up
	step_end

StartingTown_Movement_Pehbble3ApproachPlayer1:
	walk_right
	walk_right
	walk_up
	step_end

StartingTown_Text_SabreText:
    .string "Hey there buddy! Glad you could finally\n"
	.string "join us! Hopefully you didn't get\p"
	.string "bumped around in the truck too badly.\n"
	.string "Welcome to the Guild Lands!\p"
	.string "I'm Sabre, the developer of this ROM\n"
	.string "and one of the Moderators here.\p"
	.string "All your stuff got here before you\n"
	.string "so you don't have to worry about\l"
	.string "unpacking and getting moved in!\p"
	.string "Let's head inside and get you\n"
	.string "situated.$"

StartingTown_Text_TechnologyGuy:
    .string "Technology is incredible! A whole\n"
	.string "communitity of people can gather\p"
	.string "together and support each other\n"
	.string "using the Internet!$"

StartingTown_Text_ExerciseGirl:
    .string "Do you mind? After this run, I\n"
	.string "have to do my push-ups, squats,\p"
	.string "and my plank. I don't appreciate\n"
	.string "the interruption!$"

StartingTown_Text_GuySeekingPlayer:
    .string "Hey, I'm looking someone to go\n"
	.string "exploring with! Oh sorry, I meant\p"
	.string "someone with a little more experience\n"
	.string "under their belt.$"

StartingTown_Text_PokemonLeagueWoman:
    .string "Through this building is Victory\n"
	.string "Road and beyond that, the Pokémon\p"
	.string "League. Only the strongest trainers\n"
	.string "can hope to compete there.$"

StartingTown_Text_HouseSign:
	.string "{PLAYER}'s house$"

StartingTown_Text_GuildHallSign:
	.string "The Guild Hall$"

StartingTown_Text_GuildCommonsSign:
	.string "Welcome to the Guild!\n"
	.string "Make everyday an adventure!$"

StartingTown_Text_PokemonLeagueSign:
	.string "Entrance to Pokémon League$"

StartingTown_EventScript_Jadedosa::
	lock
	faceplayer
	goto_if_defeated TRAINER_JADEDOSA, StartingTown_EventScript_JadedosaPostBattle
	setvar VAR_0x8008, LOCALID_JADEDOSA
	msgbox StartingTown_Text_JadedosaIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, StartingTown_EventScript_JadedosaBattle
	call_if_eq VAR_RESULT, NO, StartingTown_EventScript_JadedosaRefuseBattle
	release
	end

StartingTown_EventScript_JadedosaBattle::
	trainerbattle_single TRAINER_JADEDOSA, StartingTown_Text_JadedosaBattle, StartingTown_Text_JadedosaDefeat
	msgbox StartingTown_Text_JadedosaPostBattle, MSGBOX_AUTOCLOSE
    end

StartingTown_EventScript_JadedosaRefuseBattle::
    msgbox StartingTown_Text_JadedosaRefuseBattle, MSGBOX_AUTOCLOSE
    end

StartingTown_EventScript_JadedosaPostBattle::
    msgbox StartingTown_Text_JadedosaPostBattle, MSGBOX_AUTOCLOSE
    end

StartingTown_Text_JadedosaIntro:
	.string "Jadedosa: Hey {PLAYER}!\n"
	.string "I love the vibe of this forest,\l"
	.string "all spooky and foggy…\p"
	.string "Say, do you want to battle?\n"
	.string "to pass the time?$"
	
StartingTown_Text_JadedosaRefuseBattle:
    .string "Oh okay. Well I'll be\n"
	.string "here if you change your mind.$"

StartingTown_Text_JadedosaBattle:
    .string "Alright! You're challenging a\n"
	.string "pro DBD looper!$"

StartingTown_Text_JadedosaDefeat:
	.string "I admit, you ate that up!$"

StartingTown_Text_JadedosaPostBattle:
    .string "Jadedosa: Ever since our first meeting,\n"
	.string "I've seen your determination grow\l"
	.string "stronger and success following!\p"
	.string "I hope to have the honor of seeing\n"
	.string "all the places you'll go!\p"
	.string "May the fog always welcome you…$"



StartingTown_EventScript_Dominy::
	lock
	faceplayer
	goto_if_defeated TRAINER_DOMINY, StartingTown_EventScript_DominyPostBattle
	setvar VAR_0x8008, LOCALID_JADEDOSA
	msgbox StartingTown_Text_DominyIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, StartingTown_EventScript_DominyBattle
	call_if_eq VAR_RESULT, NO, StartingTown_EventScript_DominyRefuseBattle
	release
	end

StartingTown_EventScript_DominyBattle::
	trainerbattle_single TRAINER_DOMINY, StartingTown_Text_DominyBattle, StartingTown_Text_DominyDefeat
	msgbox StartingTown_Text_DominyPostBattle, MSGBOX_AUTOCLOSE
    end

StartingTown_EventScript_DominyRefuseBattle::
    msgbox StartingTown_Text_DominyRefuseBattle, MSGBOX_AUTOCLOSE
    end

StartingTown_EventScript_DominyPostBattle::
    msgbox StartingTown_Text_DominyPostBattle, MSGBOX_AUTOCLOSE
    end

StartingTown_Text_DominyIntro:
	.string "Dominy: Greetings {PLAYER}…\n"
	.string "This environment is well suited\l"
	.string "to conducting some experiments.\p"
	.string "Say, I could use some data on the\n"
	.string "strength of my Pokémon. Would you\l"
	.string "mind battling me?$"
	
StartingTown_Text_DominyRefuseBattle:
    .string "I see…\n"
	.string "Very well.$"

StartingTown_Text_DominyBattle: 
    .string "You’ve made it this far…\n"
	.string "Can you handle what’s next?$"

StartingTown_Text_DominyDefeat:
	.string "Well, it appears my calculations were…\n"
	.string "slightly off! Fascinating!\p"
	.string "No worries, this data will be \n"
	.string "quite useful for my next experiment!\p"
	.string "Back to the drawing board!$"

StartingTown_Text_DominyPostBattle: 
    .string "Dominy: Hi Ryan! Wanted to\n"
	.string "take a second and thank you for\l"
	.string "putting the energy and passion into\l"
	.string "your streams that you do.\p"
	.string "Whether it is intense gameplay or\n"
	.string "just chilling with the community, you\l"
	.string "make everything about it personal.\p"
	.string "Keep being you. Entertaining, inspiring,\n"
	.string "and making the world of gaming an even\l"
	.string " more enjoyable place for all to tune into.$"



StartingTown_EventScript_Silvric::
	lock
	faceplayer
	goto_if_defeated TRAINER_SILVRIC, StartingTown_EventScript_SilvricPostBattle
	setvar VAR_0x8008, LOCALID_JADEDOSA
	msgbox StartingTown_Text_SilvricIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, StartingTown_EventScript_SilvricBattle
	call_if_eq VAR_RESULT, NO, StartingTown_EventScript_DominyRefuseBattle
	release
	end

StartingTown_EventScript_SilvricBattle::
	trainerbattle_single TRAINER_SILVRIC, StartingTown_Text_SilvricBattle, StartingTown_Text_SilvricDefeat
	msgbox StartingTown_Text_SilvricPostBattle, MSGBOX_AUTOCLOSE
    end

StartingTown_EventScript_SilvricRefuseBattle::
    msgbox StartingTown_Text_SilvricRefuseBattle, MSGBOX_AUTOCLOSE
    end

StartingTown_EventScript_SilvricPostBattle::
    msgbox StartingTown_Text_SilvricPostBattle, MSGBOX_AUTOCLOSE
    end

StartingTown_Text_SilvricIntro:
	.string "Silvric: Greetings {PLAYER}…\n"
	.string "This environment is well suited\l"
	.string "to conducting some experiments.\p"
    .string "Are you ready to face the wrath of\n"
	.string "the sea?$"
	
StartingTown_Text_SilvricRefuseBattle:
    .string "I see…\n"
	.string "Very well.$"

StartingTown_Text_SilvricBattle: 
    .string "Are you ready to face the wrath of\n"
	.string "the sea?$"

StartingTown_Text_SilvricDefeat:
	.string " i see that the sea have failled me. maybe i should seek for another way to defeat you in the future\n"
	.string "slightly off! Fascinating!\p"
	.string "No worries, this data will be \n"
	.string "quite useful for my next experiment!\p"
	.string "Back to the drawing board!$"

StartingTown_Text_SilvricPostBattle:
    .string "Silvric: well done, you've defeat me. but you know, i just wanted to thanks you for your streams, even tho i can't be there often. anyway, good luck for your travels and see you later.\p"
	.string "Thanks for being you.$"
