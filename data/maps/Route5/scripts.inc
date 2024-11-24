Route5_MapScripts::
	.byte 0

Route5_EventScript_BobsRUs::
	trainerbattle_single TRAINER_BOBSRUS, Route5_Text_BobsRUsIntro, Route5_Text_BobsRUsDefeat
	msgbox Route1_Text_DarkPsyStormPostBattle, MSGBOX_AUTOCLOSE
	end

Route5_Text_BobsRUsIntro:
	.string "BobsRUs: Hey Ryan!\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

Route5_Text_BobsRUsDefeat:
	.string "Aw shucks, you beat me!$"

Route5_Text_BobsRUsPostBattle:
    .string "You're a cool guy man.\n"
	.string "You keep being you.$"
