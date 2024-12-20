CastleTownTot_Gym_MapScripts::
	.byte 0

CastleTownTot_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, CastleTownTot_Gym_EventScript_GymGuidePostVictory
	msgbox CastleTownTot_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_GymGuidePostVictory::
	msgbox CastleTownTot_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, CastleTownTot_Gym_EventScript_GymStatueCertified
	goto CastleTownTot_Gym_EventScript_GymStatue
	end

CastleTownTot_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, CastleTownTot_Gym_EventScript_GymStatueCertified
	goto CastleTownTot_Gym_EventScript_GymStatue
	end

CastleTownTot_Gym_EventScript_GymStatueCertified::
	msgbox CastleTownTot_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

CastleTownTot_Gym_EventScript_GymStatue::
	msgbox CastleTownTot_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CastleTownTot_Gym_EventScript_CheckTrees::
	goto_if_set FLAG_BADGE07_GET, CastleTownTot_Gym_EventScript_RemoveTrees
	call CastleTownTot_Gym_EventScript_CountTrainersDefeated
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 7, CastleTownTot_Gym_EventScript_RemoveTrees
	end

CastleTownTot_Gym_EventScript_RemoveTrees::
	setmetatile 18,  5, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 18,  6, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 18,  7, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 19,  5, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 19,  6, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 19,  7, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 20,  5, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 20,  6, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 20,  7, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 21,  5, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 21,  6, METATILE_CastleTownTotGym_FloorGrass, 0
	setmetatile 21,  7, METATILE_CastleTownTotGym_FloorGrass, 0
	return

CastleTownTot_Gym_EventScript_CountTrainersDefeated::
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_PRESTON, CastleTownTot_Gym_EventScript_CheckVirgil
	addvar VAR_0x8000, 1
CastleTownTot_Gym_EventScript_CheckVirgil::
	goto_if_not_defeated TRAINER_VIRGIL, CastleTownTot_Gym_EventScript_CheckBlake
	addvar VAR_0x8000, 1
CastleTownTot_Gym_EventScript_CheckBlake::
	goto_if_not_defeated TRAINER_BLAKE, CastleTownTot_Gym_EventScript_CheckHannah
	addvar VAR_0x8000, 1
CastleTownTot_Gym_EventScript_CheckHannah::
	goto_if_not_defeated TRAINER_HANNAH, CastleTownTot_Gym_EventScript_CheckSamantha
	addvar VAR_0x8000, 1
CastleTownTot_Gym_EventScript_CheckSamantha::
	goto_if_not_defeated TRAINER_SAMANTHA, CastleTownTot_Gym_EventScript_CheckMaura
	addvar VAR_0x8000, 1
CastleTownTot_Gym_EventScript_CheckMaura::
	goto_if_not_defeated TRAINER_MAURA, CastleTownTot_Gym_EventScript_CheckNate
	addvar VAR_0x8000, 1
CastleTownTot_Gym_EventScript_CheckNate::
	goto_if_not_defeated TRAINER_NATE, CastleTownTot_Gym_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1
CastleTownTot_Gym_EventScript_StopCountingTrainers::
	return

CastleTownTot_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PRESTON, CastleTownTot_Gym_Text_PrestonIntro, CastleTownTot_Gym_Text_PrestonDefeat
	msgbox CastleTownTot_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTot_Gym_EventScript_Virgil::
	trainerbattle_single TRAINER_VIRGIL, CastleTownTot_Gym_Text_VirgilIntro, CastleTownTot_Gym_Text_VirgilDefeat
	msgbox CastleTownTot_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTot_Gym_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE, CastleTownTot_Gym_Text_BlakeIntro, CastleTownTot_Gym_Text_BlakeDefeat
	msgbox CastleTownTot_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTot_Gym_EventScript_Hannah::
	trainerbattle_single TRAINER_HANNAH, CastleTownTot_Gym_Text_HannahIntro, CastleTownTot_Gym_Text_HannahDefeat
	msgbox CastleTownTot_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTot_Gym_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, CastleTownTot_Gym_Text_SamanthaIntro, CastleTownTot_Gym_Text_SamanthaDefeat
	msgbox CastleTownTot_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTot_Gym_EventScript_Maura::
	trainerbattle_single TRAINER_MAURA, CastleTownTot_Gym_Text_MauraIntro, CastleTownTot_Gym_Text_MauraDefeat
	msgbox CastleTownTot_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTot_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_NATE, CastleTownTot_Gym_Text_NateIntro, CastleTownTot_Gym_Text_NateDefeat
	msgbox CastleTownTot_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTot_Gym_EventScript_Tate::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTot_Gym_EventScript_Tate_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTot_Gym_EventScript_Tate_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTot_Gym_EventScript_Tate_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTot_Gym_EventScript_Tate_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTot_Gym_EventScript_Tate_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTot_Gym_EventScript_Tate_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTot_Gym_EventScript_Tate_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTot_Gym_EventScript_Tate_SevenBadge
	release
	end

CastleTownTot_Gym_EventScript_Tate_ZeroBadge::
	trainerbattle_single TRAINER_TOT_1, CastleTownTot_Gym_Text_Intro, CastleTownTot_Gym_Text_PostBattle, CastleTownTot_Gym_EventScript_TateDefeated, NO_MUSIC
	msgbox CastleTownTot_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_Tate_OneBadge::
	trainerbattle_single TRAINER_TOT_2, CastleTownTot_Gym_Text_Intro, CastleTownTot_Gym_Text_PostBattle, CastleTownTot_Gym_EventScript_TateDefeated, NO_MUSIC
	msgbox CastleTownTot_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_Tate_TwoBadge::
	trainerbattle_single TRAINER_TOT_3, CastleTownTot_Gym_Text_Intro, CastleTownTot_Gym_Text_PostBattle, CastleTownTot_Gym_EventScript_TateDefeated, NO_MUSIC
	msgbox CastleTownTot_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_Tate_ThreeBadge::
	trainerbattle_single TRAINER_TOT_4, CastleTownTot_Gym_Text_Intro, CastleTownTot_Gym_Text_PostBattle, CastleTownTot_Gym_EventScript_TateDefeated, NO_MUSIC
	msgbox CastleTownTot_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_Tate_FourBadge::
	trainerbattle_single TRAINER_TOT_5, CastleTownTot_Gym_Text_Intro, CastleTownTot_Gym_Text_PostBattle, CastleTownTot_Gym_EventScript_TateDefeated, NO_MUSIC
	msgbox CastleTownTot_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_Tate_FiveBadge::
	trainerbattle_single TRAINER_TOT_6, CastleTownTot_Gym_Text_Intro, CastleTownTot_Gym_Text_PostBattle, CastleTownTot_Gym_EventScript_TateDefeated, NO_MUSIC
	msgbox CastleTownTot_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_Tate_SixBadge::
	trainerbattle_single TRAINER_TOT_7, CastleTownTot_Gym_Text_Intro, CastleTownTot_Gym_Text_PostBattle, CastleTownTot_Gym_EventScript_TateDefeated, NO_MUSIC
	msgbox CastleTownTot_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_Tate_SevenBadge::
	trainerbattle_single TRAINER_TOT_8, CastleTownTot_Gym_Text_Intro, CastleTownTot_Gym_Text_PostBattle, CastleTownTot_Gym_EventScript_TateDefeated, NO_MUSIC
	msgbox CastleTownTot_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTot_Gym_EventScript_TateDefeated::
	message CastleTownTot_Gym_Text_ReceivedPixieBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CastleTownTot_Gym_Text_PixieBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	call Common_EventScript_UpdateBadgesCollected
	setvar VAR_0x8008, 15
	call Common_EventScript_SetGymTrainers
	call CastleTownTot_Gym_EventScript_GiveDazzlingGleam
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox CastleTownTot_Gym_Text_RegisteredTot, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	end

CastleTownTot_Gym_EventScript_GiveDazzlingGleam::
	giveitem ITEM_TM_DAZZLING_GLEAM
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox CastleTownTot_Gym_Text_ExplainDazzlingGleam, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_DAZZLING_GLEAM
	return

CastleTownTot_Gym_Text_GymGuideAdvice:
	.string "Welcome to camp, CHAMPION-\n"
	.string "bound {PLAYER}!\p"
	.string "MODERATOR TOT is a master of\n"
	.string "FAIRY-type POKéMON. You'll want to use\p" 
	.string "STEEL or POISON POKéMON to get the drop\n"
	.string "on them. Be warned though, DRAGON-types won't\p"
	.string "be able to damage them! She's waiting at\p"
	.string "the back of this GYM. To get to her,\l"
	.string "you'll need to find all of the campers\n"
	.string "hiding in the area in front of us."
	.string "Ready or not, you better get going!$"

CastleTownTot_Gym_Text_GymGuidePostVictory:
	.string "You did it! Those fairies\n"
	.string "didn't stand a chance!$"

CastleTownTot_Gym_Text_GymStatue:
	.string "CASTLE TOWN TOT POKéMON GYM$"

CastleTownTot_Gym_Text_GymStatueCertified:
	.string "CASTLE TOWN TOT POKéMON GYM\p"
	.string "TOT'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownTot_Gym_Text_PrestonIntro:
	.string "Battles hinge on the strength of your\n"
	.string "spirit! The weak-spirited will never win!$"

CastleTownTot_Gym_Text_PrestonDefeat:
	.string "I lost!\n"
	.string "I must temper my spirit again!$"

CastleTownTot_Gym_Text_PrestonPostBattle:
	.string "The indecisive lose.\n"
	.string "That's my warning to you.$"

CastleTownTot_Gym_Text_VirgilIntro:
	.string "Let me see your talent!$"

CastleTownTot_Gym_Text_VirgilDefeat:
	.string "You possess spectacular talent!$"

CastleTownTot_Gym_Text_VirgilPostBattle:
	.string "If there are prodigies in the world,\n"
	.string "then our GYM LEADERS are them!\p"
	.string "However, you may be even more talented\n"
	.string "than them…$"

CastleTownTot_Gym_Text_BlakeIntro:
	.string "Fufufufu… Watch me levitate a POKé\n"
	.string "BALL telekinetically!\p"
	.string "Wrooooooooaaaar!\n"
	.string "… … … … … … …\p"
	.string "Sometimes, I'm out of sync…$"

CastleTownTot_Gym_Text_BlakeDefeat:
	.string "My POKéMON battling skills are out\n"
	.string "of sync, too!$"

CastleTownTot_Gym_Text_BlakePostBattle:
	.string "A POKé BALL was too heavy to lift\n"
	.string "psychically. But this dust bunny…\p"
	.string "Whoooooooooooooooh!\n"
	.string "… … … … … …\p"
	.string "No, I'm not cheating!\n"
	.string "I didn't blow on it! Honestly!$"

CastleTownTot_Gym_Text_HannahIntro:
	.string "When you lose to me, don't be too hard\n"
	.string "on yourself.\p"
	.string "It's not that you're weak--I'm just\n"
	.string "too strong!$"

CastleTownTot_Gym_Text_HannahDefeat:
	.string "You're just too strong!$"

CastleTownTot_Gym_Text_HannahPostBattle:
	.string "I'm not going to get down on myself for\n"
	.string "losing. I just need to train harder.\p"
	.string "Positive thinking--that's my strong\n"
	.string "point!$"

CastleTownTot_Gym_Text_SamanthaIntro:
	.string "I see it…\n"
	.string "I see your future…\p"
	.string "If you can beat me, I will tell you\n"
	.string "your future!$"

CastleTownTot_Gym_Text_SamanthaDefeat:
	.string "I surrender!$"

CastleTownTot_Gym_Text_SamanthaPostBattle:
	.string "You will wage a terrifically intense\n"
	.string "battle with our GYM LEADERS…\p"
	.string "The result…\n"
	.string "You won't hear it from me!$"

CastleTownTot_Gym_Text_MauraIntro:
	.string "The roads you have traveled…\n"
	.string "What you have experienced…\p"
	.string "Come at me with everything you've\n"
	.string "learned!$"

CastleTownTot_Gym_Text_MauraDefeat:
	.string "You've traveled a path of greatness!$"

CastleTownTot_Gym_Text_MauraPostBattle:
	.string "A bright future awaits those who have\n"
	.string "worked diligently.\p"
	.string "For those who lazed idly, there is\n"
	.string "only despair at the end.\p"
	.string "What goes around comes around…$"

CastleTownTot_Gym_Text_NateIntro:
	.string "Hohoho.\p"
	.string "You need me to show you how tenacious\n"
	.string "the PSYCHIC type can be.$"

CastleTownTot_Gym_Text_NateDefeat:
	.string "Oh! My, my!\n"
	.string "Your battle style is fantastic!$"

CastleTownTot_Gym_Text_NatePostBattle:
	.string "I… I don't let defeat rattle m-me,\n"
	.string "however b-badly.$"

CastleTownTot_Gym_Text_Intro:
	.string "Let's battle!$"

CastleTownTot_Gym_Text_PostBattle:
	.string "Good job!$"

CastleTownTot_Gym_Text_ReceivedPixieBadge:
	.string "{PLAYER} received the PIXIE BADGE\n"
	.string "from Tot.$"

CastleTownTot_Gym_Text_PixieBadgeInfoTakeThis:
	.string "The PIXIE BADGE signifies that\n"
	.string "a trainer has bested me, Tot,\l"
	.string "in battle. For claiming a new badge\p"
	.string "you are entitled to new\n"
	.string "benefits in the Guild Hall.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

CastleTownTot_Gym_Text_ExplainDazzlingGleam:
	.string "TM-97 contains Dazzling Gleam!\n"
	.string "It's a super strong special FAIRY-type\p"
	.string "move. It's a good reminder that pretty\n"
	.string "things can still pack a punch!\p"
	.string "… … … … … …$"

CastleTownTot_Gym_Text_RegisteredTot:
	.string "Registered Moderator Tot\n"
	.string "in the POKéNAV.$"

CastleTownTot_Gym_Text_TotPostBattle:
	.string "I made this Gym as a reminder of\n"
	.string "of where we met!$"
