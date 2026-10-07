# 1 "data/maps/VoltaicCave/scripts.pory"

# 2 "data/maps/VoltaicCave/scripts.pory"
VoltaicCave_MapScripts::
# 3 "data/maps/VoltaicCave/scripts.pory"
	//.byte 0

VoltaticCave_MapScripts::
# 7 "data/maps/VoltaicCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, VoltaticCave_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/VoltaicCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltaticCave_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/VoltaicCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VoltaticCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VoltaticCave_MapScripts_MAP_SCRIPT_ON_RESUME:
# 7 "data/maps/VoltaicCave/scripts.pory"
	call VoltaicCave_OnResume
	return

VoltaticCave_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/VoltaicCave/scripts.pory"
	call VoltaicCave_OnLoad
	return

VoltaticCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/VoltaicCave/scripts.pory"
	call VoltaicCave_OnTransition
	return


VoltaicCave_OnResume::
# 13 "data/maps/VoltaicCave/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, VoltaicCave_OnResume_1
	return

VoltaicCave_OnResume_1:
# 14 "data/maps/VoltaicCave/scripts.pory"
	call VoltaicCave_EventScript_TryRemoveRegieleki
	return


VoltaicCave_OnLoad::
# 19 "data/maps/VoltaicCave/scripts.pory"
	goto_if_unset FLAG_SYS_REGIELEKI_PUZZLE_COMPLETED, VoltaicCave_OnLoad_1
	return

VoltaicCave_OnLoad_1:
# 20 "data/maps/VoltaicCave/scripts.pory"
	call VoltaicCave_EventScript_HideRegiEntrance
	return


VoltaicCave_OnTransition::
# 25 "data/maps/VoltaicCave/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGIELEKI, VoltaicCave_OnTransition_1
	return

VoltaicCave_OnTransition_1:
# 26 "data/maps/VoltaicCave/scripts.pory"
	call VoltaicCave_EventScript_ShowRegieleki
	return


VoltaicCave_EventScript_HideRegiEntrance::
# 31 "data/maps/VoltaicCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 32 "data/maps/VoltaicCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 33 "data/maps/VoltaicCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 34 "data/maps/VoltaicCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 35 "data/maps/VoltaicCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 36 "data/maps/VoltaicCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return


VoltaicCave_EventScript_TryRemoveRegieleki::
# 40 "data/maps/VoltaicCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 41 "data/maps/VoltaicCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne VoltaicCave_EventScript_TryRemoveRegieleki_2
VoltaicCave_EventScript_TryRemoveRegieleki_1:
# 44 "data/maps/VoltaicCave/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

VoltaicCave_EventScript_TryRemoveRegieleki_2:
# 42 "data/maps/VoltaicCave/scripts.pory"
	call Common_EventScript_NopReturn
	goto VoltaicCave_EventScript_TryRemoveRegieleki_1


VoltaicCave_EventScript_ShowRegieleki::
# 49 "data/maps/VoltaicCave/scripts.pory"
	clearflag FLAG_HIDE_REGIELEKI
	return


VoltaicCave_EventScript_CaveEntranceSide::
# 54 "data/maps/VoltaicCave/scripts.pory"
	lock
# 55 "data/maps/VoltaicCave/scripts.pory"
	braillemsgbox VoltaicCave_Braille_SpeedAhead
# 56 "data/maps/VoltaicCave/scripts.pory"
	release
	return


VoltaicCave_EventScript_CaveEntranceMiddle::
# 60 "data/maps/VoltaicCave/scripts.pory"
	lock
# 61 "data/maps/VoltaicCave/scripts.pory"
	goto_if_set FLAG_SYS_REGIELEKI_PUZZLE_COMPLETED, VoltaicCave_EventScript_CaveEntranceMiddle_2
VoltaicCave_EventScript_CaveEntranceMiddle_1:
# 64 "data/maps/VoltaicCave/scripts.pory"
	braillemsgbox VoltaicCave_Braille_SpeedAhead
# 65 "data/maps/VoltaicCave/scripts.pory"
	release
	return

VoltaicCave_EventScript_CaveEntranceMiddle_2:
# 62 "data/maps/VoltaicCave/scripts.pory"
	call VoltaticCave_EventScript_BigHoleInWall
	goto VoltaicCave_EventScript_CaveEntranceMiddle_1


VoltaticCave_EventScript_BigHoleInWall::
# 69 "data/maps/VoltaicCave/scripts.pory"
	msgbox gText_BigHoleInTheWall
# 70 "data/maps/VoltaicCave/scripts.pory"
	release
	return


VoltaicCave_EventScript_AdamTrigger_Left::
# 74 "data/maps/VoltaicCave/scripts.pory"
	goto_if_unset FLAG_HIDE_VOLTAIC_CAVE_ADAM, VoltaicCave_EventScript_AdamTrigger_Left_1
	return

VoltaicCave_EventScript_AdamTrigger_Left_1:
# 75 "data/maps/VoltaicCave/scripts.pory"
	lock
# 76 "data/maps/VoltaicCave/scripts.pory"
	applymovement LOCALID_PLAYER, VoltaicCave_EventScript_AdamTrigger_Left_Movement_0
# 81 "data/maps/VoltaicCave/scripts.pory"
	waitmovement 0
# 82 "data/maps/VoltaicCave/scripts.pory"
	goto VoltaicCave_EventScript_Adam
	return


VoltaicCave_EventScript_AdamTrigger_Right::
# 87 "data/maps/VoltaicCave/scripts.pory"
	goto_if_unset FLAG_HIDE_VOLTAIC_CAVE_ADAM, VoltaicCave_EventScript_AdamTrigger_Right_1
	return

VoltaicCave_EventScript_AdamTrigger_Right_1:
# 88 "data/maps/VoltaicCave/scripts.pory"
	lock
# 89 "data/maps/VoltaicCave/scripts.pory"
	applymovement LOCALID_PLAYER, VoltaicCave_EventScript_AdamTrigger_Right_Movement_0
# 94 "data/maps/VoltaicCave/scripts.pory"
	waitmovement 0
# 95 "data/maps/VoltaicCave/scripts.pory"
	goto VoltaicCave_EventScript_Adam
	return


VoltaicCave_EventScript_AdamTrigger_Up::
# 100 "data/maps/VoltaicCave/scripts.pory"
	goto_if_unset FLAG_HIDE_VOLTAIC_CAVE_ADAM, VoltaicCave_EventScript_AdamTrigger_Up_1
	return

VoltaicCave_EventScript_AdamTrigger_Up_1:
# 101 "data/maps/VoltaicCave/scripts.pory"
	lock
# 102 "data/maps/VoltaicCave/scripts.pory"
	applymovement LOCALID_PLAYER, VoltaicCave_EventScript_AdamTrigger_Up_Movement_0
# 105 "data/maps/VoltaicCave/scripts.pory"
	waitmovement 0
# 106 "data/maps/VoltaicCave/scripts.pory"
	goto VoltaicCave_EventScript_Adam
	return


VoltaicCave_EventScript_Adam::
# 111 "data/maps/VoltaicCave/scripts.pory"
	lock
# 112 "data/maps/VoltaicCave/scripts.pory"
	applymovement LOCALID_ADAM, VoltaicCave_EventScript_Adam_Movement_0
# 115 "data/maps/VoltaicCave/scripts.pory"
	playmoncry SPECIES_REGIELEKI, CRY_MODE_NORMAL
# 116 "data/maps/VoltaicCave/scripts.pory"
	waitmoncry
# 117 "data/maps/VoltaicCave/scripts.pory"
	playse SE_FAINT
# 118 "data/maps/VoltaicCave/scripts.pory"
	waitse
# 119 "data/maps/VoltaicCave/scripts.pory"
	removeobject LOCALID_REGIELEKI
# 120 "data/maps/VoltaicCave/scripts.pory"
	setflag FLAG_HIDE_REGIELEKI
# 121 "data/maps/VoltaicCave/scripts.pory"
	waitmovement 0
# 122 "data/maps/VoltaicCave/scripts.pory"
	setspeaker VoltaicCave_EventScript_Adam_Text_0
# 123 "data/maps/VoltaicCave/scripts.pory"
	msgbox VoltaicCave_EventScript_Adam_Text_1
# 124 "data/maps/VoltaicCave/scripts.pory"
	msgbox VoltaicCave_EventScript_Adam_Text_2
# 125 "data/maps/VoltaicCave/scripts.pory"
	playse SE_PIN
# 126 "data/maps/VoltaicCave/scripts.pory"
	applymovement LOCALID_ADAM, VoltaicCave_EventScript_Adam_Movement_1
# 131 "data/maps/VoltaicCave/scripts.pory"
	waitmovement 0
# 132 "data/maps/VoltaicCave/scripts.pory"
	msgbox VoltaicCave_EventScript_Adam_Text_3
# 133 "data/maps/VoltaicCave/scripts.pory"
	msgbox VoltaicCave_EventScript_Adam_Text_4
# 134 "data/maps/VoltaicCave/scripts.pory"
	trainerbattle_no_intro TRAINER_ADAM_VOLTAIC_CAVE, VoltaicCave_Text_AdamLose
# 135 "data/maps/VoltaicCave/scripts.pory"
	msgbox VoltaicCave_EventScript_Adam_Text_5
# 136 "data/maps/VoltaicCave/scripts.pory"
	applymovement LOCALID_ADAM, VoltaicCave_EventScript_Adam_Movement_2
# 141 "data/maps/VoltaicCave/scripts.pory"
	applymovement LOCALID_PLAYER, VoltaicCave_EventScript_Adam_Movement_3
# 145 "data/maps/VoltaicCave/scripts.pory"
	waitmovement LOCALID_ADAM
# 146 "data/maps/VoltaicCave/scripts.pory"
	removeobject LOCALID_ADAM
# 147 "data/maps/VoltaicCave/scripts.pory"
	setflag FLAG_HIDE_VOLTAIC_CAVE_ADAM
# 148 "data/maps/VoltaicCave/scripts.pory"
	playse SE_RG_DOOR
# 149 "data/maps/VoltaicCave/scripts.pory"
	release
	return


# 76 "data/maps/VoltaicCave/scripts.pory"
VoltaicCave_EventScript_AdamTrigger_Left_Movement_0:
# 77 "data/maps/VoltaicCave/scripts.pory"
	walk_up
# 77 "data/maps/VoltaicCave/scripts.pory"
	walk_up
# 78 "data/maps/VoltaicCave/scripts.pory"
	walk_right
# 79 "data/maps/VoltaicCave/scripts.pory"
	face_up
	step_end

# 89 "data/maps/VoltaicCave/scripts.pory"
VoltaicCave_EventScript_AdamTrigger_Right_Movement_0:
# 90 "data/maps/VoltaicCave/scripts.pory"
	walk_up
# 90 "data/maps/VoltaicCave/scripts.pory"
	walk_up
# 91 "data/maps/VoltaicCave/scripts.pory"
	walk_left
# 92 "data/maps/VoltaicCave/scripts.pory"
	face_up
	step_end

# 102 "data/maps/VoltaicCave/scripts.pory"
VoltaicCave_EventScript_AdamTrigger_Up_Movement_0:
# 103 "data/maps/VoltaicCave/scripts.pory"
	walk_up
	step_end

# 112 "data/maps/VoltaicCave/scripts.pory"
VoltaicCave_EventScript_Adam_Movement_0:
# 113 "data/maps/VoltaicCave/scripts.pory"
	jump_in_place_up
	step_end

# 126 "data/maps/VoltaicCave/scripts.pory"
VoltaicCave_EventScript_Adam_Movement_1:
# 127 "data/maps/VoltaicCave/scripts.pory"
	emote_exclamation_mark
# 128 "data/maps/VoltaicCave/scripts.pory"
	delay_8
# 129 "data/maps/VoltaicCave/scripts.pory"
	face_down
	step_end

# 136 "data/maps/VoltaicCave/scripts.pory"
VoltaicCave_EventScript_Adam_Movement_2:
# 137 "data/maps/VoltaicCave/scripts.pory"
	walk_down
# 138 "data/maps/VoltaicCave/scripts.pory"
	walk_down
# 139 "data/maps/VoltaicCave/scripts.pory"
	walk_down
	step_end

# 141 "data/maps/VoltaicCave/scripts.pory"
VoltaicCave_EventScript_Adam_Movement_3:
# 142 "data/maps/VoltaicCave/scripts.pory"
	delay_8
# 143 "data/maps/VoltaicCave/scripts.pory"
	walk_left
	step_end

VoltaicCave_EventScript_Adam_Text_0:
# 122 "data/maps/VoltaicCave/scripts.pory"
	.string "Adam$"

VoltaicCave_EventScript_Adam_Text_1:
# 123 "data/maps/VoltaicCave/scripts.pory"
	.string "At last...$"

VoltaicCave_EventScript_Adam_Text_2:
# 124 "data/maps/VoltaicCave/scripts.pory"
	.string "The power of this Tera Orb is just what\n"
	.string "we're looking for. Awakening Regigigas...$"

VoltaicCave_EventScript_Adam_Text_3:
# 132 "data/maps/VoltaicCave/scripts.pory"
	.string "It's you, from the museum. I guess\n"
	.string "Sierra needs more training.$"

VoltaicCave_EventScript_Adam_Text_4:
# 133 "data/maps/VoltaicCave/scripts.pory"
	.string "I've already gotten what I've come for.\n"
	.string "But why not give you a taste of power!$"

VoltaicCave_EventScript_Adam_Text_5:
# 135 "data/maps/VoltaicCave/scripts.pory"
	.string "It doesn't matter! Once we've collected\n"
	.string "the energy from the golems, Regigigas\l"
	.string "will be mine!$"

VoltaicCave_Text_AdamLose::
# 152 "data/maps/VoltaicCave/scripts.pory"
	.string "Fascinating.$"
