CastleTownTot_Mart_MapScripts::
	.byte 0

CastleTownTot_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTot_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTot_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTot_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTot_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTot_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTot_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTot_Mart_EventScript_SixBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTot_Mart_EventScript_SixBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 8, CastleTownTot_Mart_EventScript_EightBadgesItems

CastleTownTot_Mart_EventScript_NoBadgesItems::
	pokemart CastleTownTot_Mart_Pokemart_NoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTot_Mart_Pokemart_NoBadges:
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

CastleTownTot_Mart_EventScript_TwoBadgesItems::
	pokemart CastleTownTot_Mart_Pokemart_TwoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTot_Mart_Pokemart_TwoBadges:
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

CastleTownTot_Mart_EventScript_FourBadgesItems::
	pokemart CastleTownTot_Mart_Pokemart_FourBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTot_Mart_Pokemart_FourBadges:
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

CastleTownTot_Mart_EventScript_SixBadgesItems::
	pokemart CastleTownTot_Mart_Pokemart_SixBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTot_Mart_Pokemart_SixBadges:
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

CastleTownTot_Mart_EventScript_EightBadgesItems::
	pokemart CastleTownTot_Mart_Pokemart_EightBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTot_Mart_Pokemart_EightBadges:
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

CastleTownTot_Mart_EventScript_SpecialClerk::
	lock
	faceplayer
	message CastleTownTot_Mart_Text_SpecialClerk
	waitmessage
	pokemart CastleTownTot_Mart_Pokemart_SpecialClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownTot_Mart_Pokemart_SpecialClerk:
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_RAGE_CANDY_BAR
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_OLD_GATEAU
	.2byte ITEM_CASTELIACONE
	.2byte ITEM_LUMIOSE_GALETTE
	.2byte ITEM_SHALOUR_SABLE
	.2byte ITEM_BIG_MALASADA
	.2byte ITEM_NONE
	release
	end

CastleTownTot_Mart_Text_SpecialClerk::
	.string "Welcome! We have specialty\n"
	.string "healing items for sale.$"
