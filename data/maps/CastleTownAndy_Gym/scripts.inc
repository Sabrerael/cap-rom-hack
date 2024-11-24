CastleTownAndy_Gym_MapScripts::
	.byte 0

CastleTownAndy_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, CastleTownAndy_Gym_EventScript_GymStatueCertified
	goto CastleTownAndy_Gym_EventScript_GymStatue
	end

CastleTownAndy_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, CastleTownAndy_Gym_EventScript_GymStatueCertified
	goto CastleTownAndy_Gym_EventScript_GymStatue
	end

CastleTownAndy_Gym_EventScript_GymStatueCertified::
	msgbox CastleTownAndy_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

CastleTownAndy_Gym_EventScript_GymStatue::
	msgbox CastleTownAndy_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CastleTownAndy_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, CastleTownAndy_Gym_EventScript_GymGuidePostVictory
	msgbox CastleTownAndy_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_GymGuidePostVictory::
	msgbox CastleTownAndy_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH, CastleTownAndy_Gym_Text_JoshIntro, CastleTownAndy_Gym_Text_JoshDefeat
	msgbox CastleTownAndy_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownAndy_Gym_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY, CastleTownAndy_Gym_Text_TommyIntro, CastleTownAndy_Gym_Text_TommyDefeat
	msgbox CastleTownAndy_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownAndy_Gym_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, CastleTownAndy_Gym_Text_MarcIntro, CastleTownAndy_Gym_Text_MarcDefeat
	msgbox CastleTownAndy_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownAndy_Gym_EventScript_Sylvia::
	trainerbattle_single TRAINER_SYLVIA, CastleTownAndy_Gym_Text_SylviaIntro, CastleTownAndy_Gym_Text_SylviaDefeat
	msgbox CastleTownAndy_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownAndy_Gym_EventScript_Macey::
	trainerbattle_single TRAINER_MACEY, CastleTownAndy_Gym_Text_MaceyIntro, CastleTownAndy_Gym_Text_MaceyDefeat
	msgbox CastleTownAndy_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownAndy_Gym_EventScript_Clifford::
	trainerbattle_single TRAINER_CLIFFORD, CastleTownAndy_Gym_Text_CliffordIntro, CastleTownAndy_Gym_Text_CliffordDefeat
	msgbox CastleTownAndy_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownAndy_Gym_EventScript_Kathleen::
	trainerbattle_single TRAINER_KATHLEEN, CastleTownAndy_Gym_Text_KathleenIntro, CastleTownAndy_Gym_Text_KathleenDefeat
	msgbox CastleTownAndy_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownAndy_Gym_EventScript_Roxanne::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownAndy_Gym_EventScript_Roxanne_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownAndy_Gym_EventScript_Roxanne_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownAndy_Gym_EventScript_Roxanne_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownAndy_Gym_EventScript_Roxanne_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownAndy_Gym_EventScript_Roxanne_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownAndy_Gym_EventScript_Roxanne_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownAndy_Gym_EventScript_Roxanne_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownAndy_Gym_EventScript_Roxanne_SevenBadge
	release
	end

CastleTownAndy_Gym_EventScript_Roxanne_ZeroBadge::
	trainerbattle_single TRAINER_ROXANNE_1, CastleTownAndy_Gym_Text_Intro, CastleTownAndy_Gym_Text_PostBattle, CastleTownAndy_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Roxanne_OneBadge::
	trainerbattle_single TRAINER_ROXANNE_2, CastleTownAndy_Gym_Text_Intro, CastleTownAndy_Gym_Text_PostBattle, CastleTownAndy_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Roxanne_TwoBadge::
	trainerbattle_single TRAINER_ROXANNE_3, CastleTownAndy_Gym_Text_Intro, CastleTownAndy_Gym_Text_PostBattle, CastleTownAndy_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Roxanne_ThreeBadge::
	trainerbattle_single TRAINER_ROXANNE_4, CastleTownAndy_Gym_Text_Intro, CastleTownAndy_Gym_Text_PostBattle, CastleTownAndy_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Roxanne_FourBadge::
	trainerbattle_single TRAINER_ROXANNE_5, CastleTownAndy_Gym_Text_Intro, CastleTownAndy_Gym_Text_PostBattle, CastleTownAndy_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Roxanne_FiveBadge::
	trainerbattle_single TRAINER_ROXANNE_6, CastleTownAndy_Gym_Text_Intro, CastleTownAndy_Gym_Text_PostBattle, CastleTownAndy_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Roxanne_SixBadge::
	trainerbattle_single TRAINER_ROXANNE_7, CastleTownAndy_Gym_Text_Intro, CastleTownAndy_Gym_Text_PostBattle, CastleTownAndy_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Roxanne_SevenBadge::
	trainerbattle_single TRAINER_ROXANNE_8, CastleTownAndy_Gym_Text_Intro, CastleTownAndy_Gym_Text_PostBattle, CastleTownAndy_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_RoxanneDefeated::
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	call Common_EventScript_UpdateBadgesCollected
	release
	end

CastleTownAndy_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going?\p"
	.string "Listen, my friend!\n"
	.string "Would you like to become the CHAMPION?\p"
	.string "I'm no TRAINER, not me, but I can\n"
	.string "sure give you winning advice.\p"
	.string "That's settled, then! We'll aim for the\n"
	.string "POKéMON CHAMPIONSHIP together!\p"
	.string "It's your job as a TRAINER to collect\n"
	.string "GYM BADGES, am I right?\p"
	.string "But GYM LEADERS aren't pushovers!\p"
	.string "And that's where I come in!\n"
	.string "I'm here to provide expert advice!\p"
	.string "Andjonathon, the GYM LEADER, is a user\n"
	.string "of FLYING-type POKéMON.\p"
	.string "The FLYING type is very fast but\n"
	.string "it can't stand ROCK-type and\l"
	.string "ELECTRIC-type moves.\p"
	.string "Come see me afterwards, if you beat\n"
	.string "the GYM LEADER.\p"
	.string "Well, go for it!$"

CastleTownAndy_Gym_Text_GymGuidePostVictory:
	.string "Whoa! What a breathtaking victory!\n"
	.string "My cheering must've worked!\p"
	.string "Great!\n"
	.string "Check your TRAINER CARD.\p"
	.string "The STONE BADGE you got should be\n"
	.string "properly recorded on it.\p"
	.string "In other words…\p"
	.string "You've climbed the first step on\n"
	.string "the stairs to the CHAMPIONSHIP!\p"
	.string "That's got to feel awesome!$"

CastleTownAndy_Gym_Text_JoshIntro:
	.string "Don't take us GYM TRAINERS lightly!\n"
	.string "I'll show you why we're better!$"

CastleTownAndy_Gym_Text_JoshDefeat:
	.string "You were too good for me…$"

CastleTownAndy_Gym_Text_JoshPostBattle:
	.string "You haven't seen anything of the ROCK\n"
	.string "type's terrifying power!$"

CastleTownAndy_Gym_Text_TommyIntro:
	.string "If you can't beat me, you won't stand\n"
	.string "a chance against Andy!$"

CastleTownAndy_Gym_Text_TommyDefeat:
	.string "Wow! You've got some potential!$"

CastleTownAndy_Gym_Text_TommyPostBattle:
	.string "Andy is stronger than me by\n"
	.string "several times.\p"
	.string "You'd better be on your guard!$"

CastleTownAndy_Gym_Text_MarcIntro:
	.string "We might be in the middle of town,\n"
	.string "but so what?\p"
	.string "My ROCK POKéMON need room to\n"
	.string "rampage!$"

CastleTownAndy_Gym_Text_MarcDefeat:
	.string "Oh, man oh man!\n"
	.string "Our challenger is one feisty customer!$"

CastleTownAndy_Gym_Text_MarcPostBattle:
	.string "I have to hand it to our LEADER.\p"
	.string "It took smarts and sense for her to\n"
	.string "pick the ROCK type at her young age.$"

CastleTownAndy_Gym_Text_SylviaIntro:
	.string "Even at the risk of life, I will win\n"
	.string "this battle!$"

CastleTownAndy_Gym_Text_SylviaDefeat:
	.string "What you do…\n"
	.string "It horrifies me…$"

CastleTownAndy_Gym_Text_SylviaPostBattle:
	.string "How dare you beat me…\p"
	.string "It won't be my fault if something\n"
	.string "horrible befalls you…$"

CastleTownAndy_Gym_Text_KathleenIntro:
	.string "Let me show you a perfectly awful,\n"
	.string "horrifying time!$"

CastleTownAndy_Gym_Text_KathleenDefeat:
	.string "N-nooooo!$"

CastleTownAndy_Gym_Text_KathleenPostBattle:
	.string "Your vitality is contagious!\n"
	.string "Get away from me quickly!$"

CastleTownAndy_Gym_Text_CliffordIntro:
	.string "I may be past my prime, but I suggest\n"
	.string "you not patronize me.$"

CastleTownAndy_Gym_Text_CliffordDefeat:
	.string "Ah, you overflow with the power\n"
	.string "of youth!$"

CastleTownAndy_Gym_Text_CliffordPostBattle:
	.string "It seems that I could not overcome\n"
	.string "your youthful energy.$"

CastleTownAndy_Gym_Text_MaceyIntro:
	.string "You're not getting through to the end!\n"
	.string "Not if I can help it!$"

CastleTownAndy_Gym_Text_MaceyDefeat:
	.string "How could you be so ludicrously\n"
	.string "strong?$"

CastleTownAndy_Gym_Text_MaceyPostBattle:
	.string "Humph! You may be strong, but you're\n"
	.string "not suitable for the PSYCHIC type!\p"
	.string "The way you battle is somehow brutal!$"

CastleTownAndy_Gym_Text_GymStatue:
	.string "CASTLE TOWN ANDY POKéMON GYM$"

CastleTownAndy_Gym_Text_GymStatueCertified:
	.string "CASTLE TOWN ANDY POKéMON GYM\p"
	.string "ANDY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownAndy_Gym_Text_Intro:
	.string "Let's battle!$"

CastleTownAndy_Gym_Text_PostBattle:
	.string "Good job!$"
