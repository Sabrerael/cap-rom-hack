CastleTownAndy_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CastleTownAndy_OnTransition
	.byte 0

CastleTownAndy_OnTransition:
	setflag FLAG_VISITED_CASTLE_TOWN_ANDY
	end

CastleTownAndy_EventScript_GymSign::
	msgbox CastleTownAndy_Text_GymSign, MSGBOX_SIGN
	end

CastleTownAndy_Text_GymSign:
	.string "MEW YORK CITY POKéMON GYM\n"
	.string "LEADERS: JADE AND RIN\p"
	.string "“The dynamic duo!”$"
