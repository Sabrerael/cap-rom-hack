.set LOCALID_BOBSRUS, 1

Route5_MapScripts::
	.byte 0

Route5_EventScript_BobsRUs::
	lock
	faceplayer
	goto_if_defeated TRAINER_BOBSRUS, Route5_EventScript_BobsRUsPostBattle
	setvar VAR_0x8008, LOCALID_BOBSRUS
	msgbox Route5_Text_BobsRUsIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route5_EventScript_BobsRUsBattle
	call_if_eq VAR_RESULT, NO, Route5_EventScript_BobsRUsRefuseBattle
	release
	end

Route5_EventScript_BobsRUsBattle::
	trainerbattle_single TRAINER_BOBSRUS, Route5_Text_BobsRUsRefuseBattle, Route5_Text_BobsRUsDefeat
	msgbox Route5_Text_BobsRUsPostBattle, MSGBOX_AUTOCLOSE
    end

Route5_EventScript_BobsRUsRefuseBattle::
    msgbox Route5_Text_BobsRUsRefuseBattle, MSGBOX_AUTOCLOSE
    end

Route5_EventScript_BobsRUsPostBattle::
    msgbox Route5_Text_BobsRUsPostBattle, MSGBOX_AUTOCLOSE
    end

Route5_Text_BobsRUsIntro:
	.string "BobsRUs: Hey Ryan!\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

Route5_Text_BobsRUsRefuseBattle:
    .string "That's cool man.\n"
	.string "Hit me up when you're ready.$"

Route5_Text_BobsRUsBattle:
    .string "Alright! I won't hold back!$"

Route5_Text_BobsRUsDefeat:
	.string "Aw shucks, you beat me!$"

Route5_Text_BobsRUsPostBattle:
    .string "You're a cool guy man.\n"
	.string "You keep being you.$"
