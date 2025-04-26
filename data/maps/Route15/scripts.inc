.set LOCALID_ONLYJACK, 1

Route15_MapScripts::
	.byte 0

Route15_EventScript_Andrew::
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Ivan::
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Aidan::
	trainerbattle_single TRAINER_AIDAN, Route127_Text_AidanIntro, Route127_Text_AidanDefeat
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Myles::
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Pat::
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Kyra::
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route15_EventScript_Dylan::
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat
	msgbox Route117_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route15_EventScript_Luke::
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Dez::
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Alexa::
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_OnlyJack::
	lock
	faceplayer
	goto_if_defeated TRAINER_ITSONLYJACK, Route15_EventScript_OnlyJackPostBattle
	setvar VAR_0x8008, LOCALID_ONLYJACK
	msgbox Route15_Text_OnlyJackIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route15_EventScript_OnlyJackBattle
	call_if_eq VAR_RESULT, NO, Route15_EventScript_OnlyJackRefuseBattle
	release
	end

Route15_EventScript_OnlyJackBattle::
	trainerbattle_single TRAINER_ITSONLYJACK, Route15_Text_OnlyJackBattle, Route15_Text_OnlyJackDefeat
	msgbox Route15_Text_OnlyJackPostBattle, MSGBOX_AUTOCLOSE
    end

Route15_EventScript_OnlyJackRefuseBattle::
    msgbox Route15_Text_OnlyJackRefuseBattle, MSGBOX_AUTOCLOSE
    end

Route15_EventScript_OnlyJackPostBattle::
    msgbox Route15_Text_OnlyJackPostBattle, MSGBOX_AUTOCLOSE
    end

Route15_Text_OnlyJackIntro:
	.string "ItsOnlyJack: Hey Ryan!\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"
	
Route15_Text_OnlyJackRefuseBattle:
    .string "That's cool man.\n"
	.string "Hit me up when you're ready.$"

Route15_Text_OnlyJackBattle:
    .string "Alright! I won't hold back!$"

Route15_Text_OnlyJackDefeat:
	.string "Aw shucks, you beat me!$"

Route15_Text_OnlyJackPostBattle:
    .string "You're a cool guy man.\n"
	.string "You keep being you.$"
