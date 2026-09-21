# 1 "data/maps/Route106/scripts.pory"
Route106_MapScripts::
# 2 "data/maps/Route106/scripts.pory"
	.byte 0
# 3 "data/maps/Route106/scripts.pory"

# 4 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 5 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 6 "data/maps/Route106/scripts.pory"
	end
# 7 "data/maps/Route106/scripts.pory"

# 8 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 9 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 10 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/Route106/scripts.pory"
	end
# 12 "data/maps/Route106/scripts.pory"

# 13 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 14 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 15 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/Route106/scripts.pory"
	end
# 17 "data/maps/Route106/scripts.pory"

# 18 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 19 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
# 20 "data/maps/Route106/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 21 "data/maps/Route106/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
# 22 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 23 "data/maps/Route106/scripts.pory"
	release
# 24 "data/maps/Route106/scripts.pory"
	end
# 25 "data/maps/Route106/scripts.pory"

# 26 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 27 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 28 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 30 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 31 "data/maps/Route106/scripts.pory"
	release
# 32 "data/maps/Route106/scripts.pory"
	end
# 33 "data/maps/Route106/scripts.pory"

# 34 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 35 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 36 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route106/scripts.pory"
	end
# 38 "data/maps/Route106/scripts.pory"

# 39 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 40 "data/maps/Route106/scripts.pory"
	.string "TRAINER TIPS\p"
# 41 "data/maps/Route106/scripts.pory"
	.string "Advice on catching POKéMON with a ROD:\n"
# 42 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"

Route106_EventScript_GruntOutsideCave::
# 47 "data/maps/Route106/scripts.pory"
	goto_if_unset FLAG_HIDE_ROUTE106_GAIA_GRUNT, Route106_EventScript_GruntOutsideCave_1
	return

Route106_EventScript_GruntOutsideCave_1:
# 48 "data/maps/Route106/scripts.pory"
	lock
# 49 "data/maps/Route106/scripts.pory"
	applymovement LOCALID_106_GAIAGRUNT, Route106_EventScript_GruntOutsideCave_Movement_0
# 52 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_GruntOutsideCave_Text_0
# 53 "data/maps/Route106/scripts.pory"
	applymovement LOCALID_106_GAIAGRUNT, Route106_EventScript_GruntOutsideCave_Movement_1
# 57 "data/maps/Route106/scripts.pory"
	applymovement LOCALID_PLAYER, Route106_EventScript_GruntOutsideCave_Movement_2
# 60 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_GruntOutsideCave_Text_1
# 62 "data/maps/Route106/scripts.pory"
	applymovement LOCALID_106_GAIAGRUNT, Route106_EventScript_GruntOutsideCave_Movement_3
# 66 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route106/scripts.pory"
	release
	return


Route106_EventScript_106GaiaGrunt::
# 72 "data/maps/Route106/scripts.pory"
	goto_if_unset FLAG_HIDE_ROUTE106_GAIA_GRUNT, Route106_EventScript_106GaiaGrunt_1
	return

Route106_EventScript_106GaiaGrunt_1:
# 73 "data/maps/Route106/scripts.pory"
	trainerbattle_single Route106_GaiaGrunt, Route106_Text_NedIntro, Route106_Text_NedDefeated, Route106_EventScript_106GaiaGrunt_Disappear
	return


Route106_EventScript_106GaiaGrunt_Disappear::
# 78 "data/maps/Route106/scripts.pory"
	lock
# 79 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route106/scripts.pory"
	setflag FLAG_HIDE_ROUTE106_GAIA_GRUNT
# 81 "data/maps/Route106/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/Route106/scripts.pory"
	removeobject LOCALID_106_GAIAGRUNT
# 83 "data/maps/Route106/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 84 "data/maps/Route106/scripts.pory"
	release
	return


Route106_EventScript_Takao::
# 88 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, Route106_Text_TakaoIntro, Route106_Text_TakaoDefeated
# 89 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TakaoPostBattle
	return


# 49 "data/maps/Route106/scripts.pory"
Route106_EventScript_GruntOutsideCave_Movement_0:
# 50 "data/maps/Route106/scripts.pory"
	face_player
	step_end

# 53 "data/maps/Route106/scripts.pory"
Route106_EventScript_GruntOutsideCave_Movement_1:
# 54 "data/maps/Route106/scripts.pory"
	walk_fast_left
# 55 "data/maps/Route106/scripts.pory"
	face_down
	step_end

# 57 "data/maps/Route106/scripts.pory"
Route106_EventScript_GruntOutsideCave_Movement_2:
# 58 "data/maps/Route106/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/Route106/scripts.pory"
Route106_EventScript_GruntOutsideCave_Movement_3:
# 63 "data/maps/Route106/scripts.pory"
	walk_right
# 64 "data/maps/Route106/scripts.pory"
	face_up
	step_end

Route106_EventScript_GruntOutsideCave_Text_0:
# 52 "data/maps/Route106/scripts.pory"
	.string "Stop! You can't go in there!$"

Route106_EventScript_GruntOutsideCave_Text_1:
# 61 "data/maps/Route106/scripts.pory"
	.string "I'm not done with my preparations yet.\n"
	.string "Fufufu...$"

Route106_Text_TakaoIntro::
# 92 "data/maps/Route106/scripts.pory"
	.string "Pokemon!$"

Route106_Text_TakaoDefeated::
# 96 "data/maps/Route106/scripts.pory"
	.string "Aw man!$"

Route106_Text_TakaoPostBattle::
# 100 "data/maps/Route106/scripts.pory"
	.string "I'll try harder!$"
