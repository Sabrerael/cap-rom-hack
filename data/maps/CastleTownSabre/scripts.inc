CastleTownSabre_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CastleTownSabre_OnTransition
	.byte 0

CastleTownSabre_OnTransition:
	setflag FLAG_VISITED_CASTLE_TOWN_SABRE
	end

CastleTownSabre_EventScript_GymSign::
	msgbox CastleTownSabre_Text_GymSign, MSGBOX_SIGN
	end

CastleTownSabre_EventScript_ShadyGuy::
	lock
	faceplayer
	message CastleTownSabre_Text_ShadyGuy
	waitmessage
	pokemart CastleTownSabre_Pokemart_ShadyGuy
	msgbox CastleTownSabre_Text_ShadyGuyLeaving, MSGBOX_DEFAULT
	release
	end
	.align 2
CastleTownSabre_Pokemart_ShadyGuy:
	.2byte ITEM_MEGA_RING
	.2byte ITEM_VENUSAURITE
	.2byte ITEM_CHARIZARDITE_X
	.2byte ITEM_CHARIZARDITE_Y
	.2byte ITEM_BLASTOISINITE
	.2byte ITEM_BEEDRILLITE
	.2byte ITEM_PIDGEOTITE
	.2byte ITEM_ALAKAZITE
	.2byte ITEM_SLOWBRONITE
	.2byte ITEM_GENGARITE
	.2byte ITEM_KANGASKHANITE
	.2byte ITEM_PINSIRITE
	.2byte ITEM_GYARADOSITE
	.2byte ITEM_MEWTWONITE_X
	.2byte ITEM_MEWTWONITE_Y
	.2byte ITEM_AMPHAROSITE
	.2byte ITEM_STEELIXITE
	.2byte ITEM_SCIZORITE
	.2byte ITEM_HERACRONITE
	.2byte ITEM_HOUNDOOMINITE
	.2byte ITEM_TYRANITARITE
	.2byte ITEM_SCEPTILITE
	.2byte ITEM_BLAZIKENITE
	.2byte ITEM_SWAMPERTITE
	.2byte ITEM_GARDEVOIRITE
	.2byte ITEM_SABLENITE
	.2byte ITEM_MAWILITE
	.2byte ITEM_AGGRONITE
	.2byte ITEM_MEDICHAMITE
	.2byte ITEM_MANECTITE
	.2byte ITEM_SHARPEDONITE
	.2byte ITEM_CAMERUPTITE
	.2byte ITEM_ALTARIANITE
	.2byte ITEM_BANETTITE
	.2byte ITEM_ABSOLITE
	.2byte ITEM_GLALITITE
	.2byte ITEM_SALAMENCITE
	.2byte ITEM_METAGROSSITE
	.2byte ITEM_LATIASITE
	.2byte ITEM_LATIOSITE
	.2byte ITEM_LOPUNNITE
	.2byte ITEM_GARCHOMPITE
	.2byte ITEM_LUCARIONITE
	.2byte ITEM_ABOMASITE
	.2byte ITEM_GALLADITE
	.2byte ITEM_AUDINITE
	.2byte ITEM_DIANCITE
	.2byte ITEM_NONE
	release
	end

CastleTownSabre_Text_GymSign:
	.string "SCALEPEAK CITY POKéMON GYM\n"
	.string "LEADER: SABRE\p"
	.string "“The constantly tired DRAGON tamer!”$"

CastleTownSabre_Text_ShadyGuy::
	.string "Hey there…\p"
	.string "I've got some items that are…\n"
	.string "looked down upon here…$"

CastleTownSabre_Text_ShadyGuyLeaving::
	.string "If anyone asks, you never saw me…$"
