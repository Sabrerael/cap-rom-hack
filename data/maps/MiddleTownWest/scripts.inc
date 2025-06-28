MiddleTownWest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MiddleTownWest_OnTransition
	.byte 0

MiddleTownWest_OnTransition:
	setflag FLAG_VISITED_MIDDLE_TOWN_WEST
	end

MiddleTownWest_EventScript_Man::
	lock
	faceplayer
	msgbox MiddleTownWest_Text_Man, MSGBOX_DEFAULT
	release
	end

MiddleTownWest_EventScript_Woman::
	lock
	faceplayer
	msgbox MiddleTownWest_Text_Woman, MSGBOX_DEFAULT
	release
	end

MiddleTownWest_EventScript_TownSign::
	msgbox MiddleTownWest_Text_TownSign, MSGBOX_SIGN
	end

MiddleTownWest_Text_Man:
    .string "Ah, what a beautiful day!\p"
	.string "Maybe I'll head over to the Safari Zone\n"
	.string "today. There's got to be a rare Pokemon\l"
	.string "that I haven't seen yet!$"

MiddleTownWest_Text_Woman:
    .string "That young man seems stuck.\n"
	.string "How on earth did he get over\l"
	.string "there in the first place?$"

MiddleTownWest_Text_TownSign:
	.string "Bashett Town$"
