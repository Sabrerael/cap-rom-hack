.set LOCALID_ANDREA, 2
.set LOCALID_MANFRED, 3
.set LOCALID_BRIANNA, 4
.set LOCALID_OLIVIA, 5
.set LOCALID_CONNIE, 6
.set LOCALID_DAPHNE, 7
.set LOCALID_BRIDGET, 8

CastleTownSabre_Gym_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, CastleTownSabre_Gym_OnTransition
	.byte 0

CastleTownSabre_Gym_OnTransition:
    call CastleTownSabre_Gym_EventScript_CheckDoors
	end

CastleTownSabre_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, CastleTownSabre_Gym_EventScript_GymGuidePostVictory
	msgbox CastleTownSabre_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_Gym_EventScript_GymGuidePostVictory::
	msgbox CastleTownSabre_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, CastleTownSabre_Gym_EventScript_GymStatueCertified
	goto CastleTownSabre_Gym_EventScript_GymStatue
	end

CastleTownSabre_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, CastleTownSabre_Gym_EventScript_GymStatueCertified
	goto CastleTownSabre_Gym_EventScript_GymStatue
	end

CastleTownSabre_Gym_EventScript_GymStatueCertified::
	msgbox CastleTownSabre_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

CastleTownSabre_Gym_EventScript_GymStatue::
	msgbox CastleTownSabre_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CastleTownSabre_Gym_EventScript_CheckDoors::
	call_if_set FLAG_SABRE_GYM_QUIZ_1, CastleTownSabre_Gym_OnLoadOpenDoor1
	call_if_set FLAG_SABRE_GYM_QUIZ_2, CastleTownSabre_Gym_OnLoadOpenDoor2
	call_if_set FLAG_SABRE_GYM_QUIZ_3, CastleTownSabre_Gym_OnLoadOpenDoor3
	call_if_set FLAG_SABRE_GYM_QUIZ_4, CastleTownSabre_Gym_OnLoadOpenDoor4
	call_if_set FLAG_SABRE_GYM_QUIZ_5, CastleTownSabre_Gym_OnLoadOpenDoor5
	call_if_set FLAG_SABRE_GYM_QUIZ_6, CastleTownSabre_Gym_OnLoadOpenDoor6
	call_if_set FLAG_SABRE_GYM_QUIZ_7, CastleTownSabre_Gym_OnLoadOpenDoor7
	special DrawWholeMapView
	end

CastleTownSabre_Gym_OnLoadOpenDoor1::
	call CastleTownSabre_Gym_EventScript_OpenDoor1
	return

CastleTownSabre_Gym_OnLoadOpenDoor2::
	call CastleTownSabre_Gym_EventScript_OpenDoor2
	return

CastleTownSabre_Gym_OnLoadOpenDoor3::
	call CastleTownSabre_Gym_EventScript_OpenDoor3
	return

CastleTownSabre_Gym_OnLoadOpenDoor4::
	call CastleTownSabre_Gym_EventScript_OpenDoor4
	return

CastleTownSabre_Gym_OnLoadOpenDoor5::
	call CastleTownSabre_Gym_EventScript_OpenDoor5
	return

CastleTownSabre_Gym_OnLoadOpenDoor6::
	call CastleTownSabre_Gym_EventScript_OpenDoor6
	return

CastleTownSabre_Gym_OnLoadOpenDoor7::
	call CastleTownSabre_Gym_EventScript_OpenDoor7
	return

CastleTownSabre_Gym_EventScript_OpenDoor1::
	setmetatile 26,  21, METATILE_CastleTownSabreGym_Floor_WallLeftEdge, 0
	setmetatile 27,  21, METATILE_CastleTownSabreGym_Floor_WallRightEdge, 0
	setmetatile 26,  22, METATILE_CastleTownSabreGym_Floor_WallLeftCorner, 0
	setmetatile 27,  22, METATILE_CastleTownSabreGym_Floor_WallRightCorner, 0
	return

CastleTownSabre_Gym_EventScript_OpenDoor2::
	setmetatile 19, 19, METATILE_CastleTownSabreGym_Wall_RetractedBarrier, 1
	setmetatile 19, 20, METATILE_CastleTownSabreGym_Wall_OppositeBarrier, 0
	return	

CastleTownSabre_Gym_EventScript_OpenDoor3::
	setmetatile 9, 19, METATILE_CastleTownSabreGym_Wall_RetractedBarrier, 1
	setmetatile 9, 20, METATILE_CastleTownSabreGym_Wall_OppositeBarrier, 0
	return

CastleTownSabre_Gym_EventScript_OpenDoor4:
	setmetatile 2,  14, METATILE_CastleTownSabreGym_Floor_WallLeftEdge, 0
	setmetatile 3,  14, METATILE_CastleTownSabreGym_Floor_WallRightEdge, 0
	setmetatile 2,  15, METATILE_CastleTownSabreGym_Floor_WallLeftCorner, 0
	setmetatile 3,  15, METATILE_CastleTownSabreGym_Floor_WallRightCorner, 0
	return

CastleTownSabre_Gym_EventScript_OpenDoor5::
	setmetatile 9, 19, METATILE_CastleTownSabreGym_Wall_RetractedBarrier, 1
	setmetatile 9, 20, METATILE_CastleTownSabreGym_Wall_OppositeBarrier, 0
	return

CastleTownSabre_Gym_EventScript_OpenDoor6::
	setmetatile 19, 12, METATILE_CastleTownSabreGym_Wall_RetractedBarrier, 1
	setmetatile 19, 13, METATILE_CastleTownSabreGym_Wall_OppositeBarrier, 0
	return

CastleTownSabre_Gym_EventScript_OpenDoor7::
	setmetatile 26,  7, METATILE_CastleTownSabreGym_Floor_WallLeftEdge, 0
	setmetatile 27,  7, METATILE_CastleTownSabreGym_Floor_WallRightEdge, 0
	setmetatile 26,  8, METATILE_CastleTownSabreGym_Floor_WallLeftCorner, 0
	setmetatile 27,  8, METATILE_CastleTownSabreGym_Floor_WallRightCorner, 0
	return

CastleTownSabre_Gym_EventScript_CorrectAnswer::
	playfanfare MUS_LEVEL_UP
	waitfanfare
	msgbox CastleTownSabre_Gym_Text_CorrectGoOnThrough
	return

CastleTownSabre_Gym_EventScript_IncorrectAnswer::
	waitse
	playse SE_BOO
	waitse
	msgbox CastleTownSabre_Gym_Text_SorryBadCall
	closemessage
	return

CastleTownSabre_Gym_EventScript_DoorAlreadyOpen::
	releaseall
	end

CastleTownSabre_Gym_EventScript_Quiz1Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CastleTownSabre_Gym_EventScript_Quiz1
	end

CastleTownSabre_Gym_EventScript_Quiz1Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CastleTownSabre_Gym_EventScript_Quiz1
	end

Quiz1_Text_273:
    .string "273$"

Quiz1_Text_269:
    .string "269$"

Quiz1_Text_279:
    .string "279$"

Quiz1_Text_283:
    .string "283$"

CastleTownSabre_Gym_EventScript_Quiz1::
	msgbox CastleTownSabre_Gym_Text_PokemonQuizRules
	msgbox CastleTownSabre_Gym_Text_QuizQuestion1, MSGBOX_DEFAULT
	dynmultichoice 0,0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Quiz1_Text_273, Quiz1_Text_269, Quiz1_Text_279, Quiz1_Text_283
	goto_if_eq VAR_RESULT, 2, CastleTownSabre_Gym_EventScript_Quiz1Correct
	goto_if_ne VAR_RESULT, 2, CastleTownSabre_Gym_EventScript_Quiz1Incorrect
	end

CastleTownSabre_Gym_EventScript_Quiz1Correct::
	call CastleTownSabre_Gym_EventScript_CorrectAnswer
	goto_if_set FLAG_SABRE_GYM_QUIZ_1, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz1Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_Quiz1Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownSabre_Gym_EventScript_OpenDoor1
	special DrawWholeMapView
	setflag FLAG_SABRE_GYM_QUIZ_1
	return

CastleTownSabre_Gym_EventScript_Quiz1Incorrect::
	call CastleTownSabre_Gym_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_BRIDGET, CastleTownSabre_Gym_EventScript_BattleBridget
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleBridget::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_BridgetApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_BridgetApproachRight
	msgbox CastleTownSabre_Gym_Text_BridgetIntro
	trainerbattle_no_intro TRAINER_BRIDGET, CastleTownSabre_Gym_Text_BridgetDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_1, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz1Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_BridgetApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_BRIDGET, CastleTownSabre_Gym_Movement_BridgetApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_BridgetApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_BRIDGET, CastleTownSabre_Gym_Movement_BridgetApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_BridgetApproachLeft::
	walk_left
	walk_left
	step_end

CastleTownSabre_Gym_Movement_BridgetApproachRight::
	walk_left
	step_end

CastleTownSabre_Gym_EventScript_Bridget::
	trainerbattle_single TRAINER_BRIDGET, CastleTownSabre_Gym_Text_BridgetIntro, CastleTownSabre_Gym_Text_BridgetDefeat, CastleTownSabre_Gym_EventScript_DefeatedBridget
	msgbox CastleTownSabre_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedBridget::
	call_if_unset FLAG_SABRE_GYM_QUIZ_1, CastleTownSabre_Gym_EventScript_Quiz1CompleteTrainer
	release
	end

CastleTownSabre_Gym_EventScript_Quiz1CompleteTrainer::
    call CastleTownSabre_Gym_EventScript_Quiz1Complete
	return

CastleTownSabre_Gym_EventScript_Quiz2Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CastleTownSabre_Gym_EventScript_Quiz2
	end

CastleTownSabre_Gym_EventScript_Quiz2Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CastleTownSabre_Gym_EventScript_Quiz2
	end

CastleTownSabre_Gym_EventScript_Quiz2::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CastleTownSabre_Gym_EventScript_Quiz2Correct
	goto_if_eq VAR_RESULT, NO, CastleTownSabre_Gym_EventScript_Quiz2Incorrect
	end

CastleTownSabre_Gym_EventScript_Quiz2Correct::
	call CastleTownSabre_Gym_EventScript_CorrectAnswer
	goto_if_set FLAG_SABRE_GYM_QUIZ_2, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz2Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_Quiz2Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownSabre_Gym_EventScript_OpenDoor2
	special DrawWholeMapView
	setflag FLAG_SABRE_GYM_QUIZ_2
	return

CastleTownSabre_Gym_EventScript_Quiz2Incorrect::
	call CastleTownSabre_Gym_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_DAPHNE, CastleTownSabre_Gym_EventScript_BattleDaphne
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleDaphne::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_DaphneApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_DaphneApproachRight
	msgbox CastleTownSabre_Gym_Text_DaphneIntro
	trainerbattle_no_intro TRAINER_DAPHNE, CastleTownSabre_Gym_Text_DaphneDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_2, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz2Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_DaphneApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_DAPHNE, CastleTownSabre_Gym_Movement_DaphneApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_DaphneApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_DAPHNE, CastleTownSabre_Gym_Movement_DaphneApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_DaphneApproachLeft::
	walk_right
	step_end

CastleTownSabre_Gym_Movement_DaphneApproachRight::
	walk_right
	walk_right
	step_end

CastleTownSabre_Gym_EventScript_Daphne::
	trainerbattle_single TRAINER_DAPHNE, CastleTownSabre_Gym_Text_DaphneIntro, CastleTownSabre_Gym_Text_DaphneDefeat, CastleTownSabre_Gym_EventScript_DefeatedDaphne
	msgbox CastleTownSabre_Gym_Text_DaphnePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedDaphne::
	call_if_unset FLAG_SABRE_GYM_QUIZ_2, CastleTownSabre_Gym_EventScript_Quiz2CompleteTrainer
	release
	end

CastleTownSabre_Gym_EventScript_Quiz2CompleteTrainer::
    call CastleTownSabre_Gym_EventScript_Quiz2Complete
	return

CastleTownSabre_Gym_EventScript_Quiz3Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CastleTownSabre_Gym_EventScript_Quiz3
	end

CastleTownSabre_Gym_EventScript_Quiz3Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CastleTownSabre_Gym_EventScript_Quiz3
	end

CastleTownSabre_Gym_EventScript_Quiz3::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CastleTownSabre_Gym_EventScript_Quiz3Correct
	goto_if_eq VAR_RESULT, NO, CastleTownSabre_Gym_EventScript_Quiz3Incorrect
	end

CastleTownSabre_Gym_EventScript_Quiz3Correct::
	call CastleTownSabre_Gym_EventScript_CorrectAnswer
	goto_if_set FLAG_SABRE_GYM_QUIZ_3, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz3Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_Quiz3Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownSabre_Gym_EventScript_OpenDoor3
	special DrawWholeMapView
	setflag FLAG_SABRE_GYM_QUIZ_3
	return

CastleTownSabre_Gym_EventScript_Quiz3Incorrect::
	call CastleTownSabre_Gym_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_MANFRED, CastleTownSabre_Gym_EventScript_BattleManfred
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleManfred::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_ManfredApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_ManfredApproachRight
	msgbox CastleTownSabre_Gym_Text_ManfredIntro
	trainerbattle_no_intro TRAINER_MANFRED, CastleTownSabre_Gym_Text_ManfredDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_3, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz3Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_ManfredApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_MANFRED, CastleTownSabre_Gym_Movement_ManfredApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_ManfredApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_MANFRED, CastleTownSabre_Gym_Movement_ManfredApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_ManfredApproachLeft::
	walk_right
	step_end

CastleTownSabre_Gym_Movement_ManfredApproachRight::
	walk_right
	walk_right
	step_end

CastleTownSabre_Gym_EventScript_Manfred::
	trainerbattle_single TRAINER_MANFRED, CastleTownSabre_Gym_Text_ManfredIntro, CastleTownSabre_Gym_Text_ManfredDefeat, CastleTownSabre_Gym_EventScript_DefeatedManfred
	msgbox CastleTownSabre_Gym_Text_ManfredPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedManfred::
	call_if_unset FLAG_SABRE_GYM_QUIZ_3, CastleTownSabre_Gym_EventScript_Quiz3CompleteTrainer
	release
	end

CastleTownSabre_Gym_EventScript_Quiz3CompleteTrainer::
    call CastleTownSabre_Gym_EventScript_Quiz3Complete
	return

CastleTownSabre_Gym_EventScript_Quiz4Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CastleTownSabre_Gym_EventScript_Quiz4
	end

CastleTownSabre_Gym_EventScript_Quiz4Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CastleTownSabre_Gym_EventScript_Quiz4
	end

CastleTownSabre_Gym_EventScript_Quiz4::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion4, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CastleTownSabre_Gym_EventScript_Quiz4Correct
	goto_if_eq VAR_RESULT, NO, CastleTownSabre_Gym_EventScript_Quiz4Incorrect
	end

CastleTownSabre_Gym_EventScript_Quiz4Correct::
	call CastleTownSabre_Gym_EventScript_CorrectAnswer
	goto_if_set FLAG_SABRE_GYM_QUIZ_4, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz4Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_Quiz4Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownSabre_Gym_EventScript_OpenDoor4
	special DrawWholeMapView
	setflag FLAG_SABRE_GYM_QUIZ_4
	return

CastleTownSabre_Gym_EventScript_Quiz4Incorrect::
	call CastleTownSabre_Gym_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_OLIVIA, CastleTownSabre_Gym_EventScript_BattleOlivia
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleOlivia::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_OliviaApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_OliviaApproachRight
	msgbox CastleTownSabre_Gym_Text_OliviaIntro
	trainerbattle_no_intro TRAINER_OLIVIA, CastleTownSabre_Gym_Text_OliviaDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_4, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz4Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_OliviaApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_OLIVIA, CastleTownSabre_Gym_Movement_OliviaApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_OliviaApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_OLIVIA, CastleTownSabre_Gym_Movement_OliviaApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_OliviaApproachLeft::
	walk_right
	step_end

CastleTownSabre_Gym_Movement_OliviaApproachRight::
	walk_right
	walk_right
	step_end

CastleTownSabre_Gym_EventScript_Olivia::
	trainerbattle_single TRAINER_OLIVIA, CastleTownSabre_Gym_Text_OliviaIntro, CastleTownSabre_Gym_Text_OliviaDefeat, CastleTownSabre_Gym_EventScript_DefeatedOlivia
	msgbox CastleTownSabre_Gym_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedOlivia::
	call_if_unset FLAG_SABRE_GYM_QUIZ_4, CastleTownSabre_Gym_EventScript_Quiz4CompleteTrainer
	release
	end

CastleTownSabre_Gym_EventScript_Quiz4CompleteTrainer::
    call CastleTownSabre_Gym_EventScript_Quiz4Complete
	return

CastleTownSabre_Gym_EventScript_Quiz5Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CastleTownSabre_Gym_EventScript_Quiz5
	end

CastleTownSabre_Gym_EventScript_Quiz5Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CastleTownSabre_Gym_EventScript_Quiz5
	end

CastleTownSabre_Gym_EventScript_Quiz5::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CastleTownSabre_Gym_EventScript_Quiz5Correct
	goto_if_eq VAR_RESULT, NO, CastleTownSabre_Gym_EventScript_Quiz5Incorrect
	end

CastleTownSabre_Gym_EventScript_Quiz5Correct::
	call CastleTownSabre_Gym_EventScript_CorrectAnswer
	goto_if_set FLAG_SABRE_GYM_QUIZ_5, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz5Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_Quiz5Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownSabre_Gym_EventScript_OpenDoor5
	special DrawWholeMapView
	setflag FLAG_SABRE_GYM_QUIZ_5
	return

CastleTownSabre_Gym_EventScript_Quiz5Incorrect::
	call CastleTownSabre_Gym_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_BRIANNA, CastleTownSabre_Gym_EventScript_BattleBrianna
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleBrianna::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_BriannaApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_BriannaApproachRight
	msgbox CastleTownSabre_Gym_Text_BriannaIntro
	trainerbattle_no_intro TRAINER_BRIANNA, CastleTownSabre_Gym_Text_BriannaDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_5, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz5Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_BriannaApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_BRIANNA, CastleTownSabre_Gym_Movement_BriannaApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_BriannaApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_BRIANNA, CastleTownSabre_Gym_Movement_BriannaApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_BriannaApproachLeft::
	walk_left
	walk_left
	step_end

CastleTownSabre_Gym_Movement_BriannaApproachRight::
	walk_left
	step_end

CastleTownSabre_Gym_EventScript_Brianna::
	trainerbattle_single TRAINER_BRIANNA, CastleTownSabre_Gym_Text_BriannaIntro, CastleTownSabre_Gym_Text_BriannaDefeat, CastleTownSabre_Gym_EventScript_DefeatedBrianna
	msgbox CastleTownSabre_Gym_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedBrianna::
	call_if_unset FLAG_SABRE_GYM_QUIZ_5, CastleTownSabre_Gym_EventScript_Quiz5CompleteTrainer
	release
	end

CastleTownSabre_Gym_EventScript_Quiz5CompleteTrainer::
    call CastleTownSabre_Gym_EventScript_Quiz5Complete
	return

CastleTownSabre_Gym_EventScript_Quiz6Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CastleTownSabre_Gym_EventScript_Quiz6
	end

CastleTownSabre_Gym_EventScript_Quiz6Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CastleTownSabre_Gym_EventScript_Quiz6
	end

CastleTownSabre_Gym_EventScript_Quiz6::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion6, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CastleTownSabre_Gym_EventScript_Quiz6Correct
	goto_if_eq VAR_RESULT, NO, CastleTownSabre_Gym_EventScript_Quiz6Incorrect
	end

CastleTownSabre_Gym_EventScript_Quiz6Correct::
	call CastleTownSabre_Gym_EventScript_CorrectAnswer
	goto_if_set FLAG_SABRE_GYM_QUIZ_6, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz6Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_Quiz6Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownSabre_Gym_EventScript_OpenDoor6
	special DrawWholeMapView
	setflag FLAG_SABRE_GYM_QUIZ_6
	return

CastleTownSabre_Gym_EventScript_Quiz6Incorrect::
	call CastleTownSabre_Gym_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_ANDREA, CastleTownSabre_Gym_EventScript_BattleAndrea
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleAndrea::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_AndreaApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_AndreaApproachRight
	msgbox CastleTownSabre_Gym_Text_AndreaIntro
	trainerbattle_no_intro TRAINER_ANDREA, CastleTownSabre_Gym_Text_AndreaDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_6, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz6Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_AndreaApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_ANDREA, CastleTownSabre_Gym_Movement_AndreaApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_AndreaApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_ANDREA, CastleTownSabre_Gym_Movement_AndreaApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_AndreaApproachLeft::
	walk_left
	walk_left
	step_end

CastleTownSabre_Gym_Movement_AndreaApproachRight::
	walk_left
	step_end

CastleTownSabre_Gym_EventScript_Andrea::
	trainerbattle_single TRAINER_ANDREA, CastleTownSabre_Gym_Text_AndreaIntro, CastleTownSabre_Gym_Text_AndreaDefeat, CastleTownSabre_Gym_EventScript_DefeatedAndrea
	msgbox CastleTownSabre_Gym_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedAndrea::
	call_if_unset FLAG_SABRE_GYM_QUIZ_6, CastleTownSabre_Gym_EventScript_Quiz6CompleteTrainer
	release
	end

CastleTownSabre_Gym_EventScript_Quiz6CompleteTrainer::
    call CastleTownSabre_Gym_EventScript_Quiz6Complete
	return

CastleTownSabre_Gym_EventScript_Quiz7Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto CastleTownSabre_Gym_EventScript_Quiz7
	end

CastleTownSabre_Gym_EventScript_Quiz7Right::
	lockall
	setvar VAR_TEMP_1, 1
	goto CastleTownSabre_Gym_EventScript_Quiz7
	end

CastleTownSabre_Gym_EventScript_Quiz7::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion7, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CastleTownSabre_Gym_EventScript_Quiz7Correct
	goto_if_eq VAR_RESULT, NO, CastleTownSabre_Gym_EventScript_Quiz7Incorrect
	end

CastleTownSabre_Gym_EventScript_Quiz7Correct::
	call CastleTownSabre_Gym_EventScript_CorrectAnswer
	goto_if_set FLAG_SABRE_GYM_QUIZ_7, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz7Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_Quiz7Complete::
	playse SE_UNLOCK
	waitse
	call CastleTownSabre_Gym_EventScript_OpenDoor7
	special DrawWholeMapView
	setflag FLAG_SABRE_GYM_QUIZ_7
	return

CastleTownSabre_Gym_EventScript_Quiz7Incorrect::
	call CastleTownSabre_Gym_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_CONNIE, CastleTownSabre_Gym_EventScript_BattleConnie
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleConnie::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_ConnieApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_ConnieApproachRight
	msgbox CastleTownSabre_Gym_Text_ConnieIntro
	trainerbattle_no_intro TRAINER_CONNIE, CastleTownSabre_Gym_Text_ConnieDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_7, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz7Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_ConnieApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_CONNIE, CastleTownSabre_Gym_Movement_ConnieApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_ConnieApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_CONNIE, CastleTownSabre_Gym_Movement_ConnieApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_ConnieApproachLeft::
	walk_left
	walk_left
	step_end

CastleTownSabre_Gym_Movement_ConnieApproachRight::
	walk_left
	step_end

CastleTownSabre_Gym_EventScript_Connie::
	trainerbattle_single TRAINER_CONNIE, CastleTownSabre_Gym_Text_ConnieIntro, CastleTownSabre_Gym_Text_ConnieDefeat, CastleTownSabre_Gym_EventScript_DefeatedConnie
	msgbox CastleTownSabre_Gym_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedConnie::
	call_if_unset FLAG_SABRE_GYM_QUIZ_7, CastleTownSabre_Gym_EventScript_Quiz7CompleteTrainer
	release
	end

CastleTownSabre_Gym_EventScript_Quiz7CompleteTrainer::
    call CastleTownSabre_Gym_EventScript_Quiz7Complete
	return

CastleTownSabre_Gym_EventScript_Juan::
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, CastleTownSabre_Gym_Text_SabrePostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSabre_GymEventScript_Juan_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSabre_GymEventScript_Juan_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSabre_GymEventScript_Juan_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSabre_GymEventScript_Juan_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSabre_GymEventScript_Juan_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSabre_GymEventScript_Juan_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSabre_GymEventScript_Juan_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSabre_GymEventScript_Juan_SevenBadge
	release
	end

CastleTownSabre_GymEventScript_Juan_ZeroBadge::
	trainerbattle_single TRAINER_SABRE_1, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_OneBadge::
	trainerbattle_single TRAINER_SABRE_2, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_TwoBadge::
	trainerbattle_single TRAINER_SABRE_3, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_ThreeBadge::
	trainerbattle_single TRAINER_SABRE_4, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_FourBadge::
	trainerbattle_single TRAINER_SABRE_5, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_FiveBadge::
	trainerbattle_single TRAINER_SABRE_6, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_SixBadge::
	trainerbattle_single TRAINER_SABRE_7, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_Juan_SevenBadge::
	trainerbattle_single TRAINER_SABRE_8, CastleTownSabre_Gym_Text_Intro, CastleTownSabre_Gym_Text_PostBattle, CastleTownSabre_GymEventScript_JuanDefeated, NO_MUSIC
	msgbox CastleTownSabre_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSabre_GymEventScript_JuanDefeated::
	message CastleTownSabre_Gym_Text_ReceivedWyrmBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CastleTownSabre_Gym_Text_WyrmBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	call Common_EventScript_UpdateBadgesCollected
	setvar VAR_0x8008, 12
	call Common_EventScript_SetGymTrainers
	call CastleTownSabre_Gym_EventScript_GiveDragonClaw
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox CastleTownSabre_Gym_Text_RegisteredSabre, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	end

CastleTownSabre_Gym_EventScript_GiveDragonClaw::
	giveitem ITEM_TM_DRAGON_CLAW
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox CastleTownSabre_Gym_Text_ExplainDragonClaw, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_DRAGON_CLAW
	return

CastleTownSabre_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "Sabre is a master of DRAGON-type\n"
	.string "POKéMON. FAIRY, ICE, or other DRAGON\p"
	.string "POKéMON will be your best bet to fight them.\n"
	.string "In order to test you, he's prepared\p"
	.string "a series of questions about the\n"
	.string "Guild Community. Answer correct and\p"
	.string "pass through. Answer incorrectly and\n"
	.string "you'll have to fight the trainer in\p"
	.string "that room. Best of luck!$"

CastleTownSabre_Gym_Text_GymGuidePostVictory:
	.string "You did it! You're\n"
	.string "like a knight in shining armor!$"

CastleTownSabre_Gym_Text_GymStatue:
	.string "SCALEPEAK CITY POKéMON GYM$"

CastleTownSabre_Gym_Text_GymStatueCertified:
	.string "SCALEPEAK CITY POKéMON GYM\p"
	.string "SABRE'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownSabre_Gym_Text_PokemonQuizRules::
    .string "POKéMON Quiz!\p"
    .string "Get it right, and the door opens to\n"
    .string "the next room.\p"
    .string "Get it wrong, and face a TRAINER!\p"
    .string "If you want to conserve your\n"
    .string "POKéMON for the GYM LEADER…\p"
    .string "Then get it right!\n"
    .string "Here we go!$"

CastleTownSabre_Gym_Text_QuizQuestion1::
    .string "How many members does the Discord\n"
	.string "have?$"

CastleTownSabre_Gym_Text_QuizQuestion2::
    .string "There are nine certified POKéMON\n"
    .string "LEAGUE BADGES?$"

CastleTownSabre_Gym_Text_QuizQuestion3::
    .string "POLIWAG evolves three times?$"

CastleTownSabre_Gym_Text_QuizQuestion4::
    .string "Are electric moves effective\n"
    .string "against GROUND-type POKéMON?$"

CastleTownSabre_Gym_Text_QuizQuestion5::
    .string "POKéMON of the same kind and level\n"
    .string "are not identical?$"

CastleTownSabre_Gym_Text_QuizQuestion6::
    .string "TM28 contains TOMBSTONY?$"

CastleTownSabre_Gym_Text_QuizQuestion7::
    .string "TM28 contains TOMBSTONY?$"

CastleTownSabre_Gym_Text_CorrectGoOnThrough::
    .string "You're absolutely correct!\p"
    .string "Go on through!$"

CastleTownSabre_Gym_Text_SorryBadCall::
    .string "Sorry!\n"
    .string "Bad call!$"

CastleTownSabre_Gym_Text_AndreaIntro:
	.string "Dragons are so cool!\n"
	.string "Let me show you mine!$"

CastleTownSabre_Gym_Text_AndreaDefeat:
	.string "Aww, I lost…$"

CastleTownSabre_Gym_Text_AndreaPostBattle:
	.string "You're a big meanie,\n"
	.string "Uncle Ryan!$"

CastleTownSabre_Gym_Text_DaphneIntro:
	.string "The sight of dragons in\n"
	.string "combat…\p"
	.string "The very beauty of it compelled me to\n"
	.string "become a TRAINER.$"

CastleTownSabre_Gym_Text_DaphneDefeat:
	.string "You battled with more beauty than\n"
	.string "I could muster…$"

CastleTownSabre_Gym_Text_DaphnePostBattle:
	.string "The grace you bring to battle is\n"
	.string "fabulous.\p"
	.string "Oh… I'm so fortunate to have found\n"
	.string "POKéMON.$"

CastleTownSabre_Gym_Text_ConnieIntro:
	.string "Sorry Ryan, but you'll go\n"
	.string "no further.$"

CastleTownSabre_Gym_Text_ConnieDefeat:
	.string "Oh.\n"
	.string "You're strong.$"

CastleTownSabre_Gym_Text_ConniePostBattle:
	.string "Well, I did my best.\p"
	.string "You won't be able to beat\n"
	.string "my husband though.$"

CastleTownSabre_Gym_Text_BridgetIntro:
	.string "Dragons are the strongest of\n"
	.string "the POKéMON…\p"
	.string "Let me show you the proof!$"

CastleTownSabre_Gym_Text_BridgetDefeat:
	.string "What a high level you are!$"

CastleTownSabre_Gym_Text_BridgetPostBattle:
	.string "Rather than being satisfied by being\n"
	.string "in a strong GYM, I imagine training in\l"
	.string "other places will make you stronger.\l"
	.string "But above all, it looks more fun.$"

CastleTownSabre_Gym_Text_OliviaIntro:
	.string "My POKéMON are in peak\n"
	.string "physical condition.\p"
	.string "Don't think I'm a pushover.$"

CastleTownSabre_Gym_Text_OliviaDefeat:
	.string "I was beaten…$"

CastleTownSabre_Gym_Text_OliviaPostBattle:
	.string "I think you have potential.\n"
	.string "Why don't you stay and train with us?$"

CastleTownSabre_Gym_Text_ManfredIntro:
	.string "My DRAGON POKéMON have been with\n"
	.string "me my whole life.$"

CastleTownSabre_Gym_Text_ManfredDefeat:
	.string "Oh dear, there now! Did you enjoy\n"
	.string "battling my dear friends?$"

CastleTownSabre_Gym_Text_ManfredPostBattle:
	.string "I came to this GYM because of\n"
	.string "all the other DRAGON POKéMON.\p"
	.string "Oh, such marvelous creatures…$"

CastleTownSabre_Gym_Text_BriannaIntro:
	.string "Giggle…\n"
	.string "I'll win for sure!$"

CastleTownSabre_Gym_Text_BriannaDefeat:
	.string "sniffle…\n"
	.string "That's not nice…$"

CastleTownSabre_Gym_Text_BriannaPostBattle:
	.string "My daddy will beat you!$"

CastleTownSabre_Gym_Text_Intro:
	.string "Good to see you again! You finally\n"
	.string "made it here. I'm sure The quiz questions\p"
	.string "didn't give you too much trouble.\n"
	.string "It is YOUR community after all.\p"
	.string "I hope you're ready for a fierce\n"
	.string "battle with my dragons!$"

CastleTownSabre_Gym_Text_PostBattle:
	.string "Woo! What a battle!\p"
	.string "Looks like all those knighthood\n"
	.string "ceremonies have made you a proper\l"
	.string "dragon slayer!$"

CastleTownSabre_Gym_Text_ReceivedWyrmBadge:
	.string "{PLAYER} received the WYRM BADGE\n"
	.string "from Sabre.$"

CastleTownSabre_Gym_Text_WyrmBadgeInfoTakeThis:
	.string "The WYRM BADGE signifies that\n"
	.string "a trainer has bested me, Sabre,\l"
	.string "in battle. For claiming a new badge\p"
	.string "you are entitled to new\n"
	.string "benefits in the Guild Hall.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

CastleTownSabre_Gym_Text_ExplainDragonClaw:
	.string "TM-02 contains Dragon Claw.\p"
	.string "It's a powerful DRAGON-type move\n"
	.string "that lots of Pokémon can learn.\p"
	.string "… … … … … …$"

CastleTownSabre_Gym_Text_RegisteredSabre:
	.string "Registered Moderator Sabre\n"
	.string "in the POKéNAV.$"

CastleTownSabre_Gym_Text_SabrePostBattle:
	.string "We both have come so far since we met\n"
	.string "all those years ago. I look forward\l"
	.string "to seeing how far you go!$"
