Route6_MapScripts::
	.byte 0

Route6_EventScript_Sign::
	msgbox Route6_Text_Sign, MSGBOX_SIGN
	end

Route6_EventScript_Brice::
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Autumn::
	trainerbattle_single TRAINER_AUTUMN, Route6_Text_AutumnIntro, Route6_Text_AutumnDefeat
	msgbox Route6_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Bernie::
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat
	msgbox Route114_Text_BerniePostBattle, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Cindy::
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_PsyStorm::
	trainerbattle_single TRAINER_DARK_PSYSTORM, Route6_Text_DarkPsyStormIntro, Route6_Text_DarkPsyStormDefeat
	msgbox Route6_Text_DarkPsyStormPostBattle, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_EndOfTunnel::
	msgbox Route6_Text_EndOfTunnel, MSGBOX_NPC
	end

Route6_Text_Sign:
	.string "Route 6\n"
	.string "North to Scalepeak City$"

Route6_Text_AutumnIntro:
	.string "I climb this hill every day.\n"
	.string "I have confidence in my strength!$"

Route6_Text_AutumnDefeat:
	.string "Hmm…\n"
	.string "What went wrong?$"

Route6_Text_AutumnPostBattle:
	.string "What is that odd rock protrusion\n"
	.string "a little up the hill from here?$"

Route6_Text_DarkPsyStormIntro:
	.string "DarkPsyStormDPS: Hey Ryan!\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

Route6_Text_DarkPsyStormDefeat:
	.string "You're a legend Ryan!$"

Route6_Text_DarkPsyStormPostBattle:
    .string "Keep being you, you are one of the best\n"
	.string "people I know and I hope I get to know\p"
	.string "you better in this 6th year. Remember:\n"
	.string "have fun, don't feel forced to do\p"
	.string "anything, take breaks when you need 'em.\n"
	.string "We'll all be here for you regardless.$"

Route6_Text_EndOfTunnel:
    .string "Woo… I'm exhausted…\p"
	.string "Thank goodness I finally made it\n"
	.string "through that cave!$"
