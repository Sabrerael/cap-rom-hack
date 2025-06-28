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

MiddleTownEast_EventScript_TownSign::
	msgbox MiddleTownEast_Text_TownSign, MSGBOX_SIGN
	end

MiddleTownEast_Text_Man:
    .string "Ah, what a beautiful day!\p"
	.string "Maybe I'll head over to the Safari Zone\n"
	.string "today. There's got to be a rare Pokemon\l"
	.string "that I haven't seen yet!$"

MiddleTownEast_Text_Woman:
    .string "That young man seems stuck.\n"
	.string "How on earth did he get over\l"
	.string "there in the first place?$"

MiddleTownEast_Text_TownSign:
	.string "Bargewright Town$"
