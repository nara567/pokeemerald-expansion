# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 3 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 4 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 5 "data/maps/Route103/scripts.pory"
	.byte 0
# 6 "data/maps/Route103/scripts.pory"

# 7 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 8 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 9 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 10 "data/maps/Route103/scripts.pory"
	end
# 11 "data/maps/Route103/scripts.pory"

# 12 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 13 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 14 "data/maps/Route103/scripts.pory"
	end
# 15 "data/maps/Route103/scripts.pory"

# 16 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 17 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 18 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 19 "data/maps/Route103/scripts.pory"
	return
# 20 "data/maps/Route103/scripts.pory"

# 21 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 22 "data/maps/Route103/scripts.pory"
	closemessage
# 23 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 24 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 25 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 26 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 27 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 28 "data/maps/Route103/scripts.pory"
	end
# 29 "data/maps/Route103/scripts.pory"

# 30 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 31 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 32 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 33 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 35 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 36 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 38 "data/maps/Route103/scripts.pory"
	end
# 39 "data/maps/Route103/scripts.pory"

# 40 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 41 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 42 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 43 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 45 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 46 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 48 "data/maps/Route103/scripts.pory"
	end
# 49 "data/maps/Route103/scripts.pory"

# 50 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 51 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 52 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 54 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 55 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 57 "data/maps/Route103/scripts.pory"
	end
# 58 "data/maps/Route103/scripts.pory"

# 59 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 60 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RIVAL
# 61 "data/maps/Route103/scripts.pory"
	// setvar VAR_BIRCH_LAB_STATE, 4
# 62 "data/maps/Route103/scripts.pory"
	// clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 63 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 64 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 65 "data/maps/Route103/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 66 "data/maps/Route103/scripts.pory"
	clearflag FLAG_PARTY_OVER
# 67 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 68 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 69 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 70 "data/maps/Route103/scripts.pory"
	releaseall
# 71 "data/maps/Route103/scripts.pory"
	end
# 72 "data/maps/Route103/scripts.pory"

# 73 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 74 "data/maps/Route103/scripts.pory"
	walk_left
# 75 "data/maps/Route103/scripts.pory"
	walk_down
# 76 "data/maps/Route103/scripts.pory"
	walk_down
# 77 "data/maps/Route103/scripts.pory"
	walk_down
# 78 "data/maps/Route103/scripts.pory"
	step_end
# 79 "data/maps/Route103/scripts.pory"

# 80 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 81 "data/maps/Route103/scripts.pory"
	jump_2_down
# 82 "data/maps/Route103/scripts.pory"
	delay_16
# 83 "data/maps/Route103/scripts.pory"
	walk_down
# 84 "data/maps/Route103/scripts.pory"
	walk_down
# 85 "data/maps/Route103/scripts.pory"
	walk_down
# 86 "data/maps/Route103/scripts.pory"
	walk_down
# 87 "data/maps/Route103/scripts.pory"
	step_end
# 88 "data/maps/Route103/scripts.pory"

# 89 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 90 "data/maps/Route103/scripts.pory"
	delay_16
# 91 "data/maps/Route103/scripts.pory"
	delay_4
# 92 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 93 "data/maps/Route103/scripts.pory"
	delay_16
# 94 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 95 "data/maps/Route103/scripts.pory"
	step_end
# 96 "data/maps/Route103/scripts.pory"

# 97 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 98 "data/maps/Route103/scripts.pory"
	walk_down
# 99 "data/maps/Route103/scripts.pory"
	walk_down
# 100 "data/maps/Route103/scripts.pory"
	walk_down
# 101 "data/maps/Route103/scripts.pory"
	step_end
# 102 "data/maps/Route103/scripts.pory"

# 103 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 104 "data/maps/Route103/scripts.pory"
	jump_2_down
# 105 "data/maps/Route103/scripts.pory"
	delay_16
# 106 "data/maps/Route103/scripts.pory"
	walk_down
# 107 "data/maps/Route103/scripts.pory"
	walk_down
# 108 "data/maps/Route103/scripts.pory"
	walk_down
# 109 "data/maps/Route103/scripts.pory"
	step_end
# 110 "data/maps/Route103/scripts.pory"

# 111 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 112 "data/maps/Route103/scripts.pory"
	delay_16
# 113 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 114 "data/maps/Route103/scripts.pory"
	step_end
# 115 "data/maps/Route103/scripts.pory"

# 116 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 117 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 118 "data/maps/Route103/scripts.pory"
	end
# 119 "data/maps/Route103/scripts.pory"

# 120 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 121 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 122 "data/maps/Route103/scripts.pory"
	end
# 123 "data/maps/Route103/scripts.pory"

# 124 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 125 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 126 "data/maps/Route103/scripts.pory"
	end
# 127 "data/maps/Route103/scripts.pory"

# 128 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 129 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 130 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route103/scripts.pory"
	end
# 132 "data/maps/Route103/scripts.pory"

# 133 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 134 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 135 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 136 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 137 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route103/scripts.pory"
	end
# 139 "data/maps/Route103/scripts.pory"

# 140 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 141 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 142 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 143 "data/maps/Route103/scripts.pory"
	release
# 144 "data/maps/Route103/scripts.pory"
	end
# 145 "data/maps/Route103/scripts.pory"

# 146 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 147 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 148 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route103/scripts.pory"
	end
# 150 "data/maps/Route103/scripts.pory"

# 151 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 152 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 153 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 154 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 155 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route103/scripts.pory"
	end
# 157 "data/maps/Route103/scripts.pory"

# 158 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 159 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 160 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 161 "data/maps/Route103/scripts.pory"
	release
# 162 "data/maps/Route103/scripts.pory"
	end
# 163 "data/maps/Route103/scripts.pory"

# 164 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 165 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 166 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route103/scripts.pory"
	end
# 168 "data/maps/Route103/scripts.pory"

# 169 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 170 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 171 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route103/scripts.pory"
	end
# 173 "data/maps/Route103/scripts.pory"

# 174 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 175 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 176 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 177 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 178 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 179 "data/maps/Route103/scripts.pory"
	release
# 180 "data/maps/Route103/scripts.pory"
	end
# 181 "data/maps/Route103/scripts.pory"

# 182 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 183 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 184 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 186 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 187 "data/maps/Route103/scripts.pory"
	release
# 188 "data/maps/Route103/scripts.pory"
	end
# 189 "data/maps/Route103/scripts.pory"

# 190 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 191 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 192 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/Route103/scripts.pory"
	end
# 194 "data/maps/Route103/scripts.pory"

# 195 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 196 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 197 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route103/scripts.pory"
	end
# 199 "data/maps/Route103/scripts.pory"

# 200 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 201 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 202 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route103/scripts.pory"
	end
# 204 "data/maps/Route103/scripts.pory"

# 205 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 206 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 207 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route103/scripts.pory"
	end
# 209 "data/maps/Route103/scripts.pory"

# 210 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 211 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 212 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route103/scripts.pory"
	end
# 214 "data/maps/Route103/scripts.pory"

# 215 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 216 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 217 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 218 "data/maps/Route103/scripts.pory"

# 219 "data/maps/Route103/scripts.pory"

# 220 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 221 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 222 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 223 "data/maps/Route103/scripts.pory"

# 224 "data/maps/Route103/scripts.pory"

# 225 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 226 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 227 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 228 "data/maps/Route103/scripts.pory"

# 229 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 230 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 231 "data/maps/Route103/scripts.pory"

# 232 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 233 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 234 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 235 "data/maps/Route103/scripts.pory"

# 236 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 237 "data/maps/Route103/scripts.pory"
	.string "There didn't used to be a bridge here.\n"
# 238 "data/maps/Route103/scripts.pory"
	.string "Gulliver built it 5 years ago!\p"
# 239 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 240 "data/maps/Route103/scripts.pory"

# 241 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 242 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 243 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"

Route103_EventScript_FootprintsMan::
# 247 "data/maps/Route103/scripts.pory"
	lock
# 248 "data/maps/Route103/scripts.pory"
	faceplayer
# 249 "data/maps/Route103/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints
# 250 "data/maps/Route103/scripts.pory"
	closemessage
# 251 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_103_FOOTPRINTS_MAN, Route103_EventScript_FootprintsMan_Movement_0
# 254 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 255 "data/maps/Route103/scripts.pory"
	release
	return


Route103_EventScript_BlockedPath::
# 259 "data/maps/Route103/scripts.pory"
	lockall
# 260 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_EventScript_BlockedPath_Movement_0
# 265 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_103_FOOTPRINTS_MAN, Route103_EventScript_BlockedPath_Movement_1
# 270 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route103/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere
# 272 "data/maps/Route103/scripts.pory"
	closemessage
# 273 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_103_FOOTPRINTS_MAN, Route103_EventScript_BlockedPath_Movement_2
# 278 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 279 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103_EventScript_Rival::
# 283 "data/maps/Route103/scripts.pory"
	lockall
# 284 "data/maps/Route103/scripts.pory"
	setspeaker Route103_EventScript_Rival_Text_0
# 285 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 286 "data/maps/Route103/scripts.pory"
	closemessage
# 287 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 288 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 289 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 291 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 293 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 294 "data/maps/Route103/scripts.pory"
	setspeaker Route103_EventScript_Rival_Text_0
# 295 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 296 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE_103, Route103_Text_MayDefeated
# 297 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
	end


Route103_EventScript_AfterMayBattle::
# 302 "data/maps/Route103/scripts.pory"
	setspeaker Route103_EventScript_Rival_Text_0
# 303 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_AfterMayBattle_Text_0
# 304 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_AfterMayBattle_Text_1
# 305 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 306 "data/maps/Route103/scripts.pory"
	releaseall
	return


# 251 "data/maps/Route103/scripts.pory"
Route103_EventScript_FootprintsMan_Movement_0:
# 252 "data/maps/Route103/scripts.pory"
	face_original_direction
	step_end

# 260 "data/maps/Route103/scripts.pory"
Route103_EventScript_BlockedPath_Movement_0:
# 261 "data/maps/Route103/scripts.pory"
	delay_8
# 262 "data/maps/Route103/scripts.pory"
	walk_left
# 263 "data/maps/Route103/scripts.pory"
	step_end

# 265 "data/maps/Route103/scripts.pory"
Route103_EventScript_BlockedPath_Movement_1:
# 266 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 267 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 268 "data/maps/Route103/scripts.pory"
	step_end

# 273 "data/maps/Route103/scripts.pory"
Route103_EventScript_BlockedPath_Movement_2:
# 274 "data/maps/Route103/scripts.pory"
	walk_up
# 275 "data/maps/Route103/scripts.pory"
	face_right
# 276 "data/maps/Route103/scripts.pory"
	step_end

Route103_EventScript_Rival_Text_0:
# 284 "data/maps/Route103/scripts.pory"
	.string "{RIVAL}$"

Route103_EventScript_AfterMayBattle_Text_0:
# 303 "data/maps/Route103/scripts.pory"
	.string "Wow, you're battling like you've done it\n"
	.string "for years. You just got that Pokémon\l"
	.string "but it already likes you!$"

Route103_EventScript_AfterMayBattle_Text_1:
# 304 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back. I think the\n"
	.string "party's about to start!$"

Route103_Text_MayLetsBattle::
# 309 "data/maps/Route103/scripts.pory"
	.string "Oh, hey, {PLAYER}! The Professor's field\n"
	.string "notes? I've got 'em right here! I see\l"
	.string "you already got your gift, so let's have\l"
	.string "a quick battle!$"
