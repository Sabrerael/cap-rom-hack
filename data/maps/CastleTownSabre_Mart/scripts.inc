CastleTownSabre_Mart_MapScripts::
	.byte 0

CastleTownSabre_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSabre_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSabre_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSabre_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSabre_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSabre_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSabre_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSabre_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSabre_Mart_EventScript_FourBadgesItems

CastleTownSabre_Mart_EventScript_NoBadgesItems::
	pokemart CastleTownSabre_Mart_Pokemart_NoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownSabre_Mart_Pokemart_NoBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE
	release
	end

CastleTownSabre_Mart_EventScript_TwoBadgesItems::
	pokemart CastleTownSabre_Mart_Pokemart_TwoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownSabre_Mart_Pokemart_TwoBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE
	release
	end

CastleTownSabre_Mart_EventScript_FourBadgesItems::
	pokemart CastleTownSabre_Mart_Pokemart_FourBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownSabre_Mart_Pokemart_FourBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REVIVE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE
	release
	end
