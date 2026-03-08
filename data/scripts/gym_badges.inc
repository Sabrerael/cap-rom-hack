Common_EventScript_UpdateBadgesCollected::
	goto_if_eq VAR_BADGES_COLLECTED, 7, Common_EventScript_BadgesCollectedEight
	goto_if_eq VAR_BADGES_COLLECTED, 6, Common_EventScript_BadgesCollectedSeven
	goto_if_eq VAR_BADGES_COLLECTED, 5, Common_EventScript_BadgesCollectedSix
	goto_if_eq VAR_BADGES_COLLECTED, 4, Common_EventScript_BadgesCollectedFive
	goto_if_eq VAR_BADGES_COLLECTED, 3, Common_EventScript_BadgesCollectedFour
	goto_if_eq VAR_BADGES_COLLECTED, 2, Common_EventScript_BadgesCollectedThree
	goto_if_eq VAR_BADGES_COLLECTED, 1, Common_EventScript_BadgesCollectedTwo
    goto_if_eq VAR_BADGES_COLLECTED, 0, Common_EventScript_BadgesCollectedOne

Common_EventScript_BadgesCollectedOne::
    setvar VAR_BADGES_COLLECTED, 1
    setflag FLAG_BADGE01_GET
	setvar VAR_ROUTE1_WILD_SET, 1
	setvar VAR_ROUTE2_WILD_SET, 1
	setvar VAR_ROUTE3_WILD_SET, 1
	setvar VAR_ROUTE4_WILD_SET, 1
	setvar VAR_ROUTE5_WILD_SET, 1
	setvar VAR_ROUTE6_WILD_SET, 1
	setvar VAR_ROUTE7_WILD_SET, 1
	setvar VAR_ROUTE8_WILD_SET, 1
	setvar VAR_ROUTE9_WILD_SET, 1
	setvar VAR_ROUTE10_WILD_SET, 1
	setvar VAR_ROUTE11_WILD_SET, 1
	setvar VAR_ROUTE12_WILD_SET, 1
	setvar VAR_ROUTE13_WILD_SET, 1
	setvar VAR_ROUTE14_WILD_SET, 1
	setvar VAR_ROUTE15_WILD_SET, 1
	setvar VAR_ROUTE16_WILD_SET, 1
	clearflag FLAG_HIDE_HM_GUY
	clearflag FLAG_HIDE_MOVE_RELEARNER
	clearflag FLAG_HIDE_OLD_ROD_GUY
	return

Common_EventScript_BadgesCollectedTwo::
    setvar VAR_BADGES_COLLECTED, 2
	setflag FLAG_BADGE02_GET
	setvar VAR_ROUTE1_WILD_SET, 2
	setvar VAR_ROUTE2_WILD_SET, 2
	setvar VAR_ROUTE3_WILD_SET, 2
	setvar VAR_ROUTE4_WILD_SET, 2
	setvar VAR_ROUTE5_WILD_SET, 2
	setvar VAR_ROUTE6_WILD_SET, 2
	setvar VAR_ROUTE7_WILD_SET, 2
	setvar VAR_ROUTE8_WILD_SET, 2
	setvar VAR_ROUTE9_WILD_SET, 2
	setvar VAR_ROUTE10_WILD_SET, 2
	setvar VAR_ROUTE11_WILD_SET, 2
	setvar VAR_ROUTE12_WILD_SET, 2
	setvar VAR_ROUTE13_WILD_SET, 2
	setvar VAR_ROUTE14_WILD_SET, 2
	setvar VAR_ROUTE15_WILD_SET, 2
	setvar VAR_ROUTE16_WILD_SET, 2
	clearflag FLAG_HIDE_FRIENDSHIP_CHECKER
	clearflag FLAG_HIDE_BIKE_GUY
	clearflag FLAG_HIDE_PEHBBLE_BATTLE_3
	return

Common_EventScript_BadgesCollectedThree::
    setvar VAR_BADGES_COLLECTED, 3
	setflag FLAG_BADGE03_GET
	setvar VAR_ROUTE1_WILD_SET, 3
	setvar VAR_ROUTE2_WILD_SET, 3
	setvar VAR_ROUTE3_WILD_SET, 3
	setvar VAR_ROUTE4_WILD_SET, 3
	setvar VAR_ROUTE5_WILD_SET, 3
	setvar VAR_ROUTE6_WILD_SET, 3
	setvar VAR_ROUTE7_WILD_SET, 3
	setvar VAR_ROUTE8_WILD_SET, 3
	setvar VAR_ROUTE9_WILD_SET, 3
	setvar VAR_ROUTE10_WILD_SET, 3
	setvar VAR_ROUTE11_WILD_SET, 3
	setvar VAR_ROUTE12_WILD_SET, 3
	setvar VAR_ROUTE13_WILD_SET, 3
	setvar VAR_ROUTE14_WILD_SET, 3
	setvar VAR_ROUTE15_WILD_SET, 3
	setvar VAR_ROUTE16_WILD_SET, 3
	clearflag FLAG_HIDE_GOOD_ROD_GUY
	return

Common_EventScript_BadgesCollectedFour::
    setvar VAR_BADGES_COLLECTED, 4
	setflag FLAG_BADGE04_GET
	setvar VAR_ROUTE1_WILD_SET, 4
	setvar VAR_ROUTE2_WILD_SET, 4
	setvar VAR_ROUTE3_WILD_SET, 4
	setvar VAR_ROUTE4_WILD_SET, 4
	setvar VAR_ROUTE5_WILD_SET, 4
	setvar VAR_ROUTE6_WILD_SET, 4
	setvar VAR_ROUTE7_WILD_SET, 4
	setvar VAR_ROUTE8_WILD_SET, 4
	setvar VAR_ROUTE9_WILD_SET, 4
	setvar VAR_ROUTE10_WILD_SET, 4
	setvar VAR_ROUTE11_WILD_SET, 4
	setvar VAR_ROUTE12_WILD_SET, 4
	setvar VAR_ROUTE13_WILD_SET, 4
	setvar VAR_ROUTE14_WILD_SET, 4
	setvar VAR_ROUTE15_WILD_SET, 4
	setvar VAR_ROUTE16_WILD_SET, 4
	clearflag FLAG_HIDE_IV_JUDGE
	return

Common_EventScript_BadgesCollectedFive::
    setvar VAR_BADGES_COLLECTED, 5
	setflag FLAG_BADGE05_GET
	setvar VAR_ROUTE1_WILD_SET, 5
	setvar VAR_ROUTE2_WILD_SET, 5
	setvar VAR_ROUTE3_WILD_SET, 5
	setvar VAR_ROUTE4_WILD_SET, 5
	setvar VAR_ROUTE5_WILD_SET, 5
	setvar VAR_ROUTE6_WILD_SET, 5
	setvar VAR_ROUTE7_WILD_SET, 5
	setvar VAR_ROUTE8_WILD_SET, 5
	setvar VAR_ROUTE9_WILD_SET, 5
	setvar VAR_ROUTE10_WILD_SET, 5
	setvar VAR_ROUTE11_WILD_SET, 5
	setvar VAR_ROUTE12_WILD_SET, 5
	setvar VAR_ROUTE13_WILD_SET, 5
	setvar VAR_ROUTE14_WILD_SET, 5
	setvar VAR_ROUTE15_WILD_SET, 5
	setvar VAR_ROUTE16_WILD_SET, 5
	return

Common_EventScript_BadgesCollectedSix::
    setvar VAR_BADGES_COLLECTED, 6
	setflag FLAG_BADGE06_GET
	clearflag FLAG_HIDE_SUPER_ROD_GUY
	return

Common_EventScript_BadgesCollectedSeven::
    setvar VAR_BADGES_COLLECTED, 7
	setflag FLAG_BADGE07_GET
	clearflag FLAG_HIDE_MOVE_TUTOR
    return

Common_EventScript_BadgesCollectedEight::
    setvar VAR_BADGES_COLLECTED, 8
	setflag FLAG_BADGE08_GET
	clearflag FLAG_HIDE_SPECIAL_VENDOR
	return
