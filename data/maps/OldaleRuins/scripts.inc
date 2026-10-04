# 1 "data/maps/OldaleRuins/scripts.pory"

# 2 "data/maps/OldaleRuins/scripts.pory"
// OldaleRuins_MapScripts::
# 3 "data/maps/OldaleRuins/scripts.pory"
// 	.byte 0

OldaleRuins_MapScripts::
# 7 "data/maps/OldaleRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleRuins_OnLoad
	.byte 0


OldaleRuins_OnLoad::
# 11 "data/maps/OldaleRuins/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, OldaleRuins_OnLoad_1
	return

OldaleRuins_OnLoad_1:
# 12 "data/maps/OldaleRuins/scripts.pory"
	call OldaleRuins_EventScript_CloseVoltaicTomb
	return


OldaleRuins_EventScript_CloseVoltaicTomb::
# 17 "data/maps/OldaleRuins/scripts.pory"
	setmetatile 30, 7, METATILE_General_RockWall_RockBase, TRUE
# 18 "data/maps/OldaleRuins/scripts.pory"
	setmetatile 30, 8, METATILE_General_RockWall_SandBase, TRUE
	return

