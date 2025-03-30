CastleTownTreble_House1_MapScripts::
	.byte 0

CastleTownTreble_House1_EventScript_Lilligant::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LILLIGANT, CRY_MODE_NORMAL
	msgbox CastleTownTreble_House1_Text_Lilligant, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CastleTownTreble_House1_EventScript_Steenee::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STEENEE, CRY_MODE_NORMAL
	msgbox CastleTownTreble_House1_Text_Steenee, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CastleTownTreble_House1_EventScript_Sunflora::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
	msgbox CastleTownTreble_House1_Text_Sunflora, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CastleTownTreble_House1_Text_Lilligant:
    .string "Lilligant.$"

CastleTownTreble_House1_Text_Steenee:
    .string "Steenee?$"

CastleTownTreble_House1_Text_Sunflora:
    .string "Sun Sun!$"
