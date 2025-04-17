MiddleTownWest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MiddleTownWest_OnTransition
	.byte 0

MiddleTownWest_OnTransition:
	setflag FLAG_VISITED_MIDDLE_TOWN_WEST
	end
