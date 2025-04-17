CastleTownSalsa_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CastleTownSalsa_OnTransition
	.byte 0

CastleTownSalsa_OnTransition:
	setflag FLAG_VISITED_CASTLE_TOWN_SALSA
	end

CastleTownSalsa_EventScript_GymSign::
	msgbox CastleTownSalsa_Text_GymSign, MSGBOX_SIGN
	end

CastleTownSalsa_Text_GymSign:
	.string "PUERTO DEL SALSA POKéMON GYM\n"
	.string "LEADER: SALSA\p"
	.string "“The spicy pilot!”$"
