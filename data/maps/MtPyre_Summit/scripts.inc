# 1 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 2 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 3 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_Summit/scripts.pory"

# 5 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 6 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 7 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 8 "data/maps/MtPyre_Summit/scripts.pory"

# 9 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 10 "data/maps/MtPyre_Summit/scripts.pory"
	// setobjectxyperm LOCALID_MT_PYRE_SUMMIT_MAXIE, 23, 6
# 11 "data/maps/MtPyre_Summit/scripts.pory"
	// setobjectxyperm LOCALID_MT_PYRE_SUMMIT_ARCHIE, 22, 6
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	// end
# 13 "data/maps/MtPyre_Summit/scripts.pory"

# 14 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 15 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 17 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 18 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 19 "data/maps/MtPyre_Summit/scripts.pory"

# 20 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 21 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 22 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 25 "data/maps/MtPyre_Summit/scripts.pory"

# 26 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 27 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 28 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 29 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 30 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 31 "data/maps/MtPyre_Summit/scripts.pory"

# 32 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	// playbgm MUS_ENCOUNTER_AQUA, FALSE
# 34 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 37 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	// delay 50
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 42 "data/maps/MtPyre_Summit/scripts.pory"
	// msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	// closemessage
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	// fadescreenswapbuffers FADE_TO_BLACK
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	// removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	// removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_1
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	// removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_2
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	// removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_3
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	// removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_4
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	// setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	// setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	// fadedefaultbgm
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	// fadescreenswapbuffers FADE_FROM_BLACK
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	// delay 20
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	// setvar VAR_MT_PYRE_STATE, 1
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	// msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	// giveitem ITEM_MAGMA_EMBLEM
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	// setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	// setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	// releaseall
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	// end
# 65 "data/maps/MtPyre_Summit/scripts.pory"

# 66 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 70 "data/maps/MtPyre_Summit/scripts.pory"

# 71 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 72 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 74 "data/maps/MtPyre_Summit/scripts.pory"

# 75 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 79 "data/maps/MtPyre_Summit/scripts.pory"

# 80 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 86 "data/maps/MtPyre_Summit/scripts.pory"

# 87 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 88 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 90 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 91 "data/maps/MtPyre_Summit/scripts.pory"

# 92 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 98 "data/maps/MtPyre_Summit/scripts.pory"

# 99 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 104 "data/maps/MtPyre_Summit/scripts.pory"

# 105 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 108 "data/maps/MtPyre_Summit/scripts.pory"

# 109 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 114 "data/maps/MtPyre_Summit/scripts.pory"

# 115 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 119 "data/maps/MtPyre_Summit/scripts.pory"

# 120 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 124 "data/maps/MtPyre_Summit/scripts.pory"

# 125 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 134 "data/maps/MtPyre_Summit/scripts.pory"

# 135 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 141 "data/maps/MtPyre_Summit/scripts.pory"

# 142 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 145 "data/maps/MtPyre_Summit/scripts.pory"

# 146 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 149 "data/maps/MtPyre_Summit/scripts.pory"

# 150 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 153 "data/maps/MtPyre_Summit/scripts.pory"

# 154 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 163 "data/maps/MtPyre_Summit/scripts.pory"

# 164 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 169 "data/maps/MtPyre_Summit/scripts.pory"

# 170 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 174 "data/maps/MtPyre_Summit/scripts.pory"

# 175 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 179 "data/maps/MtPyre_Summit/scripts.pory"

# 180 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 185 "data/maps/MtPyre_Summit/scripts.pory"

# 186 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 191 "data/maps/MtPyre_Summit/scripts.pory"

# 192 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 193 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 197 "data/maps/MtPyre_Summit/scripts.pory"

# 198 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	// delay 60
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	// playse SE_PIN
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_ExclamationMark
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_Delay48
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	// delay 30
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	// msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	// closemessage
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	// call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	// delay 30
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	// removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	// removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	// setvar VAR_MT_PYRE_STATE, 3
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	// releaseall
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	// end
# 228 "data/maps/MtPyre_Summit/scripts.pory"

# 229 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 235 "data/maps/MtPyre_Summit/scripts.pory"

# 236 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 242 "data/maps/MtPyre_Summit/scripts.pory"

# 243 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 249 "data/maps/MtPyre_Summit/scripts.pory"

# 250 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 256 "data/maps/MtPyre_Summit/scripts.pory"

# 257 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 263 "data/maps/MtPyre_Summit/scripts.pory"

# 264 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 270 "data/maps/MtPyre_Summit/scripts.pory"

# 271 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 278 "data/maps/MtPyre_Summit/scripts.pory"

# 279 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 286 "data/maps/MtPyre_Summit/scripts.pory"

# 287 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	// applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	// waitmovement 0
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	// return
# 294 "data/maps/MtPyre_Summit/scripts.pory"

# 295 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 300 "data/maps/MtPyre_Summit/scripts.pory"

# 301 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 306 "data/maps/MtPyre_Summit/scripts.pory"

# 307 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 315 "data/maps/MtPyre_Summit/scripts.pory"

# 316 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 324 "data/maps/MtPyre_Summit/scripts.pory"

# 325 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 333 "data/maps/MtPyre_Summit/scripts.pory"

# 334 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 342 "data/maps/MtPyre_Summit/scripts.pory"

# 343 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 350 "data/maps/MtPyre_Summit/scripts.pory"

# 351 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 357 "data/maps/MtPyre_Summit/scripts.pory"

# 358 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 364 "data/maps/MtPyre_Summit/scripts.pory"

# 365 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 371 "data/maps/MtPyre_Summit/scripts.pory"

# 372 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 373 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 375 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 376 "data/maps/MtPyre_Summit/scripts.pory"

# 377 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 381 "data/maps/MtPyre_Summit/scripts.pory"

# 382 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 389 "data/maps/MtPyre_Summit/scripts.pory"

# 390 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 396 "data/maps/MtPyre_Summit/scripts.pory"

# 397 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 403 "data/maps/MtPyre_Summit/scripts.pory"

# 404 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	// trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	// msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	// end
# 408 "data/maps/MtPyre_Summit/scripts.pory"

# 409 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	// trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	// msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	// end
# 413 "data/maps/MtPyre_Summit/scripts.pory"

# 414 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	// trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	// msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	// end
# 418 "data/maps/MtPyre_Summit/scripts.pory"

# 419 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	// trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	// msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	// end
# 423 "data/maps/MtPyre_Summit/scripts.pory"

# 424 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those TEAM MAGMA goons got\n"
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 428 "data/maps/MtPyre_Summit/scripts.pory"

# 429 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the MAGMAS\n"
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 432 "data/maps/MtPyre_Summit/scripts.pory"

# 433 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 434 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 436 "data/maps/MtPyre_Summit/scripts.pory"

# 437 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy TEAM MAGMA.\p"
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 444 "data/maps/MtPyre_Summit/scripts.pory"

# 445 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	.string "TEAM MAGMA first…$"
# 448 "data/maps/MtPyre_Summit/scripts.pory"

# 449 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 452 "data/maps/MtPyre_Summit/scripts.pory"

# 453 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at MT. CHIMNEY.\p"
# 456 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either TEAM,\n"
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 458 "data/maps/MtPyre_Summit/scripts.pory"

# 459 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be TEAM MAGMA…$"
# 462 "data/maps/MtPyre_Summit/scripts.pory"

# 463 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BOSS should have snatched what\n"
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 468 "data/maps/MtPyre_Summit/scripts.pory"

# 469 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join TEAM MAGMA,\l"
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our TEAM AQUA!$"
# 475 "data/maps/MtPyre_Summit/scripts.pory"

# 476 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join TEAM AQUA that\n"
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 479 "data/maps/MtPyre_Summit/scripts.pory"

# 480 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 483 "data/maps/MtPyre_Summit/scripts.pory"

# 484 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	.string "ARCHIE: TEAM MAGMA's MAXIE got ahead\n"
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of us, but we also got what we wanted.\p"
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The RED ORB preserved at MT. PYRE…\n"
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, ARCHIE, now have it in my possession!\p"
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\p"
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, TEAM!\n"
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 493 "data/maps/MtPyre_Summit/scripts.pory"

# 494 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 513 "data/maps/MtPyre_Summit/scripts.pory"

# 514 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 519 "data/maps/MtPyre_Summit/scripts.pory"

# 520 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two POKéMON…\p"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a POKéMON, but no one knows.$"
# 533 "data/maps/MtPyre_Summit/scripts.pory"

# 534 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 539 "data/maps/MtPyre_Summit/scripts.pory"

# 540 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient POKéMON…\p"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "POKéMON have life, our world, too,\l"
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 548 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient POKéMON have\n"
# 549 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 550 "data/maps/MtPyre_Summit/scripts.pory"

# 551 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 553 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of POKéMON that have passed on…\p"
# 554 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of POKéMON\n"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 559 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 561 "data/maps/MtPyre_Summit/scripts.pory"

# 562 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the POKéMON of the land\l"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the POKéMON of the sea…\p"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the land raised\n"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the sea raised huge\n"
# 570 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 581 "data/maps/MtPyre_Summit/scripts.pory"

# 582 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 585 "data/maps/MtPyre_Summit/scripts.pory"

# 586 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 590 "data/maps/MtPyre_Summit/scripts.pory"

# 591 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 597 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 598 "data/maps/MtPyre_Summit/scripts.pory"

# 599 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the POKéMON of the land\l"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the POKéMON of the sea…\p"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the land raised\n"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the sea raised huge\n"
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 610 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 611 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the POKéMON of\n"
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON, shining a vivid green,\n"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged POKéMON.\p"
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green POKéMON\n"
# 616 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"

MtPyre_Summit_EventScript_Phoebe::
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, MtPyre_Summit_Text_PhoebeIntro, MtPyre_Summit_Text_PhoebeDefeat, MtPyre_Summit_EventScript_PhoebeDefeated, FALSE
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, MtPyre_Summit_EventScript_Phoebe_2
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	setspeaker MtPyre_Summit_EventScript_Phoebe_Text_0
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_PhoebePostBattle
MtPyre_Summit_EventScript_Phoebe_1:
# 628 "data/maps/MtPyre_Summit/scripts.pory"
	release
	return

MtPyre_Summit_EventScript_Phoebe_2:
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_GiveTM
	goto MtPyre_Summit_EventScript_Phoebe_1


MtPyre_Summit_EventScript_PhoebeDefeated::
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	message MtPyre_Summit_Text_ReceivedGhostBadge
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	setspeaker MtPyre_Summit_EventScript_Phoebe_Text_0
# 648 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GhostBadgeInfoTakeThis
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 650 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_BADGE02_GET
# 651 "data/maps/MtPyre_Summit/scripts.pory"
	setspeaker NULL
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_GiveTM
# 653 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 655 "data/maps/MtPyre_Summit/scripts.pory"
	release
	return


MtPyre_Summit_EventScript_GiveTM::
# 659 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 660 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MtPyre_Summit_EventScript_GiveTM_2
# 663 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ExplainTM
# 664 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
MtPyre_Summit_EventScript_GiveTM_1:
# 666 "data/maps/MtPyre_Summit/scripts.pory"
	release
	return

MtPyre_Summit_EventScript_GiveTM_2:
# 661 "data/maps/MtPyre_Summit/scripts.pory"
	call Common_EventScript_BagIsFull
	goto MtPyre_Summit_EventScript_GiveTM_1


MtPyre_Summit_EventScript_Phoebe_Text_0:
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Phoebe$"

MtPyre_Summit_Text_PhoebeIntro::
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You did it! Good luck!$"

MtPyre_Summit_Text_PhoebeDefeat::
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aw snap.$"

MtPyre_Summit_Text_PhoebePostBattle::
# 639 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Post battle!$"

MtPyre_Summit_Text_ReceivedGhostBadge::
# 669 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{PLAYER} received the Ghost Badge from\n"
	.string "Phoebe.$"

MtPyre_Summit_Text_GhostBadgeInfoTakeThis::
# 673 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Ghost Badge lets you use Cut\n"
	.string "outside of battle! Take this TM, too!$"

MtPyre_Summit_Text_ExplainTM::
# 677 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That's a TM!$"
