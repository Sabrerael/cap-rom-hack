CastleTownSabre_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CastleTownSabre_OnTransition
	.byte 0

CastleTownSabre_OnTransition:
	setflag FLAG_VISITED_CASTLE_TOWN_SABRE
	end

CastleTownSabre_EventScript_GymSign::
	msgbox CastleTownSabre_Text_GymSign, MSGBOX_SIGN
	end

CastleTownSabre_Text_GymSign:
	.string "SCALEPEAK CITY POKéMON GYM\n"
	.string "LEADER: SABRE\p"
	.string "“The constantly tired DRAGON tamer!”$"
