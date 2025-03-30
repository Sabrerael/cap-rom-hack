.set LOCALID_ZACKATK, 1

CastleTownTreble_MapScripts::
	.byte 0

CastleTownTreble_EventScript_CitySign::
	msgbox CastleTownTreble_Text_CitySign, MSGBOX_SIGN
	end

CastleTownTreble_EventScript_GymSign::
	msgbox CastleTownTreble_Text_GymSign, MSGBOX_SIGN
	end

CastleTownTreble_EventScript_FlowerHouseSign::
	msgbox CastleTownTreble_Text_FlowerHouseSign, MSGBOX_SIGN
	end

CastleTownTreble_EventScript_FlowerLady::
	msgbox CastleTownTreble_Text_FlowerLady, MSGBOX_NPC
	end

CastleTownTreble_EventScript_OldMan::
	msgbox CastleTownTreble_Text_OldMan, MSGBOX_NPC
	end

CastleTownTreble_EventScript_YoungBoy::
	msgbox CastleTownTreble_Text_YoungBoy, MSGBOX_NPC
	end

CastleTownTreble_EventScript_Smoliv::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SMOLIV, CRY_MODE_NORMAL
	msgbox CastleTownTreble_Text_Smoliv, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CastleTownTreble_EventScript_ZackAtk::
	lock
	faceplayer
	goto_if_defeated TRAINER_ZACKATK, CastleTownTreble_EventScript_ZackAtkPostBattle
	setvar VAR_0x8008, LOCALID_ZACKATK
	msgbox CastleTownTreble_Text_ZackAtkIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, CastleTownTreble_EventScript_ZackAtkBattle
	call_if_eq VAR_RESULT, NO, CastleTownTreble_EventScript_ZackAtkRefuseBattle
	release
	end

CastleTownTreble_EventScript_ZackAtkBattle::
	trainerbattle_single TRAINER_ZACKATK, CastleTownTreble_Text_ZackAtkBattle, CastleTownTreble_Text_ZackAtkDefeat
	msgbox CastleTownTreble_Text_ZackAtkPostBattle, MSGBOX_AUTOCLOSE
    end

CastleTownTreble_EventScript_ZackAtkRefuseBattle::
    msgbox CastleTownTreble_Text_ZackAtkRefuseBattle, MSGBOX_AUTOCLOSE
    end

CastleTownTreble_EventScript_ZackAtkPostBattle::
    msgbox CastleTownTreble_Text_ZackAtkPostBattle, MSGBOX_AUTOCLOSE
    end

CastleTownTreble_Text_CitySign:
	.string "Campanula City\n"
	.string "Blossoming All Year Round$"

CastleTownTreble_Text_GymSign:
	.string "CAMPANULA CITY POKéMON GYM\n"
	.string "LEADER: TREBLE\p"
	.string "“The gardener of GRASS POKéMON!”$"

CastleTownTreble_Text_FlowerHouseSign:
	.string "House of Flowers$"

CastleTownTreble_Text_FlowerLady:
    .string "La la la… … …\p"
	.string "I'm helping tend all of these\n"
	.string "beautiful plants.$"

CastleTownTreble_Text_OldMan:
    .string "The slow-paced life and the\n"
	.string "continual growth of plants\l"
	.string "does the soul good.$"

CastleTownTreble_Text_YoungBoy:
    .string "I love living here. This city\n"
	.string "always has a ton of berries\p"
	.string "growing in the fields.$"

CastleTownTreble_Text_Smoliv:
    .string "Smoliv?$"

CastleTownTreble_Text_ZackAtkIntro:
	.string "ZackAtk: Hey {PLAYER}!\n"
	.string "I'm trying to give Treble her\l"
	.string "lunch but people keep challenging\l"
	.string "her…\p"
	.string "Well, do you want to battle\n"
	.string "to pass the time?$"
	
CastleTownTreble_Text_ZackAtkRefuseBattle:
    .string "Oh okay. Well I'll be\n"
	.string "here if you change your mind.$"

CastleTownTreble_Text_ZackAtkBattle:
    .string "Alright! I won't hold back!$"

CastleTownTreble_Text_ZackAtkDefeat:
	.string "Ah, almost dropped the lunch!$"

CastleTownTreble_Text_ZackAtkPostBattle:
    .string "You're a cool guy man.\n"
	.string "You keep being you.$"
