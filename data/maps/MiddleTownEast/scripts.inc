MiddleTownEast_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MiddleTownEast_OnTransition
	.byte 0

MiddleTownEast_OnTransition:
	setflag FLAG_VISITED_MIDDLE_TOWN_EAST
	end

MiddleTownEast_EventScript_Man::
	lock
	faceplayer
	msgbox MiddleTownEast_Text_Man, MSGBOX_DEFAULT
	release
	end

MiddleTownEast_EventScript_Woman::
	lock
	faceplayer
	msgbox MiddleTownEast_Text_Woman, MSGBOX_DEFAULT
	release
	end

MiddleTownEast_EventScript_Boy::
	lock
	faceplayer
	msgbox MiddleTownEast_Text_Boy, MSGBOX_DEFAULT
	release
	end

MiddleTownEast_EventScript_TownSign::
	msgbox MiddleTownEast_Text_TownSign, MSGBOX_SIGN
	end

MiddleTownEast_Text_Man:
    .string "Ugh… I want to go gamble in the\n"
	.string "next town over.\p"
	.string "But I'd have to hike over all\n"
	.string "that rough terrain…\p"
	.string "Guess I'll save my money…$"

MiddleTownEast_Text_Woman:
    .string "The forest to the south is so\n"
	.string "mysterious. I've heard rumors\l"
	.string "that it's full of ghosts!$"

MiddleTownEast_Text_Boy:
    .string "I need uppies!\p"
	.string "Give me uppies!$"

MiddleTownEast_Text_TownSign:
	.string "Bargewright Town$"
