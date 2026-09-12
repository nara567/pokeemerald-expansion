# 1 "data/maps/SlateportCity_Gym/scripts.pory"

# 2 "data/maps/SlateportCity_Gym/scripts.pory"
SlateportCity_Gym_MapScripts::
# 3 "data/maps/SlateportCity_Gym/scripts.pory"
	.byte 0

SlateportCity_Gym_EventScript_Gulliver::
# 6 "data/maps/SlateportCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, SlateportCity_Gym_Text_GulliverIntro, SlateportCity_Gym_Text_GulliverDefeat, RustboroCity_Gym_EventScript_GulliverDefeated, NO_MUSIC
# 7 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_Text_GulliverPostBattle
# 8 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return


RustboroCity_Gym_EventScript_GulliverDefeated::
# 20 "data/maps/SlateportCity_Gym/scripts.pory"
	lock
# 21 "data/maps/SlateportCity_Gym/scripts.pory"
	message RustboroCity_Gym_EventScript_GulliverDefeated_Text_0
# 22 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmessage
# 23 "data/maps/SlateportCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 24 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GulliverDefeated_Text_1
# 25 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 26 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 27 "data/maps/SlateportCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 29 "data/maps/SlateportCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 30 "data/maps/SlateportCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 31 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 32 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return


RustboroCity_Gym_EventScript_GulliverDefeated_Text_0:
# 21 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "{PLAYER} received the Beach Badge from\n"
	.string "Gulliver.$"

RustboroCity_Gym_EventScript_GulliverDefeated_Text_1:
# 24 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "The Beach Badges lets you use\n"
	.string "whatever. Take this TM also.$"

SlateportCity_Gym_Text_GulliverIntro::
# 11 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "I'm Gulliver!$"

SlateportCity_Gym_Text_GulliverDefeat::
# 15 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "You got me!$"

SlateportCity_Gym_Text_GulliverPostBattle::
# 35 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Boo hoo.$"
