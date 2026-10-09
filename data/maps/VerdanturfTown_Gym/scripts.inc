# 1 "data/maps/VerdanturfTown_Gym/scripts.pory"

# 2 "data/maps/VerdanturfTown_Gym/scripts.pory"
VerdanturfTown_Gym_MapScripts::
# 3 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.byte 0

VerdanturfTown_Gym_EventScript_Daphne::
# 7 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 8 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setspeaker VerdanturfTown_Gym_EventScript_Daphne_Text_0
# 9 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_3, VerdanturfTown_Gym_EventScript_Daphne_2
# 11 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, VerdanturfTown_Gym_EventScript_Daphne_3
# 13 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_TALKED_TO_DAPHNE, VerdanturfTown_Gym_EventScript_Daphne_4
# 19 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setspeaker VerdanturfTown_Gym_EventScript_Daphne_Text_0
# 20 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_6
# 21 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_3
# 22 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_4
# 23 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_5
# 24 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_VERDANTURF_GYM_TALKED_TO_DAPHNE
VerdanturfTown_Gym_EventScript_Daphne_1:
# 26 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return

VerdanturfTown_Gym_EventScript_Daphne_2:
# 10 "data/maps/VerdanturfTown_Gym/scripts.pory"
	call VerdanturnTown_Gym_EventScript_DaphneBattle
	goto VerdanturfTown_Gym_EventScript_Daphne_1

VerdanturfTown_Gym_EventScript_Daphne_3:
# 12 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_1
	goto VerdanturfTown_Gym_EventScript_Daphne_1

VerdanturfTown_Gym_EventScript_Daphne_4:
# 14 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_2
# 15 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_3
# 16 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_4
# 17 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_5
	goto VerdanturfTown_Gym_EventScript_Daphne_1


VerdanturnTown_Gym_EventScript_DaphneBattle::
# 30 "data/maps/VerdanturfTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, VerdanturfTown_Gym_Text_DaphneIntro, VerdanturfTown_Gym_Text_DaphneDefeat, VerdanturfTown_Gym_EventScript_DaphneDefeated, NO_MUSIC
# 31 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_Text_DaphnePostBattle
	return


VerdanturfTown_Gym_EventScript_DaphneDefeated::
# 35 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 36 "data/maps/VerdanturfTown_Gym/scripts.pory"
	message VerdanturfTown_Gym_EventScript_DaphneDefeated_Text_0
# 37 "data/maps/VerdanturfTown_Gym/scripts.pory"
	waitmessage
# 38 "data/maps/VerdanturfTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 39 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_DaphneDefeated_Text_1
# 40 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 41 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 42 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 43 "data/maps/VerdanturfTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 45 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 46 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 47 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return


VerdanturfTown_Gym_EventScript_Flower1::
# 63 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 64 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_unset FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower1_2
# 69 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_1, VerdanturfTown_Gym_EventScript_Flower1_3
# 71 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower1_4
VerdanturfTown_Gym_EventScript_Flower1_1:
# 75 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return

VerdanturfTown_Gym_EventScript_Flower1_2:
# 65 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_0
# 66 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_3
# 67 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_2
# 68 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_1
	goto VerdanturfTown_Gym_EventScript_Flower1_1

VerdanturfTown_Gym_EventScript_Flower1_3:
# 70 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_1
	goto VerdanturfTown_Gym_EventScript_Flower1_1

VerdanturfTown_Gym_EventScript_Flower1_4:
# 72 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_2
# 73 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_VERDANTURF_GYM_FLOWER_1
	goto VerdanturfTown_Gym_EventScript_Flower1_1


VerdanturfTown_Gym_EventScript_Flower2::
# 79 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 80 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower2_2
# 83 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_2
# 84 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_VERDANTURF_GYM_FLOWER_2
VerdanturfTown_Gym_EventScript_Flower2_1:
# 86 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return

VerdanturfTown_Gym_EventScript_Flower2_2:
# 81 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_1
	goto VerdanturfTown_Gym_EventScript_Flower2_1


VerdanturfTown_Gym_EventScript_Flower3::
# 90 "data/maps/VerdanturfTown_Gym/scripts.pory"
	lock
# 91 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_unset FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower3_10
VerdanturfTown_Gym_EventScript_Flower3_8:
# 96 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_2, VerdanturfTown_Gym_EventScript_Flower3_7
VerdanturfTown_Gym_EventScript_Flower3_6:
# 101 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_set FLAG_VERDANTURF_GYM_FLOWER_3, VerdanturfTown_Gym_EventScript_Flower3_4
# 104 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower3_Text_0
# 105 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setflag FLAG_VERDANTURF_GYM_FLOWER_3
VerdanturfTown_Gym_EventScript_Flower3_1:
# 107 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return

VerdanturfTown_Gym_EventScript_Flower3_2:
# 92 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_0
# 93 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_3
# 94 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_2
# 95 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_1
	goto VerdanturfTown_Gym_EventScript_Flower3_1

VerdanturfTown_Gym_EventScript_Flower3_3:
# 97 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_0
# 98 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_3
# 99 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_2
# 100 "data/maps/VerdanturfTown_Gym/scripts.pory"
	clearflag FLAG_VERDANTURF_GYM_FLOWER_1
	goto VerdanturfTown_Gym_EventScript_Flower3_1

VerdanturfTown_Gym_EventScript_Flower3_4:
# 102 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Flower1_Text_1
	goto VerdanturfTown_Gym_EventScript_Flower3_1

VerdanturfTown_Gym_EventScript_Flower3_7:
# 96 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_unset FLAG_VERDANTURF_GYM_FLOWER_1, VerdanturfTown_Gym_EventScript_Flower3_3
	goto VerdanturfTown_Gym_EventScript_Flower3_6

VerdanturfTown_Gym_EventScript_Flower3_10:
# 91 "data/maps/VerdanturfTown_Gym/scripts.pory"
	goto_if_unset FLAG_VERDANTURF_GYM_FLOWER_1, VerdanturfTown_Gym_EventScript_Flower3_2
	goto VerdanturfTown_Gym_EventScript_Flower3_8


VerdanturfTown_Gym_EventScript_Vanessa::
# 111 "data/maps/VerdanturfTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, VerdanturfTown_Gym_Text_VanessaIntro, VerdanturfTown_Gym_Text_VanessaDefeat, VerdanturfTown_Gym_Text_VanessaPostBattle, NO_MUSIC
# 112 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setspeaker VerdanturfTown_Gym_EventScript_Vanessa_Text_0
# 113 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Vanessa_Text_1
# 114 "data/maps/VerdanturfTown_Gym/scripts.pory"
	waitmessage
# 115 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return


VerdanturfTown_Gym_Text_VanessaPostBattle::
# 127 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setspeaker VerdanturfTown_Gym_EventScript_Vanessa_Text_0
# 128 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_1
# 129 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return


VerdanturfTown_Gym_EventScript_Mark::
# 133 "data/maps/VerdanturfTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARK, VerdanturfTown_Gym_Text_MarkIntro, VerdanturfTown_Gym_Text_MarkDefeat, VerdanturfTown_Gym_Text_MarkPostBattle, NO_MUSIC
# 134 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setspeaker VerdanturfTown_Gym_EventScript_Mark_Text_0
# 135 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Vanessa_Text_1
# 136 "data/maps/VerdanturfTown_Gym/scripts.pory"
	waitmessage
# 137 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return


VerdanturfTown_Gym_Text_MarkPostBattle::
# 149 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setspeaker VerdanturfTown_Gym_EventScript_Mark_Text_0
# 150 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_1
# 151 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return


VerdanturfTown_Gym_EventScript_Jonas::
# 155 "data/maps/VerdanturfTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JONAS, VerdanturfTown_Gym_Text_JonasIntro, VerdanturfTown_Gym_Text_JonasDefeat, VerdanturfTown_Gym_Text_JonasPostBattle, NO_MUSIC
# 156 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setspeaker VerdanturfTown_Gym_EventScript_Jonas_Text_0
# 157 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Vanessa_Text_1
# 158 "data/maps/VerdanturfTown_Gym/scripts.pory"
	waitmessage
# 159 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return


VerdanturfTown_Gym_Text_JonasPostBattle::
# 171 "data/maps/VerdanturfTown_Gym/scripts.pory"
	setspeaker VerdanturfTown_Gym_EventScript_Jonas_Text_0
# 172 "data/maps/VerdanturfTown_Gym/scripts.pory"
	msgbox VerdanturfTown_Gym_EventScript_Daphne_Text_1
# 173 "data/maps/VerdanturfTown_Gym/scripts.pory"
	release
	return


VerdanturfTown_Gym_EventScript_Daphne_Text_0:
# 8 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Daphne$"

VerdanturfTown_Gym_EventScript_Daphne_Text_1:
# 12 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Post battle!$"

VerdanturfTown_Gym_EventScript_Daphne_Text_2:
# 14 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Need the hint again?$"

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

VerdanturfTown_Gym_EventScript_Daphne_Text_6:
# 20 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Welcome to the Verdanturf Town Gym! To\n"
	.string "challenge me, you'll have to give me\l"
	.string "three petals from the trees in the\l"
	.string "flower field below.$"

VerdanturfTown_Gym_EventScript_DaphneDefeated_Text_0:
# 36 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "{PLAYER} received the Petal Badge from\n"
	.string "Daphne.$"

VerdanturfTown_Gym_EventScript_DaphneDefeated_Text_1:
# 39 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Take this TM.$"

VerdanturfTown_Gym_EventScript_Flower1_Text_0:
# 65 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You picked a petal, but all the petals in\n"
	.string "the gym grew back and yours withered\l"
	.string "away!$"

VerdanturfTown_Gym_EventScript_Flower1_Text_1:
# 70 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You already have this petal.$"

VerdanturfTown_Gym_EventScript_Flower1_Text_2:
# 72 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You picked a petal from this flower.$"

VerdanturfTown_Gym_EventScript_Flower3_Text_0:
# 104 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You picked a petal from this flower. You\n"
	.string "have all three petals Daphne asked for!$"

VerdanturfTown_Gym_EventScript_Vanessa_Text_0:
# 112 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Vanessa$"

VerdanturfTown_Gym_EventScript_Vanessa_Text_1:
# 113 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Good Luck!$"

VerdanturfTown_Gym_EventScript_Mark_Text_0:
# 134 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Mark$"

VerdanturfTown_Gym_EventScript_Jonas_Text_0:
# 156 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Jonas$"

VerdanturfTown_Gym_Text_DaphneIntro::
# 50 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "I'm Daphne!$"

VerdanturfTown_Gym_Text_DaphneDefeat::
# 54 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You got me!$"

VerdanturfTown_Gym_Text_DaphnePostBattle::
# 58 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "I'm beaten.$"

VerdanturfTown_Gym_Text_VanessaIntro::
# 118 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly! I'll\n"
	.string "show you why we're better!$"

VerdanturfTown_Gym_Text_VanessaDefeat::
# 122 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You were too good for me...$"

VerdanturfTown_Gym_Text_MarkIntro::
# 140 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly! I'll\n"
	.string "show you why we're better!$"

VerdanturfTown_Gym_Text_MarkDefeat::
# 144 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You were too good for me...$"

VerdanturfTown_Gym_Text_JonasIntro::
# 162 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly! I'll\n"
	.string "show you why we're better!$"

VerdanturfTown_Gym_Text_JonasDefeat::
# 166 "data/maps/VerdanturfTown_Gym/scripts.pory"
	.string "You were too good for me...$"
