# 1 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"


LittlerootTown_PlayerHouse_2F_MapScripts::
# 4 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 6 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_lt LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 10 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return

LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	goto LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


LittlerootTown_PlayerHouse_2F_EventScript_PC::
# 15 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	lockall
# 16 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	return


LittlerootTown_PlayerHouse_2F_EventScript_WallClock::
# 20 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	lockall
# 21 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	checkplayergender
# 22 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_PlayerHouse_2F_EventScript_WallClock_2
# 25 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8004, FEMALE
LittlerootTown_PlayerHouse_2F_EventScript_WallClock_1:
# 27 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call LittlerootTown_PlayerHouse_2f_EventScript_SetClock
	return

LittlerootTown_PlayerHouse_2F_EventScript_WallClock_2:
# 23 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8004, MALE
	goto LittlerootTown_PlayerHouse_2F_EventScript_WallClock_1


LittlerootTown_PlayerHouse_2f_EventScript_SetClock::
# 31 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, LittlerootTown_PlayerHouse_2f_EventScript_SetClock_2
LittlerootTown_PlayerHouse_2f_EventScript_SetClock_1:
# 34 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 35 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	delay 30
# 36 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 37 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 38 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs
# 39 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	playse SE_EXIT
# 40 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	removeobject VAR_0x8008
# 41 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

LittlerootTown_PlayerHouse_2f_EventScript_SetClock_2:
# 32 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_CheckWallClock
	goto LittlerootTown_PlayerHouse_2f_EventScript_SetClock_1


LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs::
# 45 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_PLAYERS_HOUSE_2F_MOM
# 46 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	addobject VAR_0x8008
# 47 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersMale
# 48 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 50 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setspeaker SP_NAME_MOM
# 52 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_0
# 53 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_1
# 54 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_2
# 55 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 56 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsMale
# 57 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_0:
# 52 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	.string "{PLAYER}, how do you like your clock?$"

LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_1:
# 53 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	.string "Good! I know you're excited to start\n"
	.string "your adventure, but let's throw a party\l"
	.string "before you go!$"

LittlerootTown_PlayerHouse_2f_EventScript_MomComesUpstairs_Text_2:
# 54 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	.string "And make sure you read the card on your\n"
	.string "desk!$"
