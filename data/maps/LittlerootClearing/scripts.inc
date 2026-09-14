# 1 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_MapScripts::
# 2 "data/maps/LittlerootClearing/scripts.pory"
	.byte 0

LittlerootClearing_EventScript_May::
# 6 "data/maps/LittlerootClearing/scripts.pory"
	goto_if_set FLAG_TALKED_TO_PROF, LittlerootClearing_EventScript_May_1
# 11 "data/maps/LittlerootClearing/scripts.pory"
	call LittlerootClearing_EventScript_MayNoDex
	return

LittlerootClearing_EventScript_May_1:
# 7 "data/maps/LittlerootClearing/scripts.pory"
	lock
# 8 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_May_Text_0
# 9 "data/maps/LittlerootClearing/scripts.pory"
	release
	return


LittlerootClearing_EventScript_MayNoDex::
# 16 "data/maps/LittlerootClearing/scripts.pory"
	lock
# 17 "data/maps/LittlerootClearing/scripts.pory"
	faceplayer
# 18 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_0
# 19 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_MayNoDex_Movement_0
# 22 "data/maps/LittlerootClearing/scripts.pory"
	delay 30
# 23 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_1
# 24 "data/maps/LittlerootClearing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/LittlerootClearing/scripts.pory"
	waitfanfare
# 26 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_2
# 27 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_MayNoDex_Movement_1
# 30 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_3
# 31 "data/maps/LittlerootClearing/scripts.pory"
	faceplayer
# 32 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_4
# 33 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_MayNoDex_Movement_2
# 37 "data/maps/LittlerootClearing/scripts.pory"
	setflag FLAG_TALKED_TO_PROF
# 38 "data/maps/LittlerootClearing/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 39 "data/maps/LittlerootClearing/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 40 "data/maps/LittlerootClearing/scripts.pory"
	release
	return


# 19 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_EventScript_MayNoDex_Movement_0:
# 20 "data/maps/LittlerootClearing/scripts.pory"
	emote_heart
	step_end

# 27 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_EventScript_MayNoDex_Movement_1:
# 28 "data/maps/LittlerootClearing/scripts.pory"
	face_up
	step_end

# 33 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_EventScript_MayNoDex_Movement_2:
# 34 "data/maps/LittlerootClearing/scripts.pory"
	emote_heart
# 35 "data/maps/LittlerootClearing/scripts.pory"
	face_up
	step_end

LittlerootClearing_EventScript_May_Text_0:
# 8 "data/maps/LittlerootClearing/scripts.pory"
	.string "I found my Munchie in a tree kinda like\n"
	.string "this...$"

LittlerootClearing_EventScript_MayNoDex_Text_0:
# 18 "data/maps/LittlerootClearing/scripts.pory"
	.string "Professor Birch: Hi {PLAYER}! Wow, a\n"
	.string "Togepi! Did my dad give you that egg to\l"
	.string "pass to me?$"

LittlerootClearing_EventScript_MayNoDex_Text_1:
# 23 "data/maps/LittlerootClearing/scripts.pory"
	.string "It seems to have taken a liking to you!\n"
	.string "Why don't you hold onto it, as your very\l"
	.string "first POKéMON!$"

LittlerootClearing_EventScript_MayNoDex_Text_2:
# 26 "data/maps/LittlerootClearing/scripts.pory"
	.string "What am I doing here?$"

LittlerootClearing_EventScript_MayNoDex_Text_3:
# 30 "data/maps/LittlerootClearing/scripts.pory"
	.string "I'm studying the trees, of course! I'm\n"
	.string "scheduled to be here all day. But I\l"
	.string "think my assistant has my field book...$"

LittlerootClearing_EventScript_MayNoDex_Text_4:
# 32 "data/maps/LittlerootClearing/scripts.pory"
	.string "I hate to ask you, {PLAYER}, but could\n"
	.string "you go find them on Route 103?$"
