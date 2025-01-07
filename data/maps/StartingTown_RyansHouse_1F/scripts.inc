StartingTown_RyansHouse_1F_MapScripts::
	.byte 0


StartingTown_RyansHouse_1F_Fridge::
    msgbox StartingTown_RyansHouse_1F_Text_Fridge, MSGBOX_SIGN
	end

StartingTown_RyansHouse_1F_AdventureGift::
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	end

StartingTown_RyansHouse_1F_Text_Fridge:
	.string "The fridge is packed full of Taco Bell\n"
	.string "and cans of an undisclosed energy drink.$"
