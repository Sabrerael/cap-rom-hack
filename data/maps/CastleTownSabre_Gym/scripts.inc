.set LOCALID_ELLIOTT, 2
.set LOCALID_MANFRED, 3
.set LOCALID_CHARLOTTE, 4
.set LOCALID_STEVE, 5
.set LOCALID_JEANETTE, 6
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

Quiz2_Text_108:
    .string "108$"

Quiz2_Text_105:
    .string "105$"

Quiz2_Text_111:
    .string "111$"

Quiz2_Text_113:
    .string "113$"

CastleTownSabre_Gym_EventScript_Quiz2::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion2, MSGBOX_DEFAULT
	dynmultichoice 0,0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Quiz2_Text_108, Quiz2_Text_105, Quiz2_Text_111, Quiz2_Text_113
	goto_if_eq VAR_RESULT, 1, CastleTownSabre_Gym_EventScript_Quiz2Correct
	goto_if_ne VAR_RESULT, 1, CastleTownSabre_Gym_EventScript_Quiz2Incorrect
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

Quiz3_Text_70:
    .string "70$"

Quiz3_Text_71:
    .string "71$"

Quiz3_Text_72:
    .string "72$"

Quiz3_Text_73:
    .string "73$"

CastleTownSabre_Gym_EventScript_Quiz3::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion3, MSGBOX_DEFAULT
	dynmultichoice 0,0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Quiz3_Text_70, Quiz3_Text_71, Quiz3_Text_72, Quiz3_Text_73
	goto_if_eq VAR_RESULT, 3, CastleTownSabre_Gym_EventScript_Quiz3Correct
	goto_if_ne VAR_RESULT, 3, CastleTownSabre_Gym_EventScript_Quiz3Incorrect
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

Quiz4_Text_LethalCompany:
    .string "Lethal Company$"

Quiz4_Text_RedDead2:
    .string "Red Dead Redemption 2$"

Quiz4_Text_FallGuys:
    .string "Fall Guys$"

Quiz4_Text_JustChatting:
    .string "Just Chatting$"

CastleTownSabre_Gym_EventScript_Quiz4::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion4, MSGBOX_DEFAULT
	dynmultichoice 0,0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Quiz4_Text_LethalCompany, Quiz4_Text_RedDead2, Quiz4_Text_FallGuys, Quiz4_Text_JustChatting
	goto_if_eq VAR_RESULT, 1, CastleTownSabre_Gym_EventScript_Quiz4Correct
	goto_if_ne VAR_RESULT, 1, CastleTownSabre_Gym_EventScript_Quiz4Incorrect
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
	goto_if_not_defeated TRAINER_STEVE, CastleTownSabre_Gym_EventScript_BattleSteve
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleSteve::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_SteveApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_SteveApproachRight
	msgbox CastleTownSabre_Gym_Text_SteveIntro
	trainerbattle_no_intro TRAINER_STEVE, CastleTownSabre_Gym_Text_SteveDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_4, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz4Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_SteveApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_STEVE, CastleTownSabre_Gym_Movement_SteveApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_SteveApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_STEVE, CastleTownSabre_Gym_Movement_SteveApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_SteveApproachLeft::
	walk_right
	step_end

CastleTownSabre_Gym_Movement_SteveApproachRight::
	walk_right
	walk_right
	step_end

CastleTownSabre_Gym_EventScript_Steve::
	trainerbattle_single TRAINER_STEVE, CastleTownSabre_Gym_Text_SteveIntro, CastleTownSabre_Gym_Text_SteveDefeat, CastleTownSabre_Gym_EventScript_DefeatedSteve
	msgbox CastleTownSabre_Gym_Text_StevePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedSteve::
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

Quiz5_Text_Wiskey:
    .string "wiskeybuziness$"

Quiz5_Text_Sabre:
    .string "Sabre$"

Quiz5_Text_Hermes:
    .string "Hermes$"

Quiz5_Text_ZackAttack:
    .string "ZackAttack$"

CastleTownSabre_Gym_EventScript_Quiz5::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion5, MSGBOX_DEFAULT
	dynmultichoice 0,0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Quiz5_Text_Wiskey, Quiz5_Text_Sabre, Quiz5_Text_Hermes, Quiz5_Text_ZackAttack
	goto_if_eq VAR_RESULT, 2, CastleTownSabre_Gym_EventScript_Quiz5Correct
	goto_if_ne VAR_RESULT, 2, CastleTownSabre_Gym_EventScript_Quiz5Incorrect
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
	goto_if_not_defeated TRAINER_CHARLOTTE, CastleTownSabre_Gym_EventScript_BattleCharlotte
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleCharlotte::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_CharlotteApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_CharlotteApproachRight
	msgbox CastleTownSabre_Gym_Text_CharlotteIntro
	trainerbattle_no_intro TRAINER_CHARLOTTE, CastleTownSabre_Gym_Text_CharlotteDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_5, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz5Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_CharlotteApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_CHARLOTTE, CastleTownSabre_Gym_Movement_CharlotteApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_CharlotteApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_CHARLOTTE, CastleTownSabre_Gym_Movement_CharlotteApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_CharlotteApproachLeft::
	walk_left
	walk_left
	step_end

CastleTownSabre_Gym_Movement_CharlotteApproachRight::
	walk_left
	step_end

CastleTownSabre_Gym_EventScript_Charlotte::
	trainerbattle_single TRAINER_CHARLOTTE, CastleTownSabre_Gym_Text_CharlotteIntro, CastleTownSabre_Gym_Text_CharlotteDefeat, CastleTownSabre_Gym_EventScript_DefeatedCharlotte
	msgbox CastleTownSabre_Gym_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedCharlotte::
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

Quiz6_Text_152:
    .string "152$"

Quiz6_Text_163:
    .string "163$"

Quiz6_Text_148:
    .string "148$"

Quiz6_Text_159:
    .string "159$"

CastleTownSabre_Gym_EventScript_Quiz6::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion6, MSGBOX_DEFAULT
	dynmultichoice 0,0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Quiz6_Text_152, Quiz6_Text_163, Quiz6_Text_148, Quiz6_Text_159
	goto_if_eq VAR_RESULT, 4, CastleTownSabre_Gym_EventScript_Quiz6Correct
	goto_if_ne VAR_RESULT, 4, CastleTownSabre_Gym_EventScript_Quiz6Incorrect
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
	goto_if_not_defeated TRAINER_ELLIOTT, CastleTownSabre_Gym_EventScript_BattleElliott
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleElliott::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_ElliottApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_ElliottApproachRight
	msgbox CastleTownSabre_Gym_Text_ElliottIntro
	trainerbattle_no_intro TRAINER_ELLIOTT, CastleTownSabre_Gym_Text_ElliottDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_6, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz6Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_ElliottApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_ELLIOTT, CastleTownSabre_Gym_Movement_ElliottApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_ElliottApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_ELLIOTT, CastleTownSabre_Gym_Movement_ElliottApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_ElliottApproachLeft::
	walk_left
	walk_left
	step_end

CastleTownSabre_Gym_Movement_ElliottApproachRight::
	walk_left
	step_end

CastleTownSabre_Gym_EventScript_Elliott::
	trainerbattle_single TRAINER_ELLIOTT, CastleTownSabre_Gym_Text_ElliottIntro, CastleTownSabre_Gym_Text_ElliottDefeat, CastleTownSabre_Gym_EventScript_DefeatedElliott
	msgbox CastleTownSabre_Gym_Text_ElliottPostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedElliott::
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

Quiz7_Text_Andy:
    .string "Andy$"

Quiz7_Text_BlindJIm:
    .string "BlindJim$"

Quiz7_Text_Hermes:
    .string "Hermes$"

Quiz7_Text_Sabre:
    .string "Sabre$"

Quiz7_Text_Salsa:
    .string "Salsa$"

Quiz7_Text_TMoney:
    .string "TMoney$"

Quiz7_Text_Tot:
    .string "Tot$"

Quiz7_Text_Treble:
    .string "Treble$"

CastleTownSabre_Gym_EventScript_Quiz7::
	msgbox CastleTownSabre_Gym_Text_QuizQuestion7, MSGBOX_DEFAULT
	dynmultichoice 0,0, TRUE, 8, 0, DYN_MULTICHOICE_CB_NONE, Quiz7_Text_Andy, Quiz7_Text_BlindJIm, Quiz7_Text_Hermes, Quiz7_Text_Sabre, Quiz7_Text_Salsa, Quiz7_Text_TMoney, Quiz7_Text_Tot, Quiz7_Text_Treble
	goto CastleTownSabre_Gym_EventScript_Quiz7Incorrect
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
	goto_if_not_defeated TRAINER_JEANETTE, CastleTownSabre_Gym_EventScript_BattleJeanette
	releaseall
	end

CastleTownSabre_Gym_EventScript_BattleJeanette::
	call_if_eq VAR_TEMP_1, 0, CastleTownSabre_Gym_EventScript_JeanetteApproachLeft
	call_if_eq VAR_TEMP_1, 1, CastleTownSabre_Gym_EventScript_JeanetteApproachRight
	msgbox CastleTownSabre_Gym_Text_JeanetteIntro
	trainerbattle_no_intro TRAINER_JEANETTE, CastleTownSabre_Gym_Text_JeanetteDefeat
	goto_if_set FLAG_SABRE_GYM_QUIZ_7, CastleTownSabre_Gym_EventScript_DoorAlreadyOpen
	call CastleTownSabre_Gym_EventScript_Quiz7Complete
	releaseall
	end

CastleTownSabre_Gym_EventScript_JeanetteApproachLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_JEANETTE, CastleTownSabre_Gym_Movement_JeanetteApproachLeft
	waitmovement 0
	return

CastleTownSabre_Gym_EventScript_JeanetteApproachRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_JEANETTE, CastleTownSabre_Gym_Movement_JeanetteApproachRight
	waitmovement 0
	return

CastleTownSabre_Gym_Movement_JeanetteApproachLeft::
	walk_left
	walk_left
	step_end

CastleTownSabre_Gym_Movement_JeanetteApproachRight::
	walk_left
	step_end

CastleTownSabre_Gym_EventScript_Jeanette::
	trainerbattle_single TRAINER_JEANETTE, CastleTownSabre_Gym_Text_JeanetteIntro, CastleTownSabre_Gym_Text_JeanetteDefeat, CastleTownSabre_Gym_EventScript_DefeatedJeanette
	msgbox CastleTownSabre_Gym_Text_JeanettePostBattle, MSGBOX_AUTOCLOSE
	end

CastleTownSabre_Gym_EventScript_DefeatedJeanette::
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
    .string "How many quotes do you have saved\n"
    .string "in StreamElements?$"

CastleTownSabre_Gym_Text_QuizQuestion3::
    .string "What is your longest subscription\n"
	.string "in months?$"

CastleTownSabre_Gym_Text_QuizQuestion4::
    .string "Your highest viewed Twitch clip is\n"
    .string "in what game?$"

CastleTownSabre_Gym_Text_QuizQuestion5::
    .string "Who is fourth on the\n"
    .string "Boobalahongas leaderboard?$"

CastleTownSabre_Gym_Text_QuizQuestion6::
    .string "How many subscribers does your\n"
	.string "VOD channel have?$"

CastleTownSabre_Gym_Text_QuizQuestion7::
    .string "Who is the best Mod?$"

CastleTownSabre_Gym_Text_CorrectGoOnThrough::
    .string "You're absolutely correct!\p"
    .string "Go on through!$"

CastleTownSabre_Gym_Text_SorryBadCall::
    .string "Sorry!\n"
    .string "Bad call!$"

CastleTownSabre_Gym_Text_ElliottIntro:
	.string "Dragons are so cool!\n"
	.string "Let me show you mine!$"

CastleTownSabre_Gym_Text_ElliottDefeat:
	.string "Aww, I lost…$"

CastleTownSabre_Gym_Text_ElliottPostBattle:
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

CastleTownSabre_Gym_Text_JeanetteIntro:
	.string "Sorry {PLAYER}, but you'll go\n"
	.string "no further.$"

CastleTownSabre_Gym_Text_JeanetteDefeat:
	.string "Oh.\n"
	.string "You're strong.$"

CastleTownSabre_Gym_Text_JeanettePostBattle:
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

CastleTownSabre_Gym_Text_SteveIntro:
	.string "My POKéMON are in peak\n"
	.string "physical condition.\p"
	.string "Don't think I'm a pushover.$"

CastleTownSabre_Gym_Text_SteveDefeat:
	.string "I was beaten…$"

CastleTownSabre_Gym_Text_StevePostBattle:
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

CastleTownSabre_Gym_Text_CharlotteIntro:
	.string "Giggle…\n"
	.string "I'll win for sure!$"

CastleTownSabre_Gym_Text_CharlotteDefeat:
	.string "sniffle…\n"
	.string "That's not nice…$"

CastleTownSabre_Gym_Text_CharlottePostBattle:
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
