.set LOCALID_PEHBBLE, 1

Pehbble_EventScript_StartPehbbleBattleTwo::
    call_if_ge VAR_PEHBBLE_STATE, 3, Pehbble_EventScript_AfterPehbbleBattleTwoOverworld
	lockall
	msgbox Pehbble_Text_BattleTwoIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PEHBBLE_2, Pehbble_Text_BattleTwoDefeated
	goto Pehbble_EventScript_AfterPehbbleBattleTwo
	end

Pehbble_EventScript_AfterPehbbleBattleTwo::
	msgbox Pehbble_Text_AfterBattleTwo, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement LOCALID_PEHBBLE, Pehbble_Movement_PehbbleBattleTwoMovement
    waitmovement 0
    applymovement LOCALID_PEHBBLE, Common_Movement_WalkInPlaceFasterDown
	setvar VAR_PEHBBLE_STATE, 3
	setflag FLAG_HIDE_PEHBBLE_BATTLE_3
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

Pehbble_EventScript_AfterPehbbleBattleTwoOverworld::
    msgbox Pehbble_Text_AfterBattleTwo, MSGBOX_NPC
    end

Pehbble_Movement_PehbbleBattleTwoMovement:
	walk_right
	step_end

Pehbble_Text_HeyYou:
    .string "HEY YOU!$"

Pehbble_Text_BattleOneIntro:
	.string "Pehbble: Thought you could skip town\n"
	.string "without talking to your best Mod huh?\p"
	.string "Oh wait, I forgot. You demoted me\n"
	.string "yourself! That's my bad!\p"
	.string "Looks like you got a POKéMON, huh?\p"
	.string "I bet you mine is better than yours!$"

Pehbble_Text_BattleOneDefeated:
	.string "Oh… Uhh…\n"
	.string "Best two out of three?$"

Pehbble_Text_AfterBattleOne:
	.string "Pehbble: Okay, so you beat me this time.\n"
	.string "Well, I'm going on my own adventure.\p"
	.string "I'm going to catch and train even more\n"
	.string "POKéMON and fight you again.\p"
	.string "Once I beat you {PLAYER}, you'll have to\n"
	.string "make me a mod again.\p"
	.string "Love you, bye!$"

Pehbble_Text_AfterLeavingBattleOne:
    .string "You have to say it back.\p"
    .string "… … … … …\p"
    .string "Thank you. Now I'm leaving.$"

Pehbble_Text_BattleTwoIntro:
	.string "Pehbble: Hey man! Funny seeing you here.\p"
	.string "Thought you would take on this Gym, huh?\p"
	.string "I'm sure you can handle it, no sweat.\p"
	.string "That is, of course, your Pokémon stink.\n"
	.string "Knowing you, that's completely possible.\p"
	.string "Let's do a test run!$"

Pehbble_Text_BattleTwoDefeated:
	.string "Looks like I was worried for nothing…$"

Pehbble_Text_AfterBattleTwo:
	.string "Pehbble: Yep, you'll do just fine.\p"
	.string "Obviously, I handled this Gym with\n"
    .string "ease.\p"
	.string "Well good luck anyway.\n"
	.string "Love you, bye!$"

Pehbble_Text_IgnoreOutsideGuildHall:
    .string "Hey, don't just ignore me!$"

Pehbble_Text_BattleThreeIntro:
	.string "Pehbble: Yo yo yo.\p"
	.string "This Guild Hall is pretty sweet.\p"
    .string "Whoever came up with making a place\n"
    .string "like this must be a real riot!\p"
	.string "Anyway, it's been a little while\n"
	.string "since our last battle.\p"
	.string "I've got a new team member I'm dying\n"
	.string "to show off to you!\p"
    .string "Let's get to it!$"

Pehbble_Text_BattleThreeDefeated:
	.string "How could you beat my Gastly up?\n"
    .string "I just got 'em!$"

Pehbble_Text_AfterBattleThree:
	.string "Pehbble: Alright, you can go in now.\p"
	.string "Enjoy your time in there. Maybe one\n"
    .string "day I can meet the genius behind\l"
    .string "this Guild Hall…p"
	.string "Eh, that probably won't happen.\p"
	.string "Love you, bye!$"

Pehbble_Text_BattleFourIntro:
	.string "Pehbble: BOO!\p"
    .string "… … … … …\p"
	.string "Man, why is it so hard to scare you?\p"
    .string "You must have inherited your lack\n"
    .string "of jumpiness from Dadhab.\p"
	.string "Some might even say heartlessness…\p"
	.string "Not me though, I would never say\n"
	.string "anything mean about either of you\l"
    .string "behind your back…\p"
	.string "I'd rather say it to your face!\p"
    .string "Let's battle, you heartless\n"
    .string "traveler!$"

Pehbble_Text_BattleFourDefeated:
	.string "Beating your own brother again…$"

Pehbble_Text_AfterBattleFour:
	.string "Pehbble: First taking my Mod rights\n"
    .string "and now this!\p"
    .string "This just proves how heartless you\n"
    .string "truly are…\p"
    .string "Eh, just kidding!\p"
    .string "I gotta give you grief from time\n"
	.string "to time. It's my job!\p"
	.string "Love you, bye!$"

Pehbble_Text_BattleFiveIntro:
	.string "Pehbble: Yo yo yo.\p"
	.string "This Guild Hall is pretty sweet.\p"
    .string "Whoever came up with making a place\n"
    .string "like this must be a real riot!\p"
	.string "Anyway, it's been a little while\n"
	.string "since our last battle.\p"
	.string "I've got a new team member I'm dying\n"
	.string "to show off to you!\p"
    .string "Let's get to it!$"

Pehbble_Text_BattleFiveDefeated:
	.string "How could you beat my Gastly up?\n"
    .string "I just got 'em!$"

Pehbble_Text_AfterBattleFive:
	.string "Pehbble: Alright, you can go in now.\p"
	.string "Enjoy your time in there. Maybe one\n"
    .string "day I can meet the genius behind\l"
    .string "this Guild Hall…p"
	.string "Eh, that probably won't happen.\p"
	.string "Love you, bye!$"

Pehbble_Text_BattleSixIntro:
	.string "Pehbble: Yo yo yo.\p"
	.string "This Guild Hall is pretty sweet.\p"
    .string "Whoever came up with making a place\n"
    .string "like this must be a real riot!\p"
	.string "Anyway, it's been a little while\n"
	.string "since our last battle.\p"
	.string "I've got a new team member I'm dying\n"
	.string "to show off to you!\p"
    .string "Let's get to it!$"

Pehbble_Text_BattleSixDefeated:
	.string "How could you beat my Gastly up?\n"
    .string "I just got 'em!$"

Pehbble_Text_AfterBattleSix:
	.string "Pehbble: Alright, you can go in now.\p"
	.string "Enjoy your time in there. Maybe one\n"
    .string "day I can meet the genius behind\l"
    .string "this Guild Hall…p"
	.string "Eh, that probably won't happen.\p"
	.string "Love you, bye!$"

UnderConstruction_EventScript_UnderConstruction::
	msgbox UnderConstruction_Text_UnderConstuction, MSGBOX_SIGN
	end

UnderConstruction_Text_UnderConstuction:
	.string "Pardon our dust!\n"
    .string "This area is not fully\l"
    .string "implemented and will be\l"
    .string "completed at a later date!$"
