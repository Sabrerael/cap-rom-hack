.set LOCALID_PEHBBLE, 1

StartingTown_MapScripts::
	.byte 0

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
    msgbox StartingTown_Text_PehbbleHey, MSGBOX_DEFAULT
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
	msgbox StartingTown_Text_PehbbleLetsBattle, MSGBOX_DEFAULT
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
	trainerbattle_no_intro TRAINER_PEHBBLE_1, StartingTown_Text_PehbbleDefeated
	goto StartingTown_EventScript_AfterPehbbleBattle
	end

StartingTown_EventScript_AfterPehbbleBattle::
	msgbox StartingTown_Text_PehbbleTimeToHeadBack, MSGBOX_DEFAULT
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
	setvar VAR_PEHBBLE_STATE, 1
	setflag FLAG_HIDE_STARTING_TOWN_PEHBBLE
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
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

StartingTown_Text_PehbbleHey:
    .string "HEY YOU!$"

StartingTown_Text_PehbbleLetsBattle:
	.string "Pehbble: Thought you could skip town\n"
	.string "without talking to me, huh?\p"
	.string "I can't believe you took away my\n"
	.string "mod privledges! The nerve!\p"
	.string "Oh you got a POKéMON, huh?\p"
	.string "Looks like it's time to\n"
	.string "to teach you a lesson!$"

StartingTown_Text_PehbbleDefeated:
	.string "Huh. Well obviously I was taking\n"
	.string "it easy on you.$"

StartingTown_Text_PehbbleTimeToHeadBack:
	.string "Pehbble: Okay, so you beat me this time.\n"
	.string "Well, I'm going on my own adventure.\p"
	.string "I'm going to catch and train even more\n"
	.string "POKéMON and fight you again.\p"
	.string "Once I beat you {PLAYER}, you'll have to\n"
	.string "make me a mod again.\p"
	.string "We'll see who gets the last laugh!$"
