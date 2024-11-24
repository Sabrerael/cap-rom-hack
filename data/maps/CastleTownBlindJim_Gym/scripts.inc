CastleTownBlindJim_Gym_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, CastleTownBlindJim_Gym_OnTransition
	.byte 0

CastleTownBlindJim_Gym_OnTransition:
	call CastleTownBlindJim_Gym_EventScript_SetFlashLevel
	end

CastleTownBlindJim_Gym_EventScript_SetFlashLevel::
	goto_if_set FLAG_BADGE02_GET, CastleTownBlindJim_Gym_EventScript_SetLightsOn
	call CastleTownBlindJim_Gym_EventScript_SetFlashLevel7

CastleTownBlindJim_Gym_EventScript_AnimateFlashFullBrightness::
	playse SE_SWITCH
	animateflash 0
	call CastleTownBlindJim_Gym_EventScript_SetLightsOn
	return

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

CastleTownBlindJim_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, CastleTownBlindJim_Gym_EventScript_GymGuidePostVictory
	msgbox CastleTownBlindJim_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_GymGuidePostVictory::
	msgbox CastleTownBlindJim_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

CastleTownBlindJim_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, CastleTownBlindJim_Gym_EventScript_GymStatueCertified
	goto CastleTownBlindJim_Gym_EventScript_GymStatue
	end

CastleTownBlindJim_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, CastleTownBlindJim_Gym_EventScript_GymStatueCertified
	goto CastleTownBlindJim_Gym_EventScript_GymStatue
	end

CastleTownBlindJim_Gym_EventScript_GymStatueCertified::
	msgbox CastleTownBlindJim_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

CastleTownBlindJim_Gym_EventScript_GymStatue::
	msgbox CastleTownBlindJim_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CastleTownBlindJim_Gym_EventScript_Eli::
	trainerbattle_single TRAINER_ELI, CastleTownBlindJim_Gym_Text_EliIntro, CastleTownBlindJim_Gym_Text_EliDefeat
	msgbox CastleTownBlindJim_Gym_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end

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
	msgbox CastleTownBlindJim_Gym_Text_BlindJimPostBattle, MSGBOX_DEFAULT
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
    message CastleTownBlindJim_Gym_Text_ReceivedBlindfoldBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CastleTownBlindJim_Gym_Text_BlindfoldBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	call Common_EventScript_UpdateBadgesCollected
	setvar VAR_0x8008, 9
	call Common_EventScript_SetGymTrainers
	call CastleTownBlindJim_Gym_EventScript_GiveBulkUp
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox CastleTownBlindJim_Gym_Text_RegisteredBlindJim, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	msgbox CastleTownBlindJim_Gym_Text_TurnOnLights, MSGBOX_DEFAULT
	closemessage
	call CastleTownBlindJim_Gym_EventScript_AnimateFlashFullBrightness
	release
	end

CastleTownBlindJim_Gym_EventScript_GiveBulkUp::
	giveitem ITEM_TM_BULK_UP
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox CastleTownBlindJim_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_BULK_UP
	return

CastleTownBlindJim_Gym_Text_GymGuideAdvice:
	.string "Hey, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "The Moderator BlindJim commands\n"
	.string "DARK-type POKéMON.\p"
	.string "Get it? Because he can't see.\n"
	.string "DARK-types are weak to FIGHTING,\p"
	.string "FAIRY, and BUG POKéMON.\n"
	.string "Just be careful using GHOST\l"
	.string "or PSYCHIC types!\p"
	.string "Also if you couldn't tell,\n"
	.string "it's pitch black in here.\p"
	.string "You'll have to fumble around\n"
	.string "through the maze to find BlindJim.\p"
	.string "Hey, okay, go for it!$"

CastleTownBlindJim_Gym_Text_GymGuidePostVictory:
	.string "Whoah! It's turned too bright in here!\p"
	.string "Your future is bright, too!$"

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

CastleTownBlindJim_Gym_Text_EliIntro:
	.string "As much as I love mountains,\n"
	.string "I especially love volcanoes.$"

CastleTownBlindJim_Gym_Text_EliDefeat:
	.string "Well, it seems to me I lost without\n"
	.string "ever being in control.$"

CastleTownBlindJim_Gym_Text_EliPostBattle:
	.string "I stay here because I became a fan\n"
	.string "of FLANNERY's power.\p"
	.string "Hehehehe.$"

CastleTownBlindJim_Gym_Text_GymStatue:
	.string "CASTLE TOWN BLINDJIM POKéMON GYM$"

CastleTownBlindJim_Gym_Text_GymStatueCertified:
	.string "CASTLE TOWN BLINDJIM POKéMON GYM\p"
	.string "BLINDJIM'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownBlindJim_Gym_Text_Intro:
    .string "It's me, BlindJim!\n"
	.string "My whole bit is being blind so my\p"
	.string "Pokemon are all Dark types.\n"
	.string "Do you get it?$"

CastleTownBlindJim_Gym_Text_PostBattle:
	.string "Do I still have Pokemon?\n"
	.string "Did you win?\p"
	.string "I cannot tell because I'm blind.$"

CastleTownBlindJim_Gym_Text_ReceivedBlindfoldBadge:
	.string "{PLAYER} received the BLINDFOLD BADGE\n"
	.string "from BlindJim.$"

CastleTownBlindJim_Gym_Text_BlindfoldBadgeInfoTakeThis:
	.string "The BLINDFOLD BADGE signifies that\n"
	.string "a trainer has bested me, BlindJim,\l"
	.string "in battle.\p"
	.string "As such, you are entitled to new\n"
	.string "benefits in the Guild Hall.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

CastleTownBlindJim_Gym_Text_ExplainBulkUp:
	.string "That TM08 contains BULK UP.\p"
	.string "It's a move that raises both ATTACK\n"
	.string "and DEFENSE stats.\p"
	.string "… … … … … …$"

CastleTownBlindJim_Gym_Text_RegisteredBlindJim:
	.string "Registered Moderator BlindJim\n"
	.string "in the POKéNAV.$"

CastleTownBlindJim_Gym_Text_TurnOnLights:
	.string "Oh, I guess I can turn\n"
	.string "back on now.\p"
	.string "That way at least one of\n"
	.string "us can see where we're going.$"

CastleTownBlindJim_Gym_Text_BlindJimPostBattle:
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among TRAINERS one day!$"
