# 1 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"


LittlerootTown_PlayerHouse_1F_MapScripts::
# 4 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 6 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 5, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 7 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 6, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToStairs
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 7 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToIsland
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, LittlerootTown_PlayerHouse_1F_OnFrame
	.2byte 0


LittlerootTown_PlayerHouse_1F_OnFrame::
# 16 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 17 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 5, LittlerootTown_PlayerHouse_1F_OnFrame_2
# 18 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 6, LittlerootTown_PlayerHouse_1F_OnFrame_3
	return

LittlerootTown_PlayerHouse_1F_OnFrame_2:
# 17 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock
	return

LittlerootTown_PlayerHouse_1F_OnFrame_3:
# 18 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
	return


LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock::
# 23 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lockall
# 24 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_GoSetTheClock
# 25 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock_Movement_0
# 28 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock_Movement_0
# 30 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PLAYER_HOUSE_2F, 7, 1
# 32 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitstate
# 33 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


LittlerootTown_PlayerHouse_1F_EventScript_GoSetTheClock::
# 37 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 38 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_GoSetTheClock_Text_0
	return


LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToStairs::
# 42 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 43 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToIsland::
# 47 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 3, 5
# 48 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


LittlerootTown_PlayerHouse_1F_EventScript_PreParty::
# 52 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lockall
# 53 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 54 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_DAD
# 55 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8005, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0
	return


# 25 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock_Movement_0:
# 26 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_up
	step_end

# 55 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0:
# 56 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

LittlerootTown_PlayerHouse_1F_EventScript_GoSetTheClock_Text_0:
# 38 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER}, make sure you set the clock we\n"
	.string "got you, honey.$"
