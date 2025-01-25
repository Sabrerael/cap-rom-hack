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

Route15_EventScript_OnlyJack::
	trainerbattle_single TRAINER_ITSONLYJACK, Route15_Text_OnlyJackIntro, Route15_Text_OnlyJackDefeat
	msgbox Route15_Text_OnlyJackPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_Text_OnlyJackIntro:
	.string "ItsOnlyJack: Hey Ryan!\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

Route15_Text_OnlyJackDefeat:
	.string "Aw shucks, you beat me!$"

Route15_Text_OnlyJackPostBattle:
    .string "You're a cool guy man.\n"
	.string "You keep being you.$"
