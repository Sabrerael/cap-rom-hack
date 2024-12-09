StartingTown_PokemonMart_MapScripts::
	.byte 0

StartingTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_eq VAR_BADGES_COLLECTED, 0, StartingTown_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 1, StartingTown_Mart_EventScript_NoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 2, StartingTown_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 3, StartingTown_Mart_EventScript_TwoBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 4, StartingTown_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 5, StartingTown_Mart_EventScript_FourBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 6, StartingTown_Mart_EventScript_SixBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 7, StartingTown_Mart_EventScript_SixBadgesItems
	goto_if_eq VAR_BADGES_COLLECTED, 8, StartingTown_Mart_EventScript_EightBadgesItems

StartingTown_Mart_EventScript_NoBadgesItems::
	pokemart StartingTown_Mart_Pokemart_NoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
StartingTown_Mart_Pokemart_NoBadges:
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

StartingTown_Mart_EventScript_TwoBadgesItems::
	pokemart StartingTown_Mart_Pokemart_TwoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
StartingTown_Mart_Pokemart_TwoBadges:
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

StartingTown_Mart_EventScript_FourBadgesItems::
	pokemart StartingTown_Mart_Pokemart_FourBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
StartingTown_Mart_Pokemart_FourBadges:
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

StartingTown_Mart_EventScript_SixBadgesItems::
	pokemart StartingTown_Mart_Pokemart_SixBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
StartingTown_Mart_Pokemart_SixBadges:
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

StartingTown_Mart_EventScript_EightBadgesItems::
	pokemart StartingTown_Mart_Pokemart_EightBadges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
StartingTown_Mart_Pokemart_EightBadges:
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

StartingTown_Mart_EventScript_SpecialClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart StartingTown_Mart_Pokemart_SpecialClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
StartingTown_Mart_Pokemart_SpecialClerk:
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE
	release
	end
