Route1_MapScripts::
	.byte 0

Route1_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_PsyStorm::
	trainerbattle_single TRAINER_DARK_PSYSTORM, Route1_Text_DarkPsyStormIntro, Route1_Text_DarkPsyStormDefeat
	msgbox Route1_Text_DarkPsyStormPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_Text_DarkPsyStormIntro:
	.string "DarkPsyStormDPS: Hey Ryan!\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

Route1_Text_DarkPsyStormDefeat:
	.string "You're a legend Ryan!$"

Route1_Text_DarkPsyStormPostBattle:
    .string "Keep being you, you are one of the best\n"
	.string "people I know and I hope I get to know\p"
	.string "you better in this 6th year. Remember:\n"
	.string "have fun, don't feel forced to do\p"
	.string "anything, take breaks when you need 'em.\n"
	.string "We'll all be here for you regardless.$"
