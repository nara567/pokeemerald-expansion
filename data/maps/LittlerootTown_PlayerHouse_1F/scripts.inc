# 1 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"


LittlerootTown_PlayerHouse_1F_MapScripts::
# 4 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 6 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 1, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 7 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 2, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 8 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 3, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 9 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 4, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 10 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 5, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToStairs
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 7 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToIsland
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 8 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToIsland
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToIsland
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 10 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToIsland
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, LittlerootTown_PlayerHouse_1F_OnFrame
	.2byte 0


LittlerootTown_PlayerHouse_1F_OnFrame::
# 19 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 20 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 1, LittlerootTown_PlayerHouse_1F_OnFrame_2
# 21 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 2, LittlerootTown_PlayerHouse_1F_OnFrame_3
# 22 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 6, LittlerootTown_PlayerHouse_1F_OnFrame_4
	return

LittlerootTown_PlayerHouse_1F_OnFrame_2:
# 20 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock
	return

LittlerootTown_PlayerHouse_1F_OnFrame_3:
# 21 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_PreParty
	return

LittlerootTown_PlayerHouse_1F_OnFrame_4:
# 22 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_Party
	return


LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock::
# 27 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lockall
# 28 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_GoSetTheClock
# 29 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock_Movement_0
# 32 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock_Movement_0
# 34 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PLAYER_HOUSE_2F, 7, 1
# 36 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitstate
# 37 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


LittlerootTown_PlayerHouse_1F_EventScript_GoSetTheClock::
# 41 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 42 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_GoSetTheClock_Text_0
	return


LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToStairs::
# 46 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 47 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_DAD, 1, 3
# 49 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_DAD, MOVEMENT_TYPE_FACE_UP
	return


LittlerootTown_PlayerHouse_1F_EventScript_MoveMomToIsland::
# 53 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 3, 5
# 54 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_DAD, 1, 3
# 56 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_DAD, MOVEMENT_TYPE_FACE_UP
	return


LittlerootTown_PlayerHouse_1F_EventScript_PreParty::
# 60 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lockall
# 61 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 62 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_DAD
# 63 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 64 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8005, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0
# 67 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 69 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_1
# 70 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_1
# 73 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 75 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8005, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_2
# 77 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8004, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_2
# 80 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 81 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_2
# 82 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_3
# 85 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8004, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_4
# 90 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 92 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_4
# 93 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8004, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_5
# 96 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_5
# 98 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_6
# 99 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 100 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 101 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_PLAYER_HOUSE_2F
# 102 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


LittlerootTown_PlayerHouse_1F_EventScript_Mom::
# 106 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lock
# 107 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 109 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_le LittlerootTown_PlayerHouse_1F_EventScript_Mom_2
LittlerootTown_PlayerHouse_1F_EventScript_Mom_1:
# 113 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 7
	goto_if_eq LittlerootTown_PlayerHouse_1F_EventScript_Mom_5
LittlerootTown_PlayerHouse_1F_EventScript_Mom_4:
# 116 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 117 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_0
# 118 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_1
# 119 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return

LittlerootTown_PlayerHouse_1F_EventScript_Mom_2:
# 111 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	goto LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf
	goto LittlerootTown_PlayerHouse_1F_EventScript_Mom_1

LittlerootTown_PlayerHouse_1F_EventScript_Mom_5:
# 114 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_MomHealsParty
	goto LittlerootTown_PlayerHouse_1F_EventScript_Mom_4


LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard::
# 123 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 124 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_0
# 125 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_1
# 126 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_2
	return


LittlerootTown_PlayerHouse_1F_EventScript_Dad::
# 130 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lock
# 131 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 132 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_le LittlerootTown_PlayerHouse_1F_EventScript_Dad_2
LittlerootTown_PlayerHouse_1F_EventScript_Dad_1:
# 135 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 136 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_0
# 137 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_1
# 138 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return

LittlerootTown_PlayerHouse_1F_EventScript_Dad_2:
# 133 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	goto LittlerootTown_PlayerHouse_1F_EventScript_Steak
	goto LittlerootTown_PlayerHouse_1F_EventScript_Dad_1


LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf::
# 142 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 143 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf_Text_0
# 144 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return


LittlerootTown_PlayerHouse_1F_EventScript_Steak::
# 148 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 149 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Steak_Text_0
# 150 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return


LittlerootTown_PlayerHouse_1F_EventScript_Party::
# 154 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lock
# 155 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 156 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0
# 160 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 161 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0
# 165 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 166 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_BIRCH, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0
# 170 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 171 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_RIVAL, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0
# 175 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 176 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_0
# 177 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_1
# 178 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_RG_DEX_RATING
# 179 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 180 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 181 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_2
# 182 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_0
# 187 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_PROF, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_1
# 193 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_2
# 197 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_3
# 201 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_BIRCH, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_2
# 205 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_RIVAL, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_3
# 209 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 210 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_3
# 211 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_4
# 212 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 213 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_5
# 214 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 215 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 216 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitse
# 217 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_PLAYERS_HOUSE_1F_CAKE
# 218 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DEX, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_4
# 221 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 222 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_6
# 223 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_7
# 224 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_3
# 225 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_8
# 226 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_PROF, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_5
# 230 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 231 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_6
# 234 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 235 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_9
# 236 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_ReceivePokedex
# 237 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_10
# 238 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_11
# 239 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_BIRCH, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_2
# 242 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 243 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 244 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_12
# 245 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_3
# 248 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 249 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_ReceiveLicense
# 250 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 251 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_13
# 252 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_2
# 255 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 256 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_2
# 259 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 260 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 261 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_14
# 262 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_5
# 266 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 267 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_7
# 271 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 272 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_BIRCH, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_5
# 276 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 277 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_RIVAL, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_7
# 281 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 282 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_8
# 286 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 287 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_PROF, LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_8
# 291 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 292 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 293 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 294 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_PARTY_OVER
# 295 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_PLAYERS_HOUSE_1F_BIRCH
# 296 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_PLAYERS_HOUSE_1F_RIVAL
# 297 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_PLAYERS_HOUSE_1F_PROF
# 298 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PLAYER_HOUSE_2F, 1, 4
# 299 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 300 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return


LittlerootTown_PlayerHouse_1F_EventScript_ReceivePokedex::
# 304 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 305 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 306 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 307 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_PLAYERS_HOUSE_1F_DEX
# 308 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 309 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	special SetUnlockedPokedexFlags
# 310 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 311 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	return


LittlerootTown_PlayerHouse_1F_EventScript_ReceiveLicense::
# 316 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 317 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker NULL
# 318 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_ReceiveLicense_Text_0
# 319 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
	return


# 29 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock_Movement_0:
# 30 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0:
# 65 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_right
# 66 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 70 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_1:
# 71 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
	step_end

# 75 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_2:
# 76 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	emote_heart
	step_end

# 82 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_3:
# 83 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 86 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_4:
# 87 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 88 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_up
	step_end

# 93 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_5:
# 94 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	jump_in_place_up
	step_end

# 182 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_0:
# 183 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 183 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 183 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 184 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 185 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 187 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_1:
# 188 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 189 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 189 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 190 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 190 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 191 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 193 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_2:
# 194 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	delay_8
# 195 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_right
	step_end

# 197 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_3:
# 198 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	delay_8
# 199 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_left
	step_end

# 218 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_4:
# 219 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	slide_down
# 219 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	slide_down
	step_end

# 226 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_5:
# 227 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	jump_in_place_right
# 228 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 231 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_6:
# 232 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_left
	step_end

# 267 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_7:
# 268 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	jump_in_place_left
# 269 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 282 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_Party_Movement_8:
# 283 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	jump_in_place_down
# 284 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

LittlerootTown_PlayerHouse_1F_EventScript_GoSetTheClock_Text_0:
# 42 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER}, make sure you set the clock we\n"
	.string "got you, honey.$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0:
# 68 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Dad$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_1:
# 69 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER}, happy birthday!$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_2:
# 81 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "We're still getting everything ready\n"
	.string "here. But isn't it so exciting? You're\l"
	.string "old enough to enter the leagues now!$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3:
# 91 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Mom$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_4:
# 92 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "It seems like just yesterday you were\n"
	.string "knee-high, dressed up as Wallace,\l"
	.string "talking about being champion. All kids\l"
	.string "leave home someday...$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_5:
# 97 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "But you can't leave until we see you\n"
	.string "off!$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_6:
# 98 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Could you go next door and see if the\n"
	.string "Professor finished making the cake?$"

LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_0:
# 117 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "See, {PLAYER}?$"

LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_1:
# 118 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"

LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_0:
# 124 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.$"

LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_1:
# 125 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "You can always come home.$"

LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_2:
# 126 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Go for it, honey!$"

LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_0:
# 136 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Remember to come home once in a while.$"

LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_1:
# 137 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Your mom and I are cheering for you\n"
	.string "every day!$"

LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf_Text_0:
# 143 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Did you talk to the Professor?$"

LittlerootTown_PlayerHouse_1F_EventScript_Steak_Text_0:
# 149 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "This steak isn't going to make itself!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_0:
# 176 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Everyone$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_1:
# 177 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "HAPPY BIRTHDAY, {PLAYER}!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_2:
# 181 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "The Professor made you this Torchic\n"
	.string "cake! Come here and make a wish!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_3:
# 210 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Prof Birch$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_4:
# 211 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "I had to get some natural syrup in the\n"
	.string "clearing for the flavor!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_5:
# 213 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "What's everyone waiting for? Let's dig\n"
	.string "in!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_6:
# 222 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Birch$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_7:
# 223 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Delicious as always, May!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_8:
# 225 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Thanks dad! Now, {PLAYER}, time for the\n"
	.string "best part.$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_9:
# 235 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "It's gift time! Happy birthday! From my\n"
	.string "dad, {RIVAL}, and I, we want you to\l"
	.string "have a Pokédex! Think of it as a part 2\l"
	.string "to the Togepi we gave you!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_10:
# 237 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "{RIVAL}$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_11:
# 238 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Now you'll help advance our research\n"
	.string "while you go out and travel the region!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_12:
# 244 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "And now, from us! We know how much\n"
	.string "you've been talking about entering the\l"
	.string "leagues, so we got you something\l"
	.string "special!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_13:
# 251 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Your dad and I will always be rooting\n"
	.string "for you, honey! Go show the world what\l"
	.string "you can do!$"

LittlerootTown_PlayerHouse_1F_EventScript_Party_Text_14:
# 261 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Let's get this party started!$"

LittlerootTown_PlayerHouse_1F_EventScript_ReceiveLicense_Text_0:
# 318 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER} received the Minor League\n"
	.string "License!$"
