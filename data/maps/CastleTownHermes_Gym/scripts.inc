CastleTownHermes_Gym_MapScripts::
	.byte 0

CastleTownHermes_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, CastleTownHermes_Gym_EventScript_GymGuidePostVictory
	msgbox CastleTownHermes_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_GymGuidePostVictory::
	msgbox CastleTownHermes_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, CastleTownHermes_Gym_EventScript_GymStatueCertified
	goto CastleTownHermes_Gym_EventScript_GymStatue
	end

CastleTownHermes_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, CastleTownHermes_Gym_EventScript_GymStatueCertified
	goto CastleTownHermes_Gym_EventScript_GymStatue
	end

CastleTownHermes_Gym_EventScript_GymStatueCertified::
	msgbox CastleTownHermes_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

CastleTownHermes_Gym_EventScript_GymStatue::
	msgbox CastleTownHermes_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CastleTownHermes_Gym_EventScript_Randall::
	trainerbattle_single TRAINER_RANDALL, CastleTownHermes_Gym_Text_RandallIntro, CastleTownHermes_Gym_Text_RandallDefeat
	msgbox CastleTownHermes_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownHermes_Gym_EventScript_Parker::
	trainerbattle_single TRAINER_PARKER, CastleTownHermes_Gym_Text_ParkerIntro, CastleTownHermes_Gym_Text_ParkerDefeat
	msgbox CastleTownHermes_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownHermes_Gym_EventScript_George::
	trainerbattle_single TRAINER_GEORGE, CastleTownHermes_Gym_Text_GeorgeIntro, CastleTownHermes_Gym_Text_GeorgeDefeat
	msgbox CastleTownHermes_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownHermes_Gym_EventScript_Berke::
	trainerbattle_single TRAINER_BERKE, CastleTownHermes_Gym_Text_BerkeIntro, CastleTownHermes_Gym_Text_BerkeDefeat
	msgbox CastleTownHermes_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownHermes_Gym_EventScript_Mary::
	trainerbattle_single TRAINER_MARY, CastleTownHermes_Gym_Text_MaryIntro, CastleTownHermes_Gym_Text_MaryDefeat
	msgbox CastleTownHermes_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownHermes_Gym_EventScript_Alexia::
	trainerbattle_single TRAINER_ALEXIA, CastleTownHermes_Gym_Text_AlexiaIntro, CastleTownHermes_Gym_Text_AlexiaDefeat
	msgbox CastleTownHermes_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownHermes_Gym_EventScript_Jody::
	trainerbattle_single TRAINER_JODY, CastleTownHermes_Gym_Text_JodyIntro, CastleTownHermes_Gym_Text_JodyDefeat
	msgbox CastleTownHermes_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownHermes_Gym_EventScript_Norman::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownHermes_Gym_EventScript_Norman_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownHermes_Gym_EventScript_Norman_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownHermes_Gym_EventScript_Norman_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownHermes_Gym_EventScript_Norman_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownHermes_Gym_EventScript_Norman_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownHermes_Gym_EventScript_Norman_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownHermes_Gym_EventScript_Norman_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownHermes_Gym_EventScript_Norman_SevenBadge
	release
	end

CastleTownHermes_Gym_EventScript_Norman_ZeroBadge::
	trainerbattle_single TRAINER_NORMAN_1, CastleTownHermes_Gym_Text_Intro, CastleTownHermes_Gym_Text_PostBattle, CastleTownHermes_Gym_EventScript_NormanDefeated, NO_MUSIC
	msgbox CastleTownHermes_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_Norman_OneBadge::
	trainerbattle_single TRAINER_NORMAN_2, CastleTownHermes_Gym_Text_Intro, CastleTownHermes_Gym_Text_PostBattle, CastleTownHermes_Gym_EventScript_NormanDefeated, NO_MUSIC
	msgbox CastleTownHermes_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_Norman_TwoBadge::
	trainerbattle_single TRAINER_NORMAN_3, CastleTownHermes_Gym_Text_Intro, CastleTownHermes_Gym_Text_PostBattle, CastleTownHermes_Gym_EventScript_NormanDefeated, NO_MUSIC
	msgbox CastleTownHermes_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_Norman_ThreeBadge::
	trainerbattle_single TRAINER_NORMAN_4, CastleTownHermes_Gym_Text_Intro, CastleTownHermes_Gym_Text_PostBattle, CastleTownHermes_Gym_EventScript_NormanDefeated, NO_MUSIC
	msgbox CastleTownHermes_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_Norman_FourBadge::
	trainerbattle_single TRAINER_NORMAN_5, CastleTownHermes_Gym_Text_Intro, CastleTownHermes_Gym_Text_PostBattle, CastleTownHermes_Gym_EventScript_NormanDefeated, NO_MUSIC
	msgbox CastleTownHermes_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_Norman_FiveBadge::
	trainerbattle_single TRAINER_NORMAN_6, CastleTownHermes_Gym_Text_Intro, CastleTownHermes_Gym_Text_PostBattle, CastleTownHermes_Gym_EventScript_NormanDefeated, NO_MUSIC
	msgbox CastleTownHermes_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_Norman_SixBadge::
	trainerbattle_single TRAINER_NORMAN_7, CastleTownHermes_Gym_Text_Intro, CastleTownHermes_Gym_Text_PostBattle, CastleTownHermes_Gym_EventScript_NormanDefeated, NO_MUSIC
	msgbox CastleTownHermes_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_Norman_SevenBadge::
	trainerbattle_single TRAINER_NORMAN_8, CastleTownHermes_Gym_Text_Intro, CastleTownHermes_Gym_Text_PostBattle, CastleTownHermes_Gym_EventScript_NormanDefeated, NO_MUSIC
	msgbox CastleTownHermes_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownHermes_Gym_EventScript_NormanDefeated::
	setflag FLAG_DEFEATED_PETALBURG_GYM
	setflag FLAG_BADGE05_GET
	call Common_EventScript_UpdateBadgesCollected
	release
	end

CastleTownHermes_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "FORTREE GYM LEADER WINONA is\n"
	.string "a master of FLYING-type POKéMON.\p"
	.string "She's waiting at the back of this GYM,\n"
	.string "behind the rotating doors.\p"
	.string "She's waiting for new challengers\n"
	.string "who are trying to take wing!\p"
	.string "Okay, go for it!$"

CastleTownHermes_Gym_Text_GymGuidePostVictory:
	.string "You did it!\n"
	.string "You've achieved liftoff!$"

CastleTownHermes_Gym_Text_GymStatue:
	.string "CASTLE TOWN HERMES POKéMON GYM$"

CastleTownHermes_Gym_Text_GymStatueCertified:
	.string "CASTLE TOWN HERMES POKéMON GYM\p"
	.string "HERMES'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownHermes_Gym_Text_RandallIntro:
	.string "The ability to attack before the\n"
	.string "opponent…\p"
	.string "Just that alone puts me at a great\n"
	.string "advantage, don't you agree?$"

CastleTownHermes_Gym_Text_RandallDefeat:
	.string "That was a magnificent battle!$"

CastleTownHermes_Gym_Text_RandallPostBattle:
	.string "Go on to the next room where a new\n"
	.string "challenge awaits you.\p"
	.string "At the left is the CONFUSION ROOM.\p"
	.string "The right door leads to the DEFENSE\n"
	.string "ROOM.$"

CastleTownHermes_Gym_Text_ParkerIntro:
	.string "This is the CONFUSION ROOM.\p"
	.string "Let me see how well bonded you are\n"
	.string "with your POKéMON!$"

CastleTownHermes_Gym_Text_ParkerDefeat:
	.string "I couldn't confuse your team enough…\n"
	.string "You share a strong bond together.$"

CastleTownHermes_Gym_Text_ParkerPostBattle:
	.string "The next room is the STRENGTH ROOM.\n"
	.string "Can you withstand brute force?$"

CastleTownHermes_Gym_Text_GeorgeIntro:
	.string "Just when you think you're going to\n"
	.string "win, your opponent restores HP…\p"
	.string "Can you just imagine how awful that\n"
	.string "must feel?\p"
	.string "I'll show you exactly how awful it\n"
	.string "feels!$"

CastleTownHermes_Gym_Text_GeorgeDefeat:
	.string "I couldn't restore HP enough…\n"
	.string "What ATTACK power…$"

CastleTownHermes_Gym_Text_GeorgePostBattle:
	.string "I should have expected no less from\n"
	.string "our LEADER's kid.\p"
	.string "No, wait! A TRAINER's abilities are\n"
	.string "earned only through effort.\p"
	.string "I lost because my own efforts\n"
	.string "weren't enough.\p"
	.string "Go on! The ONE-HIT KO ROOM is next.$"

CastleTownHermes_Gym_Text_BerkeIntro:
	.string "I'm not going to take it easy just\n"
	.string "because you're our LEADER's kid.\p"
	.string "I'll show you how horrid it is for\n"
	.string "a POKéMON to take a critical hit!$"

CastleTownHermes_Gym_Text_BerkeDefeat:
	.string "Your power…\n"
	.string "You're the real deal.$"

CastleTownHermes_Gym_Text_BerkePostBattle:
	.string "Your father really is strong.\n"
	.string "He's a TRAINER worth my respect.\p"
	.string "And, I sense the same glow coming\n"
	.string "from you as your father.\p"
	.string "I hope that you'll stage a terrific\n"
	.string "battle with your father!$"

CastleTownHermes_Gym_Text_MaryIntro:
	.string "Giggle…\n"
	.string "This is the ACCURACY ROOM.\p"
	.string "It's pretty nasty when every attack\n"
	.string "lands without fail.$"

CastleTownHermes_Gym_Text_MaryDefeat:
	.string "You were a cut above me…$"

CastleTownHermes_Gym_Text_MaryPostBattle:
	.string "There are some even stronger\n"
	.string "TRAINERS waiting for you.\p"
	.string "The left is the DEFENSE ROOM, and\n"
	.string "the right is the RECOVERY ROOM.\p"
	.string "Your POKéMON's ATTACK power will be\n"
	.string "on trial either way.$"

CastleTownHermes_Gym_Text_AlexiaIntro:
	.string "The higher the DEFENSE, the more\n"
	.string "reckless I can be in attack.$"

CastleTownHermes_Gym_Text_AlexiaDefeat:
	.string "Our defenses weren't enough…$"

CastleTownHermes_Gym_Text_AlexiaPostBattle:
	.string "I think you've taught me a valuable\n"
	.string "lesson here.\p"
	.string "Now, go on! The left door goes to\n"
	.string "the STRENGTH ROOM.\p"
	.string "The right door opens to\n"
	.string "the ONE-HIT KO ROOM.\p"
	.string "Both of them have TRAINERS who are\n"
	.string "skilled at offense.$"

CastleTownHermes_Gym_Text_JodyIntro:
	.string "Our GYM LEADER told us to go all out\n"
	.string "and beat you.\p"
	.string "Even if you happen to be the\n"
	.string "LEADER's kid!$"

CastleTownHermes_Gym_Text_JodyDefeat:
	.string "But… I went all out!$"

CastleTownHermes_Gym_Text_JodyPostBattle:
	.string "The way you use your POKéMON…\n"
	.string "It's like your father's style.\p"
	.string "Go on through! The GYM LEADER, your\n"
	.string "father, is waiting!$"

CastleTownHermes_Gym_Text_Intro:
    .string "It's me, Hermes!\n"
	.string "I use Steel type Pokemon!\p"
	.string "Let's battle!$"

CastleTownHermes_Gym_Text_PostBattle:
	.string "You beat me!$"
