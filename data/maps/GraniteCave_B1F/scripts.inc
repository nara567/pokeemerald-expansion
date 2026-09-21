# 1 "data/maps/GraniteCave_B1F/scripts.pory"

# 2 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/GraniteCave_B1F/scripts.pory"

# 8 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 11 "data/maps/GraniteCave_B1F/scripts.pory"
	end

GraniteCave_EventScript_Laura::
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat
# 17 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle
# 18 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	return


GraniteCave_EventScript_Brenden::
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle
# 24 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	return

