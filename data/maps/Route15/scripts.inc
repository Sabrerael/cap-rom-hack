.set LOCALID_ONLYJACK, 1

Route15_MapScripts::
	.byte 0

Route15_EventScript_Andrew::
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Ivan::
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Edward::
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_OnlyJack::
	lock
	faceplayer
	goto_if_defeated TRAINER_ITSONLYJACK, Route15_EventScript_OnlyJackPostBattle
	setvar VAR_0x8008, LOCALID_ONLYJACK
	msgbox Route15_Text_OnlyJackIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route15_EventScript_OnlyJackBattle
	call_if_eq VAR_RESULT, NO, Route15_EventScript_OnlyJackRefuseBattle
	release
	end

Route15_EventScript_OnlyJackBattle::
	trainerbattle_single TRAINER_ITSONLYJACK, Route15_Text_OnlyJackBattle, Route15_Text_OnlyJackDefeat
	msgbox Route15_Text_OnlyJackPostBattle, MSGBOX_AUTOCLOSE
    end

Route15_EventScript_OnlyJackRefuseBattle::
    msgbox Route15_Text_OnlyJackRefuseBattle, MSGBOX_AUTOCLOSE
    end

Route15_EventScript_OnlyJackPostBattle::
    msgbox Route15_Text_OnlyJackPostBattle, MSGBOX_AUTOCLOSE
    end

Route15_Text_OnlyJackIntro:
	.string "ItsOnlyJack: Hey Ryan!\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"
	
Route15_Text_OnlyJackRefuseBattle:
    .string "That's cool man.\n"
	.string "Hit me up when you're ready.$"

Route15_Text_OnlyJackBattle:
    .string "Alright! I won't hold back!$"

Route15_Text_OnlyJackDefeat:
	.string "Aw shucks, you beat me!$"

Route15_Text_OnlyJackPostBattle:
    .string "You're a cool guy man.\n"
	.string "You keep being you.$"
