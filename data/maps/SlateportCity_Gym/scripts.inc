# 1 "data/maps/SlateportCity_Gym/scripts.pory"

# 2 "data/maps/SlateportCity_Gym/scripts.pory"
// SlateportCity_Gym_MapScripts::
# 3 "data/maps/SlateportCity_Gym/scripts.pory"
// 	.byte 0

SlateportCity_Gym_MapScripts::
# 7 "data/maps/SlateportCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SlateportCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/SlateportCity_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, SlateportCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SlateportCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/SlateportCity_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 10 "data/maps/SlateportCity_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 11 "data/maps/SlateportCity_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
	return


SlateportCity_Gym_EventScript_Gulliver::
# 17 "data/maps/SlateportCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, SlateportCity_Gym_Text_GulliverIntro, SlateportCity_Gym_Text_GulliverDefeat, RustboroCity_Gym_EventScript_GulliverDefeated, NO_MUSIC
# 18 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_Text_GulliverPostBattle
	return


RustboroCity_Gym_EventScript_GulliverDefeated::
# 30 "data/maps/SlateportCity_Gym/scripts.pory"
	lock
# 31 "data/maps/SlateportCity_Gym/scripts.pory"
	message RustboroCity_Gym_EventScript_GulliverDefeated_Text_0
# 32 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/SlateportCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 34 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GulliverDefeated_Text_1
# 35 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 36 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 37 "data/maps/SlateportCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 39 "data/maps/SlateportCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 40 "data/maps/SlateportCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 41 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 42 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return


SlateportCity_Gym_Eventscript_Sandygast_1::
# 50 "data/maps/SlateportCity_Gym/scripts.pory"
	lock
# 51 "data/maps/SlateportCity_Gym/scripts.pory"
	faceplayer
# 52 "data/maps/SlateportCity_Gym/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 10
# 53 "data/maps/SlateportCity_Gym/scripts.pory"
	waitse
# 54 "data/maps/SlateportCity_Gym/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_ENCOUNTER
# 55 "data/maps/SlateportCity_Gym/scripts.pory"
	delay 40
# 56 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmoncry
# 57 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 58 "data/maps/SlateportCity_Gym/scripts.pory"
	dowildbattle
# 59 "data/maps/SlateportCity_Gym/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/SlateportCity_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 61 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_1_2
# 63 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_1_3
# 65 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_1_4
SlateportCity_Gym_Eventscript_Sandygast_1_1:
# 68 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 69 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return

SlateportCity_Gym_Eventscript_Sandygast_1_2:
# 62 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_1_1

SlateportCity_Gym_Eventscript_Sandygast_1_3:
# 64 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_1_1

SlateportCity_Gym_Eventscript_Sandygast_1_4:
# 66 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_1_1


SlateportCity_Gym_EventScript_DefeatedSandygast1::
# 73 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 74 "data/maps/SlateportCity_Gym/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return


SlateportCity_Gym_Eventscript_Sandygast_2::
# 78 "data/maps/SlateportCity_Gym/scripts.pory"
	lock
# 79 "data/maps/SlateportCity_Gym/scripts.pory"
	faceplayer
# 80 "data/maps/SlateportCity_Gym/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 10
# 81 "data/maps/SlateportCity_Gym/scripts.pory"
	waitse
# 82 "data/maps/SlateportCity_Gym/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_ENCOUNTER
# 83 "data/maps/SlateportCity_Gym/scripts.pory"
	delay 40
# 84 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmoncry
# 85 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 86 "data/maps/SlateportCity_Gym/scripts.pory"
	dowildbattle
# 87 "data/maps/SlateportCity_Gym/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/SlateportCity_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 89 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_2_2
# 91 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_2_3
# 93 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_2_4
SlateportCity_Gym_Eventscript_Sandygast_2_1:
# 96 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 97 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return

SlateportCity_Gym_Eventscript_Sandygast_2_2:
# 90 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_2_1

SlateportCity_Gym_Eventscript_Sandygast_2_3:
# 92 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_2_1

SlateportCity_Gym_Eventscript_Sandygast_2_4:
# 94 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_2_1


SlateportCity_Gym_EventScript_DefeatedSandygast2::
# 101 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 102 "data/maps/SlateportCity_Gym/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return


SlateportCity_Gym_Eventscript_Sandygast_3::
# 106 "data/maps/SlateportCity_Gym/scripts.pory"
	lock
# 107 "data/maps/SlateportCity_Gym/scripts.pory"
	faceplayer
# 108 "data/maps/SlateportCity_Gym/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 10
# 109 "data/maps/SlateportCity_Gym/scripts.pory"
	waitse
# 110 "data/maps/SlateportCity_Gym/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_ENCOUNTER
# 111 "data/maps/SlateportCity_Gym/scripts.pory"
	delay 40
# 112 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmoncry
# 113 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 114 "data/maps/SlateportCity_Gym/scripts.pory"
	dowildbattle
# 115 "data/maps/SlateportCity_Gym/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 116 "data/maps/SlateportCity_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 117 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_3_2
# 119 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_3_3
# 121 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_3_4
SlateportCity_Gym_Eventscript_Sandygast_3_1:
# 124 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 125 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return

SlateportCity_Gym_Eventscript_Sandygast_3_2:
# 118 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_3_1

SlateportCity_Gym_Eventscript_Sandygast_3_3:
# 120 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_3_1

SlateportCity_Gym_Eventscript_Sandygast_3_4:
# 122 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_3_1


SlateportCity_Gym_EventScript_DefeatedSandygast3::
# 129 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 130 "data/maps/SlateportCity_Gym/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return


SlateportCity_Gym_EventScript_Josh::
# 135 "data/maps/SlateportCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, SlateportCity_Gym_Text_JoshIntro, SlateportCity_Gym_Text_JoshDefeat, SlateportCity_Gym_Text_JoshPostBattle, NO_MUSIC
# 136 "data/maps/SlateportCity_Gym/scripts.pory"
	setspeaker SlateportCity_Gym_EventScript_Josh_Text_0
# 137 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_EventScript_Josh_Text_1
# 138 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmessage
	end


SlateportCity_Gym_Text_JoshPostBattle::
# 151 "data/maps/SlateportCity_Gym/scripts.pory"
	setspeaker SlateportCity_Gym_EventScript_Josh_Text_0
# 152 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_Text_JoshPostBattle_Text_0
# 153 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	end


SlateportCity_Gym_EventScript_Tommy::
# 163 "data/maps/SlateportCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, SlateportCity_Gym_Text_TommyIntro, SlateportCity_Gym_Text_TommyDefeat, SlateportCity_Gym_Text_TommyPostBattle, NO_MUSIC
# 164 "data/maps/SlateportCity_Gym/scripts.pory"
	setspeaker SlateportCity_Gym_EventScript_Tommy_Text_0
# 165 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_EventScript_Josh_Text_1
# 166 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmessage
	end


SlateportCity_Gym_Text_TommyPostBattle::
# 179 "data/maps/SlateportCity_Gym/scripts.pory"
	setspeaker SlateportCity_Gym_EventScript_Tommy_Text_0
# 180 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_Text_TommyPostBattle_Text_0
# 181 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	end


RustboroCity_Gym_EventScript_GulliverDefeated_Text_0:
# 31 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "{PLAYER} received the Beach Badge from\n"
	.string "Gulliver.$"

RustboroCity_Gym_EventScript_GulliverDefeated_Text_1:
# 34 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "The Beach Badges lets you use\n"
	.string "whatever. Take this TM also.$"

SlateportCity_Gym_EventScript_Josh_Text_0:
# 136 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Josh$"

SlateportCity_Gym_EventScript_Josh_Text_1:
# 137 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Good Luck!$"

SlateportCity_Gym_Text_JoshPostBattle_Text_0:
# 152 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Post battle!$"

SlateportCity_Gym_EventScript_Tommy_Text_0:
# 164 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Tommy$"

SlateportCity_Gym_Text_TommyPostBattle_Text_0:
# 180 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Gulliver is stronger than me by several\n"
	.string "times. You'd better be on your guard!$"

SlateportCity_Gym_Text_GulliverIntro::
# 21 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "I'm Gulliver!$"

SlateportCity_Gym_Text_GulliverDefeat::
# 25 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "You got me!$"

SlateportCity_Gym_Text_GulliverPostBattle::
# 45 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Boo hoo.$"

SlateportCity_Gym_Text_JoshIntro::
# 142 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly! I'll\n"
	.string "show you why we're better!$"

SlateportCity_Gym_Text_JoshDefeat::
# 146 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "You were too good for me...$"

SlateportCity_Gym_Text_JoshPostDefeat::
# 157 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Good Luck!$"

SlateportCity_Gym_Text_TommyIntro::
# 170 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand a\n"
	.string "chance against Gulliver!$"

SlateportCity_Gym_Text_TommyDefeat::
# 174 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"

SlateportCity_Gym_Text_TommyPostDefeat::
# 185 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Good Luck!$"
