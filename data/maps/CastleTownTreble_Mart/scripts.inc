CastleTownTreble_Mart_MapScripts::
	.byte 0

CastleTownTreble_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Mart_EventScript_SixBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Mart_EventScript_SixBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 8, CastleTownTreble_Mart_EventScript_EightBadgesItems

CastleTownTreble_Mart_EventScript_NoBadgesItems::
	pokemart CastleTownTreble_Mart_Pokemart_NoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTreble_Mart_Pokemart_NoBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE
	release
	end

CastleTownTreble_Mart_EventScript_TwoBadgesItems::
	pokemart CastleTownTreble_Mart_Pokemart_TwoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTreble_Mart_Pokemart_TwoBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE
	release
	end

CastleTownTreble_Mart_EventScript_FourBadgesItems::
	pokemart CastleTownTreble_Mart_Pokemart_FourBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTreble_Mart_Pokemart_FourBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE
	release
	end

CastleTownTreble_Mart_EventScript_SixBadgesItems::
	pokemart CastleTownTreble_Mart_Pokemart_SixBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTreble_Mart_Pokemart_SixBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE
	release
	end

CastleTownTreble_Mart_EventScript_EightBadgesItems::
	pokemart CastleTownTreble_Mart_Pokemart_EightBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTreble_Mart_Pokemart_EightBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE
	release
	end

CastleTownTreble_Mart_EventScript_SpecialClerk::
	lock
	faceplayer
	message CastleTownTreble_Mart_Text_SpecialClerk
	waitmessage
	pokemart CastleTownTreble_Mart_Pokemart_SpecialClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTreble_Mart_Pokemart_SpecialClerk:
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE
	release
	end

CastleTownTreble_Mart_Text_SpecialClerk::
	.string "Welcome! We have a variety\n"
	.string "of Mints for sale.$"

CastleTownTreble_Mart_EventScript_Lady::
	msgbox CastleTownTreble_Mart_Text_Lady, MSGBOX_NPC
	end

CastleTownTreble_Mart_EventScript_Boy::
	msgbox CastleTownTreble_Mart_Text_Boy, MSGBOX_NPC
	end

CastleTownTreble_Mart_Text_Lady:
    .string "Pokémon love the mints and berries\n"
	.string "that we grow in this town.\p"
	.string "Helping to grow these plants\n"
	.string "is helping to grow our Pokémon!$"

CastleTownTreble_Mart_Text_Boy:
    .string "How do Grass Pokémon grow?\p"
	.string "Can you plant a Grass Pokémon\n"
	.string "and make a Pokémon tree?\p"
	.string "I want a Bulbasaur tree!$"
