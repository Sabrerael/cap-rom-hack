CastleTownSabre_Gym_MapScripts::
	.byte 0

CastleTownSabre_Gym_UpdateBadgesCollected::
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSabre_Gym_BadgesCollectedEight
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSabre_Gym_BadgesCollectedSeven
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSabre_Gym_BadgesCollectedSix
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSabre_Gym_BadgesCollectedFive
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSabre_Gym_BadgesCollectedFour
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSabre_Gym_BadgesCollectedThree
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSabre_Gym_BadgesCollectedTwo
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSabre_Gym_BadgesCollectedOne

CastleTownSabre_Gym_BadgesCollectedOne::
    setvar VAR_BADGES_COLLECTED, 1
	return

CastleTownSabre_Gym_BadgesCollectedTwo::
    setvar VAR_BADGES_COLLECTED, 2
	return

CastleTownSabre_Gym_BadgesCollectedThree::
    setvar VAR_BADGES_COLLECTED, 3
	return

CastleTownSabre_Gym_BadgesCollectedFour::
    setvar VAR_BADGES_COLLECTED, 4
	return

CastleTownSabre_Gym_BadgesCollectedFive::
    setvar VAR_BADGES_COLLECTED, 5
	return

CastleTownSabre_Gym_BadgesCollectedSix::
    setvar VAR_BADGES_COLLECTED, 6
	return

CastleTownSabre_Gym_BadgesCollectedSeven::
    setvar VAR_BADGES_COLLECTED, 7
    return

CastleTownSabre_Gym_BadgesCollectedEight::
    setvar VAR_BADGES_COLLECTED, 8
	return

CastleTownSabre_Gym_EventScript_Juan::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSabre_GymEventScript_Juan_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSabre_GymEventScript_Juan_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSabre_GymEventScript_Juan_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSabre_GymEventScript_Juan_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSabre_GymEventScript_Juan_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSabre_GymEventScript_Juan_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSabre_GymEventScript_Juan_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSabre_GymEventScript_Juan_SevenBadge
	release
	end

CastleTownSabre_GymEventScript_Juan_ZeroBadge::
	trainerbattle_single TRAINER_JUAN_1, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_OneBadge::
	trainerbattle_single TRAINER_JUAN_2, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_TwoBadge::
	trainerbattle_single TRAINER_JUAN_3, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_ThreeBadge::
	trainerbattle_single TRAINER_JUAN_4, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_FourBadge::
	trainerbattle_single TRAINER_JUAN_5, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_FiveBadge::
	trainerbattle_single TRAINER_JUAN_6, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_SixBadge::
	trainerbattle_single TRAINER_JUAN_7, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_SevenBadge::
	trainerbattle_single TRAINER_JUAN_8, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_JuanDefeated::
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	call CastleTownSabre_Gym_UpdateBadgesCollected
	release
	end

CastleTownSabre_Gym_Text_Intro:
	.string "Let's battle!$"

CastleTownSabre_Gym_Text_PostBattle:
	.string "Good job!$"

CastleTownSabre_Gym_Text_SetBadgesCollected:
	.string "Badges Collected Set!$"
