Route7_MapScripts::
	.byte 0

Route7_EventScript_Drew::
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route7_EventScript_Heidi::
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
	end

Route7_EventScript_Beau::
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end

Route7_EventScript_Becky::
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
	end

Route7_EventScript_Dusty::
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
	end

Route7_EventScript_Travis::
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end

Route7_EventScript_Irene::
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
	end

Route7_EventScript_DaDaddyDeath::
	trainerbattle_single TRAINER_DA_DADDY_DEATH, Route7_Text_DaDaddyDeathIntro, Route7_Text_DaDaddyDeathDefeat
	msgbox Route7_Text_DaDaddyDeathPostBattle, MSGBOX_AUTOCLOSE
	end

Route7_Text_DaDaddyDeathIntro:
	.string "DaDaddyDeath: Hey Ryan!\n"
	.string "It's me, the perfect and\l"
	.string "handsome DaDaddyDeath! Let's fight!$"

Route7_Text_DaDaddyDeathDefeat:
	.string "You beat me? The perfectly handsome me?\n"
	.string "I don't believe it…$"

Route7_Text_DaDaddyDeathPostBattle:
    .string "You're dope.\n"
	.string "Thanks for being you.$"
