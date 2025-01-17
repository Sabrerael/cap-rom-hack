CastleTownTMoney_MapScripts::
	.byte 0

CastleTownTMoney_EventScript_GymSign::
	msgbox CastleTownTMoney_Text_GymSign, MSGBOX_SIGN
	end

CastleTownTMoney_EventScript_CoinCase::
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
	giveitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_COIN_CASE
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
	end

CastleTownTMoney_Text_GymSign:
	.string "VOLTARI CITY POKéMON GYM\n"
	.string "LEADER: TMoney\p"
	.string "“The Electric collector of valuables!”$"
