CastleTownBlindJim_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CastleTownBlindJim_OnTransition
	.byte 0

CastleTownBlindJim_OnTransition:
	setflag FLAG_VISITED_CASTLE_TOWN_BLINDJIM
	end


CastleTownBlindJim_EventScript_GymSign::
	msgbox CastleTownBlindJim_Text_GymSign, MSGBOX_SIGN
	end

CastleTownBlindJim_Text_GymSign:
	.string "YAMIKO VILLAGE POKéMON GYM\n"
	.string "LEADER: BLINDJIM\p"
	.string "“This sign is also in braile!”$"
