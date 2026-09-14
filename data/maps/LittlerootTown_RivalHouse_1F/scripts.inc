# 1 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"


LittlerootTown_RivalHouse_1F_MapScripts::
# 4 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_RivalHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_RivalHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 7, RivalsHouse_1F_EventScript_BirchIntro
	.2byte 0


RivalsHouse_1F_EventScript_Birch::
# 10 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	lock
# 11 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	faceplayer
# 12 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather
# 13 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	release
	end


RivalsHouse_1F_EventScript_BirchIntro::
# 18 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	lock
# 19 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	faceplayer
# 20 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	playse SE_PIN
# 21 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, RivalsHouse_1F_EventScript_BirchIntro_Movement_0
# 24 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, RivalsHouse_1F_EventScript_BirchIntro_Movement_1
# 27 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	setspeaker RivalsHouse_1F_EventScript_BirchIntro_Text_0
# 28 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_EventScript_BirchIntro_Text_1
# 29 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, RivalsHouse_1F_EventScript_BirchIntro_Movement_2
# 33 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	setspeaker RivalsHouse_1F_EventScript_BirchIntro_Text_0
# 35 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_EventScript_BirchIntro_Text_2
# 36 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 37 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	setspeaker NULL
# 38 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	message RivalsHouse_1F_EventScript_BirchIntro_Text_3
# 39 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	waitfanfare
# 40 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, RivalsHouse_1F_EventScript_BirchIntro_Movement_3
# 45 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 8
# 47 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	giveegg SPECIES_TOGEPI
# 48 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 49 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	release
	return


# 21 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_BirchIntro_Movement_0:
# 22 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 24 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_BirchIntro_Movement_1:
# 25 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	face_right
	step_end

# 29 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_BirchIntro_Movement_2:
# 30 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_down
# 31 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_left
	step_end

# 40 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_BirchIntro_Movement_3:
# 41 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_right
# 41 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_right
# 41 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_right
# 41 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_right
# 41 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_right
# 42 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	walk_up
# 43 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	face_left
	step_end

RivalsHouse_1F_EventScript_BirchIntro_Text_0:
# 27 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	.string "Birch$"

RivalsHouse_1F_EventScript_BirchIntro_Text_1:
# 28 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	.string "Oh, hey {PLAYER}! You're looking for my\n"
	.string "daughter? She was going to visit the\l"
	.string "clearing today. But if you're going to\l"
	.string "go see her...$"

RivalsHouse_1F_EventScript_BirchIntro_Text_2:
# 35 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	.string "Could you take this egg to her? It's\n"
	.string "close to hatching, but my show's about\l"
	.string "to be on...$"

RivalsHouse_1F_EventScript_BirchIntro_Text_3:
# 38 "data/maps/LittlerootTown_RivalHouse_1F/scripts.pory"
	.string "{PLAYER} received the egg.$"
