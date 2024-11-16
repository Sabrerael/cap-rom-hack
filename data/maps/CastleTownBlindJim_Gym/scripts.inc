CastleTownBlindJim_Gym_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, CastleTownBlindJim_Gym_OnTransition
	.byte 0

CastleTownBlindJim_Gym_OnTransition:
	call CastleTownBlindJim_Gym_EventScript_SetFlashLevel7
	end

CastleTownBlindJim_Gym_EventScript_SetLightsOn::
	setflashlevel 0
	return

@ Brightest
CastleTownBlindJim_Gym_EventScript_SetFlashLevel1::
	setflashlevel 1
	return

CastleTownBlindJim_Gym_EventScript_SetFlashLevel2::
	setflashlevel 2
	return

CastleTownBlindJim_Gym_EventScript_SetFlashLevel3::
	setflashlevel 3
	return

CastleTownBlindJim_Gym_EventScript_SetFlashLevel4::
	setflashlevel 4
	return

CastleTownBlindJim_Gym_EventScript_SetFlashLevel5::
	setflashlevel 5
	return

CastleTownBlindJim_Gym_EventScript_SetFlashLevel6::
	setflashlevel 6
	return

@ Darkest
CastleTownBlindJim_Gym_EventScript_SetFlashLevel7::
	setflashlevel 7
	return

CastleTownBlindJim_Gym_EventScript_Takao::
	trainerbattle_single TRAINER_TAKAO, CastleTownBlindJim_Gym_Text_TakaoIntro, CastleTownBlindJim_Gym_Text_TakaoDefeat
	msgbox CastleTownBlindJim_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownBlindJim_Gym_EventScript_Jocelyn::
	trainerbattle_single TRAINER_JOCELYN, CastleTownBlindJim_Gym_Text_JocelynIntro, CastleTownBlindJim_Gym_Text_JocelynDefeat
	msgbox CastleTownBlindJim_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownBlindJim_Gym_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA, CastleTownBlindJim_Gym_Text_LauraIntro, CastleTownBlindJim_Gym_Text_LauraDefeat
	msgbox CastleTownBlindJim_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownBlindJim_Gym_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, CastleTownBlindJim_Gym_Text_BrendenIntro, CastleTownBlindJim_Gym_Text_BrendenDefeat
	msgbox CastleTownBlindJim_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownBlindJim_Gym_EventScript_Cristian::
	trainerbattle_single TRAINER_CRISTIAN, CastleTownBlindJim_Gym_Text_CristianIntro, CastleTownBlindJim_Gym_Text_CristianDefeat
	msgbox CastleTownBlindJim_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownBlindJim_Gym_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, CastleTownBlindJim_Gym_Text_LilithIntro, CastleTownBlindJim_Gym_Text_LilithDefeat
	msgbox CastleTownBlindJim_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownBlindJim_Gym_EventScript_Brawly::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownBlindJim_Gym_EventScript_Brawly_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownBlindJim_Gym_EventScript_Brawly_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownBlindJim_Gym_EventScript_Brawly_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownBlindJim_Gym_EventScript_Brawly_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownBlindJim_Gym_EventScript_Brawly_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownBlindJim_Gym_EventScript_Brawly_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownBlindJim_Gym_EventScript_Brawly_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownBlindJim_Gym_EventScript_Brawly_SevenBadge
	release
	end

CastleTownBlindJim_Gym_EventScript_Brawly_ZeroBadge::
	trainerbattle_single TRAINER_BRAWLY_1, CastleTownBlindJim_Gym_Text_Intro, CastleTownBlindJim_Gym_Text_PostBattle, CastleTownBlindJim_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	msgbox CastleTownBlindJim_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_Brawly_OneBadge::
	trainerbattle_single TRAINER_BRAWLY_2, CastleTownBlindJim_Gym_Text_Intro, CastleTownBlindJim_Gym_Text_PostBattle, CastleTownBlindJim_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	msgbox CastleTownBlindJim_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_Brawly_TwoBadge::
	trainerbattle_single TRAINER_BRAWLY_3, CastleTownBlindJim_Gym_Text_Intro, CastleTownBlindJim_Gym_Text_PostBattle, CastleTownBlindJim_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	msgbox CastleTownBlindJim_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_Brawly_ThreeBadge::
	trainerbattle_single TRAINER_BRAWLY_4, CastleTownBlindJim_Gym_Text_Intro, CastleTownBlindJim_Gym_Text_PostBattle, CastleTownBlindJim_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	msgbox CastleTownBlindJim_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_Brawly_FourBadge::
	trainerbattle_single TRAINER_BRAWLY_5, CastleTownBlindJim_Gym_Text_Intro, CastleTownBlindJim_Gym_Text_PostBattle, CastleTownBlindJim_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	msgbox CastleTownBlindJim_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_Brawly_FiveBadge::
	trainerbattle_single TRAINER_BRAWLY_6, CastleTownBlindJim_Gym_Text_Intro, CastleTownBlindJim_Gym_Text_PostBattle, CastleTownBlindJim_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	msgbox CastleTownBlindJim_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_Brawly_SixBadge::
	trainerbattle_single TRAINER_BRAWLY_7, CastleTownBlindJim_Gym_Text_Intro, CastleTownBlindJim_Gym_Text_PostBattle, CastleTownBlindJim_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	msgbox CastleTownBlindJim_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_Brawly_SevenBadge::
	trainerbattle_single TRAINER_BRAWLY_8, CastleTownBlindJim_Gym_Text_Intro, CastleTownBlindJim_Gym_Text_PostBattle, CastleTownBlindJim_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	msgbox CastleTownBlindJim_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_BrawlyDefeated::
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	call Common_EventScript_UpdateBadgesCollected
	release
	end

CastleTownBlindJim_Gym_Text_TakaoIntro:
	.string "Might is right!\n"
	.string "Come on!$"

CastleTownBlindJim_Gym_Text_TakaoDefeat:
	.string "Not enough power…$"

CastleTownBlindJim_Gym_Text_TakaoPostBattle:
	.string "Your skill overcame my strength!\n"
	.string "Your technique is commendable!$"

CastleTownBlindJim_Gym_Text_JocelynIntro:
	.string "There's no need for BRAWLY to be\n"
	.string "involved!\p"
	.string "I'll crush you!$"

CastleTownBlindJim_Gym_Text_JocelynDefeat:
	.string "But… How?\n"
	.string "How could I lose so easily?$"

CastleTownBlindJim_Gym_Text_JocelynPostBattle:
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a GYM LEADER…\p"
	.string "No, I'll become the POKéMON LEAGUE\n"
	.string "CHAMPION!$"

CastleTownBlindJim_Gym_Text_LauraIntro:
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

CastleTownBlindJim_Gym_Text_LauraDefeat:
	.string "Waaaaaaah!\n"
	.string "I lost!$"

CastleTownBlindJim_Gym_Text_LauraPostBattle:
	.string "I battle in the dark to make my heart\n"
	.string "stronger.\p"
	.string "But because it's so dark, I can never\n"
	.string "see BRAWLY's face…$"

CastleTownBlindJim_Gym_Text_LilithIntro:
	.string "Ufufu…\n"
	.string "Are you stumbling around in the dark?$"

CastleTownBlindJim_Gym_Text_LilithDefeat:
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

CastleTownBlindJim_Gym_Text_LilithPostBattle:
	.string "You deserve to stay lost and end up\n"
	.string "back at the entrance again!$"

CastleTownBlindJim_Gym_Text_BrendenIntro:
	.string "I'll show you the gumption of\n"
	.string "a sailing man!$"

CastleTownBlindJim_Gym_Text_BrendenDefeat:
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

CastleTownBlindJim_Gym_Text_BrendenPostBattle:
	.string "Oh, aye! You're worthy of seeing\n"
	.string "our GYM LEADER.$"

CastleTownBlindJim_Gym_Text_CristianIntro:
	.string "If you mean to pass, it has to be\n"
	.string "through me!$"

CastleTownBlindJim_Gym_Text_CristianDefeat:
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

CastleTownBlindJim_Gym_Text_CristianPostBattle:
	.string "You win!\n"
	.string "Go after that BADGE!$"

CastleTownBlindJim_Gym_Text_Intro:
    .string "It's me, BlindJim!\n"
	.string "My whole bit is being blind so my\p"
	.string "Pokemon are all Dark types.\n"
	.string "Do you get it?$"

CastleTownBlindJim_Gym_Text_PostBattle:
	.string "Do I still have Pokemon?\n"
	.string "Did you win?\p"
	.string "I cannot tell because I'm blind.$"
