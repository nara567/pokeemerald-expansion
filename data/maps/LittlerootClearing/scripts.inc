# 1 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_MapScripts::
# 2 "data/maps/LittlerootClearing/scripts.pory"
	.byte 0

LittlerootClearing_EventScript_May::
# 6 "data/maps/LittlerootClearing/scripts.pory"
	goto_if_set FLAG_TALKED_TO_PROF, LittlerootClearing_EventScript_May_1
# 9 "data/maps/LittlerootClearing/scripts.pory"
	call LittlerootClearing_EventScript_MayNoDex
	return

LittlerootClearing_EventScript_May_1:
# 7 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_May_Text_0
	return


LittlerootClearing_EventScript_MayNoDex::
# 14 "data/maps/LittlerootClearing/scripts.pory"
	lock
# 15 "data/maps/LittlerootClearing/scripts.pory"
	faceplayer
# 16 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_0
# 17 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_MayNoDex_Movement_0
# 20 "data/maps/LittlerootClearing/scripts.pory"
	delay 30
# 21 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_1
# 22 "data/maps/LittlerootClearing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/LittlerootClearing/scripts.pory"
	waitfanfare
# 24 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_2
# 25 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_MayNoDex_Movement_1
# 28 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_3
# 29 "data/maps/LittlerootClearing/scripts.pory"
	faceplayer
# 30 "data/maps/LittlerootClearing/scripts.pory"
	msgbox LittlerootClearing_EventScript_MayNoDex_Text_4
# 31 "data/maps/LittlerootClearing/scripts.pory"
	applymovement LOCALID_LITTLEROOTGROTTO_PROFMAY, LittlerootClearing_EventScript_MayNoDex_Movement_2
# 35 "data/maps/LittlerootClearing/scripts.pory"
	setflag FLAG_TALKED_TO_PROF
# 36 "data/maps/LittlerootClearing/scripts.pory"
	release
	return


# 17 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_EventScript_MayNoDex_Movement_0:
# 18 "data/maps/LittlerootClearing/scripts.pory"
	emote_heart
	step_end

# 25 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_EventScript_MayNoDex_Movement_1:
# 26 "data/maps/LittlerootClearing/scripts.pory"
	face_up
	step_end

# 31 "data/maps/LittlerootClearing/scripts.pory"
LittlerootClearing_EventScript_MayNoDex_Movement_2:
# 32 "data/maps/LittlerootClearing/scripts.pory"
	emote_heart
# 33 "data/maps/LittlerootClearing/scripts.pory"
	face_up
	step_end

LittlerootClearing_EventScript_May_Text_0:
# 7 "data/maps/LittlerootClearing/scripts.pory"
	.string "I found my Munchie in a tree kinda like\n"
	.string "this...$"

LittlerootClearing_EventScript_MayNoDex_Text_0:
# 16 "data/maps/LittlerootClearing/scripts.pory"
	.string "Professor Birch: Hi {PLAYER}! Wow, a\n"
	.string "Togepi! Did my dad give you that egg to\l"
	.string "pass to me?$"

LittlerootClearing_EventScript_MayNoDex_Text_1:
# 21 "data/maps/LittlerootClearing/scripts.pory"
	.string "It seems to have taken a liking to you!\n"
	.string "Why don't you hold onto it, as your very\l"
	.string "first POKéMON!$"

LittlerootClearing_EventScript_MayNoDex_Text_2:
# 24 "data/maps/LittlerootClearing/scripts.pory"
	.string "What am I doing here?$"

LittlerootClearing_EventScript_MayNoDex_Text_3:
# 28 "data/maps/LittlerootClearing/scripts.pory"
	.string "I'm studying the trees, of course! I'm\n"
	.string "scheduled to be here all day. But I\l"
	.string "think my assistant has my field book...$"

LittlerootClearing_EventScript_MayNoDex_Text_4:
# 30 "data/maps/LittlerootClearing/scripts.pory"
	.string "I hate to ask you, {PLAYER}, but could\n"
	.string "you go find them on Route 103?$"
