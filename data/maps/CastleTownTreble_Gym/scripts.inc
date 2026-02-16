.set LOCALID_JEN, 3
.set LOCALID_NADIA, 5
.set LOCALID_KIRK, 6
.set LOCALID_VIVIAN, 8

CastleTownTreble_Gym_MapScripts::
    map_script MAP_SCRIPT_ON_LOAD, CastleTownTreble_Gym_OnLoad
	.byte 0

CastleTownTreble_Gym_OnLoad:
	call CastleTownTreble_Gym_EventScript_CheckTrees
	end

CastleTownTreble_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, CastleTownTreble_Gym_EventScript_GymGuidePostVictory
	msgbox CastleTownTreble_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_GymGuidePostVictory::
	msgbox CastleTownTreble_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, CastleTownTreble_Gym_EventScript_GymStatueCertified
	goto CastleTownTreble_Gym_EventScript_GymStatue
	end

CastleTownTreble_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, CastleTownTreble_Gym_EventScript_GymStatueCertified
	goto CastleTownTreble_Gym_EventScript_GymStatue
	end

CastleTownTreble_Gym_EventScript_GymStatueCertified::
	msgbox CastleTownTreble_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

CastleTownTreble_Gym_EventScript_GymStatue::
	msgbox CastleTownTreble_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CastleTownTreble_Gym_EventScript_CheckTrees::
	goto_if_set FLAG_BADGE03_GET, CastleTownTreble_Gym_EventScript_RemoveAllTrees
	goto_if_set FLAG_TREBLE_GYM_TREES_4, CastleTownTreble_Gym_EventScript_RemoveAllTrees
	goto_if_set FLAG_TREBLE_GYM_TREES_3, CastleTownTreble_Gym_EventScript_RemoveAllTrees3
	goto_if_set FLAG_TREBLE_GYM_TREES_2, CastleTownTreble_Gym_EventScript_RemoveAllTrees2
	goto_if_set FLAG_TREBLE_GYM_TREES_1, CastleTownTreble_Gym_EventScript_RemoveTrees1
	special DrawWholeMapView
	end

CastleTownTreble_Gym_EventScript_RemoveAllTrees::
	call CastleTownTreble_Gym_EventScript_RemoveTrees1
	call CastleTownTreble_Gym_EventScript_RemoveTrees2
	call CastleTownTreble_Gym_EventScript_RemoveTrees3
	call CastleTownTreble_Gym_EventScript_RemoveTrees4
	special DrawWholeMapView
	end

CastleTownTreble_Gym_EventScript_RemoveAllTrees3::
	call CastleTownTreble_Gym_EventScript_RemoveTrees1
	call CastleTownTreble_Gym_EventScript_RemoveTrees2
	call CastleTownTreble_Gym_EventScript_RemoveTrees3
	special DrawWholeMapView
	end

CastleTownTreble_Gym_EventScript_RemoveAllTrees2::
	call CastleTownTreble_Gym_EventScript_RemoveTrees1
	call CastleTownTreble_Gym_EventScript_RemoveTrees2
	special DrawWholeMapView
	end

CastleTownTreble_Gym_EventScript_CheckBerryFullyGrown::
	buffernumberstring STR_VAR_2, VAR_0x8006
	faceplayer
	special ObjectEventInteractionGetBerryCountString
	msgbox BerryTree_Text_WantToPick, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CastleTownTreble_Gym_EventScript_PickBerry
	goto_if_eq VAR_RESULT, NO, CastleTownTreble_Gym_EventScript_CancelPickingBerry

.set BERRY_NORMAL_BAG_FULL, 0
.set BERRY_NORMAL_SPACE_IN_BAG, 1
.set BERRY_MUTATION_BAG_FULL, 2
.set BERRY_MUTATION_SPACE_IN_BAG, 3

CastleTownTreble_Gym_EventScript_PickBerry::
	special ObjectEventInteractionPickBerryTree
	goto_if_eq VAR_0x8004, BERRY_NORMAL_BAG_FULL, CastleTownTreble_Gym_EventScript_BerryPocketFull
	special IncrementDailyPickedBerries
	special ObjectEventInteractionRemoveBerryTree
	message BerryTree_Text_PickedTheBerry
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	waitbuttonpress
	message BerryTree_Text_PutAwayBerry
	waitmessage
	waitbuttonpress
	return

CastleTownTreble_Gym_EventScript_BerryPocketFull::
	message BerryTree_Text_BerryPocketFull
	waitmessage
	waitbuttonpress
	release
	end

CastleTownTreble_Gym_EventScript_CancelPickingBerry::
	message BerryTree_Text_BerryLeftUnpicked
	waitmessage
	waitbuttonpress
	release
	end

CastleTownTreble_Gym_EventScript_RemoveTrees1::
	setmetatile 18,  44, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 18,  45, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 18,  46, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  44, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  45, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  46, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  44, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  45, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  46, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  44, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  45, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  46, METATILE_CastleTownTrebleGym_FloorGrass, 0
	return

CastleTownTreble_Gym_EventScript_RemoveTrees2::
	setmetatile 18,  28, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 18,  29, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 18,  30, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  28, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  29, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  30, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  28, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  29, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  30, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  28, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  29, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  30, METATILE_CastleTownTrebleGym_FloorGrass, 0
	return

CastleTownTreble_Gym_EventScript_RemoveTrees3::
	setmetatile 18,  16, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 18,  17, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 18,  18, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  16, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  17, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  18, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  16, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  17, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  18, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  16, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  17, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  18, METATILE_CastleTownTrebleGym_FloorGrass, 0
	return

CastleTownTreble_Gym_EventScript_RemoveTrees4::
	setmetatile 18,  8, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 18,  9, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 18,  10, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  8, METATILE_CastleTownTrebleGym_FloorFlowers, 0
	setmetatile 19,  9, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 19,  10, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  8, METATILE_CastleTownTrebleGym_FloorFlowers, 0
	setmetatile 20,  9, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 20,  10, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  8, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  9, METATILE_CastleTownTrebleGym_FloorGrass, 0
	setmetatile 21,  10, METATILE_CastleTownTrebleGym_FloorGrass, 0
	return

CastleTownTreble_Gym_EventScript_DoorAlreadyOpen::
	releaseall
	end

CastleTownTreble_Gym_EventScript_GymSign1::
	msgbox CastleTownTreble_Gym_Text_SignOne, MSGBOX_SIGN
	end

CastleTownTreble_Gym_EventScript_BerryQuiz1Correct::
    goto_if_set FLAG_TREBLE_GYM_TREES_1, BerryTreeScript
	lock
    call CastleTownTreble_Gym_EventScript_CheckBerryFullyGrown
	message CastleTownTreble_Gym_Text_CorrectBerry
	waitmessage
	waitbuttonpress
	call CastleTownTreble_Gym_EventScript_BerryQuiz1Complete
	release
	end

CastleTownTreble_Gym_EventScript_BerryQuiz1Wrong::
    goto_if_set FLAG_TREBLE_GYM_TREES_1, BerryTreeScript
	lock
    call CastleTownTreble_Gym_EventScript_CheckBerryFullyGrown
	message CastleTownTreble_Gym_Text_IncorrectBerry
	waitmessage
	waitbuttonpress
	goto_if_not_defeated TRAINER_VIVIAN, CastleTownTreble_Gym_EventScript_BattleVivian
	goto_if_not_defeated TRAINER_VIVIAN_2, CastleTownTreble_Gym_EventScript_BattleVivian
	releaseall
	end

CastleTownTreble_Gym_EventScript_BerryQuiz1Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownTreble_Gym_EventScript_RemoveTrees1
	special DrawWholeMapView
	setflag FLAG_TREBLE_GYM_TREES_1
	return

CastleTownTreble_Gym_EventScript_BattleVivian::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_BattleVivianBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_BattleVivianBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_BattleVivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_BattleVivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_BattleVivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_BattleVivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_BattleVivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_BattleVivianAdvanced
	return

CastleTownTreble_Gym_EventScript_BattleVivianBeginner::
	call CastleTownTreble_Gym_EventScript_VivianApproach
	msgbox CastleTownTreble_Gym_Text_VivianIntro
	trainerbattle_no_intro TRAINER_VIVIAN, CastleTownTreble_Gym_Text_VivianDefeat
	goto_if_set FLAG_TREBLE_GYM_TREES_1, CastleTownTreble_Gym_EventScript_DoorAlreadyOpen
	call CastleTownTreble_Gym_EventScript_BerryQuiz1Complete
	releaseall
	end

CastleTownTreble_Gym_EventScript_BattleVivianAdvanced::
	call CastleTownTreble_Gym_EventScript_VivianApproach
	msgbox CastleTownTreble_Gym_Text_VivianIntro
	trainerbattle_no_intro TRAINER_VIVIAN_2, CastleTownTreble_Gym_Text_VivianDefeat
	goto_if_set FLAG_TREBLE_GYM_TREES_1, CastleTownTreble_Gym_EventScript_DoorAlreadyOpen
	call CastleTownTreble_Gym_EventScript_BerryQuiz1Complete
	releaseall
	end

CastleTownTreble_Gym_EventScript_VivianApproach::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_VIVIAN, CastleTownTreble_Gym_Movement_VivianApproach
	waitmovement 0
	return

CastleTownTreble_Gym_Movement_VivianApproach::
	walk_left
	step_end

CastleTownTreble_Gym_EventScript_DefeatedVivian::
	call_if_unset FLAG_TREBLE_GYM_TREES_1, CastleTownTreble_Gym_EventScript_BerryQuiz1CompleteTrainer
	release
	end

CastleTownTreble_Gym_EventScript_BerryQuiz1CompleteTrainer::
    call CastleTownTreble_Gym_EventScript_BerryQuiz1Complete
	return

CastleTownTreble_Gym_EventScript_Vivian::
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, CastleTownTreble_Gym_EventScript_VivianPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_VivianBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_VivianBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_VivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_VivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_VivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_VivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_VivianAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_VivianAdvanced
	msgbox CastleTownTreble_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_VivianBeginner::
	trainerbattle_single TRAINER_VIVIAN, CastleTownTreble_Gym_Text_VivianIntro, CastleTownTreble_Gym_Text_VivianDefeat, CastleTownTreble_Gym_EventScript_DefeatedVivian
	end

CastleTownTreble_Gym_EventScript_VivianAdvanced::
	trainerbattle_single TRAINER_VIVIAN, CastleTownTreble_Gym_Text_VivianIntro, CastleTownTreble_Gym_Text_VivianDefeat, CastleTownTreble_Gym_EventScript_DefeatedVivian
	end

CastleTownTreble_Gym_EventScript_VivianPostBattle::
	msgbox CastleTownTreble_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_GymSign2::
	msgbox CastleTownTreble_Gym_Text_SignTwo, MSGBOX_SIGN
	end

CastleTownTreble_Gym_EventScript_BerryQuiz2Correct::
	goto_if_set FLAG_TREBLE_GYM_TREES_2, BerryTreeScript
	lock
    call CastleTownTreble_Gym_EventScript_CheckBerryFullyGrown
	message CastleTownTreble_Gym_Text_CorrectBerry
	waitmessage
	waitbuttonpress
	call CastleTownTreble_Gym_EventScript_BerryQuiz2Complete
	release
	end

CastleTownTreble_Gym_EventScript_BerryQuiz2Wrong::
    goto_if_set FLAG_TREBLE_GYM_TREES_2, BerryTreeScript
	lock
    call CastleTownTreble_Gym_EventScript_CheckBerryFullyGrown
	message CastleTownTreble_Gym_Text_IncorrectBerry
	waitmessage
	waitbuttonpress
	goto_if_not_defeated TRAINER_NADIA, CastleTownTreble_Gym_EventScript_BattleNadia
	goto_if_not_defeated TRAINER_NADIA_2, CastleTownTreble_Gym_EventScript_BattleNadia
	releaseall
	end

CastleTownTreble_Gym_EventScript_BerryQuiz2Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownTreble_Gym_EventScript_RemoveTrees2
	special DrawWholeMapView
	setflag FLAG_TREBLE_GYM_TREES_2
	return

CastleTownTreble_Gym_EventScript_BattleNadia::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_BattleNadiaBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_BattleNadiaBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_BattleNadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_BattleNadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_BattleNadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_BattleNadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_BattleNadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_BattleNadiaAdvanced
	return

CastleTownTreble_Gym_EventScript_BattleNadiaBeginner::
	call CastleTownTreble_Gym_EventScript_NadiaApproach
	msgbox CastleTownTreble_Gym_Text_NadiaIntro
	trainerbattle_no_intro TRAINER_NADIA, CastleTownTreble_Gym_Text_NadiaDefeat
	goto_if_set FLAG_TREBLE_GYM_TREES_2, CastleTownTreble_Gym_EventScript_DoorAlreadyOpen
	call CastleTownTreble_Gym_EventScript_BerryQuiz2Complete
	releaseall
	end

CastleTownTreble_Gym_EventScript_BattleNadiaAdvanced::
	call CastleTownTreble_Gym_EventScript_NadiaApproach
	msgbox CastleTownTreble_Gym_Text_NadiaIntro
	trainerbattle_no_intro TRAINER_NADIA_2, CastleTownTreble_Gym_Text_NadiaDefeat
	goto_if_set FLAG_TREBLE_GYM_TREES_2, CastleTownTreble_Gym_EventScript_DoorAlreadyOpen
	call CastleTownTreble_Gym_EventScript_BerryQuiz2Complete
	releaseall
	end

CastleTownTreble_Gym_EventScript_NadiaApproach::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_NADIA, CastleTownTreble_Gym_Movement_NadiaApproach
	waitmovement 0
	return

CastleTownTreble_Gym_Movement_NadiaApproach::
	walk_right
	walk_right
	walk_right
	step_end

CastleTownTreble_Gym_EventScript_DefeatedNadia::
	call_if_unset FLAG_TREBLE_GYM_TREES_2, CastleTownTreble_Gym_EventScript_BerryQuiz2CompleteTrainer
	release
	end

CastleTownTreble_Gym_EventScript_BerryQuiz2CompleteTrainer::
    call CastleTownTreble_Gym_EventScript_BerryQuiz2Complete
	return

CastleTownTreble_Gym_EventScript_Nadia::
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, CastleTownTreble_Gym_EventScript_NadiaPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_NadiaBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_NadiaBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_NadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_NadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_NadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_NadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_NadiaAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_NadiaAdvanced
	msgbox CastleTownTreble_Gym_Text_NadiaPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_NadiaBeginner::
	trainerbattle_single TRAINER_NADIA, CastleTownTreble_Gym_Text_NadiaIntro, CastleTownTreble_Gym_Text_NadiaDefeat, CastleTownTreble_Gym_EventScript_DefeatedNadia
	end

CastleTownTreble_Gym_EventScript_NadiaAdvanced::
	trainerbattle_single TRAINER_NADIA_2, CastleTownTreble_Gym_Text_NadiaIntro, CastleTownTreble_Gym_Text_NadiaDefeat, CastleTownTreble_Gym_EventScript_DefeatedNadia
	end

CastleTownTreble_Gym_EventScript_NadiaPostBattle::
	msgbox CastleTownTreble_Gym_Text_NadiaPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_GymSign3::
	msgbox CastleTownTreble_Gym_Text_SignThree, MSGBOX_SIGN
	end

CastleTownTreble_Gym_EventScript_BerryQuiz3Correct::
    goto_if_set FLAG_TREBLE_GYM_TREES_3, BerryTreeScript
	lock
    call CastleTownTreble_Gym_EventScript_CheckBerryFullyGrown
	message CastleTownTreble_Gym_Text_CorrectBerry
	waitmessage
	waitbuttonpress
	call CastleTownTreble_Gym_EventScript_BerryQuiz3Complete
	release
	end

CastleTownTreble_Gym_EventScript_BerryQuiz3Wrong::
    goto_if_set FLAG_TREBLE_GYM_TREES_3, BerryTreeScript
	lock
    call CastleTownTreble_Gym_EventScript_CheckBerryFullyGrown
	message CastleTownTreble_Gym_Text_IncorrectBerry
	waitmessage
	waitbuttonpress
	goto_if_not_defeated TRAINER_KIRK, CastleTownTreble_Gym_EventScript_BattleKirk
	goto_if_not_defeated TRAINER_KIRK_2, CastleTownTreble_Gym_EventScript_BattleKirk
	releaseall
	end

CastleTownTreble_Gym_EventScript_BerryQuiz3Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownTreble_Gym_EventScript_RemoveTrees3
	special DrawWholeMapView
	setflag FLAG_TREBLE_GYM_TREES_3
	return

CastleTownTreble_Gym_EventScript_BattleKirk::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_BattleKirkBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_BattleKirkBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_BattleKirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_BattleKirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_BattleKirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_BattleKirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_BattleKirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_BattleKirkAdvanced
	return

CastleTownTreble_Gym_EventScript_BattleKirkBeginner::
	call CastleTownTreble_Gym_EventScript_KirkApproach
	msgbox CastleTownTreble_Gym_Text_KirkIntro
	trainerbattle_no_intro TRAINER_KIRK, CastleTownTreble_Gym_Text_KirkDefeat
	goto_if_set FLAG_TREBLE_GYM_TREES_3, CastleTownTreble_Gym_EventScript_DoorAlreadyOpen
	call CastleTownTreble_Gym_EventScript_BerryQuiz3Complete
	releaseall
	end

CastleTownTreble_Gym_EventScript_BattleKirkAdvanced::
	call CastleTownTreble_Gym_EventScript_KirkApproach
	msgbox CastleTownTreble_Gym_Text_KirkIntro
	trainerbattle_no_intro TRAINER_KIRK_2, CastleTownTreble_Gym_Text_KirkDefeat
	goto_if_set FLAG_TREBLE_GYM_TREES_3, CastleTownTreble_Gym_EventScript_DoorAlreadyOpen
	call CastleTownTreble_Gym_EventScript_BerryQuiz3Complete
	releaseall
	end

CastleTownTreble_Gym_EventScript_KirkApproach::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_KIRK, CastleTownTreble_Gym_Movement_KirkApproach
	waitmovement 0
	return

CastleTownTreble_Gym_Movement_KirkApproach::
	walk_left
	walk_left
	walk_left
	step_end

CastleTownTreble_Gym_EventScript_DefeatedKirk::
	call_if_unset FLAG_TREBLE_GYM_TREES_3, CastleTownTreble_Gym_EventScript_BerryQuiz3CompleteTrainer
	release
	end

CastleTownTreble_Gym_EventScript_BerryQuiz3CompleteTrainer::
    call CastleTownTreble_Gym_EventScript_BerryQuiz3Complete
	return

CastleTownTreble_Gym_EventScript_Kirk::
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, CastleTownTreble_Gym_EventScript_KirkPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_KirkBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_KirkBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_KirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_KirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_KirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_KirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_KirkAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_KirkAdvanced
	msgbox CastleTownTreble_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_KirkBeginner::
	trainerbattle_single TRAINER_KIRK, CastleTownTreble_Gym_Text_KirkIntro, CastleTownTreble_Gym_Text_KirkDefeat, CastleTownTreble_Gym_EventScript_DefeatedKirk
	end

CastleTownTreble_Gym_EventScript_KirkAdvanced::
	trainerbattle_single TRAINER_KIRK_2, CastleTownTreble_Gym_Text_KirkIntro, CastleTownTreble_Gym_Text_KirkDefeat, CastleTownTreble_Gym_EventScript_DefeatedKirk
	end

CastleTownTreble_Gym_EventScript_KirkPostBattle::
	msgbox CastleTownTreble_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_GymSign4::
	msgbox CastleTownTreble_Gym_Text_SignFour, MSGBOX_SIGN
	end

CastleTownTreble_Gym_EventScript_BerryQuiz4Correct::
    goto_if_set FLAG_TREBLE_GYM_TREES_4, BerryTreeScript
	lock
    call CastleTownTreble_Gym_EventScript_CheckBerryFullyGrown
	message CastleTownTreble_Gym_Text_CorrectBerry
	waitmessage
	waitbuttonpress
	call CastleTownTreble_Gym_EventScript_BerryQuiz4Complete
	release
	end

CastleTownTreble_Gym_EventScript_BerryQuiz4Wrong::
    goto_if_set FLAG_TREBLE_GYM_TREES_4, BerryTreeScript
	lock
    call CastleTownTreble_Gym_EventScript_CheckBerryFullyGrown
	message CastleTownTreble_Gym_Text_IncorrectBerry
	waitmessage
	waitbuttonpress
	goto_if_not_defeated TRAINER_JEN, CastleTownTreble_Gym_EventScript_BattleJen
	releaseall
	end

CastleTownTreble_Gym_EventScript_BerryQuiz4Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownTreble_Gym_EventScript_RemoveTrees4
	special DrawWholeMapView
	setflag FLAG_TREBLE_GYM_TREES_4
	return

CastleTownTreble_Gym_EventScript_BattleJen::
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_BattleJenBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_BattleJenBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_BattleJenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_BattleJenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_BattleJenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_BattleJenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_BattleJenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_BattleJenAdvanced
	return

CastleTownTreble_Gym_EventScript_BattleJenBeginner::
	call CastleTownTreble_Gym_EventScript_JenApproach
	msgbox CastleTownTreble_Gym_Text_JenIntro
	trainerbattle_no_intro TRAINER_JEN, CastleTownTreble_Gym_Text_JenDefeat
	goto_if_set FLAG_TREBLE_GYM_TREES_4, CastleTownTreble_Gym_EventScript_DoorAlreadyOpen
	call CastleTownTreble_Gym_EventScript_BerryQuiz4Complete
	releaseall
	end

CastleTownTreble_Gym_EventScript_BattleJenAdvanced::
	call CastleTownTreble_Gym_EventScript_JenApproach
	msgbox CastleTownTreble_Gym_Text_JenIntro
	trainerbattle_no_intro TRAINER_JEN_2, CastleTownTreble_Gym_Text_JenDefeat
	goto_if_set FLAG_TREBLE_GYM_TREES_4, CastleTownTreble_Gym_EventScript_DoorAlreadyOpen
	call CastleTownTreble_Gym_EventScript_BerryQuiz4Complete
	releaseall
	end

CastleTownTreble_Gym_EventScript_JenApproach::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_JEN, CastleTownTreble_Gym_Movement_JenApproach
	waitmovement 0
	return

CastleTownTreble_Gym_Movement_JenApproach::
	walk_right
	walk_right
	walk_right
	step_end

CastleTownTreble_Gym_EventScript_DefeatedJen::
	call_if_unset FLAG_TREBLE_GYM_TREES_4, CastleTownTreble_Gym_EventScript_BerryQuiz4CompleteTrainer
	release
	end

CastleTownTreble_Gym_EventScript_BerryQuiz4CompleteTrainer::
    call CastleTownTreble_Gym_EventScript_BerryQuiz4Complete
	return

CastleTownTreble_Gym_EventScript_Jen::
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, CastleTownTreble_Gym_EventScript_JenPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_JenBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_JenBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_JenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_JenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_JenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_JenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_JenAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_JenAdvanced
	msgbox CastleTownTreble_Gym_Text_JenPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_JenBeginner::
	trainerbattle_single TRAINER_JEN, CastleTownTreble_Gym_Text_JenIntro, CastleTownTreble_Gym_Text_JenDefeat, CastleTownTreble_Gym_EventScript_DefeatedJen
	end

CastleTownTreble_Gym_EventScript_JenAdvanced::
	trainerbattle_single TRAINER_JEN_2, CastleTownTreble_Gym_Text_JenIntro, CastleTownTreble_Gym_Text_JenDefeat, CastleTownTreble_Gym_EventScript_DefeatedJen
	end

CastleTownTreble_Gym_EventScript_JenPostBattle::
	msgbox CastleTownTreble_Gym_Text_JenPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_Shawn::
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, CastleTownTreble_Gym_EventScript_ShawnPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_ShawnBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_ShawnBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_ShawnAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_ShawnAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_ShawnAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_ShawnAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_ShawnAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_ShawnAdvanced
	msgbox CastleTownTreble_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_ShawnBeginner::
	trainerbattle_single TRAINER_SHAWN, CastleTownTreble_Gym_Text_ShawnIntro, CastleTownTreble_Gym_Text_ShawnDefeat
	end

CastleTownTreble_Gym_EventScript_ShawnAdvanced::
	trainerbattle_single TRAINER_SHAWN_2, CastleTownTreble_Gym_Text_ShawnIntro, CastleTownTreble_Gym_Text_ShawnDefeat
	end

CastleTownTreble_Gym_EventScript_ShawnPostBattle::
	msgbox CastleTownTreble_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_Angel::
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, CastleTownTreble_Gym_EventScript_AngelPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_AngelBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_AngelBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_AngelAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_AngelAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_AngelAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_AngelAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_AngelAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_AngelAdvanced
	msgbox CastleTownTreble_Gym_Text_AngelPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_AngelBeginner::
	trainerbattle_single TRAINER_ANGEL, CastleTownTreble_Gym_Text_AngelIntro, CastleTownTreble_Gym_Text_AngelDefeat
	end

CastleTownTreble_Gym_EventScript_AngelAdvanced::
	trainerbattle_single TRAINER_ANGEL_2, CastleTownTreble_Gym_Text_AngelIntro, CastleTownTreble_Gym_Text_AngelDefeat
	end

CastleTownTreble_Gym_EventScript_AngelPostBattle::
	msgbox CastleTownTreble_Gym_Text_AngelPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_Bethany::
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, CastleTownTreble_Gym_EventScript_BethanyPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_BethanyBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_BethanyBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_BethanyAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_BethanyAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_BethanyAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_BethanyAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_BethanyAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_BethanyAdvanced
	msgbox CastleTownTreble_Gym_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_BethanyBeginner::
	trainerbattle_single TRAINER_BETHANY, CastleTownTreble_Gym_Text_BethanyIntro, CastleTownTreble_Gym_Text_BethanyDefeat
	end

CastleTownTreble_Gym_EventScript_BethanyAdvanced::
	trainerbattle_single TRAINER_BETHANY_2, CastleTownTreble_Gym_Text_BethanyIntro, CastleTownTreble_Gym_Text_BethanyDefeat
	end

CastleTownTreble_Gym_EventScript_BethanyPostBattle::
	msgbox CastleTownTreble_Gym_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownTreble_Gym_EventScript_Treble::
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, CastleTownTreble_Gym_EventScript_TrebleAfterBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownTreble_Gym_EventScript_Treble_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownTreble_Gym_EventScript_Treble_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownTreble_Gym_EventScript_Treble_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownTreble_Gym_EventScript_Treble_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownTreble_Gym_EventScript_Treble_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownTreble_Gym_EventScript_Treble_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownTreble_Gym_EventScript_Treble_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownTreble_Gym_EventScript_Treble_SevenBadge
	release
	end

CastleTownTreble_Gym_EventScript_Treble_ZeroBadge::
	trainerbattle_single TRAINER_TREBLE_1, CastleTownTreble_Gym_Text_Intro, CastleTownTreble_Gym_Text_PostBattle, CastleTownTreble_Gym_EventScript_TrebleDefeated, NO_MUSIC
	msgbox CastleTownTreble_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_Treble_OneBadge::
	trainerbattle_single TRAINER_TREBLE_2, CastleTownTreble_Gym_Text_Intro, CastleTownTreble_Gym_Text_PostBattle, CastleTownTreble_Gym_EventScript_TrebleDefeated, NO_MUSIC
	msgbox CastleTownTreble_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_Treble_TwoBadge::
	trainerbattle_single TRAINER_TREBLE_3, CastleTownTreble_Gym_Text_Intro, CastleTownTreble_Gym_Text_PostBattle, CastleTownTreble_Gym_EventScript_TrebleDefeated, NO_MUSIC
	msgbox CastleTownTreble_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_Treble_ThreeBadge::
	trainerbattle_single TRAINER_TREBLE_4, CastleTownTreble_Gym_Text_Intro, CastleTownTreble_Gym_Text_PostBattle, CastleTownTreble_Gym_EventScript_TrebleDefeated, NO_MUSIC
	msgbox CastleTownTreble_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_Treble_FourBadge::
	trainerbattle_single TRAINER_TREBLE_5, CastleTownTreble_Gym_Text_Intro, CastleTownTreble_Gym_Text_PostBattle, CastleTownTreble_Gym_EventScript_TrebleDefeated, NO_MUSIC
	msgbox CastleTownTreble_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_Treble_FiveBadge::
	trainerbattle_single TRAINER_TREBLE_6, CastleTownTreble_Gym_Text_Intro, CastleTownTreble_Gym_Text_PostBattle, CastleTownTreble_Gym_EventScript_TrebleDefeated, NO_MUSIC
	msgbox CastleTownTreble_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_Treble_SixBadge::
	trainerbattle_single TRAINER_TREBLE_7, CastleTownTreble_Gym_Text_Intro, CastleTownTreble_Gym_Text_PostBattle, CastleTownTreble_Gym_EventScript_TrebleDefeated, NO_MUSIC
	msgbox CastleTownTreble_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_Treble_SevenBadge::
	trainerbattle_single TRAINER_TREBLE_8, CastleTownTreble_Gym_Text_Intro, CastleTownTreble_Gym_Text_PostBattle, CastleTownTreble_Gym_EventScript_TrebleDefeated, NO_MUSIC
	msgbox CastleTownTreble_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_TrebleAfterBattle::
	msgbox CastleTownTreble_Gym_Text_TreblePostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownTreble_Gym_EventScript_TrebleDefeated::
	message CastleTownTreble_Gym_Text_ReceivedArborBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CastleTownTreble_Gym_Text_ArborBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
	call Common_EventScript_UpdateBadgesCollected
	setvar VAR_0x8008, 16
	call Common_EventScript_SetGymTrainers
	call CastleTownTreble_Gym_EventScript_GiveEnergyBall
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox CastleTownTreble_Gym_Text_RegisteredTreble, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	end

CastleTownTreble_Gym_EventScript_GiveEnergyBall::
	giveitem ITEM_TM_ENERGY_BALL
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox CastleTownTreble_Gym_Text_ExplainEnergyBall, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_ENERGY_BALL
	return

CastleTownTreble_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "CAMPANULA CITY MODERATOR TREBLE\n"
	.string "loves taking care of her GRASS-type\p"
	.string "POKéMON. She's also been tending various\n"
	.string "berry trees. To reach her, you'll have\p"
	.string "read the signs near the berry patches\n"
	.string "and pick the correct berry. If you\p"
	.string "If you select the wrong one, you'll\n"
	.string "have to fight a trainer.\p"
	.string "Hope you know your plants!$"

CastleTownTreble_Gym_Text_GymGuidePostVictory:
	.string "Look at you! You've got\n"
	.string "quite a green thumb!$"

CastleTownTreble_Gym_Text_GymStatue:
	.string "CAMPANULA CITY POKéMON GYM$"

CastleTownTreble_Gym_Text_GymStatueCertified:
	.string "CAMPANULA CITY POKéMON GYM\p"
	.string "TREBLE'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownTreble_Gym_Text_CorrectBerry:
	.string "That's the correct berry!$"

CastleTownTreble_Gym_Text_IncorrectBerry:
	.string "Ooh, wrong berry!$"

CastleTownTreble_Gym_Text_SignOne:
	.string "Pick the berry that removes\n"
	.string "poison from a Pokémon.$"

CastleTownTreble_Gym_Text_SignTwo:
	.string "Pick the berry that heals\n"
	.string "any status aliment.$"

CastleTownTreble_Gym_Text_SignThree:
	.string "Pick the berry that raises\n"
	.string "Attack in a pinch.$"

CastleTownTreble_Gym_Text_SignFour:
	.string "Pick the berry that will weaken\n"
	.string "a Super Effective Grass move.$"

CastleTownTreble_Gym_Text_KirkIntro:
	.string "I won't let you trample on\n"
	.string "our carefully grown Pokémon!$"

CastleTownTreble_Gym_Text_KirkDefeat:
	.string "Your Pokémon have grown\n"
	.string "quite strong!$"

CastleTownTreble_Gym_Text_KirkPostBattle:
	.string "Both plants and Pokémon\n"
	.string "need care and attention\p"
	.string "to grow properly.$"

CastleTownTreble_Gym_Text_ShawnIntro:
	.string "My Grass Pokémon will\n"
	.string "cut you down to size!$"

CastleTownTreble_Gym_Text_ShawnDefeat:
	.string "Looks like you've got thorns…$"

CastleTownTreble_Gym_Text_ShawnPostBattle:
	.string "Treble, our Gym Leader, has been\n"
	.string "tending to her Pokémon for ages.\p"
	.string "She stays up all night making\n"
	.string "sure they're taken care of.$"

CastleTownTreble_Gym_Text_JenIntro:
	.string "Enjoying the Berry quizzes?$"

CastleTownTreble_Gym_Text_JenDefeat:
	.string "With Pokémon like yours, the\n"
	.string "quizzes don't really matter…$"

CastleTownTreble_Gym_Text_JenPostBattle:
	.string "You can take the berries from both\n"
	.string "trees. Don't be shy!$"

CastleTownTreble_Gym_Text_VivianIntro:
	.string "There's always such a lovely\n"
	.string "scent in the air here.$"

CastleTownTreble_Gym_Text_VivianDefeat:
	.string "The foul scent of defeat…$"

CastleTownTreble_Gym_Text_VivianPostBattle:
	.string "Treble always takes such\n"
	.string "wonderful care of the flowers\p"
	.string "in this city.$"

CastleTownTreble_Gym_Text_AngelIntro:
	.string "Grass Pokémon aren't all\n"
	.string "delicate flowers!$"

CastleTownTreble_Gym_Text_AngelDefeat:
	.string "Oh…\n"
	.string "My hardy Grass Pokémon…$"

CastleTownTreble_Gym_Text_AngelPostBattle:
	.string "The diversity of Grass Pokémon\n"
	.string "always astounds me!$"

CastleTownTreble_Gym_Text_NadiaIntro:
	.string "Shame you don't know your berries.\n"
	.string "Now you face the consequences!$"

CastleTownTreble_Gym_Text_NadiaDefeat:
	.string "Oh!\n"
	.string "Done in!$"

CastleTownTreble_Gym_Text_NadiaPostBattle:
	.string "Now to plant new berries for the\n"
	.string "next challenger.$"
	
CastleTownTreble_Gym_Text_BethanyIntro:
	.string "Are the quizzes tripping you up?$"

CastleTownTreble_Gym_Text_BethanyDefeat:
	.string "Our battle certainly didn't\n"
	.string "trip you up!$"

CastleTownTreble_Gym_Text_BethanyPostBattle:
	.string "You might be strong but Treble\n"
	.string "is much stronger than me!$"

CastleTownTreble_Gym_Text_Intro:
	.string "Welcome challenger. I am always\n"
	.string "interested to see which path\p"
	.string "trainers take to me: Brute force or\n"
	.string "preserving strength through puzzles.\p"
	.string "My Pokémon are mighty like blades of \n"
	.string "grass piercing through soil. Do you\l"
	.string "think you have what it takes?$"

CastleTownTreble_Gym_Text_PostBattle:
	.string "You've impressed me with your\n"
	.string "growth so far. I'm rooting for\p"
	.string "you in your journey ahead. Take\n"
	.string "this gym badge, for you rose to\p"
	.string "the occasion and earned it.$"

CastleTownTreble_Gym_Text_ReceivedArborBadge:
	.string "{PLAYER} received the Arbor Badge\n"
	.string "from Treble.$"

CastleTownTreble_Gym_Text_ArborBadgeInfoTakeThis:
	.string "The Arbor Badge shows that you\n"
	.string "beaten me and my Grass Pokémon\p"
	.string "in battle. Return to the Guild\n"
	.string "Hall and claim your new rewards.\p"
	.string "I would also grant you this\n"
	.string "Technical Machine.$"

CastleTownTreble_Gym_Text_ExplainEnergyBall:
	.string "TM-53 contains Energy Ball.\n"
	.string "Use it and remind your enemies\l"
	.string "of the furiosity of nature!\p"
	.string "… … … … … …$"

CastleTownTreble_Gym_Text_RegisteredTreble:
	.string "Registered Moderator Treble\n"
	.string "in the POKéNAV.$"

CastleTownTreble_Gym_Text_TreblePostBattle:
	.string "So heckin' proud of you! I'm\n"
	.string "glad to know you and to be a\p"
	.string "part of this community you've\n"
	.string "built and the space you've\p"
	.string "cultivated.Thanks for being\n"
	.string "unabashedly you.$"
