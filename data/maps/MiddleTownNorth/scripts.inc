MiddleTownNorth_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MiddleTownNorth_OnTransition
	.byte 0

MiddleTownNorth_OnTransition:
	setflag FLAG_VISITED_MIDDLE_TOWN_NORTH
	end

MiddleTownNorth_EventScript_OldLady::
	lock
	faceplayer
	msgbox MiddleTownNorth_Text_OldLady, MSGBOX_DEFAULT
	release
	end

MiddleTownNorth_EventScript_Man::
	lock
	faceplayer
	msgbox MiddleTownNorth_Text_Man, MSGBOX_DEFAULT
	release
	end

MiddleTownNorth_EventScript_Woman::
	lock
	faceplayer
	msgbox MiddleTownNorth_Text_Woman, MSGBOX_DEFAULT
	release
	end

MiddleTownNorth_EventScript_TownSign::
	msgbox MiddleTownNorth_Text_TownSign, MSGBOX_SIGN
	end

MiddleTownNorth_Text_OldLady:
    .string "I love the flowers we grow in\n"
	.string "this town. They're so beautiful.\p"
	.string "The moderator from the City to\n"
	.string "the west help us maintain them.$"

MiddleTownNorth_Text_Man:
    .string "Alright, I'm all prepped.\p"
	.string "I need to travel north to visit\n"
	.string "the Research Institute. Unfortunately,\l"
	.string "I have to hike up the mountain to get\l"
	.string "there. My legs already hurt…$"

MiddleTownNorth_Text_Woman:
    .string "This town is nestled in between\n"
	.string "a lake, a desert, and a mountain.\p"
	.string "It's nice being a safe haven between\n"
	.string "these different environments.$"

MiddleTownNorth_Text_TownSign:
	.string "Stumbull Town$"
