# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 3 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 4 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity/scripts.pory"

# 6 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 7 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 8 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 9 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 10 "data/maps/RustboroCity/scripts.pory"
	end
# 11 "data/maps/RustboroCity/scripts.pory"

# 12 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 13 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 14 "data/maps/RustboroCity/scripts.pory"
	return
# 15 "data/maps/RustboroCity/scripts.pory"

# 16 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 17 "data/maps/RustboroCity/scripts.pory"
	lock
# 18 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 19 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 20 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 21 "data/maps/RustboroCity/scripts.pory"
	release
# 22 "data/maps/RustboroCity/scripts.pory"
	end
# 23 "data/maps/RustboroCity/scripts.pory"

# 24 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 25 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 26 "data/maps/RustboroCity/scripts.pory"
	release
# 27 "data/maps/RustboroCity/scripts.pory"
	end
# 28 "data/maps/RustboroCity/scripts.pory"

# 29 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 30 "data/maps/RustboroCity/scripts.pory"
	lock
# 31 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 32 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity/scripts.pory"
	release
# 34 "data/maps/RustboroCity/scripts.pory"
	end
# 35 "data/maps/RustboroCity/scripts.pory"

# 36 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 37 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 38 "data/maps/RustboroCity/scripts.pory"
	end
# 39 "data/maps/RustboroCity/scripts.pory"

# 40 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 41 "data/maps/RustboroCity/scripts.pory"
	lock
# 42 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 43 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 44 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 45 "data/maps/RustboroCity/scripts.pory"
	release
# 46 "data/maps/RustboroCity/scripts.pory"
	end
# 47 "data/maps/RustboroCity/scripts.pory"

# 48 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 49 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 50 "data/maps/RustboroCity/scripts.pory"
	release
# 51 "data/maps/RustboroCity/scripts.pory"
	end
# 52 "data/maps/RustboroCity/scripts.pory"

# 53 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 54 "data/maps/RustboroCity/scripts.pory"
	lock
# 55 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 56 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 57 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 58 "data/maps/RustboroCity/scripts.pory"
	release
# 59 "data/maps/RustboroCity/scripts.pory"
	end
# 60 "data/maps/RustboroCity/scripts.pory"

# 61 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 62 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity/scripts.pory"
	release
# 64 "data/maps/RustboroCity/scripts.pory"
	end
# 65 "data/maps/RustboroCity/scripts.pory"

# 66 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 67 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 68 "data/maps/RustboroCity/scripts.pory"
	end
# 69 "data/maps/RustboroCity/scripts.pory"

# 70 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 71 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 72 "data/maps/RustboroCity/scripts.pory"
	end
# 73 "data/maps/RustboroCity/scripts.pory"

# 74 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 75 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 76 "data/maps/RustboroCity/scripts.pory"
	end
# 77 "data/maps/RustboroCity/scripts.pory"

# 78 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 79 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 80 "data/maps/RustboroCity/scripts.pory"
	end
# 81 "data/maps/RustboroCity/scripts.pory"

# 82 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 83 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 84 "data/maps/RustboroCity/scripts.pory"
	end
# 85 "data/maps/RustboroCity/scripts.pory"

# 86 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 87 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 88 "data/maps/RustboroCity/scripts.pory"
	end
# 89 "data/maps/RustboroCity/scripts.pory"

# 90 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 91 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 92 "data/maps/RustboroCity/scripts.pory"
	end
# 93 "data/maps/RustboroCity/scripts.pory"

# 94 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 95 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 96 "data/maps/RustboroCity/scripts.pory"
	end
# 97 "data/maps/RustboroCity/scripts.pory"

# 98 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 99 "data/maps/RustboroCity/scripts.pory"
	lock
# 100 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 101 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 102 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 103 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/RustboroCity/scripts.pory"
	release
# 105 "data/maps/RustboroCity/scripts.pory"
	end
# 106 "data/maps/RustboroCity/scripts.pory"

# 107 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 108 "data/maps/RustboroCity/scripts.pory"
	lock
# 109 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 110 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 111 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 112 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/RustboroCity/scripts.pory"
	release
# 114 "data/maps/RustboroCity/scripts.pory"
	end
# 115 "data/maps/RustboroCity/scripts.pory"

# 116 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 117 "data/maps/RustboroCity/scripts.pory"
	lock
# 118 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 119 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 120 "data/maps/RustboroCity/scripts.pory"
	release
# 121 "data/maps/RustboroCity/scripts.pory"
	end
# 122 "data/maps/RustboroCity/scripts.pory"

# 123 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 124 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 125 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 126 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 127 "data/maps/RustboroCity/scripts.pory"
	return
# 128 "data/maps/RustboroCity/scripts.pory"

# 129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 130 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 131 "data/maps/RustboroCity/scripts.pory"
	return
# 132 "data/maps/RustboroCity/scripts.pory"

# 133 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 134 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 135 "data/maps/RustboroCity/scripts.pory"
	return
# 136 "data/maps/RustboroCity/scripts.pory"

# 137 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 138 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 139 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 140 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 141 "data/maps/RustboroCity/scripts.pory"
	end
# 142 "data/maps/RustboroCity/scripts.pory"

# 143 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 144 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 145 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 146 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 147 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 148 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 149 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 150 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 151 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 152 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 153 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 154 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 155 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 156 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 157 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 158 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 159 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 160 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 161 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 162 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 163 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 164 "data/maps/RustboroCity/scripts.pory"
	end
# 165 "data/maps/RustboroCity/scripts.pory"

# 166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 167 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 168 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 169 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 170 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 172 "data/maps/RustboroCity/scripts.pory"
	end
# 173 "data/maps/RustboroCity/scripts.pory"

# 174 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 175 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 176 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 177 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 178 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 179 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 180 "data/maps/RustboroCity/scripts.pory"
	end
# 181 "data/maps/RustboroCity/scripts.pory"

# 182 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 183 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 184 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 185 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 186 "data/maps/RustboroCity/scripts.pory"
	end
# 187 "data/maps/RustboroCity/scripts.pory"

# 188 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 189 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 190 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 191 "data/maps/RustboroCity/scripts.pory"
	return
# 192 "data/maps/RustboroCity/scripts.pory"

# 193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 194 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 195 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 196 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 197 "data/maps/RustboroCity/scripts.pory"
	end
# 198 "data/maps/RustboroCity/scripts.pory"

# 199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 200 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 201 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 202 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 203 "data/maps/RustboroCity/scripts.pory"
	end
# 204 "data/maps/RustboroCity/scripts.pory"

# 205 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 206 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 207 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 208 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 209 "data/maps/RustboroCity/scripts.pory"
	end
# 210 "data/maps/RustboroCity/scripts.pory"

# 211 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 212 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 213 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 214 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 215 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 216 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 217 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 218 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 219 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 220 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 221 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 222 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 223 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 224 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 225 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 226 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 227 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 228 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 229 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 230 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 231 "data/maps/RustboroCity/scripts.pory"
	end
# 232 "data/maps/RustboroCity/scripts.pory"

# 233 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 234 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 235 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 236 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 237 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 238 "data/maps/RustboroCity/scripts.pory"
	end
# 239 "data/maps/RustboroCity/scripts.pory"

# 240 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 241 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 242 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 243 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 244 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 245 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 246 "data/maps/RustboroCity/scripts.pory"
	end
# 247 "data/maps/RustboroCity/scripts.pory"

# 248 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 249 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 250 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 251 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 252 "data/maps/RustboroCity/scripts.pory"
	end
# 253 "data/maps/RustboroCity/scripts.pory"

# 254 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 255 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 256 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 257 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 258 "data/maps/RustboroCity/scripts.pory"
	end
# 259 "data/maps/RustboroCity/scripts.pory"

# 260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 261 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 262 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 263 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 264 "data/maps/RustboroCity/scripts.pory"
	end
# 265 "data/maps/RustboroCity/scripts.pory"

# 266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 267 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 268 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 269 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 270 "data/maps/RustboroCity/scripts.pory"
	end
# 271 "data/maps/RustboroCity/scripts.pory"

# 272 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 273 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 274 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 275 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 276 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 277 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 278 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 279 "data/maps/RustboroCity/scripts.pory"
	step_end
# 280 "data/maps/RustboroCity/scripts.pory"

# 281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 282 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 283 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 284 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 285 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 286 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 287 "data/maps/RustboroCity/scripts.pory"
	step_end
# 288 "data/maps/RustboroCity/scripts.pory"

# 289 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 290 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 291 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 292 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 293 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 294 "data/maps/RustboroCity/scripts.pory"
	step_end
# 295 "data/maps/RustboroCity/scripts.pory"

# 296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 297 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 298 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 299 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 300 "data/maps/RustboroCity/scripts.pory"
	step_end
# 301 "data/maps/RustboroCity/scripts.pory"

# 302 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 303 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 304 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 305 "data/maps/RustboroCity/scripts.pory"
	step_end
# 306 "data/maps/RustboroCity/scripts.pory"

# 307 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 308 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 309 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 310 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 311 "data/maps/RustboroCity/scripts.pory"
	step_end
# 312 "data/maps/RustboroCity/scripts.pory"

# 313 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 314 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 315 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 316 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 317 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 318 "data/maps/RustboroCity/scripts.pory"
	step_end
# 319 "data/maps/RustboroCity/scripts.pory"

# 320 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 321 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 322 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 323 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 324 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 325 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 326 "data/maps/RustboroCity/scripts.pory"
	step_end
# 327 "data/maps/RustboroCity/scripts.pory"

# 328 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 329 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 330 "data/maps/RustboroCity/scripts.pory"
	end
# 331 "data/maps/RustboroCity/scripts.pory"

# 332 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 333 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 334 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 335 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 336 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 337 "data/maps/RustboroCity/scripts.pory"

# 338 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 339 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 340 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 341 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 342 "data/maps/RustboroCity/scripts.pory"

# 343 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 344 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 345 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 346 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 347 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 348 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 349 "data/maps/RustboroCity/scripts.pory"

# 350 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 351 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 352 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 353 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 354 "data/maps/RustboroCity/scripts.pory"

# 355 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 356 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 357 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 358 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 359 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 360 "data/maps/RustboroCity/scripts.pory"

# 361 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 362 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 363 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 364 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 365 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 366 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 367 "data/maps/RustboroCity/scripts.pory"

# 368 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 369 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 370 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 371 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 372 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 373 "data/maps/RustboroCity/scripts.pory"

# 374 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 375 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 376 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 377 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 378 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 379 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 380 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 381 "data/maps/RustboroCity/scripts.pory"

# 382 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 383 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 384 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 385 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 386 "data/maps/RustboroCity/scripts.pory"

# 387 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 388 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 389 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 390 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 391 "data/maps/RustboroCity/scripts.pory"

# 392 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 393 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 394 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 395 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 396 "data/maps/RustboroCity/scripts.pory"

# 397 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 398 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 399 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 400 "data/maps/RustboroCity/scripts.pory"

# 401 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 402 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 403 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 404 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 405 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 406 "data/maps/RustboroCity/scripts.pory"

# 407 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 408 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 409 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 410 "data/maps/RustboroCity/scripts.pory"

# 411 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 412 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 413 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 414 "data/maps/RustboroCity/scripts.pory"

# 415 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 416 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 417 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 418 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 419 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 420 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 421 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 422 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 423 "data/maps/RustboroCity/scripts.pory"

# 424 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 425 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 426 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 427 "data/maps/RustboroCity/scripts.pory"

# 428 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 429 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 430 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 431 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 432 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 433 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 434 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 435 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 436 "data/maps/RustboroCity/scripts.pory"

# 437 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 438 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 439 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 440 "data/maps/RustboroCity/scripts.pory"

# 441 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 442 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 443 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 444 "data/maps/RustboroCity/scripts.pory"

# 445 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 446 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 447 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 448 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 449 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 450 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 451 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 452 "data/maps/RustboroCity/scripts.pory"

# 453 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 454 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 455 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 456 "data/maps/RustboroCity/scripts.pory"

# 457 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 458 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 459 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 460 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 461 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 462 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 463 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 464 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 465 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 466 "data/maps/RustboroCity/scripts.pory"

# 467 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 468 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 469 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 470 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 471 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 472 "data/maps/RustboroCity/scripts.pory"

# 473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 474 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 475 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 476 "data/maps/RustboroCity/scripts.pory"

# 477 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 478 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 479 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 480 "data/maps/RustboroCity/scripts.pory"

# 481 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 482 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 483 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 484 "data/maps/RustboroCity/scripts.pory"

# 485 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 486 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 487 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 488 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 489 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 490 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 491 "data/maps/RustboroCity/scripts.pory"

# 492 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 493 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 494 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 495 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 496 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 497 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 498 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 499 "data/maps/RustboroCity/scripts.pory"

# 500 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 501 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 502 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 503 "data/maps/RustboroCity/scripts.pory"

# 504 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 505 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 506 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 507 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 508 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 509 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 510 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 511 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 512 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 513 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 514 "data/maps/RustboroCity/scripts.pory"

# 515 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 516 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 517 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 518 "data/maps/RustboroCity/scripts.pory"

# 519 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 520 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 521 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 522 "data/maps/RustboroCity/scripts.pory"

# 523 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 524 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 525 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 526 "data/maps/RustboroCity/scripts.pory"

# 527 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 528 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 529 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 530 "data/maps/RustboroCity/scripts.pory"

# 531 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 532 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 533 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 534 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 535 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 536 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 537 "data/maps/RustboroCity/scripts.pory"

# 538 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 539 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 540 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 541 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 542 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 543 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 544 "data/maps/RustboroCity/scripts.pory"

# 545 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 546 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 547 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 548 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 549 "data/maps/RustboroCity/scripts.pory"

# 550 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 551 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 552 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 553 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 554 "data/maps/RustboroCity/scripts.pory"

# 555 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 556 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 557 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 558 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 559 "data/maps/RustboroCity/scripts.pory"

# 560 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 561 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 562 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 563 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 564 "data/maps/RustboroCity/scripts.pory"

# 565 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 566 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 567 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 568 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 569 "data/maps/RustboroCity/scripts.pory"

# 570 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 571 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 572 "data/maps/RustboroCity/scripts.pory"

# 573 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 574 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 575 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 576 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 577 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 578 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 579 "data/maps/RustboroCity/scripts.pory"

# 580 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 581 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 582 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 583 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 584 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 585 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 586 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 587 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 588 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 589 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 590 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 591 "data/maps/RustboroCity/scripts.pory"

# 592 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 593 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 594 "data/maps/RustboroCity/scripts.pory"

# 595 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 596 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 597 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 598 "data/maps/RustboroCity/scripts.pory"

# 599 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 600 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 601 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 602 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 603 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 604 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 605 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 606 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 607 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_EventScript_RivalTrigger1::
# 611 "data/maps/RustboroCity/scripts.pory"
	lockall
# 612 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 613 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_0
# 616 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 618 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_1
# 621 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_EventScript_RivalTrigger1_Movement_2
# 625 "data/maps/RustboroCity/scripts.pory"
	delay 48
# 626 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_3
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_Rival
	return


RustboroCity_EventScript_RivalTrigger2::
# 636 "data/maps/RustboroCity/scripts.pory"
	lockall
# 637 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 638 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_0
# 641 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_1
# 646 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_EventScript_RivalTrigger1_Movement_2
# 650 "data/maps/RustboroCity/scripts.pory"
	delay 48
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger2_Movement_0
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_Rival
	return


RustboroCity_EventScript_RivalTrigger3::
# 661 "data/maps/RustboroCity/scripts.pory"
	lockall
# 662 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_0
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 668 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_1
# 671 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_EventScript_RivalTrigger1_Movement_2
# 675 "data/maps/RustboroCity/scripts.pory"
	delay 48
# 676 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger3_Movement_0
# 681 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_Rival
	return


RustboroCity_EventScript_RivalTrigger4::
# 686 "data/maps/RustboroCity/scripts.pory"
	lockall
# 687 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 688 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_0
# 691 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 692 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 693 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_1
# 696 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 697 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_EventScript_RivalTrigger1_Movement_2
# 700 "data/maps/RustboroCity/scripts.pory"
	delay 48
# 701 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger4_Movement_0
# 705 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 706 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_Rival
	return


RustboroCity_EventScript_RivalTrigger5::
# 710 "data/maps/RustboroCity/scripts.pory"
	lockall
# 711 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 712 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_0
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 717 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_1
# 720 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 721 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_EventScript_RivalTrigger1_Movement_2
# 724 "data/maps/RustboroCity/scripts.pory"
	delay 48
# 725 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger5_Movement_0
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_Rival
	return


RustboroCity_EventScript_Rival::
# 735 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 736 "data/maps/RustboroCity/scripts.pory"
	setspeaker RustboroCity_EventScript_Rival_Text_0
# 737 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_Rival_Text_1
# 738 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_Rival_Text_2
# 740 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 741 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 742 "data/maps/RustboroCity/scripts.pory"
	releaseall
	return


RustboroCity_EventScript_BattleRival::
	return


# 613 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1_Movement_0:
# 614 "data/maps/RustboroCity/scripts.pory"
	walk_slow_down
# 614 "data/maps/RustboroCity/scripts.pory"
	walk_slow_down
# 614 "data/maps/RustboroCity/scripts.pory"
	walk_slow_down
# 614 "data/maps/RustboroCity/scripts.pory"
	walk_slow_down
	step_end

# 618 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1_Movement_1:
# 619 "data/maps/RustboroCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 622 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1_Movement_2:
# 623 "data/maps/RustboroCity/scripts.pory"
	face_up
	step_end

# 626 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1_Movement_3:
# 627 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 628 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 628 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 628 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 629 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
	step_end

# 651 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2_Movement_0:
# 652 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 653 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 653 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 654 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
	step_end

# 676 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3_Movement_0:
# 677 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 678 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 679 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
	step_end

# 701 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4_Movement_0:
# 702 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 702 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 702 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 702 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 703 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
	step_end

# 725 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5_Movement_0:
# 726 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 727 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 728 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
	step_end

RustboroCity_EventScript_Rival_Text_0:
# 736 "data/maps/RustboroCity/scripts.pory"
	.string "{RIVAL}$"

RustboroCity_EventScript_Rival_Text_1:
# 737 "data/maps/RustboroCity/scripts.pory"
	.string "Hi {PLAYER}! Fancy meeting you here! I\n"
	.string "was just coming back from Meteor Falls.\l"
	.string "Roxanne wanted me to help with Minior\l"
	.string "research!$"

RustboroCity_EventScript_Rival_Text_2:
# 738 "data/maps/RustboroCity/scripts.pory"
	.string "Do you want to see how it's going? Let's\n"
	.string "see if you're putting your birthday\l"
	.string "gifts to good use!$"
