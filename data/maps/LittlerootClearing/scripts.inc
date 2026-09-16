# 1 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_MapScripts::
# 2 "data/maps/LittlerootClearing/scripts.pory"
	.byte 0

LittlerootClearing_EventScript_May::
# 6 "data/maps/LittlerootClearing/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 7 "data/maps/LittlerootClearing/scripts.pory"
	case 3, LittlerootClearing_EventScript_May_2
# 8 "data/maps/LittlerootClearing/scripts.pory"
	case 4, LittlerootClearing_EventScript_May_3
# 9 "data/maps/LittlerootClearing/scripts.pory"
	case 5, LittlerootClearing_EventScript_May_4
	return

LittlerootClearing_EventScript_May_2:
# 7 "data/maps/LittlerootClearing/scripts.pory"
	call LittlerootClearing_EventScript_NoEgg
	return

LittlerootClearing_EventScript_May_3:
# 8 "data/maps/LittlerootClearing/scripts.pory"
	call LittlerootClearing_EventScript_MayNoDex
	return

LittlerootClearing_EventScript_May_4:
# 9 "data/maps/LittlerootClearing/scripts.pory"
	call LittlerootClearing_EventScript_LookingForAsst
	return


LittlerootClearing_EventScript_NoEgg::
# 14 "data/maps/LittlerootClearing/scripts.pory"
	lock
# 15 "data/maps/LittlerootClearing/scripts.pory"
	faceplayer
# 16 "data/maps/LittlerootClearing/scripts.pory"
	setspeaker LittlerootClearing_EventScript_NoEgg_Text_0
# 17 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_NoEgg_Text_1
# 18 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_NoEgg_Movement_0
# 21 "data/maps/LittlerootClearing/scripts.pory"
	waitmovement 0
# 22 "data/maps/LittlerootClearing/scripts.pory"
	release
	return


LittlerootClearing_EventScript_MayNoDex::
# 26 "data/maps/LittlerootClearing/scripts.pory"
	lock
# 27 "data/maps/LittlerootClearing/scripts.pory"
	faceplayer
# 28 "data/maps/LittlerootClearing/scripts.pory"
	setspeaker LittlerootClearing_EventScript_NoEgg_Text_0
# 29 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_0
# 30 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_MayNoDex_Movement_0
# 33 "data/maps/LittlerootClearing/scripts.pory"
	delay 32
# 34 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_1
# 35 "data/maps/LittlerootClearing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 36 "data/maps/LittlerootClearing/scripts.pory"
	waitfanfare
# 37 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_2
# 38 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_NoEgg_Movement_0
# 41 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_3
# 42 "data/maps/LittlerootClearing/scripts.pory"
	faceplayer
# 43 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_4
# 44 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_NoEgg_Movement_0
# 47 "data/maps/LittlerootClearing/scripts.pory"
	waitmovement 0
# 48 "data/maps/LittlerootClearing/scripts.pory"
	setflag FLAG_TALKED_TO_PROF
# 49 "data/maps/LittlerootClearing/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 50 "data/maps/LittlerootClearing/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 51 "data/maps/LittlerootClearing/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 52 "data/maps/LittlerootClearing/scripts.pory"
	release
	return


LittlerootClearing_EventScript_LookingForAsst::
# 56 "data/maps/LittlerootClearing/scripts.pory"
	lock
# 57 "data/maps/LittlerootClearing/scripts.pory"
	faceplayer
# 58 "data/maps/LittlerootClearing/scripts.pory"
	setspeaker LittlerootClearing_EventScript_NoEgg_Text_0
# 59 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_LookingForAsst_Text_0
# 60 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_NoEgg_Movement_0
# 63 "data/maps/LittlerootClearing/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootClearing/scripts.pory"
	release
	return


# 18 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_EventScript_NoEgg_Movement_0:
# 19 "data/maps/LittlerootClearing/scripts.pory"
	face_up
	step_end

# 30 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_EventScript_MayNoDex_Movement_0:
# 31 "data/maps/LittlerootClearing/scripts.pory"
	emote_heart
	step_end

LittlerootClearing_EventScript_NoEgg_Text_0:
# 16 "data/maps/LittlerootClearing/scripts.pory"
	.string "Birch$"

LittlerootClearing_EventScript_NoEgg_Text_1:
# 17 "data/maps/LittlerootClearing/scripts.pory"
	.string "Hi there! I'm going to be in the clearing\n"
	.string "all day, but my dad should be coming by\l"
	.string "any time now...$"

LittlerootClearing_EventScript_MayNoDex_Text_0:
# 29 "data/maps/LittlerootClearing/scripts.pory"
	.string "Hi {PLAYER}! Wow, a Togepi! Did my dad\n"
	.string "give you that egg to pass to me?$"

LittlerootClearing_EventScript_MayNoDex_Text_1:
# 34 "data/maps/LittlerootClearing/scripts.pory"
	.string "It seems to have taken a liking to you!\n"
	.string "Why don't you hold onto it, as your very\l"
	.string "first POKéMON!$"

LittlerootClearing_EventScript_MayNoDex_Text_2:
# 37 "data/maps/LittlerootClearing/scripts.pory"
	.string "What am I doing here?$"

LittlerootClearing_EventScript_MayNoDex_Text_3:
# 41 "data/maps/LittlerootClearing/scripts.pory"
	.string "I'm studying the trees, of course! I'm\n"
	.string "scheduled to be here all day. But I\l"
	.string "think my assistant has my field book...$"

LittlerootClearing_EventScript_MayNoDex_Text_4:
# 43 "data/maps/LittlerootClearing/scripts.pory"
	.string "I hate to ask you, {PLAYER}, but could\n"
	.string "you go find them on Route 103?$"

LittlerootClearing_EventScript_LookingForAsst_Text_0:
# 59 "data/maps/LittlerootClearing/scripts.pory"
	.string "I found my Munchie in a tree kinda like\n"
	.string "this...$"
