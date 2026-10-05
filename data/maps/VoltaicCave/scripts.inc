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

