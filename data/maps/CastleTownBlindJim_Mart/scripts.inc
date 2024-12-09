CastleTownBlindJim_Mart_MapScripts::
	.byte 0

CastleTownBlindJim_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownBlindJim_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownBlindJim_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownBlindJim_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownBlindJim_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownBlindJim_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownBlindJim_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownBlindJim_Mart_EventScript_SixBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownBlindJim_Mart_EventScript_SixBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 8, CastleTownBlindJim_Mart_EventScript_EightBadgesItems

CastleTownBlindJim_Mart_EventScript_NoBadgesItems::
	pokemart CastleTownBlindJim_Mart_Pokemart_NoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownBlindJim_Mart_Pokemart_NoBadges:
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

CastleTownBlindJim_Mart_EventScript_TwoBadgesItems::
	pokemart CastleTownBlindJim_Mart_Pokemart_TwoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownBlindJim_Mart_Pokemart_TwoBadges:
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

CastleTownBlindJim_Mart_EventScript_FourBadgesItems::
	pokemart CastleTownBlindJim_Mart_Pokemart_FourBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownBlindJim_Mart_Pokemart_FourBadges:
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

CastleTownBlindJim_Mart_EventScript_SixBadgesItems::
	pokemart CastleTownBlindJim_Mart_Pokemart_SixBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownBlindJim_Mart_Pokemart_SixBadges:
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

CastleTownBlindJim_Mart_EventScript_EightBadgesItems::
	pokemart CastleTownBlindJim_Mart_Pokemart_EightBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownBlindJim_Mart_Pokemart_EightBadges:
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

CastleTownBlindJim_Mart_EventScript_SpecialClerk::
	lock
	faceplayer
	message CastleTownBlindJim_Mart_Text_SpecialClerk
	waitmessage
	pokemart CastleTownBlindJim_Mart_Pokemart_SpecialClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownBlindJim_Mart_Pokemart_SpecialClerk:
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_MAGNET
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_POISON_BARB
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_HARD_STONE
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_NONE
	release
	end

CastleTownBlindJim_Mart_Text_SpecialClerk::
	.string "Welcome! We have a variety of\n"
	.string "type-boosting held items for sale.$"
