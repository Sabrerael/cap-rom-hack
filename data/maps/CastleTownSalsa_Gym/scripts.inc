CastleTownSalsa_Gym_MapScripts::
	.byte 0

CastleTownSalsa_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_GymGuidePostVictory
	msgbox CastleTownSalsa_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_GymGuidePostVictory::
	msgbox CastleTownSalsa_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, CastleTownSalsa_Gym_EventScript_GymStatueCertified
	goto CastleTownSalsa_Gym_EventScript_GymStatue
	end

CastleTownSalsa_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, CastleTownSalsa_Gym_EventScript_GymStatueCertified
	goto CastleTownSalsa_Gym_EventScript_GymStatue
	end

CastleTownSalsa_Gym_EventScript_GymStatueCertified::
	msgbox CastleTownSalsa_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

CastleTownSalsa_Gym_EventScript_GymStatue::
	msgbox CastleTownSalsa_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CastleTownSalsa_Gym_EventScript_Cole::
	trainerbattle_single TRAINER_COLE, CastleTownSalsa_Gym_Text_ColeIntro, CastleTownSalsa_Gym_Text_ColeDefeat
	msgbox CastleTownSalsa_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSalsa_Gym_EventScript_Axle::
	trainerbattle_single TRAINER_AXLE, CastleTownSalsa_Gym_Text_AxleIntro, CastleTownSalsa_Gym_Text_AxleDefeat
	msgbox CastleTownSalsa_Gym_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSalsa_Gym_EventScript_Keegan::
	trainerbattle_single TRAINER_KEEGAN, CastleTownSalsa_Gym_Text_KeeganIntro, CastleTownSalsa_Gym_Text_KeeganDefeat
	msgbox CastleTownSalsa_Gym_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSalsa_Gym_EventScript_Danielle::
	trainerbattle_single TRAINER_DANIELLE, CastleTownSalsa_Gym_Text_DanielleIntro, CastleTownSalsa_Gym_Text_DanielleDefeat
	msgbox CastleTownSalsa_Gym_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSalsa_Gym_EventScript_Gerald::
	trainerbattle_single TRAINER_GERALD, CastleTownSalsa_Gym_Text_GeraldIntro, CastleTownSalsa_Gym_Text_GeraldDefeat
	msgbox CastleTownSalsa_Gym_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSalsa_Gym_EventScript_Jace::
	trainerbattle_single TRAINER_JACE, CastleTownSalsa_Gym_Text_JaceIntro, CastleTownSalsa_Gym_Text_JaceDefeat
	msgbox CastleTownSalsa_Gym_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSalsa_Gym_EventScript_Jeff::
	trainerbattle_single TRAINER_JEFF, CastleTownSalsa_Gym_Text_JeffIntro, CastleTownSalsa_Gym_Text_JeffDefeat
	msgbox CastleTownSalsa_Gym_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSalsa_Gym_EventScript_Flannery::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSalsa_Gym_EventScript_Flannery_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSalsa_Gym_EventScript_Flannery_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSalsa_Gym_EventScript_Flannery_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSalsa_Gym_EventScript_Flannery_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSalsa_Gym_EventScript_Flannery_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSalsa_Gym_EventScript_Flannery_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSalsa_Gym_EventScript_Flannery_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSalsa_Gym_EventScript_Flannery_SevenBadge
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_ZeroBadge::
	trainerbattle_single TRAINER_SALSA_1, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_OneBadge::
	trainerbattle_single TRAINER_SALSA_2, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_TwoBadge::
	trainerbattle_single TRAINER_SALSA_3, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_ThreeBadge::
	trainerbattle_single TRAINER_SALSA_4, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_FourBadge::
	trainerbattle_single TRAINER_SALSA_5, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_FiveBadge::
	trainerbattle_single TRAINER_SALSA_6, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_SixBadge::
	trainerbattle_single TRAINER_SALSA_7, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_SevenBadge::
	trainerbattle_single TRAINER_SALSA_8, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_FlanneryDefeated::
	message CastleTownSalsa_Gym_Text_ReceivedPepperBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CastleTownSalsa_Gym_Text_PepperBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_BADGE04_GET
	call Common_EventScript_UpdateBadgesCollected
	setvar VAR_0x8008, 13
	call Common_EventScript_SetGymTrainers
	call CastleTownSalsa_Gym_EventScript_GiveOverheat
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox CastleTownSalsa_Gym_Text_RegisteredSalsa, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	end

CastleTownSalsa_Gym_EventScript_GiveOverheat::
	giveitem ITEM_TM_OVERHEAT
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox CastleTownSalsa_Gym_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_OVERHEAT
	return

CastleTownSalsa_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "MODERATOR SALSA is a fan of FIRE_type\n"
	.string "POKéMON. Must be because of his spicy\p"
	.string "namesake. Apparently, he is wanting\n"
	.string "to make some salsa so you'll have\p"
	.string "to collect the ingredients for his\n"
	.string "snack to be able to fight him.\p"
	.string "Okay, go for it!$"

CastleTownSalsa_Gym_Text_GymGuidePostVictory:
	.string "Congratulations!\n"
	.string "That was a spicy battle!$"

CastleTownSalsa_Gym_Text_GymStatue:
	.string "PUERTO DEL SALSA POKéMON GYM$"

CastleTownSalsa_Gym_Text_GymStatueCertified:
	.string "PUERTO DEL SALSA POKéMON GYM\p"
	.string "SALSA'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownSalsa_Gym_Text_ColeIntro:
	.string "Owowowowow!\n"
	.string "Yikes, it's hot!$"

CastleTownSalsa_Gym_Text_ColeDefeat:
	.string "I'm blinded by sweat in my eyes…$"

CastleTownSalsa_Gym_Text_ColePostBattle:
	.string "Being buried in hot sand promotes\n"
	.string "circulation.\p"
	.string "It's effective for healing pain in\n"
	.string "your joints.$"

CastleTownSalsa_Gym_Text_AxleIntro:
	.string "I'm trying to relieve my stress.\n"
	.string "Don't come along and stress me out!$"

CastleTownSalsa_Gym_Text_AxleDefeat:
	.string "I hope FLANNERY flames you good!$"

CastleTownSalsa_Gym_Text_AxlePostBattle:
	.string "Haaah… Whew…\p"
	.string "If you spend too much time buried in\n"
	.string "hot sand, it tuckers you out…$"

CastleTownSalsa_Gym_Text_KeeganIntro:
	.string "You must be getting tired by now.\n"
	.string "You'd like to rest in the hot sand,\l"
	.string "wouldn't you?\p"
	.string "But you should know that maintaining\n"
	.string "your willpower is an important ability\l"
	.string "for all TRAINERS.$"

CastleTownSalsa_Gym_Text_KeeganDefeat:
	.string "Play with fire, and be burned…$"

CastleTownSalsa_Gym_Text_KeeganPostBattle:
	.string "Your skill is real…\n"
	.string "But our LEADER FLANNERY is strong.\p"
	.string "If you don't watch yourself, you'll be\n"
	.string "burned seriously.$"

CastleTownSalsa_Gym_Text_GeraldIntro:
	.string "Can your POKéMON withstand\n"
	.string "392-degree heat?$"

CastleTownSalsa_Gym_Text_GeraldDefeat:
	.string "It didn't burn hotly enough…$"

CastleTownSalsa_Gym_Text_GeraldPostBattle:
	.string "The temperature of magma is\n"
	.string "392 degrees.\p"
	.string "Your POKéMON beat me, so they should\n"
	.string "easily survive in magma.$"

CastleTownSalsa_Gym_Text_DanielleIntro:
	.string "Um…\n"
	.string "Okay, I'll battle with you.$"

CastleTownSalsa_Gym_Text_DanielleDefeat:
	.string "Oh, but you're too strong.$"

CastleTownSalsa_Gym_Text_DaniellePostBattle:
	.string "I'm going to be a pretty and strong\n"
	.string "TRAINER just like FLANNERY.$"

CastleTownSalsa_Gym_Text_JaceIntro:
	.string "Come on, get with it!\n"
	.string "Let's go before my feelings cool!$"

CastleTownSalsa_Gym_Text_JaceDefeat:
	.string "It's so hot, and yet my heart is\n"
	.string "clutched by ice…$"

CastleTownSalsa_Gym_Text_JacePostBattle:
	.string "The way the battling spirit burns\n"
	.string "within you, you may stand a chance\l"
	.string "against our LEADER.$"

CastleTownSalsa_Gym_Text_JeffIntro:
	.string "See how the flames blaze wildly?\n"
	.string "They flare in anticipation of my win!$"

CastleTownSalsa_Gym_Text_JeffDefeat:
	.string "Something didn't go right.$"

CastleTownSalsa_Gym_Text_JeffPostBattle:
	.string "Well, so what? I say so what?\n"
	.string "I can walk on hot coals barefoot!\p"
	.string "…Don't even think about trying it!$"

CastleTownSalsa_Gym_Text_Intro:
	.string "Sup bro, thanks for getting me\n"
	.string "the stuff for my salsa. I was\p"
	.string "getting hungry. Alright, let's\n"
	.string "do this thing!$"

CastleTownSalsa_Gym_Text_PostBattle:
	.string "Hoo, that was a smoking hot\n"
	.string "battle! Nearly burned me up!$"

CastleTownSalsa_Gym_Text_ReceivedPepperBadge:
	.string "{PLAYER} received the PEPPER BADGE\n"
	.string "from Salsa.$"

CastleTownSalsa_Gym_Text_PepperBadgeInfoTakeThis:
	.string "The PEPPER BADGE signifies that\n"
	.string "a trainer has bested me, Salsa,\l"
	.string "in battle. For claiming a new badge\p"
	.string "you are entitled to new\n"
	.string "benefits in the Guild Hall.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

CastleTownSalsa_Gym_Text_ExplainOverheat:
	.string "TM-50 contains Overheat.\p"
	.string "It's a powerful FIRE-type move\n"
	.string "that lots of Pokémon can learn.\p"
	.string "… … … … … …$"

CastleTownSalsa_Gym_Text_RegisteredSalsa:
	.string "Registered Moderator Salsa\n"
	.string "in the POKéNAV.$"

CastleTownSalsa_Gym_Text_SalsaPostBattle:
	.string "We both have come so far since we met\n"
	.string "all those years ago. I look forward\l"
	.string "to seeing how far you go!$"
