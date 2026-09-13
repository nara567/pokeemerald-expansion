# 1 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"


LittlerootTown_PlayerHouse_2F_MapScripts::
# 4 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LittlerootTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 6 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 7 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 8 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 9 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


LittlerootTown_PlayerHouse_2F_EventScript_PC::
# 14 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	lockall
# 15 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	return


LittlerootTown_PlayerHouse_2F_EventScript_WallClock::
# 19 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	checkplayergender
# 21 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_PlayerHouse_2F_EventScript_WallClock_2
# 24 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8004, FEMALE
LittlerootTown_PlayerHouse_2F_EventScript_WallClock_1:
# 26 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call LittlerootTown_PlayerHouse_2f_EventScript_SetClock
	return

LittlerootTown_PlayerHouse_2F_EventScript_WallClock_2:
# 22 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8004, MALE
	goto LittlerootTown_PlayerHouse_2F_EventScript_WallClock_1


LittlerootTown_PlayerHouse_2f_EventScript_SetClock::
# 30 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, LittlerootTown_PlayerHouse_2f_EventScript_SetClock_2
LittlerootTown_PlayerHouse_2f_EventScript_SetClock_1:
# 33 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 34 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	delay 30
# 35 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 36 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 37 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 38 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	playse SE_EXIT
# 39 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	removeobject VAR_0x8008
# 40 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return

LittlerootTown_PlayerHouse_2f_EventScript_SetClock_2:
# 31 "data/maps/LittlerootTown_PlayerHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_CheckWallClock
	goto LittlerootTown_PlayerHouse_2f_EventScript_SetClock_1

