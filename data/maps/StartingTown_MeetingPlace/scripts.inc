StartingTown_MeetingPlace_MapScripts::
	.byte 0

StartingTown_MeetingPlace_EventScript_Receptionist::
	msgbox StartingTown_MeetingPlace_Text_Receptionist, MSGBOX_NPC
	end

StartingTown_MeetingPlace_EventScript_TMGuy::
	lock
	faceplayer
	message StartingTown_MeetingPlace_Text_TMGuy
	waitmessage
	pokemart StartingTown_MeetingPlace_TMGuy
	msgbox StartingTown_MeetingPlace_Text_TMGuy_Leave, MSGBOX_DEFAULT
	release
	end
	.align 2
StartingTown_MeetingPlace_TMGuy:
	.2byte ITEM_TM03
	.2byte ITEM_TM09
	.2byte ITEM_TM17
	.2byte ITEM_TM21
	.2byte ITEM_TM27
	.2byte ITEM_TM28
	.2byte ITEM_TM34
	.2byte ITEM_TM39
	.2byte ITEM_TM46
	.2byte ITEM_NONE
	release
	end

StartingTown_MeetingPlace_Text_Receptionist:
	.string "Placeholder, will be updated.$"

StartingTown_MeetingPlace_Text_TMGuy:
	.string "Hey there. I've got some TMs\n"
	.string "for sale.$"

StartingTown_MeetingPlace_Text_TMGuy_Leave:
    .string "See you later!$"
