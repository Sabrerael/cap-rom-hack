.set LOCALID_DEATH, 1

MiddleTownSouth_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MiddleTownSouth_OnTransition
	.byte 0

MiddleTownSouth_OnTransition:
	setflag FLAG_VISITED_MIDDLE_TOWN_SOUTH
	end

MiddleTownSouth_EventScript_DaddyDeath::
	lock
	faceplayer
	goto_if_defeated TRAINER_DA_DADDY_DEATH, MiddleTownSouth_EventScript_DaddyDeathPostBattle
	setvar VAR_0x8008, LOCALID_DEATH
	msgbox MiddleTownSouth_Text_DaddyDeathIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MiddleTownSouth_EventScript_DaddyDeathBattle
	call_if_eq VAR_RESULT, NO, MiddleTownSouth_EventScript_DaddyDeathRefuseBattle
	release
	end

MiddleTownSouth_EventScript_DaddyDeathBattle::
	trainerbattle_single TRAINER_DA_DADDY_DEATH, MiddleTownSouth_Text_DaddyDeathBattle, MiddleTownSouth_Text_DaddyDeathDefeat
	msgbox MiddleTownSouth_Text_DaddyDeathPostBattle, MSGBOX_AUTOCLOSE
    end

MiddleTownSouth_EventScript_DaddyDeathRefuseBattle::
    msgbox MiddleTownSouth_Text_DaddyDeathRefuseBattle, MSGBOX_AUTOCLOSE
    end

MiddleTownSouth_EventScript_DaddyDeathPostBattle::
    msgbox MiddleTownSouth_Text_DaddyDeathPostBattle, MSGBOX_AUTOCLOSE
    end

MiddleTownSouth_EventScript_Man::
	lock
	faceplayer
	msgbox MiddleTownSouth_Text_Man, MSGBOX_DEFAULT
	release
	end

MiddleTownSouth_EventScript_Woman::
	lock
	faceplayer
	msgbox MiddleTownSouth_Text_Woman, MSGBOX_DEFAULT
	release
	end

MiddleTownSouth_EventScript_TownSign::
	msgbox MiddleTownSouth_Text_TownSign, MSGBOX_SIGN
	end

MiddleTownSouth_Text_DaddyDeathIntro:
	.string "DaddyDeath: Oh hi {PLAYER}…\n"
	.string "I… uh… wasn't listening when people\l"
	.string "were talking…\p"
	.string "I don't know where I am or how\n"
	.string "I got here…\p"
	.string "I guess we could battle?$"
	
MiddleTownSouth_Text_DaddyDeathRefuseBattle:
    .string "Oh okay. Well I'll be\n"
	.string "here if you change your mind.$"

MiddleTownSouth_Text_DaddyDeathBattle:
    .string "Don't forget I was a pro gamer!\n"
	.string "Bring it on!$"

MiddleTownSouth_Text_DaddyDeathDefeat:
	.string "I wasn't a pro Pokémon player!$"

MiddleTownSouth_Text_DaddyDeathPostBattle:
    .string "DaddyDeath: You're dope.\p"
	.string "Thanks for being you.$"

MiddleTownSouth_Text_Man:
    .string "Ah, what a beautiful day!\p"
	.string "Maybe I'll head over to the Safari Zone\n"
	.string "today. There's got to be a rare Pokemon\l"
	.string "that I haven't seen yet!$"

MiddleTownSouth_Text_Woman:
    .string "That young man seems stuck.\n"
	.string "How on earth did he get over\l"
	.string "there in the first place?$"

MiddleTownSouth_Text_TownSign:
	.string "Speakeasy Town$"
