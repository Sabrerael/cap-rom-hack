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
	goto_if_defeated TRAINER_SEPHUNE, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	setvar VAR_0x8008, LOCALID_SEPHUNE
	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
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
	.string "Don't you agree?\p"
	.string "You don't need to answer that,\n"
	.string "of course you do. The Light Ball\l"
	.string "she's holding making her even cuter!\p"
	.string "Here, so you can make your own\n"
	.string "Pikachu almost as cute!$"

MiddleTownNorth_House2_Text_SephuneRefuseBattle:
    .string "There! Now we can both have\n"
	.string "cute Pikachus!$"

MiddleTownNorth_House2_Text_SephuneBattle:
    .string "There! Now we can both have\n"
	.string "cute Pikachus!$"

MiddleTownNorth_House2_Text_SephuneDefeat:
	.string "Oh.\n"
	.string "You're strong.$"

MiddleTownNorth_House2_Text_SephunePostBattle:
	.string "Well, I did my best.\p"
	.string "You won't be able to beat\n"
	.string "my husband though.$"
