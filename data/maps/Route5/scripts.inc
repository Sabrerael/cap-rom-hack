.set LOCALID_BOBSRUS, 1

Route5_MapScripts::
	.byte 0

Route5_EventScript_Jaylen::
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
	end

Route5_EventScript_Marcel::
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
	end

Route5_EventScript_Alberto::
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
	end

Route5_EventScript_Daisy::
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end

Route5_EventScript_Rose::
	trainerbattle_single TRAINER_ROSE, Route118_Text_RoseIntro, Route118_Text_RoseDefeat
	msgbox Route118_Text_RosePostBattle, MSGBOX_AUTOCLOSE
	end

Route5_EventScript_Claude::
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
	end

Route5_EventScript_Ned::
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
	end

Route5_EventScript_Brooke::
	trainerbattle_single TRAINER_BROOKE, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat
	msgbox Route111_Text_BrookePostBattle, MSGBOX_AUTOCLOSE
	end

Route5_EventScript_Ed::
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end

Route5_EventScript_BobsRUs::
	lock
	faceplayer
	goto_if_defeated TRAINER_BOBSRUS, Route5_EventScript_BobsRUsPostBattle
	setvar VAR_0x8008, LOCALID_BOBSRUS
	msgbox Route5_Text_BobsRUsIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route5_EventScript_BobsRUsBattle
	call_if_eq VAR_RESULT, NO, Route5_EventScript_BobsRUsRefuseBattle
	release
	end

Route5_EventScript_BobsRUsBattle::
	trainerbattle_single TRAINER_BOBSRUS, Route5_Text_BobsRUsBattle, Route5_Text_BobsRUsDefeat
	msgbox Route5_Text_BobsRUsPostBattle, MSGBOX_AUTOCLOSE
    end

Route5_EventScript_BobsRUsRefuseBattle::
    msgbox Route5_Text_BobsRUsRefuseBattle, MSGBOX_AUTOCLOSE
    end

Route5_EventScript_BobsRUsPostBattle::
    msgbox Route5_Text_BobsRUsPostBattle, MSGBOX_AUTOCLOSE
    end

Route5_Text_BobsRUsIntro:
	.string "BobsRUs: Hey Ryan!\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

Route5_Text_BobsRUsRefuseBattle:
    .string "That's cool man.\n"
	.string "Hit me up when you're ready.$"

Route5_Text_BobsRUsBattle:
    .string "Alright! I won't hold back!$"

Route5_Text_BobsRUsDefeat:
	.string "Aw shucks, you beat me!$"

Route5_Text_BobsRUsPostBattle:
    .string "You're a cool guy man.\n"
	.string "You keep being you.$"
