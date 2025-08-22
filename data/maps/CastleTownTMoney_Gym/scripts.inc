CastleTownTMoney_Gym_MapScripts::
	.byte 0

CastleTownTMoney_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, CastleTownTMoney_Gym_EventScript_GymGuidePostVictory
	msgbox CastleTownTMoney_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_GymGuidePostVictory::
	msgbox CastleTownTMoney_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, CastleTownTMoney_Gym_EventScript_GymStatueCertified
	goto CastleTownTMoney_Gym_EventScript_GymStatue
	end

CastleTownTMoney_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, CastleTownTMoney_Gym_EventScript_GymStatueCertified
	goto CastleTownTMoney_Gym_EventScript_GymStatue
	end

CastleTownTMoney_Gym_EventScript_GymStatueCertified::
	msgbox CastleTownTMoney_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

CastleTownTMoney_Gym_EventScript_GymStatue::
	msgbox CastleTownTMoney_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CastleTownTMoney_Gym_EventScript_Jared::
	trainerbattle_single TRAINER_JARED, CastleTownTMoney_Gym_Text_JaredIntro, CastleTownTMoney_Gym_Text_JaredDefeat
	msgbox CastleTownTMoney_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTMoney_Gym_EventScript_Edwardo::
	trainerbattle_single TRAINER_EDWARDO, CastleTownTMoney_Gym_Text_EdwardoIntro, CastleTownTMoney_Gym_Text_EdwardoDefeat
	msgbox CastleTownTMoney_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTMoney_Gym_EventScript_Flint::
	trainerbattle_single TRAINER_FLINT, CastleTownTMoney_Gym_Text_FlintIntro, CastleTownTMoney_Gym_Text_FlintDefeat
	msgbox CastleTownTMoney_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTMoney_Gym_EventScript_Ashley::
	trainerbattle_single TRAINER_ASHLEY, CastleTownTMoney_Gym_Text_AshleyIntro, CastleTownTMoney_Gym_Text_AshleyDefeat
	msgbox CastleTownTMoney_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTMoney_Gym_EventScript_Humberto::
	trainerbattle_single TRAINER_HUMBERTO, CastleTownTMoney_Gym_Text_HumbertoIntro, CastleTownTMoney_Gym_Text_HumbertoDefeat
	msgbox CastleTownTMoney_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTMoney_Gym_EventScript_Darius::
	trainerbattle_single TRAINER_DARIUS, CastleTownTMoney_Gym_Text_DariusIntro, CastleTownTMoney_Gym_Text_DariusDefeat
	msgbox CastleTownTMoney_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTMoney_Gym_EventScript_Crissy::
	trainerbattle_single TRAINER_CRISSY, CastleTownTMoney_Gym_Text_CrissyIntro, CastleTownTMoney_Gym_Text_CrissyDefeat
	msgbox CastleTownTMoney_Gym_Text_CrissyPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownTMoney_Gym_EventScript_Winona::
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, CastleTownTMoney_Gym_EventScript_TMoneyPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTMoney_Gym_EventScript_Winona_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTMoney_Gym_EventScript_Winona_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTMoney_Gym_EventScript_Winona_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTMoney_Gym_EventScript_Winona_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTMoney_Gym_EventScript_Winona_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTMoney_Gym_EventScript_Winona_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTMoney_Gym_EventScript_Winona_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTMoney_Gym_EventScript_Winona_SevenBadge
	release
	end

CastleTownTMoney_Gym_EventScript_Winona_ZeroBadge::
	trainerbattle_single TRAINER_TMONEY_1, CastleTownTMoney_Gym_Text_Intro, CastleTownTMoney_Gym_Text_PostBattle, CastleTownTMoney_Gym_EventScript_WinonaDefeated, NO_MUSIC
	msgbox CastleTownTMoney_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_Winona_OneBadge::
	trainerbattle_single TRAINER_TMONEY_2, CastleTownTMoney_Gym_Text_Intro, CastleTownTMoney_Gym_Text_PostBattle, CastleTownTMoney_Gym_EventScript_WinonaDefeated, NO_MUSIC
	msgbox CastleTownTMoney_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_Winona_TwoBadge::
	trainerbattle_single TRAINER_TMONEY_3, CastleTownTMoney_Gym_Text_Intro, CastleTownTMoney_Gym_Text_PostBattle, CastleTownTMoney_Gym_EventScript_WinonaDefeated, NO_MUSIC
	msgbox CastleTownTMoney_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_Winona_ThreeBadge::
	trainerbattle_single TRAINER_TMONEY_4, CastleTownTMoney_Gym_Text_Intro, CastleTownTMoney_Gym_Text_PostBattle, CastleTownTMoney_Gym_EventScript_WinonaDefeated, NO_MUSIC
	msgbox CastleTownTMoney_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_Winona_FourBadge::
	trainerbattle_single TRAINER_TMONEY_5, CastleTownTMoney_Gym_Text_Intro, CastleTownTMoney_Gym_Text_PostBattle, CastleTownTMoney_Gym_EventScript_WinonaDefeated, NO_MUSIC
	msgbox CastleTownTMoney_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_Winona_FiveBadge::
	trainerbattle_single TRAINER_TMONEY_6, CastleTownTMoney_Gym_Text_Intro, CastleTownTMoney_Gym_Text_PostBattle, CastleTownTMoney_Gym_EventScript_WinonaDefeated, NO_MUSIC
	msgbox CastleTownTMoney_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_Winona_SixBadge::
	trainerbattle_single TRAINER_TMONEY_7, CastleTownTMoney_Gym_Text_Intro, CastleTownTMoney_Gym_Text_PostBattle, CastleTownTMoney_Gym_EventScript_WinonaDefeated, NO_MUSIC
	msgbox CastleTownTMoney_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_Winona_SevenBadge::
	trainerbattle_single TRAINER_TMONEY_8, CastleTownTMoney_Gym_Text_Intro, CastleTownTMoney_Gym_Text_PostBattle, CastleTownTMoney_Gym_EventScript_WinonaDefeated, NO_MUSIC
	msgbox CastleTownTMoney_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTMoney_Gym_EventScript_TMoneyPostBattle::
	msgbox CastleTownTMoney_Gym_Text_TMoneyPostBattle, MSGBOX_NPC
	release
	end

CastleTownTMoney_Gym_EventScript_WinonaDefeated::
	message CastleTownTMoney_Gym_Text_ReceivedCapCoinBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CastleTownTMoney_Gym_Text_CapCoinBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	call Common_EventScript_UpdateBadgesCollected
	setvar VAR_0x8008, 14
	call Common_EventScript_SetGymTrainers
	call CastleTownTMoney_Gym_EventScript_GiveVoltSwitch
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox CastleTownTMoney_Gym_Text_RegisteredTMoney, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	end

CastleTownTMoney_Gym_EventScript_GiveVoltSwitch::
	giveitem ITEM_TM_VOLT_SWITCH
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox CastleTownTMoney_Gym_Text_ExplainVoltSwitch, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_VOLT_SWITCH
	return

CastleTownTMoney_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "FORTREE GYM LEADER WINONA is\n"
	.string "a master of FLYING-type POKéMON.\p"
	.string "She's waiting at the back of this GYM,\n"
	.string "behind the rotating doors.\p"
	.string "She's waiting for new challengers\n"
	.string "who are trying to take wing!\p"
	.string "Okay, go for it!$"

CastleTownTMoney_Gym_Text_GymGuidePostVictory:
	.string "You did it!\n"
	.string "You've achieved liftoff!$"

CastleTownTMoney_Gym_Text_GymStatue:
	.string "VOLTARI CITY POKéMON GYM$"

CastleTownTMoney_Gym_Text_GymStatueCertified:
	.string "VOLTARI CITY POKéMON GYM\p"
	.string "TMONEY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownTMoney_Gym_Text_JaredIntro:
	.string "Behold the elegant battle style of\n"
	.string "BIRD POKéMON!$"

CastleTownTMoney_Gym_Text_JaredDefeat:
	.string "You…\n"
	.string "You're strong…$"

CastleTownTMoney_Gym_Text_JaredPostBattle:
	.string "A TRAINER has to be smart to keep\n"
	.string "up with unexpected turns of events.\p"
	.string "Do you have the smarts to get to\n"
	.string "our LEADER?$"

CastleTownTMoney_Gym_Text_EdwardoIntro:
	.string "The lovers of BIRD POKéMON aspire\n"
	.string "to join this GYM.\p"
	.string "As a member of the FORTREE GYM,\n"
	.string "I'm not allowed to lose!$"

CastleTownTMoney_Gym_Text_EdwardoDefeat:
	.string "It was too much of a load for me\n"
	.string "to bear…$"

CastleTownTMoney_Gym_Text_EdwardoPostBattle:
	.string "The world is huge, and there are\n"
	.string "countless tough TRAINERS.\p"
	.string "I'm going to keep training and make\n"
	.string "myself even stronger.$"

CastleTownTMoney_Gym_Text_FlintIntro:
	.string "There's no need for WINONA, our GYM\n"
	.string "LEADER, to deal with you!\p"
	.string "I'm plenty good enough for you!$"

CastleTownTMoney_Gym_Text_FlintDefeat:
	.string "WINONA, I…\n"
	.string "I lost!$"

CastleTownTMoney_Gym_Text_FlintPostBattle:
	.string "WINONA is cute and she's strong.\n"
	.string "She's the ultimate LEADER!\p"
	.string "Blush…$"

CastleTownTMoney_Gym_Text_AshleyIntro:
	.string "WINONA taught me personally!\n"
	.string "You can't beat me easily!$"

CastleTownTMoney_Gym_Text_AshleyDefeat:
	.string "I was beaten…$"

CastleTownTMoney_Gym_Text_AshleyPostBattle:
	.string "Thanks to WINONA, the people of\n"
	.string "FORTREE can live without fear.$"

CastleTownTMoney_Gym_Text_HumbertoIntro:
	.string "When WINONA takes to battle, her face\n"
	.string "shines with beautiful determination…\p"
	.string "I'm not letting you witness that\n"
	.string "lovely sight!$"

CastleTownTMoney_Gym_Text_HumbertoDefeat:
	.string "Urk!\n"
	.string "I couldn't stop you.$"

CastleTownTMoney_Gym_Text_HumbertoPostBattle:
	.string "You'd better watch it!\n"
	.string "Don't get distracted staring at WINONA\l"
	.string "or you'll go crashing down in a heap!$"

CastleTownTMoney_Gym_Text_DariusIntro:
	.string "You'd better know that there are all\n"
	.string "sorts of FLYING-type POKéMON.\p"
	.string "You do know that, right?$"

CastleTownTMoney_Gym_Text_DariusDefeat:
	.string "You seem to know your stuff!$"

CastleTownTMoney_Gym_Text_DariusPostBattle:
	.string "Sure, you beat me all right.\n"
	.string "But you'd better watch it! Our LEADER\l"
	.string "WINONA's POKéMON are all business.$"

CastleTownTMoney_Gym_Text_CrissyIntro:
	.string "You came all the way here, but you won't\n"
	.string "get to see JUAN.\p"
	.string "Not if you lose to me, you won't!$"

CastleTownTMoney_Gym_Text_CrissyDefeat:
	.string "You're strong!\n"
	.string "I was fooled by your cute looks!$"

CastleTownTMoney_Gym_Text_CrissyPostBattle:
	.string "You might be good enough to avoid\n"
	.string "being wiped out in one hit by JUAN.$"

CastleTownTMoney_Gym_Text_Intro:
	.string "Ah, a challenger. You think you can\n"
	.string "handle the sheer voltage of this gym?\p"
	.string "My Pokémon and I are like a well-\n"
	.string "oiled machine. Powerful, efficient,\l"
	.string "unstoppable… Just like the energy\p"
	.string "flowing through this plant…\n"
	.string "and the money it generates. I've\p"
	.string "built my empire by understanding that\n"
	.string "only the strongest survive.\p"
	.string "So show me what you're made of!\n"
	.string "You're playing in my league now!\p"
	.string "Are you ready to get shocked?$"

CastleTownTMoney_Gym_Text_PostBattle:
	.string "Impressive… I didn’t expect you to last\n"
	.string "this long.\p"
	.string "You thought you won… but one last test!\p"
	.string "!duel TMoney {PLAYER} all Cap Coins\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "TMoney has lost the duel!\n"
	.string "{PLAYER} now has 1 Cap Coin."

CastleTownTMoney_Gym_Text_ReceivedCapCoinBadge:
	.string "{PLAYER} received the Cap Coin Badge\n"
	.string "from TMoney.$"

CastleTownTMoney_Gym_Text_CapCoinBadgeInfoTakeThis:
	.string "The Cap Coin Badge proves you've\n"
	.string "earned the right to wield your power.\p"
	.string "Just know this - power comes at a price.\n"
	.string "Use it wisely. For claiming a new badge\p"
	.string "you are entitled to new\n"
	.string "benefits in the Guild Hall.\p"
	.string "I would also grant you this Technical\n"
	.string "Machine as well.$"

CastleTownTMoney_Gym_Text_ExplainVoltSwitch:
	.string "TM-71 contains Volt Switch.\p"
	.string "The ability to reposition yourself\n"
	.string "while also dealing damage is a\p"
	.string "is a formidable one. Use it well.\p"
	.string "… … … … … …$"

CastleTownTMoney_Gym_Text_RegisteredTMoney:
	.string "Registered Moderator TMoney\n"
	.string "in the PokéNav.$"

CastleTownTMoney_Gym_Text_TMoneyPostBattle:
	.string "You've come a long way since we first\n"
	.string "met and I have to admit, I'm impressed.\p"
	.string "You've embraced every challenge,\n!"
	.string "turning it into an opportunity for\p"
	.string "growth. You have made many memories\n"
	.string "and friends along the way. Remember this:\p"
	.string "make every day an adventure. Seize\n"
	.string "every moment and charge forward like\p"
	.string "the spark of a live wire. If you keep\n"
	.string "that mindset, you'll always stay ahead\p"
	.string "of the curve. Keep pushing forward and\n"
	.string "you'll become a force to be reckoned with.$"
