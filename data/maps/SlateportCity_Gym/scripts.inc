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
	lock
# 18 "data/maps/SlateportCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE, SlateportCity_Gym_EventScript_Gulliver_7
SlateportCity_Gym_EventScript_Gulliver_5:
# 20 "data/maps/SlateportCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, SlateportCity_Gym_EventScript_Gulliver_3
# 23 "data/maps/SlateportCity_Gym/scripts.pory"
	setspeaker SlateportCity_Gym_EventScript_Gulliver_Text_0
# 24 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_EventScript_Gulliver_Text_1
# 25 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_EventScript_Gulliver_Text_2
SlateportCity_Gym_EventScript_Gulliver_1:
# 27 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return

SlateportCity_Gym_EventScript_Gulliver_2:
# 19 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_GulliverBattle
	goto SlateportCity_Gym_EventScript_Gulliver_1

SlateportCity_Gym_EventScript_Gulliver_3:
# 21 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_Text_GulliverPostBattle
	goto SlateportCity_Gym_EventScript_Gulliver_1

SlateportCity_Gym_EventScript_Gulliver_6:
# 18 "data/maps/SlateportCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE, SlateportCity_Gym_EventScript_Gulliver_2
	goto SlateportCity_Gym_EventScript_Gulliver_5

SlateportCity_Gym_EventScript_Gulliver_7:
# 18 "data/maps/SlateportCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE, SlateportCity_Gym_EventScript_Gulliver_6
	goto SlateportCity_Gym_EventScript_Gulliver_5


SlateportCity_Gym_EventScript_GulliverBattle::
# 31 "data/maps/SlateportCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GULLIVER_1, SlateportCity_Gym_Text_GulliverIntro, SlateportCity_Gym_Text_GulliverDefeat, RustboroCity_Gym_EventScript_GulliverDefeated, NO_MUSIC
# 32 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_Text_GulliverPostBattle
	return


RustboroCity_Gym_EventScript_GulliverDefeated::
# 44 "data/maps/SlateportCity_Gym/scripts.pory"
	lock
# 45 "data/maps/SlateportCity_Gym/scripts.pory"
	message RustboroCity_Gym_EventScript_GulliverDefeated_Text_0
# 46 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmessage
# 47 "data/maps/SlateportCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 48 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GulliverDefeated_Text_1
# 49 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 50 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 51 "data/maps/SlateportCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 53 "data/maps/SlateportCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 54 "data/maps/SlateportCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 55 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 56 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return


SlateportCity_Gym_Eventscript_Sandygast_1::
# 64 "data/maps/SlateportCity_Gym/scripts.pory"
	lock
# 65 "data/maps/SlateportCity_Gym/scripts.pory"
	faceplayer
# 66 "data/maps/SlateportCity_Gym/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 10
# 67 "data/maps/SlateportCity_Gym/scripts.pory"
	waitse
# 68 "data/maps/SlateportCity_Gym/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_ENCOUNTER
# 69 "data/maps/SlateportCity_Gym/scripts.pory"
	delay 40
# 70 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmoncry
# 71 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 72 "data/maps/SlateportCity_Gym/scripts.pory"
	dowildbattle
# 73 "data/maps/SlateportCity_Gym/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 74 "data/maps/SlateportCity_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 75 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_1_2
# 77 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_1_3
# 79 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_1_4
SlateportCity_Gym_Eventscript_Sandygast_1_1:
# 82 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 83 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return

SlateportCity_Gym_Eventscript_Sandygast_1_2:
# 76 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_1_1

SlateportCity_Gym_Eventscript_Sandygast_1_3:
# 78 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_1_1

SlateportCity_Gym_Eventscript_Sandygast_1_4:
# 80 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_1_1


SlateportCity_Gym_EventScript_DefeatedSandygast1::
# 87 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 88 "data/maps/SlateportCity_Gym/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return


SlateportCity_Gym_Eventscript_Sandygast_2::
# 92 "data/maps/SlateportCity_Gym/scripts.pory"
	lock
# 93 "data/maps/SlateportCity_Gym/scripts.pory"
	faceplayer
# 94 "data/maps/SlateportCity_Gym/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 10
# 95 "data/maps/SlateportCity_Gym/scripts.pory"
	waitse
# 96 "data/maps/SlateportCity_Gym/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_ENCOUNTER
# 97 "data/maps/SlateportCity_Gym/scripts.pory"
	delay 40
# 98 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmoncry
# 99 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 100 "data/maps/SlateportCity_Gym/scripts.pory"
	dowildbattle
# 101 "data/maps/SlateportCity_Gym/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 102 "data/maps/SlateportCity_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 103 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_2_2
# 105 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_2_3
# 107 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_2_4
SlateportCity_Gym_Eventscript_Sandygast_2_1:
# 110 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 111 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return

SlateportCity_Gym_Eventscript_Sandygast_2_2:
# 104 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_2_1

SlateportCity_Gym_Eventscript_Sandygast_2_3:
# 106 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_2_1

SlateportCity_Gym_Eventscript_Sandygast_2_4:
# 108 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_2_1


SlateportCity_Gym_EventScript_DefeatedSandygast2::
# 115 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 116 "data/maps/SlateportCity_Gym/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return


SlateportCity_Gym_Eventscript_Sandygast_3::
# 120 "data/maps/SlateportCity_Gym/scripts.pory"
	lock
# 121 "data/maps/SlateportCity_Gym/scripts.pory"
	faceplayer
# 122 "data/maps/SlateportCity_Gym/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 10
# 123 "data/maps/SlateportCity_Gym/scripts.pory"
	waitse
# 124 "data/maps/SlateportCity_Gym/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_ENCOUNTER
# 125 "data/maps/SlateportCity_Gym/scripts.pory"
	delay 40
# 126 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmoncry
# 127 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 128 "data/maps/SlateportCity_Gym/scripts.pory"
	dowildbattle
# 129 "data/maps/SlateportCity_Gym/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 130 "data/maps/SlateportCity_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 131 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_3_2
# 133 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_3_3
# 135 "data/maps/SlateportCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SlateportCity_Gym_Eventscript_Sandygast_3_4
SlateportCity_Gym_Eventscript_Sandygast_3_1:
# 138 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 139 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	return

SlateportCity_Gym_Eventscript_Sandygast_3_2:
# 132 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_3_1

SlateportCity_Gym_Eventscript_Sandygast_3_3:
# 134 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_3_1

SlateportCity_Gym_Eventscript_Sandygast_3_4:
# 136 "data/maps/SlateportCity_Gym/scripts.pory"
	call SlateportCity_Gym_EventScript_DefeatedSandygast1
	goto SlateportCity_Gym_Eventscript_Sandygast_3_1


SlateportCity_Gym_EventScript_DefeatedSandygast3::
# 143 "data/maps/SlateportCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 144 "data/maps/SlateportCity_Gym/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return


SlateportCity_Gym_EventScript_Josh::
# 149 "data/maps/SlateportCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, SlateportCity_Gym_Text_JoshIntro, SlateportCity_Gym_Text_JoshDefeat, SlateportCity_Gym_Text_JoshPostBattle, NO_MUSIC
# 150 "data/maps/SlateportCity_Gym/scripts.pory"
	setspeaker SlateportCity_Gym_EventScript_Josh_Text_0
# 151 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_EventScript_Josh_Text_1
# 152 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmessage
	end


SlateportCity_Gym_Text_JoshPostBattle::
# 165 "data/maps/SlateportCity_Gym/scripts.pory"
	setspeaker SlateportCity_Gym_EventScript_Josh_Text_0
# 166 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_Text_JoshPostBattle_Text_0
# 167 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	end


SlateportCity_Gym_EventScript_Tommy::
# 177 "data/maps/SlateportCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, SlateportCity_Gym_Text_TommyIntro, SlateportCity_Gym_Text_TommyDefeat, SlateportCity_Gym_Text_TommyPostBattle, NO_MUSIC
# 178 "data/maps/SlateportCity_Gym/scripts.pory"
	setspeaker SlateportCity_Gym_EventScript_Tommy_Text_0
# 179 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_EventScript_Josh_Text_1
# 180 "data/maps/SlateportCity_Gym/scripts.pory"
	waitmessage
	end


SlateportCity_Gym_Text_TommyPostBattle::
# 193 "data/maps/SlateportCity_Gym/scripts.pory"
	setspeaker SlateportCity_Gym_EventScript_Tommy_Text_0
# 194 "data/maps/SlateportCity_Gym/scripts.pory"
	msgbox SlateportCity_Gym_Text_TommyPostBattle_Text_0
# 195 "data/maps/SlateportCity_Gym/scripts.pory"
	release
	end


SlateportCity_Gym_EventScript_Gulliver_Text_0:
# 23 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Gulliver$"

SlateportCity_Gym_EventScript_Gulliver_Text_1:
# 24 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Welcome {PLAYER}! You thought just\n"
	.string "because you made it to me, you'll get to\l"
	.string "battle? Ohoho, no!$"

SlateportCity_Gym_EventScript_Gulliver_Text_2:
# 25 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "You have to conquer the three castles\n"
	.string "in the gym before you can face me.$"

RustboroCity_Gym_EventScript_GulliverDefeated_Text_0:
# 45 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "{PLAYER} received the Beach Badge from\n"
	.string "Gulliver.$"

RustboroCity_Gym_EventScript_GulliverDefeated_Text_1:
# 48 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "The Beach Badges lets you use\n"
	.string "whatever. Take this TM also.$"

SlateportCity_Gym_EventScript_Josh_Text_0:
# 150 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Josh$"

SlateportCity_Gym_EventScript_Josh_Text_1:
# 151 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Good Luck!$"

SlateportCity_Gym_Text_JoshPostBattle_Text_0:
# 166 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Post battle!$"

SlateportCity_Gym_EventScript_Tommy_Text_0:
# 178 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Tommy$"

SlateportCity_Gym_Text_TommyPostBattle_Text_0:
# 194 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Gulliver is stronger than me by several\n"
	.string "times. You'd better be on your guard!$"

SlateportCity_Gym_Text_GulliverIntro::
# 35 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "I'm Gulliver!$"

SlateportCity_Gym_Text_GulliverDefeat::
# 39 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "You got me!$"

SlateportCity_Gym_Text_GulliverPostBattle::
# 59 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Boo hoo.$"

SlateportCity_Gym_Text_JoshIntro::
# 156 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly! I'll\n"
	.string "show you why we're better!$"

SlateportCity_Gym_Text_JoshDefeat::
# 160 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "You were too good for me...$"

SlateportCity_Gym_Text_JoshPostDefeat::
# 171 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Good Luck!$"

SlateportCity_Gym_Text_TommyIntro::
# 184 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand a\n"
	.string "chance against Gulliver!$"

SlateportCity_Gym_Text_TommyDefeat::
# 188 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"

SlateportCity_Gym_Text_TommyPostDefeat::
# 199 "data/maps/SlateportCity_Gym/scripts.pory"
	.string "Good Luck!$"
