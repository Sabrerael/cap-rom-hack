CastleTownAndy_Gym_MapScripts::
	.byte 0

CastleTownAndy_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, CastleTownAndy_Gym_EventScript_GymStatueCertified
	goto CastleTownAndy_Gym_EventScript_GymStatue
	end

CastleTownAndy_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, CastleTownAndy_Gym_EventScript_GymStatueCertified
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

CastleTownAndy_Gym_EventScript_FogTrigger::
	setweather WEATHER_FOG_HORIZONTAL
	doweather
	end

CastleTownAndy_Gym_EventScript_SunTrigger::
	setweather WEATHER_SUNNY
	doweather
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

CastleTownAndy_Gym_EventScript_Leah::
	trainerbattle_single TRAINER_LEAH, CastleTownAndy_Gym_Text_LeahIntro, CastleTownAndy_Gym_Text_LeahDefeat
	msgbox CastleTownAndy_Gym_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownAndy_Gym_EventScript_Jade::
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, CastleTownAndy_Gym_Text_AndyPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownAndy_Gym_EventScript_Jade_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownAndy_Gym_EventScript_Jade_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownAndy_Gym_EventScript_Jade_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownAndy_Gym_EventScript_Jade_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownAndy_Gym_EventScript_Jade_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownAndy_Gym_EventScript_Jade_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownAndy_Gym_EventScript_Jade_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownAndy_Gym_EventScript_Jade_SevenBadge
	release
	end

CastleTownAndy_Gym_EventScript_Jade_ZeroBadge::
	trainerbattle_single TRAINER_JADE_1, CastleTownAndy_Gym_Text_JadeIntro, CastleTownAndy_Gym_Text_JadeDefeated, CastleTownAndy_Gym_EventScript_JadeDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Jade_OneBadge::
	trainerbattle_single TRAINER_JADE_2, CastleTownAndy_Gym_Text_JadeIntro, CastleTownAndy_Gym_Text_JadeDefeated, CastleTownAndy_Gym_EventScript_JadeDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Jade_TwoBadge::
	trainerbattle_single TRAINER_JADE_3, CastleTownAndy_Gym_Text_JadeIntro, CastleTownAndy_Gym_Text_JadeDefeated, CastleTownAndy_Gym_EventScript_JadeDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Jade_ThreeBadge::
	trainerbattle_single TRAINER_JADE_4, CastleTownAndy_Gym_Text_JadeIntro, CastleTownAndy_Gym_Text_JadeDefeated, CastleTownAndy_Gym_EventScript_JadeDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Jade_FourBadge::
	trainerbattle_single TRAINER_JADE_5, CastleTownAndy_Gym_Text_JadeIntro, CastleTownAndy_Gym_Text_JadeDefeated, CastleTownAndy_Gym_EventScript_JadeDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Jade_FiveBadge::
	trainerbattle_single TRAINER_JADE_6, CastleTownAndy_Gym_Text_JadeIntro, CastleTownAndy_Gym_Text_JadeDefeated, CastleTownAndy_Gym_EventScript_JadeDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Jade_SixBadge::
	trainerbattle_single TRAINER_JADE_7, CastleTownAndy_Gym_Text_JadeIntro, CastleTownAndy_Gym_Text_JadeDefeated, CastleTownAndy_Gym_EventScript_JadeDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Jade_SevenBadge::
	trainerbattle_single TRAINER_JADE_8, CastleTownAndy_Gym_Text_JadeIntro, CastleTownAndy_Gym_Text_JadeDefeated, CastleTownAndy_Gym_EventScript_JadeDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_JadeDefeated::
	setflag FLAG_JADE_DEFEATED
	goto_if_set FLAG_RIN_DEFEATED, CastleTownAndy_Gym_EventScript_JadeBothDefeated
	msgbox CastleTownAndy_Gym_Text_JadeStillNeedToBeatRin, MSGBOX_DEFAULT
	closemessage
	release
	end

CastleTownAndy_Gym_EventScript_JadeBothDefeated::
	message CastleTownAndy_Gym_Text_ReceivedDuoBadgeJade
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CastleTownAndy_Gym_Text_DuoBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	call Common_EventScript_UpdateBadgesCollected
	setvar VAR_0x8008, 10
	call Common_EventScript_SetGymTrainers
	call CastleTownAndy_Gym_EventScript_GiveAerialAce
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox CastleTownAndy_Gym_Text_RegisteredJade, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	end

CastleTownAndy_Gym_EventScript_Rintalia::
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, CastleTownAndy_Gym_Text_AndyPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownAndy_Gym_EventScript_Rintalia_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownAndy_Gym_EventScript_Rintalia_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownAndy_Gym_EventScript_Rintalia_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownAndy_Gym_EventScript_Rintalia_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownAndy_Gym_EventScript_Rintalia_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownAndy_Gym_EventScript_Rintalia_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownAndy_Gym_EventScript_Rintalia_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownAndy_Gym_EventScript_Rintalia_SevenBadge
	release
	end

CastleTownAndy_Gym_EventScript_Rintalia_ZeroBadge::
	trainerbattle_single TRAINER_RINTALIA_1, CastleTownAndy_Gym_Text_RintaliaIntro, CastleTownAndy_Gym_Text_RintaliaDefeated, CastleTownAndy_Gym_EventScript_RintaliaDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Rintalia_OneBadge::
	trainerbattle_single TRAINER_RINTALIA_2, CastleTownAndy_Gym_Text_RintaliaIntro, CastleTownAndy_Gym_Text_RintaliaDefeated, CastleTownAndy_Gym_EventScript_RintaliaDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Rintalia_TwoBadge::
	trainerbattle_single TRAINER_RINTALIA_3, CastleTownAndy_Gym_Text_RintaliaIntro, CastleTownAndy_Gym_Text_RintaliaDefeated, CastleTownAndy_Gym_EventScript_RintaliaDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Rintalia_ThreeBadge::
	trainerbattle_single TRAINER_RINTALIA_4, CastleTownAndy_Gym_Text_RintaliaIntro, CastleTownAndy_Gym_Text_RintaliaDefeated, CastleTownAndy_Gym_EventScript_RintaliaDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Rintalia_FourBadge::
	trainerbattle_single TRAINER_RINTALIA_5, CastleTownAndy_Gym_Text_RintaliaIntro, CastleTownAndy_Gym_Text_RintaliaDefeated, CastleTownAndy_Gym_EventScript_RintaliaDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Rintalia_FiveBadge::
	trainerbattle_single TRAINER_RINTALIA_6, CastleTownAndy_Gym_Text_RintaliaIntro, CastleTownAndy_Gym_Text_RintaliaDefeated, CastleTownAndy_Gym_EventScript_RintaliaDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Rintalia_SixBadge::
	trainerbattle_single TRAINER_RINTALIA_7, CastleTownAndy_Gym_Text_RintaliaIntro, CastleTownAndy_Gym_Text_RintaliaDefeated, CastleTownAndy_Gym_EventScript_RintaliaDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_Rintalia_SevenBadge::
	trainerbattle_single TRAINER_RINTALIA_8, CastleTownAndy_Gym_Text_RintaliaIntro, CastleTownAndy_Gym_Text_RintaliaDefeated, CastleTownAndy_Gym_EventScript_RintaliaDefeated, NO_MUSIC
	msgbox CastleTownAndy_Gym_Text_AndyPostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownAndy_Gym_EventScript_RintaliaDefeated::
	setflag FLAG_RIN_DEFEATED
	goto_if_set FLAG_JADE_DEFEATED, CastleTownAndy_Gym_EventScript_RintaliaBothDefeated
	msgbox CastleTownAndy_Gym_Text_RintaliaStillNeedToBeatJade, MSGBOX_DEFAULT
	closemessage
	release
	end

CastleTownAndy_Gym_EventScript_RintaliaBothDefeated::
	message CastleTownAndy_Gym_Text_ReceivedDuoBadgeRintalia
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CastleTownAndy_Gym_Text_DuoBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	call Common_EventScript_UpdateBadgesCollected
	setvar VAR_0x8008, 10
	call Common_EventScript_SetGymTrainers
	call CastleTownAndy_Gym_EventScript_GiveAerialAce
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox CastleTownAndy_Gym_Text_RegisteredRin, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	end

CastleTownAndy_Gym_EventScript_GiveAerialAce::
	giveitem ITEM_TM_AERIAL_ACE
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox CastleTownAndy_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
	return

CastleTownAndy_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "This Gym is a bit of a special\n"
	.string "case, having two different Leaders.\p"
	.string "JadeDosa is a master of Ghost-type\n"
	.string "Pokémon while Rintalia uses a\l"
	.string "collection of Cat Pokémon!\p"
	.string "You'll need to defeat both of them\n"
	.string "in order to get your badge.\p"
	.string "Well, go for it!$"

CastleTownAndy_Gym_Text_GymGuidePostVictory:
	.string "Whoa! What a breathtaking victory!\p"
	.string "You truly are the master of the cute\n"
	.string "and occult! Way to go!$"

CastleTownAndy_Gym_Text_JoshIntro:
	.string "Don't take us Gym Trainers lightly!\n"
	.string "I'll show you why we're better!$"

CastleTownAndy_Gym_Text_JoshDefeat:
	.string "You were too good for me…$"

CastleTownAndy_Gym_Text_JoshPostBattle:
	.string "My poor Meowths…\n$"

CastleTownAndy_Gym_Text_TommyIntro:
	.string "If you can't beat me, you won't stand\n"
	.string "a chance against Rintalia!$"

CastleTownAndy_Gym_Text_TommyDefeat:
	.string "Wow! You've got some potential!$"

CastleTownAndy_Gym_Text_TommyPostBattle:
	.string "Rintalia is stronger than me by\n"
	.string "several times.\p"
	.string "You'd better be on your guard!$"

CastleTownAndy_Gym_Text_MarcIntro:
	.string "We might be in the middle of town,\n"
	.string "but so what?\p"
	.string "My cat Pokémon need room to\n"
	.string "rampage!$"

CastleTownAndy_Gym_Text_MarcDefeat:
	.string "Oh, man oh man!\n"
	.string "Our challenger is one feisty customer!$"

CastleTownAndy_Gym_Text_MarcPostBattle:
	.string "I have to hand it to our Gym Leaders.\p"
	.string "They are both very capable despite\n"
	.string "receiving the role recently.$"

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
	.string "not suitable for the Ghost type!\p"
	.string "The way you battle is somehow brutal!$"

CastleTownAndy_Gym_Text_LeahIntro:
	.string "You are an unfamiliar sight…\n"
	.string "Depart before anything befalls you!$"

CastleTownAndy_Gym_Text_LeahDefeat:
	.string "Hmm…\n"
	.string "You're durable.$"

CastleTownAndy_Gym_Text_LeahPostBattle:
	.string "All we do is for the greatness\n"
	.string "of the Entity…\p"
	.string "Begone survivor…$"

CastleTownAndy_Gym_Text_GymStatue:
	.string "MEW YORK CITY POKéMON GYM$"

CastleTownAndy_Gym_Text_GymStatueCertified:
	.string "MEW YORK CITY POKéMON GYM\p"
	.string "CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownAndy_Gym_Text_JadeIntro:
	.string "Jadedosa: Hey {PLAYER}!\n"
	.string "I love the vibe of this forest,\l"
	.string "all spooky and foggy…\p"
	.string "Say, do you want to battle?\n"
	.string "to pass the time?$"

CastleTownAndy_Gym_Text_RintaliaIntro:
	.string "Rintalia: Welcome {PLAYER}!\p"
	.string "Let's battle!$"

CastleTownAndy_Gym_Text_JadeDefeated:
	.string "Good job!$"

CastleTownAndy_Gym_Text_RintaliaDefeated:
	.string "Good job!$"

CastleTownAndy_Gym_Text_RintaliaStillNeedToBeatJade:
	.string "Good job! But you still need to\n"
	.string "beat Jade to get your badge!$"

CastleTownAndy_Gym_Text_JadeStillNeedToBeatRin:
	.string "Good job! But you still need to\n"
	.string "beat Rin to get your badge!$"

CastleTownAndy_Gym_Text_ReceivedDuoBadgeJade:
	.string "{PLAYER} received the Duo Badge\n"
	.string "from Jade.$"

CastleTownAndy_Gym_Text_ReceivedDuoBadgeRintalia:
	.string "{PLAYER} received the Duo Badge\n"
	.string "from Rin.$"

CastleTownAndy_Gym_Text_DuoBadgeInfoTakeThis:
	.string "The Duo Badge signifies that\n"
	.string "a trainer has bested the both of us\l"
	.string "in battle. For claiming a new badge\p"
	.string "you are entitled to new\n"
	.string "benefits in the Guild Hall.\p"
	.string "If you'd like, use this Technical\n"
	.string "Machine, too.$"

CastleTownAndy_Gym_Text_ExplainAerialAce:
	.string "TM-40 contains Aerial Ace.\p"
	.string "It's a powerful FLYING-type move\n"
	.string "that lots of Pokémon can learn.\p"
	.string "… … … … … …$"

CastleTownAndy_Gym_Text_RegisteredJade:
	.string "Registered Moderator Jade\n"
	.string "in the POKéNAV.$"

CastleTownAndy_Gym_Text_RegisteredRin:
	.string "Registered Moderator Rintalia\n"
	.string "in the POKéNAV.$"

CastleTownAndy_Gym_Text_AndyPostBattle:
	.string "We both have come so far since we met\n"
	.string "all those years ago. I look forward\l"
	.string "to seeing how far you go!$"
