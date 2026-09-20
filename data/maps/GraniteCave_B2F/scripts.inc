# 1 "data/maps/GraniteCave_B2F/scripts.pory"

# 2 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_MapScripts::
# 3 "data/maps/GraniteCave_B2F/scripts.pory"
	.byte 0

GraniteCave_EventScript_Lilith::
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat
# 9 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle
	return


GraniteCave_EventScript_Cristian::
# 13 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat
# 14 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle
	return

