CastleTownSabre_Gym_MapScripts::
	.byte 0

CastleTownSabre_Gym_EventScript_Andrea::
	trainerbattle_single TRAINER_ANDREA, CastleTownSabre_Gym_Text_AndreaIntro, CastleTownSabre_Gym_Text_AndreaDefeat
	msgbox CastleTownSabre_Gym_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_Connie::
	trainerbattle_single TRAINER_CONNIE, CastleTownSabre_Gym_Text_ConnieIntro, CastleTownSabre_Gym_Text_ConnieDefeat
	msgbox CastleTownSabre_Gym_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_Annika::
	trainerbattle_single TRAINER_ANNIKA, CastleTownSabre_Gym_Text_AnnikaIntro, CastleTownSabre_Gym_Text_AnnikaDefeat
	msgbox CastleTownSabre_Gym_Text_AnnikaPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_Daphne::
	trainerbattle_single TRAINER_DAPHNE, CastleTownSabre_Gym_Text_DaphneIntro, CastleTownSabre_Gym_Text_DaphneDefeat
	msgbox CastleTownSabre_Gym_Text_DaphnePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_Bridget::
	trainerbattle_single TRAINER_BRIDGET, CastleTownSabre_Gym_Text_BridgetIntro, CastleTownSabre_Gym_Text_BridgetDefeat
	msgbox CastleTownSabre_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_Olivia::
	trainerbattle_single TRAINER_OLIVIA, CastleTownSabre_Gym_Text_OliviaIntro, CastleTownSabre_Gym_Text_OliviaDefeat
	msgbox CastleTownSabre_Gym_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_Brianna::
	trainerbattle_single TRAINER_BRIANNA, CastleTownSabre_Gym_Text_BriannaIntro, CastleTownSabre_Gym_Text_BriannaDefeat
	msgbox CastleTownSabre_Gym_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
	end

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
	call Common_EventScript_UpdateBadgesCollected
	release
	end

CastleTownSabre_Gym_Text_AndreaIntro:
	.string "I'll show you the sublime techniques\n"
	.string "I learned from our LEADER JUAN!$"

CastleTownSabre_Gym_Text_AndreaDefeat:
	.string "Please forgive me, JUAN…$"

CastleTownSabre_Gym_Text_AndreaPostBattle:
	.string "Watch what happens if you crack all\n"
	.string "the floor tiles.$"

CastleTownSabre_Gym_Text_DaphneIntro:
	.string "The sight of JUAN conducting\n"
	.string "a battle…\p"
	.string "The very beauty of it compelled me to\n"
	.string "become a TRAINER.$"

CastleTownSabre_Gym_Text_DaphneDefeat:
	.string "You battled with more beauty than\n"
	.string "I could muster…$"

CastleTownSabre_Gym_Text_DaphnePostBattle:
	.string "The grace you bring to battle is\n"
	.string "fabulous.\p"
	.string "Oh… I'm so fortunate to have found\n"
	.string "POKéMON.$"

CastleTownSabre_Gym_Text_ConnieIntro:
	.string "I should teach you how harsh battles\n"
	.string "can be.$"

CastleTownSabre_Gym_Text_ConnieDefeat:
	.string "Oh.\n"
	.string "You're strong.$"

CastleTownSabre_Gym_Text_ConniePostBattle:
	.string "I'll tell you something good.\p"
	.string "If you want to reach JUAN, you\n"
	.string "need to walk on each floor tile once.$"

CastleTownSabre_Gym_Text_BridgetIntro:
	.string "The POKéMON GYM of the highest level\n"
	.string "in the HOENN region…\p"
	.string "That's the SOOTOPOLIS GYM.$"

CastleTownSabre_Gym_Text_BridgetDefeat:
	.string "What a high level you are!$"

CastleTownSabre_Gym_Text_BridgetPostBattle:
	.string "Rather than being satisfied by being\n"
	.string "in a strong GYM, I imagine training in\l"
	.string "other places will make you stronger.\l"
	.string "But above all, it looks more fun.$"

CastleTownSabre_Gym_Text_OliviaIntro:
	.string "I train my POKéMON together with\n"
	.string "JUAN.\p"
	.string "Don't think I'm a pushover.$"

CastleTownSabre_Gym_Text_OliviaDefeat:
	.string "I was beaten…$"

CastleTownSabre_Gym_Text_OliviaPostBattle:
	.string "I think you have potential.\n"
	.string "Why don't you stay and train with us?$"

CastleTownSabre_Gym_Text_AnnikaIntro:
	.string "I can battle with really rare POKéMON\n"
	.string "if you'd like.$"

CastleTownSabre_Gym_Text_AnnikaDefeat:
	.string "Oh, there now! Did you have a good look\n"
	.string "at my POKéMON?$"

CastleTownSabre_Gym_Text_AnnikaPostBattle:
	.string "I came to this GYM because JUAN\n"
	.string "praised me for my darling POKéMON.\p"
	.string "Oh, if only I'd met JUAN years ago\n"
	.string "when I was younger…$"

CastleTownSabre_Gym_Text_BriannaIntro:
	.string "Giggle…\n"
	.string "Your grim look is so charming.$"

CastleTownSabre_Gym_Text_BriannaDefeat:
	.string "Oh, dear.\n"
	.string "I went much too easy on you.$"

CastleTownSabre_Gym_Text_BriannaPostBattle:
	.string "You couldn't lay a finger on JUAN,\n"
	.string "I'm sure. Giggle…$"

CastleTownSabre_Gym_Text_Intro:
	.string "Let's battle!$"

CastleTownSabre_Gym_Text_PostBattle:
	.string "Good job!$"
