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
	clearflag FLAG_HIDE_HM_GUY
	clearflag FLAG_HIDE_MOVE_RELEARNER
	clearflag FLAG_HIDE_OLD_ROD_GUY
	return

Common_EventScript_BadgesCollectedTwo::
    setvar VAR_BADGES_COLLECTED, 2
	clearflag FLAG_HIDE_FRIENDSHIP_CHECKER
	clearflag FLAG_HIDE_BIKE_GUY
	return

Common_EventScript_BadgesCollectedThree::
    setvar VAR_BADGES_COLLECTED, 3
	clearflag FLAG_HIDE_GOOD_ROD_GUY
	return

Common_EventScript_BadgesCollectedFour::
    setvar VAR_BADGES_COLLECTED, 4
	clearflag FLAG_HIDE_IV_JUDGE
	return

Common_EventScript_BadgesCollectedFive::
    setvar VAR_BADGES_COLLECTED, 5
	return

Common_EventScript_BadgesCollectedSix::
    setvar VAR_BADGES_COLLECTED, 6
	clearflag FLAG_HIDE_SUPER_ROD_GUY
	return

Common_EventScript_BadgesCollectedSeven::
    setvar VAR_BADGES_COLLECTED, 7
	clearflag FLAG_HIDE_MOVE_TUTOR
    return

Common_EventScript_BadgesCollectedEight::
    setvar VAR_BADGES_COLLECTED, 8
	clearflag FLAG_HIDE_SPECIAL_VENDOR
	return
