# 1 "data/maps/OldaleRuins/scripts.pory"

# 2 "data/maps/OldaleRuins/scripts.pory"
// OldaleRuins_MapScripts::
# 3 "data/maps/OldaleRuins/scripts.pory"
// 	.byte 0

OldaleRuins_MapScripts::
# 7 "data/maps/OldaleRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleRuins_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

OldaleRuins_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/OldaleRuins/scripts.pory"
	call OldaleRuins_OnLoad
	return


OldaleRuins_OnLoad::
# 13 "data/maps/OldaleRuins/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, OldaleRuins_OnLoad_1
	return

OldaleRuins_OnLoad_1:
# 14 "data/maps/OldaleRuins/scripts.pory"
	call OldaleRuins_EventScript_CloseVoltaicTomb
	return


OldaleRuins_EventScript_CloseVoltaicTomb::
# 19 "data/maps/OldaleRuins/scripts.pory"
	setmetatile 30, 9, METATILE_General_RockWall_RockBase, TRUE
# 20 "data/maps/OldaleRuins/scripts.pory"
	setmetatile 30, 10, METATILE_General_RockWall_SandBase, TRUE
	return

