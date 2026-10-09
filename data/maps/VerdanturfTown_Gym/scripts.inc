# 1 "data/maps/VerdanturfTown_Gym/scripts.pory"

# 2 "data/maps/VerdanturfTown_Gym/scripts.pory"
VerdanturfTown_Gym_MapScripts::
# 3 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.byte 0

VerdanturfTown_Gym_EventScript_Daphne::
# 7 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 8 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_3, VerdanturfTown_Gym_EventScript_Daphne_2
# 10 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, VerdanturfTown_Gym_EventScript_Daphne_3
# 13 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setspeaker VerdanturfTown_Gym_EventScript_Daphne_Text_1
# 14 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_2
# 15 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_3
# 16 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_4
# 17 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_5
VerdanturfTown_Gym_EventScript_Daphne_1:
# 19 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return

VerdanturfTown_Gym_EventScript_Daphne_2:
# 9 "data/maps/VerdanturfTown_Gym/scripts.pory"
	call VerdanturnTown_Gym_EventScript_DaphneBattle
	goto VerdanturfTown_Gym_EventScript_Daphne_1

VerdanturfTown_Gym_EventScript_Daphne_3:
# 11 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_0
	goto VerdanturfTown_Gym_EventScript_Daphne_1


VerdanturnTown_Gym_EventScript_DaphneBattle::
# 23 "data/maps/VerdanturfTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, VerdanturfTown_Gym_Text_DaphneIntro, VerdanturfTown_Gym_Text_DaphneDefeat, VerdanturfTown_Gym_EventScript_DaphneDefeated, NO_MUSIC
# 24 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_Text_DaphnePostBattle
	return


VerdanturfTown_Gym_EventScript_DaphneDefeated::
# 28 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 29 "data/maps/VerdanturfTown_Gym/scripts.pory"
	message VerdanturfTown_Gym_EventScript_DaphneDefeated_Text_0
# 30 "data/maps/VerdanturfTown_Gym/scripts.pory"
	waitmessage
# 31 "data/maps/VerdanturfTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 32 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_DaphneDefeated_Text_1
# 33 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 34 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 35 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 36 "data/maps/VerdanturfTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 38 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 39 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 40 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return


VerdanturfTown_Gym_EventScript_Flower1::
# 56 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 57 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_unset FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower1_2
# 62 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_1, VerdanturfTown_Gym_EventScript_Flower1_3
# 64 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower1_4
VerdanturfTown_Gym_EventScript_Flower1_1:
# 68 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return

VerdanturfTown_Gym_EventScript_Flower1_2:
# 58 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_0
# 59 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_3
# 60 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_2
# 61 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_1
	goto VerdanturfTown_Gym_EventScript_Flower1_1

VerdanturfTown_Gym_EventScript_Flower1_3:
# 63 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_1
	goto VerdanturfTown_Gym_EventScript_Flower1_1

VerdanturfTown_Gym_EventScript_Flower1_4:
# 65 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_2
# 66 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_VERDANTURF_GYM_FLOWER_1
	goto VerdanturfTown_Gym_EventScript_Flower1_1


VerdanturfTown_Gym_EventScript_Flower2::
# 72 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 73 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower2_2
# 76 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_2
# 77 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_VERDANTURF_GYM_FLOWER_2
VerdanturfTown_Gym_EventScript_Flower2_1:
# 79 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return

VerdanturfTown_Gym_EventScript_Flower2_2:
# 74 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_1
	goto VerdanturfTown_Gym_EventScript_Flower2_1


VerdanturfTown_Gym_EventScript_Flower3::
# 83 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 84 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_unset FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower3_10
VerdanturfTown_Gym_EventScript_Flower3_8:
# 89 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower3_7
VerdanturfTown_Gym_EventScript_Flower3_6:
# 94 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_3, VerdanturfTown_Gym_EventScript_Flower3_4
# 97 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower3_Text_0
# 98 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_VERDANTURF_GYM_FLOWER_3
VerdanturfTown_Gym_EventScript_Flower3_1:
# 100 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return

VerdanturfTown_Gym_EventScript_Flower3_2:
# 85 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_0
# 86 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_3
# 87 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_2
# 88 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_1
	goto VerdanturfTown_Gym_EventScript_Flower3_1

VerdanturfTown_Gym_EventScript_Flower3_3:
# 90 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_0
# 91 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_3
# 92 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_2
# 93 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_1
	goto VerdanturfTown_Gym_EventScript_Flower3_1

VerdanturfTown_Gym_EventScript_Flower3_4:
# 95 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_1
	goto VerdanturfTown_Gym_EventScript_Flower3_1

VerdanturfTown_Gym_EventScript_Flower3_7:
# 89 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_unset FLAG_VERDANTURF_GYM_FLOWER_1, VerdanturfTown_Gym_EventScript_Flower3_3
	goto VerdanturfTown_Gym_EventScript_Flower3_6

VerdanturfTown_Gym_EventScript_Flower3_10:
# 84 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_unset FLAG_VERDANTURF_GYM_FLOWER_1, VerdanturfTown_Gym_EventScript_Flower3_2
	goto VerdanturfTown_Gym_EventScript_Flower3_8


VerdanturfTown_Gym_EventScript_Daphne_Text_0:
# 11 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Post battle!$"

VerdanturfTown_Gym_EventScript_Daphne_Text_1:
# 13 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Daphne$"

VerdanturfTown_Gym_EventScript_Daphne_Text_2:
# 14 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Welcome to the Verdanturf Town Gym! To\n"
	.string "challenge me, you'll have to give me\l"
	.string "three petals from the trees in the\l"
	.string "flower field below.$"

VerdanturfTown_Gym_EventScript_Daphne_Text_3:
# 15 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Start at the heart of the blooming\n"
	.string "array,$"

VerdanturfTown_Gym_EventScript_Daphne_Text_4:
# 16 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Reach for the highest petals of the\n"
	.string "day,$"

VerdanturfTown_Gym_EventScript_Daphne_Text_5:
# 17 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Then finish where the lowest roots lay.$"

VerdanturfTown_Gym_EventScript_DaphneDefeated_Text_0:
# 29 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "{PLAYER} received the Petal Badge from\n"
	.string "Daphne.$"

VerdanturfTown_Gym_EventScript_DaphneDefeated_Text_1:
# 32 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Take this TM.$"

VerdanturfTown_Gym_EventScript_Flower1_Text_0:
# 58 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You picked a petal, but all the petals in\n"
	.string "the gym grew back and yours withered\l"
	.string "away!$"

VerdanturfTown_Gym_EventScript_Flower1_Text_1:
# 63 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You already have this petal.$"

VerdanturfTown_Gym_EventScript_Flower1_Text_2:
# 65 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You picked a petal from this flower.$"

VerdanturfTown_Gym_EventScript_Flower3_Text_0:
# 97 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You picked a petal from this flower. You\n"
	.string "have all three petals Daphne asked for!$"

VerdanturfTown_Gym_Text_DaphneIntro::
# 43 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "I'm Daphne!$"

VerdanturfTown_Gym_Text_DaphneDefeat::
# 47 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You got me!$"

VerdanturfTown_Gym_Text_DaphnePostBattle::
# 51 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "I'm beaten.$"
