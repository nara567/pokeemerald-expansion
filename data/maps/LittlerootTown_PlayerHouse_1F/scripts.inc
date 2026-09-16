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
	call LittlerootTown_PlayerHouse_1F_EventScript_PreParty
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
	playse SE_PIN
# 56 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8005, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0
# 59 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 61 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_1
# 62 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_1
# 65 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 67 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8005, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_2
# 69 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8004, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_2
# 72 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_2
# 74 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_3
# 77 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8004, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_4
# 82 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 84 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_4
# 85 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	applymovement VAR_0x8004, LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_5
# 88 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_5
# 90 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_6
# 91 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 92 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 93 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


LittlerootTown_PlayerHouse_1F_EventScript_Mom::
# 97 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lock
# 98 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 100 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	goto_if_set FLAG_TALKED_TO_PROF, LittlerootTown_PlayerHouse_1F_EventScript_Mom_2
LittlerootTown_PlayerHouse_1F_EventScript_Mom_1:
# 103 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 7
	goto_if_eq LittlerootTown_PlayerHouse_1F_EventScript_Mom_5
LittlerootTown_PlayerHouse_1F_EventScript_Mom_4:
# 107 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 108 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_0
# 109 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_1
# 110 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return

LittlerootTown_PlayerHouse_1F_EventScript_Mom_2:
# 101 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_MomHealsParty
	goto LittlerootTown_PlayerHouse_1F_EventScript_Mom_1

LittlerootTown_PlayerHouse_1F_EventScript_Mom_5:
# 105 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	goto LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf
	goto LittlerootTown_PlayerHouse_1F_EventScript_Mom_4


LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard::
# 114 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 115 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_0
# 116 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_1
# 117 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_2
	return


LittlerootTown_PlayerHouse_1F_EventScript_Dad::
# 121 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	lock
# 122 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 123 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 7
	goto_if_eq LittlerootTown_PlayerHouse_1F_EventScript_Dad_2
LittlerootTown_PlayerHouse_1F_EventScript_Dad_1:
# 126 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 127 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_0
# 128 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_1
# 129 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return

LittlerootTown_PlayerHouse_1F_EventScript_Dad_2:
# 124 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	goto LittlerootTown_PlayerHouse_1F_EventScript_Steak
	goto LittlerootTown_PlayerHouse_1F_EventScript_Dad_1


LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf::
# 133 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3
# 134 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf_Text_0
# 135 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return


LittlerootTown_PlayerHouse_1F_EventScript_Steak::
# 139 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	setspeaker LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0
# 140 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	msgbox LittlerootTown_PlayerHouse_1F_EventScript_Steak_Text_0
# 141 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	release
	return


# 25 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_GoUpstairsToSetClock_Movement_0:
# 26 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_up
	step_end

# 56 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_0:
# 57 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_right
# 58 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 62 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_1:
# 63 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 63 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 63 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 63 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 63 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 63 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
	step_end

# 67 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_2:
# 68 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	emote_heart
	step_end

# 74 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_3:
# 75 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 78 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_4:
# 79 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 80 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	face_up
	step_end

# 85 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Movement_5:
# 86 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	jump_in_place_up
	step_end

LittlerootTown_PlayerHouse_1F_EventScript_GoSetTheClock_Text_0:
# 38 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER}, make sure you set the clock we\n"
	.string "got you, honey.$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_0:
# 60 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Dad$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_1:
# 61 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER}, happy birthday!$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_2:
# 73 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "We're still getting everything ready\n"
	.string "here. But isn't it so exciting? You're\l"
	.string "old enough to enter the leagues now!$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_3:
# 83 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Mom$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_4:
# 84 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "It seems like just yesterday you were\n"
	.string "knee-high, dressed up as Wallace,\l"
	.string "talking about being champion. All kids\l"
	.string "leave home someday...$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_5:
# 89 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "But you can't leave until we see you\n"
	.string "off!$"

LittlerootTown_PlayerHouse_1F_EventScript_PreParty_Text_6:
# 90 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Could you go next door and see if the\n"
	.string "Professor finished making the cake?$"

LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_0:
# 108 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "See, {PLAYER}?$"

LittlerootTown_PlayerHouse_1F_EventScript_Mom_Text_1:
# 109 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"

LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_0:
# 115 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.$"

LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_1:
# 116 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "You can always come home.$"

LittlerootTown_PlayerHouse_1F_EventScript_DontPushYourselfTooHard_Text_2:
# 117 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Go for it, honey!$"

LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_0:
# 127 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Remember to come home once in a while.$"

LittlerootTown_PlayerHouse_1F_EventScript_Dad_Text_1:
# 128 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Your mom and I are cheering for you\n"
	.string "every day!$"

LittlerootTown_PlayerHouse_1F_EventScript_TalkToProf_Text_0:
# 134 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "Did you talk to the Professor?$"

LittlerootTown_PlayerHouse_1F_EventScript_Steak_Text_0:
# 140 "data/maps/LittlerootTown_PlayerHouse_1F/scripts.pory"
	.string "This steak isn't going to make itself!$"
