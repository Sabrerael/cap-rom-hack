.set LOCALID_MAN, 1
.set LOCALID_SEPHUNE, 2

MiddleTownNorth_House2_MapScripts::
	.byte 0

MiddleTownNorth_House2_EventScript_VitaminMan::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_LADY
	goto_if_set FLAG_RECEIVED_LIGHT_BALL, MiddleTownNorth_House1_Text_Lady_ReceivedLightBall
	msgbox MiddleTownNorth_House1_Text_Lady_GiveLightBall, MSGBOX_DEFAULT
	giveitem ITEM_LIGHT_BALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_LIGHT_BALL
	goto MiddleTownNorth_House1_EventScript_FaceOriginalDirection
	end

MiddleTownNorth_House2_EventScript_Sephune::
	lock
	faceplayer
	goto_if_defeated TRAINER_SEPHUNE, MiddleTownNorth_House2_EventScript_SephunePostBattle
	setvar VAR_0x8008, LOCALID_SEPHUNE
	msgbox MiddleTownNorth_House2_Text_SephuneIntro, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MiddleTownNorth_House2_EventScript_SephuneBattle
	call_if_eq VAR_RESULT, NO, MiddleTownNorth_House2_EventScript_SephuneRefuseBattle
	release
	end

MiddleTownNorth_House2_EventScript_SephuneBattle::
	trainerbattle_single TRAINER_SEPHUNE, MiddleTownNorth_House2_Text_SephuneBattle, MiddleTownNorth_House2_Text_SephuneDefeat
	msgbox MiddleTownNorth_House2_Text_SephunePostBattle, MSGBOX_AUTOCLOSE
    end

MiddleTownNorth_House2_EventScript_SephuneRefuseBattle::
    msgbox MiddleTownNorth_House2_Text_SephuneRefuseBattle, MSGBOX_AUTOCLOSE
    end

MiddleTownNorth_House2_EventScript_SephunePostBattle::
    msgbox MiddleTownNorth_House2_Text_SephunePostBattle, MSGBOX_AUTOCLOSE
    end

MiddleTownNorth_House2_Text_SephuneIntro:
	.string "Sephune: Hey there pal!\p"
	.string "I've run out of fruit snacks\n"
	.string "and this guy is refusing to share.\p"
	.string "While I try to wear him down,\n"
	.string "do you want to battle?$"

MiddleTownNorth_House2_Text_SephuneRefuseBattle:
    .string "Okay, fine.\p"
	.string "Wait, do you have fruit snacks?$"

MiddleTownNorth_House2_Text_SephuneBattle:
    .string "Alright! I won't hold back!$"

MiddleTownNorth_House2_Text_SephuneDefeat:
	.string "I blame my empty stomach.$"

MiddleTownNorth_House2_Text_SephunePostBattle:
	.string "Sephune: Good job!\p"
	.string "Keep up your training and become\n"
	.string "the best there ever was.$"
