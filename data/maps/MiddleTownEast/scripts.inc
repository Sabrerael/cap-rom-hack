MiddleTownEast_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MiddleTownEast_OnTransition
	.byte 0

MiddleTownEast_OnTransition:
	setflag FLAG_VISITED_MIDDLE_TOWN_EAST
	end
