CastleTownHermes_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CastleTownHermes_OnTransition
	.byte 0

CastleTownHermes_OnTransition:
	setflag FLAG_VISITED_CASTLE_TOWN_HERMES
	end

CastleTownHermes_EventScript_GymSign::
	msgbox CastleTownHermes_Text_GymSign, MSGBOX_SIGN
	end

CastleTownHermes_Text_GymSign:
	.string "MERCURY'S CROSSING POKéMON GYM\n"
	.string "LEADER: HERMES\p"
	.string "“The min-maxing Machinist!”$"
