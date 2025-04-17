CastleTownTot_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CastleTownTot_OnTransition
	.byte 0

CastleTownTot_OnTransition:
	setflag FLAG_VISITED_CASTLE_TOWN_TOT
	end

CastleTownTot_EventScript_GymSign::
	msgbox CastleTownTot_Text_GymSign, MSGBOX_SIGN
	end

CastleTownTot_Text_GymSign:
	.string "PEACEFUL VALLEY POKéMON GYM\n"
	.string "LEADER: TOT\p"
	.string "“The artistic FAIRY friend!”$"
