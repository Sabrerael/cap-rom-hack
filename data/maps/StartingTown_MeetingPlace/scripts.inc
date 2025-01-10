.set LOCALID_MOVE_RELEARNER, 5

StartingTown_MeetingPlace_MapScripts::
	.byte 0

StartingTown_MeetingPlace_EventScript_Receptionist::
	msgbox StartingTown_MeetingPlace_Text_Receptionist, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, StartingTown_MeetingPlace_EventScript_ComeBackWithHeartScale
	goto StartingTown_MeetingPlace_EventScript_ReceptionistDescription
	end

StartingTown_MeetingPlace_EventScript_ReceptionistFarewell::
	msgbox StartingTown_MeetingPlace_Text_Receptionist, MSGBOX_NPC
	end

StartingTown_MeetingPlace_EventScript_ReceptionistDescription::
	msgbox StartingTown_MeetingPlace_Text_Receptionist, MSGBOX_NPC
	end

StartingTown_MeetingPlace_EventScript_Professor::
	lock
	faceplayer
    goto ProfBirch_EventScript_AskRatePokedex
	release
	end

StartingTown_MeetingPlace_EventScript_TMGuy::
	lock
	faceplayer
	message StartingTown_MeetingPlace_Text_TMGuy
	waitmessage
	pokemart StartingTown_MeetingPlace_TMGuy
	msgbox StartingTown_MeetingPlace_Text_TMGuy_Leave, MSGBOX_DEFAULT
	release
	end
	.align 2
StartingTown_MeetingPlace_TMGuy:
	.2byte ITEM_TM03
	.2byte ITEM_TM09
	.2byte ITEM_TM17
	.2byte ITEM_TM21
	.2byte ITEM_TM27
	.2byte ITEM_TM28
	.2byte ITEM_TM34
	.2byte ITEM_TM39
	.2byte ITEM_TM46
	.2byte ITEM_NONE
	release
	end

StartingTown_MeetingPlace_EventScript_HMGuy::
	msgbox StartingTown_MeetingPlace_Text_Receptionist, MSGBOX_NPC
	end

StartingTown_MeetingPlace_EventScript_MoveRelearner::
	lockall
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, StartingTown_MeetingPlace_EventScript_AskTeachMove
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto StartingTown_MeetingPlace_EventScript_ChooseMon
	end

StartingTown_MeetingPlace_EventScript_AskTeachMove::
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, StartingTown_MeetingPlace_EventScript_ComeBackWithHeartScale
	goto StartingTown_MeetingPlace_EventScript_ChooseMon
	end

StartingTown_MeetingPlace_EventScript_ChooseMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, StartingTown_MeetingPlace_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, StartingTown_MeetingPlace_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, StartingTown_MeetingPlace_EventScript_NoMoveToTeachMon
	goto StartingTown_MeetingPlace_EventScript_ChooseMove
	end

StartingTown_MeetingPlace_EventScript_ChooseMove::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, StartingTown_MeetingPlace_EventScript_ChooseMon
	end

StartingTown_MeetingPlace_EventScript_NoMoveToTeachMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto StartingTown_MeetingPlace_EventScript_ChooseMon
	end

StartingTown_MeetingPlace_EventScript_CantTeachEgg::
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto StartingTown_MeetingPlace_EventScript_ChooseMon
	end

StartingTown_MeetingPlace_EventScript_ComeBackWithHeartScale::
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	releaseall
	end

StartingTown_MeetingPlace_EventScript_OldRodGuy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, StartingTown_MeetingPlace_EventScript_HowsFishing
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, StartingTown_MeetingPlace_EventScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, StartingTown_MeetingPlace_EventScript_NotGettingItchToFish
	end

StartingTown_MeetingPlace_EventScript_GiveOldRod::
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_NotGettingItchToFish::
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_HowsFishing::
	message DewfordTown_Text_HowsYourFishing
	waitmessage
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
	goto_if_eq VAR_RESULT, 0, StartingTown_MeetingPlace_EventScript_FishingExcellent
	goto_if_eq VAR_RESULT, 1, StartingTown_MeetingPlace_EventScript_FishingNotSoGood
	end

StartingTown_MeetingPlace_EventScript_FishingExcellent::
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_FishingNotSoGood::
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_FriendshipChecker::
	lock
	faceplayer
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case FRIENDSHIP_NONE, StartingTown_MeetingPlace_EventScript_DetestsYou
	case FRIENDSHIP_1_TO_49, StartingTown_MeetingPlace_EventScript_VeryWary
	case FRIENDSHIP_50_TO_99, StartingTown_MeetingPlace_EventScript_NotUsedToYou
	case FRIENDSHIP_100_TO_149, StartingTown_MeetingPlace_EventScript_GettingUsedToYou
	case FRIENDSHIP_150_TO_199, StartingTown_MeetingPlace_EventScript_LikesYouQuiteALot
	case FRIENDSHIP_200_TO_254, StartingTown_MeetingPlace_EventScript_VeryHappy
	case FRIENDSHIP_MAX, StartingTown_MeetingPlace_EventScript_AdoresYou
	release
	end

StartingTown_MeetingPlace_EventScript_DetestsYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_VeryWary::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_NotUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_GettingUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_LikesYouQuiteALot::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_VeryHappy::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_AdoresYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_GoodRodGuy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GOOD_ROD, StartingTown_MeetingPlace_EventScript_ReceivedGoodRod
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, StartingTown_MeetingPlace_EventScript_ReceiveGoodRod
	goto_if_eq VAR_RESULT, NO, StartingTown_MeetingPlace_EventScript_DeclineGoodRod
	end

StartingTown_MeetingPlace_EventScript_ReceiveGoodRod::
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_GOOD_ROD
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_DeclineGoodRod::
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_ReceivedGoodRod::
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_IVChecker::
	msgbox StartingTown_MeetingPlace_Text_Receptionist, MSGBOX_NPC
	end

StartingTown_MeetingPlace_EventScript_SuperRodGuy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SUPER_ROD, StartingTown_MeetingPlace_EventScript_ReceivedSuperRod
	msgbox MossdeepCity_House3_Text_YouWantSuperRod, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StartingTown_MeetingPlace_EventScript_DeclineSuperRod
	msgbox MossdeepCity_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SUPER_ROD
	msgbox MossdeepCity_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_ReceivedSuperRod::
	msgbox MossdeepCity_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_DeclineSuperRod::
	msgbox MossdeepCity_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_MoveTutor::
	msgbox StartingTown_MeetingPlace_Text_Receptionist, MSGBOX_NPC
	end

StartingTown_MeetingPlace_EventScript_SpecialVendor::
	lock
	faceplayer
	message StartingTown_MeetingPlace_Text_TMGuy
	waitmessage
	pokemart StartingTown_MeetingPlace_SpecialVendor
	msgbox StartingTown_MeetingPlace_Text_TMGuy_Leave, MSGBOX_DEFAULT
	release
	end
	.align 2
StartingTown_MeetingPlace_SpecialVendor:
	.2byte ITEM_TM03
	.2byte ITEM_TM09
	.2byte ITEM_TM17
	.2byte ITEM_TM21
	.2byte ITEM_TM27
	.2byte ITEM_TM28
	.2byte ITEM_TM34
	.2byte ITEM_TM39
	.2byte ITEM_TM46
	.2byte ITEM_NONE
	release
	end

StartingTown_MeetingPlace_EventScript_BikeGuy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BIKE, StartingTown_MeetingPlace_EventScript_AskSwitchBikes
	goto_if_set FLAG_DECLINED_BIKE, StartingTown_MeetingPlace_EventScript_SkipGreeting
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, StartingTown_MeetingPlace_EventScript_YesFar
	goto_if_eq VAR_RESULT, NO, StartingTown_MeetingPlace_EventScript_NotFar
	end

StartingTown_MeetingPlace_EventScript_SkipGreeting::
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, StartingTown_MeetingPlace_EventScript_YesFar
	goto_if_eq VAR_RESULT, NO, StartingTown_MeetingPlace_EventScript_NotFar
	end

StartingTown_MeetingPlace_EventScript_ChooseBike::
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
	waitmessage
	multichoice 21, 8, MULTI_BIKE, TRUE
	switch VAR_RESULT
	case 0, StartingTown_MeetingPlace_EventScript_GetMachBike
	case 1, StartingTown_MeetingPlace_EventScript_GetAcroBike
	end

StartingTown_MeetingPlace_EventScript_NotFar::
	setflag FLAG_DECLINED_BIKE
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_YesFar::
	setflag FLAG_RECEIVED_BIKE
	goto StartingTown_MeetingPlace_EventScript_ChooseBike
	end

StartingTown_MeetingPlace_EventScript_GetMachBike::
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
	giveitem ITEM_MACH_BIKE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	goto StartingTown_MeetingPlace_EventScript_ComeBackToSwitchBikes
	end

StartingTown_MeetingPlace_EventScript_GetAcroBike::
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
	giveitem ITEM_ACRO_BIKE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	goto StartingTown_MeetingPlace_EventScript_ComeBackToSwitchBikes
	end

StartingTown_MeetingPlace_EventScript_ComeBackToSwitchBikes::
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
	special SwapRegisteredBike
	release
	end

StartingTown_MeetingPlace_EventScript_AskSwitchBikes::
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, StartingTown_MeetingPlace_EventScript_SwitchBikes
	goto_if_eq VAR_RESULT, NO, StartingTown_MeetingPlace_EventScript_KeepBike
	end

@ If the player does not have a bike on them Rydel assumes its stored in the PC
StartingTown_MeetingPlace_EventScript_SwitchBikes::
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
	checkitem ITEM_ACRO_BIKE
	goto_if_eq VAR_RESULT, TRUE, StartingTown_MeetingPlace_EventScript_SwitchAcroForMach
	checkitem ITEM_MACH_BIKE
	goto_if_eq VAR_RESULT, TRUE, StartingTown_MeetingPlace_EventScript_SwitchMachForAcro
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_KeepBike::
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
	release
	end

StartingTown_MeetingPlace_EventScript_SwitchAcroForMach::
	incrementgamestat GAME_STAT_TRADED_BIKES
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
	removeitem ITEM_ACRO_BIKE
	giveitem ITEM_MACH_BIKE
	goto StartingTown_MeetingPlace_EventScript_ComeBackToSwitchBikes
	end

StartingTown_MeetingPlace_EventScript_SwitchMachForAcro::
	incrementgamestat GAME_STAT_TRADED_BIKES
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
	removeitem ITEM_MACH_BIKE
	giveitem ITEM_ACRO_BIKE
	goto StartingTown_MeetingPlace_EventScript_ComeBackToSwitchBikes
	end

StartingTown_MeetingPlace_Text_Receptionist:
	.string "Hello and welcome to the Guild Hall.\n"
	.string "Would you like to hear a description\l"
	.string "of this area?$"

StartingTown_MeetingPlace_Text_ReceptionistFarewell:
	.string "Hello and welcome to the Guild Hall.\n"
	.string "Would you like to hear a description\l"
	.string "of this area?$"

StartingTown_MeetingPlace_Text_ReceptionistDescription:
	.string "Hello and welcome to the Guild Hall.\n"
	.string "Would you like to hear a description\l"
	.string "of this area?$"

StartingTown_MeetingPlace_Text_TMGuy:
	.string "Hey there. I've got some TMs\n"
	.string "for sale.$"

StartingTown_MeetingPlace_Text_TMGuy_Leave:
    .string "See you later!$"
