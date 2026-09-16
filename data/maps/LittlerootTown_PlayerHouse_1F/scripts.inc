# 1 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"


LittlerootTown_PlayerHouse_1F_MapScripts::
# 4 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
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
# 11 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 6, LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
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

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 11 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_Party
	return

LittlerootTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, LittlerootTown_PlayerHouse_1F_OnFrame
	.2byte 0


LittlerootTown_PlayerHouse_1F_OnFrame::
# 20 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 21 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 1, LittlerootTown_PlayerHouse_1F_OnFrame_2
# 22 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	case 2, LittlerootTown_PlayerHouse_1F_OnFrame_3
	return

LittlerootTown_PlayerHouse_1F_OnFrame_2:
# 21 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock
	return

LittlerootTown_PlayerHouse_1F_OnFrame_3:
# 22 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call LittlerootTown_PlayerHouse_1F_EventScript_PreParty
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
	releaseall
	return


LittlerootTown_PlayerHouse_1F_EventScript_Mom::
# 105 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lock
# 106 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 108 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_le LittlerootTown_PlayerHouse_1F_EventScript_Mom_2
LittlerootTown_PlayerHouse_1F_EventScript_Mom_1:
# 112 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 7
	goto_if_eq LittlerootTown_PlayerHouse_1F_EventScript_Mom_5
LittlerootTown_PlayerHouse_1F_EventScript_Mom_4:
# 115 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 116 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_0
# 117 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_1
# 118 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return

LittlerootTown_PlayerHouse_1F_EventScript_Mom_2:
# 110 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	goto LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf
	goto LittlerootTown_PlayerHouse_1F_EventScript_Mom_1

LittlerootTown_PlayerHouse_1F_EventScript_Mom_5:
# 113 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_MomHealsParty
	goto LittlerootTown_PlayerHouse_1F_EventScript_Mom_4


LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard::
# 122 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 123 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_0
# 124 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_1
# 125 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_2
	return


LittlerootTown_PlayerHouse_1F_EventScript_Dad::
# 129 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lock
# 130 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 131 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_le LittlerootTown_PlayerHouse_1F_EventScript_Dad_2
LittlerootTown_PlayerHouse_1F_EventScript_Dad_1:
# 134 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 135 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_0
# 136 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_1
# 137 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return

LittlerootTown_PlayerHouse_1F_EventScript_Dad_2:
# 132 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	goto LittlerootTown_PlayerHouse_1F_EventScript_Steak
	goto LittlerootTown_PlayerHouse_1F_EventScript_Dad_1


LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf::
# 141 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 142 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf_Text_0
# 143 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return


LittlerootTown_PlayerHouse_1F_EventScript_Steak::
# 147 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 148 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Steak_Text_0
# 149 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return


LittlerootTown_PlayerHouse_1F_EventScript_Party::
# 154 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 177 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_RG_DEX_RATING
# 265 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
	return


LittlerootTown_PlayerHouse_1F_EventScript_ReceivePokedex::
# 271 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 273 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 274 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 275 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	special SetUnlockedPokedexFlags
# 276 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 277 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	return


LittlerootTown_PlayerHouse_1F_EventScript_ReceiveLicense::
# 282 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 283 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_ReceiveLicense_Text_0
# 284 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
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
# 116 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "See, {PLAYER}?$"

LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_1:
# 117 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"

LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_0:
# 123 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.$"

LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_1:
# 124 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "You can always come home.$"

LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_2:
# 125 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Go for it, honey!$"

LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_0:
# 135 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Remember to come home once in a while.$"

LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_1:
# 136 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Your mom and I are cheering for you\n"
	.string "every day!$"

LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf_Text_0:
# 142 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Did you talk to the Professor?$"

LittlerootTown_PlayerHouse_1F_EventScript_Steak_Text_0:
# 148 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "This steak isn't going to make itself!$"

LittlerootTown_PlayerHouse_1F_EventScript_ReceiveLicense_Text_0:
# 283 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER} received the Minor League\n"
	.string "License!$"
