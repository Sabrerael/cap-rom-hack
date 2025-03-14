.set LOCALID_ZACKATK, 1

CastleTownTreble_MapScripts::
	.byte 0

CastleTownTreble_EventScript_GymSign::
	msgbox CastleTownTreble_Text_GymSign, MSGBOX_SIGN
	end

CastleTownTreble_EventScript_ZackAtk::
	lock
	faceplayer
	goto_if_defeated TRAINER_ZACKATK, CastleTownTreble_EventScript_ZackAtkPostBattle
	setvar VAR_0x8008, LOCALID_ZACKATK
	msgbox CastleTownTreble_Text_ZackAtkIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, CastleTownTreble_EventScript_ZackAtkBattle
	call_if_eq VAR_RESULT, NO, CastleTownTreble_EventScript_ZackAtkRefuseBattle
	release
	end

CastleTownTreble_EventScript_ZackAtkBattle::
	trainerbattle_single TRAINER_ZACKATK, CastleTownTreble_Text_ZackAtkBattle, CastleTownTreble_Text_ZackAtkDefeat
	msgbox CastleTownTreble_Text_ZackAtkPostBattle, MSGBOX_AUTOCLOSE
    end

CastleTownTreble_EventScript_ZackAtkRefuseBattle::
    msgbox CastleTownTreble_Text_ZackAtkRefuseBattle, MSGBOX_AUTOCLOSE
    end

CastleTownTreble_EventScript_ZackAtkPostBattle::
    msgbox CastleTownTreble_Text_ZackAtkPostBattle, MSGBOX_AUTOCLOSE
    end

CastleTownTreble_Text_GymSign:
	.string "CAMPANULA CITY POKéMON GYM\n"
	.string "LEADER: TREBLE\p"
	.string "“The gardener of GRASS POKéMON!”$"

CastleTownTreble_Text_ZackAtkIntro:
	.string "ZackAtk: Hey {PLAYER}!\n"
	.string "I'm trying to give Treble her\l"
	.string "lunch but people keep challenging\l"
	.string "her…\p"
	.string "Well, do you want to battle\n"
	.string "to pass the time?$"
	
CastleTownTreble_Text_ZackAtkRefuseBattle:
    .string "Oh okay. Well I'll be\n"
	.string "here if you change your mind.$"

CastleTownTreble_Text_ZackAtkBattle:
    .string "Alright! I won't hold back!$"

CastleTownTreble_Text_ZackAtkDefeat:
	.string "Ah, almost dropped the lunch!$"

CastleTownTreble_Text_ZackAtkPostBattle:
    .string "You're a cool guy man.\n"
	.string "You keep being you.$"
