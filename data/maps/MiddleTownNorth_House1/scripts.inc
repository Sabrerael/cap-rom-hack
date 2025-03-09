.set LOCALID_LADY, 1

MiddleTownNorth_House1_MapScripts::
	.byte 0

MiddleTownNorth_House1_EventScript_Lady::
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

MiddleTownNorth_House1_EventScript_Pikachu::
	msgbox MiddleTownNorth_House1_Text_Pikachu, MSGBOX_DEFAULT
	release
	end

MiddleTownNorth_House1_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MiddleTownNorth_House1_Text_Lady_GiveLightBall:
    .string "My Pikachu is so cute!\n"
	.string "Don't you agree?\p"
	.string "You don't need to answer that,\n"
	.string "of course you do. The Light Ball\l"
	.string "she's holding making her even cuter!\p"
	.string "Here, so you can make your own\n"
	.string "Pikachu almost as cute!$"

MiddleTownNorth_House1_Text_Lady_ReceivedLightBall:
    .string "There! Now we can both have\n"
	.string "cute Pikachus!$"

MiddleTownNorth_House1_Text_Pikachu:
    .string "Pikachu: Pika!$"
