# 1 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_MapScripts::
# 2 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMauville_Inside_OnResume
# 3 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Inside_OnTransition
# 4 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Inside_OnLoad
# 5 "data/maps/NewMauville_Inside/scripts.pory"
	.byte 0
# 6 "data/maps/NewMauville_Inside/scripts.pory"

# 7 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume:
# 8 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 9 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 10 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauville_Inside_EventScript_TryRemoveVoltorb
# 11 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 12 "data/maps/NewMauville_Inside/scripts.pory"

# 13 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_TryRemoveVoltorb::
# 14 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 16 "data/maps/NewMauville_Inside/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 18 "data/maps/NewMauville_Inside/scripts.pory"

# 19 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition:
# 20 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 21 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 22 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb1
# 23 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb2
# 24 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb3
# 25 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 26 "data/maps/NewMauville_Inside/scripts.pory"

# 27 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb1::
# 28 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1
# 29 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 30 "data/maps/NewMauville_Inside/scripts.pory"

# 31 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb2::
# 32 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2
# 33 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 34 "data/maps/NewMauville_Inside/scripts.pory"

# 35 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb3::
# 36 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3
# 37 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 38 "data/maps/NewMauville_Inside/scripts.pory"

# 39 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnLoad:
# 40 "data/maps/NewMauville_Inside/scripts.pory"
	setflashlevel 4
# 41 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq VAR_NEW_MAUVILLE_STATE, 2, NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 42 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 43 "data/maps/NewMauville_Inside/scripts.pory"

# 44 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_BlueButton::
# 45 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 46 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 48 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 49 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 50 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 51 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 52 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 53 "data/maps/NewMauville_Inside/scripts.pory"

# 54 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GreenButton::
# 55 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 56 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 57 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 1
# 58 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 59 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 60 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 61 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 62 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 63 "data/maps/NewMauville_Inside/scripts.pory"

# 64 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateBlueButton::
# 65 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 66 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 67 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 68 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 69 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 70 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 71 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 72 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 73 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 74 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 75 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 76 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 77 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 78 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 79 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 80 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 81 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 82 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 83 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 84 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 85 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 86 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 87 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 88 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 89 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 90 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 91 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 92 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 93 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 94 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 95 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Pressed, FALSE
# 96 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Pressed, FALSE
# 97 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Pressed, FALSE
# 98 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Green, FALSE
# 99 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Green, FALSE
# 100 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Green, FALSE
# 101 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Green, FALSE
# 102 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 103 "data/maps/NewMauville_Inside/scripts.pory"

# 104 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateGreenButton::
# 105 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 106 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 107 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 108 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 109 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 110 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 111 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 112 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 113 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 114 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 115 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 116 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 117 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 118 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 119 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 120 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 121 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 122 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 123 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 124 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 125 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 126 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 127 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 128 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 129 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 130 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 131 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 132 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 133 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 134 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 135 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Pressed, FALSE
# 136 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Pressed, FALSE
# 137 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Blue, FALSE
# 138 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Blue, FALSE
# 139 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Blue, FALSE
# 140 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Blue, FALSE
# 141 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Blue, FALSE
# 142 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 143 "data/maps/NewMauville_Inside/scripts.pory"

# 144 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_RedButton::
# 145 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 146 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 147 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 2
# 148 "data/maps/NewMauville_Inside/scripts.pory"

# 149 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetGeneratorOffMetatiles::
# 150 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 6, METATILE_BikeShop_Button_Pressed, FALSE
# 151 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 2, METATILE_BikeShop_Generator_Off_Tile0, TRUE
# 152 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 2, METATILE_BikeShop_Generator_Off_Tile1, TRUE
# 153 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 2, METATILE_BikeShop_Generator_Off_Tile2, TRUE
# 154 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 2, METATILE_BikeShop_Generator_Off_Tile3, TRUE
# 155 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 3, METATILE_BikeShop_Generator_Off_Tile4, TRUE
# 156 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 3, METATILE_BikeShop_Generator_Off_Tile5, TRUE
# 157 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 3, METATILE_BikeShop_Generator_Off_Tile6, TRUE
# 158 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 3, METATILE_BikeShop_Generator_Off_Tile7, TRUE
# 159 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 160 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 161 "data/maps/NewMauville_Inside/scripts.pory"

# 162 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Generator::
# 163 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 164 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, NewMauville_Inside_EventScript_GeneratorOff
# 165 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorRadiatingHeat, MSGBOX_DEFAULT
# 166 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 167 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 168 "data/maps/NewMauville_Inside/scripts.pory"

# 169 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GeneratorOff::
# 170 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
# 171 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 172 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 173 "data/maps/NewMauville_Inside/scripts.pory"

# 174 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1::
# 175 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 176 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 177 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB_HISUI, 25
# 178 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 179 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB_HISUI, CRY_MODE_ENCOUNTER
# 180 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 181 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 182 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 183 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 184 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 185 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 186 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb1
# 187 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb1
# 188 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb1
# 189 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 190 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 191 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 192 "data/maps/NewMauville_Inside/scripts.pory"

# 193 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb1::
# 194 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 195 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 196 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 197 "data/maps/NewMauville_Inside/scripts.pory"

# 198 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2::
# 199 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 200 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 201 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB_HISUI, 25
# 202 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 203 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB_HISUI, CRY_MODE_ENCOUNTER
# 204 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 205 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 206 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 207 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 208 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 209 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 210 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb2
# 211 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb2
# 212 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb2
# 213 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 214 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 215 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 216 "data/maps/NewMauville_Inside/scripts.pory"

# 217 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb2::
# 218 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 219 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 220 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 221 "data/maps/NewMauville_Inside/scripts.pory"

# 222 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3::
# 223 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 224 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 225 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB_HISUI, 25
# 226 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 227 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB_HISUI, CRY_MODE_ENCOUNTER
# 228 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 229 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 230 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 231 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 232 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 233 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 234 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb3
# 235 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb3
# 236 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb3
# 237 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 238 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 239 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 240 "data/maps/NewMauville_Inside/scripts.pory"

# 241 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb3::
# 242 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 243 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 244 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 245 "data/maps/NewMauville_Inside/scripts.pory"

# 246 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorRadiatingHeat:
# 247 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator is radiating heat that\n"
# 248 "data/maps/NewMauville_Inside/scripts.pory"
	.string "can be felt even at a distance.\p"
# 249 "data/maps/NewMauville_Inside/scripts.pory"
	.string "It looks like it should be turned off\n"
# 250 "data/maps/NewMauville_Inside/scripts.pory"
	.string "as soon as possible.$"
# 251 "data/maps/NewMauville_Inside/scripts.pory"

# 252 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorQuietedDown:
# 253 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator quieted down.$"
# 254 "data/maps/NewMauville_Inside/scripts.pory"

# 255 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped:
# 256 "data/maps/NewMauville_Inside/scripts.pory"
	.string "{PLAYER} stepped on the switch.\p"
# 257 "data/maps/NewMauville_Inside/scripts.pory"
	.string "Click…\p"
# 258 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\n"
# 259 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\p"
# 260 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator appears to have\n"
# 261 "data/maps/NewMauville_Inside/scripts.pory"
	.string "stopped…$"

NewMauville_Inside_EventScript_GaiaGrunt1::
# 265 "data/maps/NewMauville_Inside/scripts.pory"
	trainerbattle_single TRAINER_NEWMAUVILLE_GRUNT1, Route106_Text_NedIntro, Route106_Text_NedDefeated
	return


NewMauville_Inside_EventScript_GaiaGrunt2::
# 269 "data/maps/NewMauville_Inside/scripts.pory"
	trainerbattle_single TRAINER_NEWMAUVILLE_GRUNT2, Route106_Text_NedIntro, Route106_Text_NedDefeated
	return


NewMauville_Inside_EventScript_GaiaGrunt3::
# 273 "data/maps/NewMauville_Inside/scripts.pory"
	trainerbattle_single TRAINER_NEWMAUVILLE_GRUNT3, Route106_Text_NedIntro, Route106_Text_NedDefeated
	return


NewMauville_Inside_EventScript_GaiaGrunt4::
# 277 "data/maps/NewMauville_Inside/scripts.pory"
	trainerbattle_single TRAINER_NEWMAUVILLE_GRUNT4, Route106_Text_NedIntro, Route106_Text_NedDefeated
	return


NewMauville_Inside_EventScript_GaiaGrunt5::
# 281 "data/maps/NewMauville_Inside/scripts.pory"
	trainerbattle_single TRAINER_NEWMAUVILLE_GRUNT5, Route106_Text_NedIntro, Route106_Text_NedDefeated
	return


NewMauville_Inside_EventScript_GaiaGrunt6::
# 285 "data/maps/NewMauville_Inside/scripts.pory"
	trainerbattle_single TRAINER_NEWMAUVILLE_GRUNT6, Route106_Text_NedIntro, Route106_Text_NedDefeated
	return


NewMauville_Inside_EventScript_GaiaGrunt7::
# 289 "data/maps/NewMauville_Inside/scripts.pory"
	trainerbattle_single TRAINER_NEWMAUVILLE_GRUNT7, Route106_Text_NedIntro, Route106_Text_NedDefeated
	return


NewMauville_Inside_EventScript_GaiaGrunt8::
# 293 "data/maps/NewMauville_Inside/scripts.pory"
	trainerbattle_single TRAINER_NEWMAUVILLE_GRUNT8, Route106_Text_NedIntro, Route106_Text_NedDefeated
	return


NewMauville_Inside_Trigger1::
# 297 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_Sierra
	return


NewMauville_Inside_Trigger2::
# 301 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_Sierra
	return


NewMauville_Inside_Trigger3::
# 305 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_Sierra
	return


NewMauville_Inside_Trigger4::
# 309 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_Sierra
	return


NewMauville_Inside_Trigger5::
# 313 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_Sierra
	return


NewMauville_Inside_EventScript_Sierra::
# 317 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 318 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 319 "data/maps/NewMauville_Inside/scripts.pory"
	applymovement LOCALID_SIERRA, NewMauville_Inside_EventScript_Sierra_Movement_0
# 324 "data/maps/NewMauville_Inside/scripts.pory"
	waitmovement 0
# 325 "data/maps/NewMauville_Inside/scripts.pory"
	setspeaker NewMauville_Inside_EventScript_Sierra_Text_0
# 326 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_EventScript_Sierra_Text_1
# 327 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_EventScript_Sierra_Text_2
# 328 "data/maps/NewMauville_Inside/scripts.pory"
	applymovement LOCALID_SIERRA, NewMauville_Inside_EventScript_Sierra_Movement_1
# 331 "data/maps/NewMauville_Inside/scripts.pory"
	waitmovement 0
# 332 "data/maps/NewMauville_Inside/scripts.pory"
	setspeaker NULL
# 333 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_RedButton
# 334 "data/maps/NewMauville_Inside/scripts.pory"
	applymovement LOCALID_SIERRA, NewMauville_Inside_EventScript_Sierra_Movement_2
# 337 "data/maps/NewMauville_Inside/scripts.pory"
	waitmovement 0
# 338 "data/maps/NewMauville_Inside/scripts.pory"
	setspeaker NewMauville_Inside_EventScript_Sierra_Text_0
# 339 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_EventScript_Sierra_Text_3
# 340 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SierraBattle
	return


NewMauville_Inside_EventScript_SierraBattle::
# 344 "data/maps/NewMauville_Inside/scripts.pory"
	trainerbattle_no_intro TRAINER_SIERRA_NEW_MAUVILLE, Route106_Text_NedDefeated
# 345 "data/maps/NewMauville_Inside/scripts.pory"
	switch VAR_RESULT
# 346 "data/maps/NewMauville_Inside/scripts.pory"
	case 1, NewMauville_Inside_EventScript_SierraBattle_3
NewMauville_Inside_EventScript_SierraBattle_1:
# 348 "data/maps/NewMauville_Inside/scripts.pory"
	fadescreen FADE_TO_BLACK
# 349 "data/maps/NewMauville_Inside/scripts.pory"
	special SetCB2WhiteOut
	return

NewMauville_Inside_EventScript_SierraBattle_3:
# 346 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedSierra
	goto NewMauville_Inside_EventScript_SierraBattle_1


NewMauville_Inside_EventScript_DefeatedSierra::
# 353 "data/maps/NewMauville_Inside/scripts.pory"
	setspeaker NewMauville_Inside_EventScript_Sierra_Text_0
# 354 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_EventScript_DefeatedSierra_Text_0
# 355 "data/maps/NewMauville_Inside/scripts.pory"
	fadedefaultbgm
# 356 "data/maps/NewMauville_Inside/scripts.pory"
	fadescreen FADE_TO_BLACK
# 357 "data/maps/NewMauville_Inside/scripts.pory"
	removeobject LOCALID_SIERRA
# 358 "data/maps/NewMauville_Inside/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 359 "data/maps/NewMauville_Inside/scripts.pory"
	delay 30
# 360 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_HIDE_NEW_MAUVILLE_TEAM_GAIA
# 361 "data/maps/NewMauville_Inside/scripts.pory"
	release
	return


# 319 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Sierra_Movement_0:
# 320 "data/maps/NewMauville_Inside/scripts.pory"
	emote_exclamation_mark
# 321 "data/maps/NewMauville_Inside/scripts.pory"
	delay_16
# 322 "data/maps/NewMauville_Inside/scripts.pory"
	face_left
	step_end

# 328 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Sierra_Movement_1:
# 329 "data/maps/NewMauville_Inside/scripts.pory"
	walk_right
	step_end

# 334 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Sierra_Movement_2:
# 335 "data/maps/NewMauville_Inside/scripts.pory"
	face_left
	step_end

NewMauville_Inside_EventScript_Sierra_Text_0:
# 325 "data/maps/NewMauville_Inside/scripts.pory"
	.string "Sierra$"

NewMauville_Inside_EventScript_Sierra_Text_1:
# 326 "data/maps/NewMauville_Inside/scripts.pory"
	.string "So you're the one Adam spoke of...$"

NewMauville_Inside_EventScript_Sierra_Text_2:
# 327 "data/maps/NewMauville_Inside/scripts.pory"
	.string "But you're too late.$"

NewMauville_Inside_EventScript_Sierra_Text_3:
# 339 "data/maps/NewMauville_Inside/scripts.pory"
	.string "Now, let's deal with the rabble.$"

NewMauville_Inside_EventScript_DefeatedSierra_Text_0:
# 354 "data/maps/NewMauville_Inside/scripts.pory"
	.string "It matters not! I stalled you enough\n"
	.string "for Adam to do what he needs. Later,\l"
	.string "loser.$"
