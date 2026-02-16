.set LOCALID_TOMATOES, 11
.set LOCALID_ONIONS, 12
.set LOCALID_PEPPERS, 10

CastleTownSalsa_Gym_MapScripts::
    map_script MAP_SCRIPT_ON_LOAD, CastleTownSalsa_Gym_OnLoad
	.byte 0

CastleTownSalsa_Gym_OnLoad:
	call CastleTownSalsa_Gym_EventScript_CheckWallOnLoad
	end

CastleTownSalsa_Gym_EventScript_CheckWallOnLoad::
	goto_if_set FLAG_BADGE04_GET, CastleTownSalsa_Gym_EventScript_RemoveWall
	call CastleTownSalsa_Gym_EventScript_CheckWallWithoutSound
	special DrawWholeMapView
	return

CastleTownSalsa_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_GymGuidePostVictory
	msgbox CastleTownSalsa_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_GymGuidePostVictory::
	msgbox CastleTownSalsa_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, CastleTownSalsa_Gym_EventScript_GymStatueCertified
	goto CastleTownSalsa_Gym_EventScript_GymStatue
	end

CastleTownSalsa_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, CastleTownSalsa_Gym_EventScript_GymStatueCertified
	goto CastleTownSalsa_Gym_EventScript_GymStatue
	end

CastleTownSalsa_Gym_EventScript_GymStatueCertified::
	msgbox CastleTownSalsa_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

CastleTownSalsa_Gym_EventScript_GymStatue::
	msgbox CastleTownSalsa_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CastleTownSalsa_Gym_EventScript_CheckWall::
	call CastleTownSalsa_Gym_EventScript_CountSalsaIngredients
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 3, CastleTownSalsa_Gym_EventScript_RemoveWallWithSound
	special DrawWholeMapView
	return

CastleTownSalsa_Gym_EventScript_CheckWallWithoutSound::
	call CastleTownSalsa_Gym_EventScript_CountSalsaIngredients
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 3, CastleTownSalsa_Gym_EventScript_RemoveWall
	special DrawWholeMapView
	end

CastleTownSalsa_Gym_EventScript_RemoveWallWithSound::
	playse SE_UNLOCK
	waitse
	call CastleTownSalsa_Gym_EventScript_RemoveWall
	special DrawWholeMapView
	return

CastleTownSalsa_Gym_EventScript_RemoveWall::
	setmetatile 13,  5, METATILE_CastleTownSalsaGym_CornerWallLeft, 1
	setmetatile 13,  6, METATILE_CastleTownSalsaGym_WallFloorLeft, 1
	setmetatile 14,  5, METATILE_CastleTownSalsaGym_Floor, 0
	setmetatile 14,  6, METATILE_CastleTownSalsaGym_Floor, 0
	setmetatile 15,  5, METATILE_CastleTownSalsaGym_Floor, 0
	setmetatile 15,  6, METATILE_CastleTownSalsaGym_Floor, 0
	setmetatile 16,  5, METATILE_CastleTownSalsaGym_Floor, 0
	setmetatile 16,  6, METATILE_CastleTownSalsaGym_Floor, 0
	setmetatile 17,  5, METATILE_CastleTownSalsaGym_CornerWallRight, 1
	setmetatile 17,  6, METATILE_CastleTownSalsaGym_WallFloorRight, 1
	return

CastleTownSalsa_Gym_EventScript_Tomatos::
	lockall
	msgbox CastleTownSalsa_Gym_Text_Tomatoes, MSGBOX_AUTOCLOSE
	removeobject LOCALID_TOMATOES
	setflag FLAG_SALSA_TOMATOES
	call CastleTownSalsa_Gym_EventScript_CheckWall
	release
	end

CastleTownSalsa_Gym_EventScript_Onions::
	lockall
	msgbox CastleTownSalsa_Gym_Text_Onions, MSGBOX_AUTOCLOSE
	removeobject LOCALID_ONIONS
	setflag FLAG_SALSA_ONIONS
	call CastleTownSalsa_Gym_EventScript_CheckWall
	release
	end

CastleTownSalsa_Gym_EventScript_Peppers::
	lockall
	msgbox CastleTownSalsa_Gym_Text_Peppers, MSGBOX_AUTOCLOSE
	removeobject LOCALID_PEPPERS
	setflag FLAG_SALSA_PEPPERS
	call CastleTownSalsa_Gym_EventScript_CheckWall
	release
	end

CastleTownSalsa_Gym_EventScript_CountSalsaIngredients::
	setvar VAR_0x8000, 0
	goto_if_unset FLAG_SALSA_TOMATOES, CastleTownSalsa_Gym_EventScript_CheckOnions
	addvar VAR_0x8000, 1
CastleTownSalsa_Gym_EventScript_CheckOnions::
	goto_if_unset FLAG_SALSA_ONIONS, CastleTownSalsa_Gym_EventScript_CheckPeppers
	addvar VAR_0x8000, 1
CastleTownSalsa_Gym_EventScript_CheckPeppers::
	goto_if_unset FLAG_SALSA_PEPPERS, CastleTownSalsa_Gym_EventScript_StopCountingIngredients
	addvar VAR_0x8000, 1
CastleTownSalsa_Gym_EventScript_StopCountingIngredients::
	return

CastleTownSalsa_Gym_EventScript_Cole::
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_ColePostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSalsa_Gym_EventScript_ColeBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSalsa_Gym_EventScript_ColeBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSalsa_Gym_EventScript_ColeAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSalsa_Gym_EventScript_ColeAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSalsa_Gym_EventScript_ColeAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSalsa_Gym_EventScript_ColeAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSalsa_Gym_EventScript_ColeAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSalsa_Gym_EventScript_ColeAdvanced
	msgbox CastleTownSalsa_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_ColeBeginner::
	trainerbattle_single TRAINER_COLE, CastleTownSalsa_Gym_Text_ColeIntro, CastleTownSalsa_Gym_Text_ColeDefeat
	end

CastleTownSalsa_Gym_EventScript_ColeAdvanced::
	trainerbattle_single TRAINER_COLE_2, CastleTownSalsa_Gym_Text_ColeIntro, CastleTownSalsa_Gym_Text_ColeDefeat
	end

CastleTownSalsa_Gym_EventScript_ColePostBattle::
	msgbox CastleTownSalsa_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_Axle::
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_AxlePostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSalsa_Gym_EventScript_AxleBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSalsa_Gym_EventScript_AxleBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSalsa_Gym_EventScript_AxleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSalsa_Gym_EventScript_AxleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSalsa_Gym_EventScript_AxleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSalsa_Gym_EventScript_AxleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSalsa_Gym_EventScript_AxleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSalsa_Gym_EventScript_AxleAdvanced
	msgbox CastleTownSalsa_Gym_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_AxleBeginner::
	trainerbattle_single TRAINER_AXLE, CastleTownSalsa_Gym_Text_AxleIntro, CastleTownSalsa_Gym_Text_AxleDefeat
	end

CastleTownSalsa_Gym_EventScript_AxleAdvanced::
	trainerbattle_single TRAINER_AXLE_2, CastleTownSalsa_Gym_Text_AxleIntro, CastleTownSalsa_Gym_Text_AxleDefeat
	end

CastleTownSalsa_Gym_EventScript_AxlePostBattle::
	msgbox CastleTownSalsa_Gym_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_Keegan::
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_KeeganPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSalsa_Gym_EventScript_KeeganBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSalsa_Gym_EventScript_KeeganBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSalsa_Gym_EventScript_KeeganAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSalsa_Gym_EventScript_KeeganAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSalsa_Gym_EventScript_KeeganAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSalsa_Gym_EventScript_KeeganAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSalsa_Gym_EventScript_KeeganAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSalsa_Gym_EventScript_KeeganAdvanced
	msgbox CastleTownSalsa_Gym_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_KeeganBeginner::
	trainerbattle_single TRAINER_KEEGAN, CastleTownSalsa_Gym_Text_KeeganIntro, CastleTownSalsa_Gym_Text_KeeganDefeat
	end

CastleTownSalsa_Gym_EventScript_KeeganAdvanced::
	trainerbattle_single TRAINER_KEEGAN_2, CastleTownSalsa_Gym_Text_KeeganIntro, CastleTownSalsa_Gym_Text_KeeganDefeat
	end

CastleTownSalsa_Gym_EventScript_KeeganPostBattle::
	msgbox CastleTownSalsa_Gym_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_Danielle::
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_DaniellePostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSalsa_Gym_EventScript_DanielleBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSalsa_Gym_EventScript_DanielleBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSalsa_Gym_EventScript_DanielleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSalsa_Gym_EventScript_DanielleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSalsa_Gym_EventScript_DanielleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSalsa_Gym_EventScript_DanielleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSalsa_Gym_EventScript_DanielleAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSalsa_Gym_EventScript_DanielleAdvanced
	msgbox CastleTownSalsa_Gym_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_DanielleBeginner::
	trainerbattle_single TRAINER_DANIELLE, CastleTownSalsa_Gym_Text_DanielleIntro, CastleTownSalsa_Gym_Text_DanielleDefeat
	end

CastleTownSalsa_Gym_EventScript_DanielleAdvanced::
	trainerbattle_single TRAINER_DANIELLE_2, CastleTownSalsa_Gym_Text_DanielleIntro, CastleTownSalsa_Gym_Text_DanielleDefeat
	end

CastleTownSalsa_Gym_EventScript_DaniellePostBattle::
	msgbox CastleTownSalsa_Gym_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_Gerald::
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_GeraldPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSalsa_Gym_EventScript_GeraldBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSalsa_Gym_EventScript_GeraldBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSalsa_Gym_EventScript_GeraldAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSalsa_Gym_EventScript_GeraldAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSalsa_Gym_EventScript_GeraldAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSalsa_Gym_EventScript_GeraldAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSalsa_Gym_EventScript_GeraldAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSalsa_Gym_EventScript_GeraldAdvanced
	msgbox CastleTownSalsa_Gym_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_GeraldBeginner::
	trainerbattle_single TRAINER_GERALD, CastleTownSalsa_Gym_Text_GeraldIntro, CastleTownSalsa_Gym_Text_GeraldDefeat
	end

CastleTownSalsa_Gym_EventScript_GeraldAdvanced::
	trainerbattle_single TRAINER_GERALD_2, CastleTownSalsa_Gym_Text_GeraldIntro, CastleTownSalsa_Gym_Text_GeraldDefeat
	end

CastleTownSalsa_Gym_EventScript_GeraldPostBattle::
	msgbox CastleTownSalsa_Gym_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_Jace::
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_JacePostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSalsa_Gym_EventScript_JaceBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSalsa_Gym_EventScript_JaceBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSalsa_Gym_EventScript_JaceAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSalsa_Gym_EventScript_JaceAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSalsa_Gym_EventScript_JaceAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSalsa_Gym_EventScript_JaceAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSalsa_Gym_EventScript_JaceAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSalsa_Gym_EventScript_JaceAdvanced
	msgbox CastleTownSalsa_Gym_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_JaceBeginner::
	trainerbattle_single TRAINER_JACE, CastleTownSalsa_Gym_Text_JaceIntro, CastleTownSalsa_Gym_Text_JaceDefeat
	end

CastleTownSalsa_Gym_EventScript_JaceAdvanced::
	trainerbattle_single TRAINER_JACE_2, CastleTownSalsa_Gym_Text_JaceIntro, CastleTownSalsa_Gym_Text_JaceDefeat
	end

CastleTownSalsa_Gym_EventScript_JacePostBattle::
	msgbox CastleTownSalsa_Gym_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_Jeff::
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_JeffPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSalsa_Gym_EventScript_JeffBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSalsa_Gym_EventScript_JeffBeginner
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSalsa_Gym_EventScript_JeffAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSalsa_Gym_EventScript_JeffAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSalsa_Gym_EventScript_JeffAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSalsa_Gym_EventScript_JeffAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSalsa_Gym_EventScript_JeffAdvanced
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSalsa_Gym_EventScript_JeffAdvanced
	msgbox CastleTownSalsa_Gym_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	release
	end

CastleTownSalsa_Gym_EventScript_JeffBeginner::
	trainerbattle_single TRAINER_JEFF, CastleTownSalsa_Gym_Text_JeffIntro, CastleTownSalsa_Gym_Text_JeffDefeat
	end

CastleTownSalsa_Gym_EventScript_JeffAdvanced::
	trainerbattle_single TRAINER_JEFF_2, CastleTownSalsa_Gym_Text_JeffIntro, CastleTownSalsa_Gym_Text_JeffDefeat
	end

CastleTownSalsa_Gym_EventScript_JeffPostBattle::
	msgbox CastleTownSalsa_Gym_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	release
	end
	
CastleTownSalsa_Gym_EventScript_Flannery::
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, CastleTownSalsa_Gym_EventScript_SalsaPostBattle
    goto_if_eq VAR_BADGES_COLLECTED, 0, CastleTownSalsa_Gym_EventScript_Flannery_ZeroBadge
	goto_if_eq VAR_BADGES_COLLECTED, 1, CastleTownSalsa_Gym_EventScript_Flannery_OneBadge
	goto_if_eq VAR_BADGES_COLLECTED, 2, CastleTownSalsa_Gym_EventScript_Flannery_TwoBadge
	goto_if_eq VAR_BADGES_COLLECTED, 3, CastleTownSalsa_Gym_EventScript_Flannery_ThreeBadge
	goto_if_eq VAR_BADGES_COLLECTED, 4, CastleTownSalsa_Gym_EventScript_Flannery_FourBadge
	goto_if_eq VAR_BADGES_COLLECTED, 5, CastleTownSalsa_Gym_EventScript_Flannery_FiveBadge
	goto_if_eq VAR_BADGES_COLLECTED, 6, CastleTownSalsa_Gym_EventScript_Flannery_SixBadge
	goto_if_eq VAR_BADGES_COLLECTED, 7, CastleTownSalsa_Gym_EventScript_Flannery_SevenBadge
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_ZeroBadge::
	trainerbattle_single TRAINER_SALSA_1, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_OneBadge::
	trainerbattle_single TRAINER_SALSA_2, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_TwoBadge::
	trainerbattle_single TRAINER_SALSA_3, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_ThreeBadge::
	trainerbattle_single TRAINER_SALSA_4, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_FourBadge::
	trainerbattle_single TRAINER_SALSA_5, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_FiveBadge::
	trainerbattle_single TRAINER_SALSA_6, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_SixBadge::
	trainerbattle_single TRAINER_SALSA_7, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_Flannery_SevenBadge::
	trainerbattle_single TRAINER_SALSA_8, CastleTownSalsa_Gym_Text_Intro, CastleTownSalsa_Gym_Text_PostBattle, CastleTownSalsa_Gym_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox CastleTownSalsa_Gym_Text_PostBattle, MSGBOX_DEFAULT
	release
	end

CastleTownSalsa_Gym_EventScript_SalsaPostBattle::
	msgbox CastleTownSalsa_Gym_Text_SalsaPostBattle, MSGBOX_NPC
	release
	end

CastleTownSalsa_Gym_EventScript_FlanneryDefeated::
	message CastleTownSalsa_Gym_Text_ReceivedPepperBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CastleTownSalsa_Gym_Text_PepperBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_BADGE04_GET
	call Common_EventScript_UpdateBadgesCollected
	setvar VAR_0x8008, 13
	call Common_EventScript_SetGymTrainers
	call CastleTownSalsa_Gym_EventScript_GiveOverheat
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox CastleTownSalsa_Gym_Text_RegisteredSalsa, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	end

CastleTownSalsa_Gym_EventScript_GiveOverheat::
	giveitem ITEM_TM_OVERHEAT
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox CastleTownSalsa_Gym_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_OVERHEAT
	return

CastleTownSalsa_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "Moderator Salsa is a fan of Fire type\n"
	.string "Pokémon. Must be because of his spicy\p"
	.string "namesake. Apparently, he is wanting\n"
	.string "to make some salsa so you'll have\p"
	.string "to collect the ingredients for his\n"
	.string "snack to be able to fight him.\p"
	.string "Okay, go for it!$"

CastleTownSalsa_Gym_Text_GymGuidePostVictory:
	.string "Congratulations!\n"
	.string "That was a spicy battle!$"

CastleTownSalsa_Gym_Text_GymStatue:
	.string "PUERTO DEL SALSA POKéMON GYM$"

CastleTownSalsa_Gym_Text_GymStatueCertified:
	.string "PUERTO DEL SALSA POKéMON GYM\p"
	.string "SALSA'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

CastleTownSalsa_Gym_Text_ColeIntro:
	.string "Owowowowow!\n"
	.string "Yikes, it's hot!$"

CastleTownSalsa_Gym_Text_ColeDefeat:
	.string "I'm blinded by sweat in my eyes…$"

CastleTownSalsa_Gym_Text_ColePostBattle:
	.string "Being buried in hot sand promotes\n"
	.string "circulation.\p"
	.string "It's effective for healing pain in\n"
	.string "your joints.$"

CastleTownSalsa_Gym_Text_AxleIntro:
	.string "I'm trying to relieve my stress.\n"
	.string "Don't come along and stress me out!$"

CastleTownSalsa_Gym_Text_AxleDefeat:
	.string "I hope Salsa flames you good!$"

CastleTownSalsa_Gym_Text_AxlePostBattle:
	.string "Haaah… Whew…\p"
	.string "If you spend too much time buried in\n"
	.string "hot sand, it tuckers you out…$"

CastleTownSalsa_Gym_Text_KeeganIntro:
	.string "You must be getting tired by now.\n"
	.string "You'd like to rest in the hot sand,\l"
	.string "wouldn't you?\p"
	.string "But you should know that maintaining\n"
	.string "your willpower is an important ability\l"
	.string "for all Trainers.$"

CastleTownSalsa_Gym_Text_KeeganDefeat:
	.string "Play with fire, and be burned…$"

CastleTownSalsa_Gym_Text_KeeganPostBattle:
	.string "Your skill is real…\n"
	.string "But Salsa is strong.\p"
	.string "If you don't watch yourself, you'll be\n"
	.string "burned seriously.$"

CastleTownSalsa_Gym_Text_GeraldIntro:
	.string "Can your Pokémon withstand\n"
	.string "392-degree heat?$"

CastleTownSalsa_Gym_Text_GeraldDefeat:
	.string "It didn't burn hotly enough…$"

CastleTownSalsa_Gym_Text_GeraldPostBattle:
	.string "The temperature of magma is\n"
	.string "392 degrees.\p"
	.string "Your POKéMON beat me, so they should\n"
	.string "easily survive in magma.$"

CastleTownSalsa_Gym_Text_DanielleIntro:
	.string "Um…\n"
	.string "Okay, I'll battle with you.$"

CastleTownSalsa_Gym_Text_DanielleDefeat:
	.string "Oh, but you're too strong.$"

CastleTownSalsa_Gym_Text_DaniellePostBattle:
	.string "I'm going to be a strong\n"
	.string "Trainer just like Salsa.$"

CastleTownSalsa_Gym_Text_JaceIntro:
	.string "Come on, get with it!\n"
	.string "Let's go before my feelings cool!$"

CastleTownSalsa_Gym_Text_JaceDefeat:
	.string "It's so hot, and yet my heart is\n"
	.string "clutched by ice…$"

CastleTownSalsa_Gym_Text_JacePostBattle:
	.string "The way the battling spirit burns\n"
	.string "within you, you may stand a chance\l"
	.string "against our Moderator.$"

CastleTownSalsa_Gym_Text_JeffIntro:
	.string "See how the flames blaze wildly?\n"
	.string "They flare in anticipation of my win!$"

CastleTownSalsa_Gym_Text_JeffDefeat:
	.string "Something didn't go right.$"

CastleTownSalsa_Gym_Text_JeffPostBattle:
	.string "Well, so what? I say so what?\n"
	.string "I can walk on hot coals barefoot!\p"
	.string "…Don't even think about trying it!$"

CastleTownSalsa_Gym_Text_Tomatoes:
	.string "Found tomatoes!$"

CastleTownSalsa_Gym_Text_Onions:
	.string "Found onions!$"

CastleTownSalsa_Gym_Text_Peppers:
	.string "Found peppers!$"

CastleTownSalsa_Gym_Text_Intro:
	.string "Ahhhhh, I thought I felt the\n"
	.string "temperature rise a bit in here.\p"
	.string "How could it not with a beard\n"
	.string "like that? Anyway, ready\p"
	.string "for an ass whoopin'?$"

CastleTownSalsa_Gym_Text_PostBattle:
	.string "Damn, you're stronger than I\n"
	.string "thought! Good fight. Now I'm\p"
	.string "freed up for more War Thunder.$"

CastleTownSalsa_Gym_Text_ReceivedPepperBadge:
	.string "{PLAYER} received the Pepper Badge\n"
	.string "from Salsa.$"

CastleTownSalsa_Gym_Text_PepperBadgeInfoTakeThis:
	.string "The Pepper Badge means you have\n"
	.string "beated me, you get new benefits in\l"
	.string "the Guild Hall, blah blah blah.\p"
	.string "Hurry, take this TM so I can get\n"
	.string "back to gaming.$"

CastleTownSalsa_Gym_Text_ExplainOverheat:
	.string "TM-50 is Overheat.\p"
	.string "It's super strong but like the\n"
	.string "engines on my plane right now,\p"
	.string "it'll weaken the Pokémon that uses it.\p"
	.string "… … … … … …$"

CastleTownSalsa_Gym_Text_RegisteredSalsa:
	.string "Registered Moderator Salsa\n"
	.string "in the POKéNAV.$"

CastleTownSalsa_Gym_Text_SalsaPostBattle:
	.string "Dude… thank you for everything. From\n"
	.string "the first time I met you, I knew\p"
	.string "you had the energy, drive, and\n"
	.string "passion to do amazing things. I can't\p"
	.string "believe it's been six years already.\n"
	.string "I'm so proud of you, and I consider\p"
	.string "myself beyond lucky to know you. Your\n"
	.string "spirit, perseverence, and ambition are\p"
	.string "truly an example to us all. And for\n"
	.string "fuck's sake, could you please call\p"
	.string "me one of these days? I miss you.$"
