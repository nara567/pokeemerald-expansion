# 1 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"


LittlerootTown_PlayerHouse_2F_MapScripts::
# 4 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, LittlerootTown_PlayerHouse_2F_OnFrame
	.2byte 0


LittlerootTown_PlayerHouse_2F_OnFrame::
# 12 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 13 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	case 7, LittlerootTown_PlayerHouse_2F_OnFrame_2
	return

LittlerootTown_PlayerHouse_2F_OnFrame_2:
# 13 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call LittlerootTown_PlayerHouse_2F_EventScript_PostParty
	return


LittlerootTown_PlayerHouse_2F_EventScript_PC::
# 18 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	lockall
# 19 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	return


LittlerootTown_PlayerHouse_2F_EventScript_WallClock::
# 23 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	lockall
# 24 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	checkplayergender
# 25 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_PlayerHouse_2F_EventScript_WallClock_2
# 28 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8004, FEMALE
LittlerootTown_PlayerHouse_2F_EventScript_WallClock_1:
# 30 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call LittlerootTown_PlayerHouse_2f_EventScript_SetClock
	return

LittlerootTown_PlayerHouse_2F_EventScript_WallClock_2:
# 26 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8004, MALE
	goto LittlerootTown_PlayerHouse_2F_EventScript_WallClock_1


LittlerootTown_PlayerHouse_2f_EventScript_SetClock::
# 34 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, LittlerootTown_PlayerHouse_2f_EventScript_SetClock_2
LittlerootTown_PlayerHouse_2f_EventScript_SetClock_1:
# 37 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 38 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	delay 30
# 39 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 40 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 41 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs
# 42 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	removeobject VAR_0x8008
# 44 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

LittlerootTown_PlayerHouse_2f_EventScript_SetClock_2:
# 35 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_CheckWallClock
	goto LittlerootTown_PlayerHouse_2f_EventScript_SetClock_1


LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs::
# 48 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_PLAYERS_HOUSE_2F_MOM
# 49 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	addobject VAR_0x8008
# 50 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersMale
# 51 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 53 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setspeaker SP_NAME_MOM
# 55 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_0
# 56 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_1
# 57 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_2
# 58 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 59 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsMale
# 60 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_PlayerHouse_2F_EventScript_PostParty::
# 65 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	lock
# 66 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_2F_EventScript_PostParty_Text_0
# 67 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	playfanfare MUS_HEAL
# 68 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	waitfanfare
# 69 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 70 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 71 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 8
# 72 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	release
	return


LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_0:
# 55 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	.string "{PLAYER}, how do you like your clock?$"

LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_1:
# 56 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	.string "Good! I know you're excited to start\n"
	.string "your adventure, but let's throw a party\l"
	.string "before you go!$"

LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_2:
# 57 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	.string "And make sure you read the card on your\n"
	.string "desk!$"

LittlerootTown_PlayerHouse_2F_EventScript_PostParty_Text_0:
# 66 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	.string "The party went on all night, and you\n"
	.string "awaken in your room, ready for your\l"
	.string "first step out into the world.$"
