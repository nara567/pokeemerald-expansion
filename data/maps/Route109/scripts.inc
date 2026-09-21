# 1 "data/maps/Route109/scripts.pory"

# 2 "data/maps/Route109/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route109/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route109/scripts.pory"

# 5 "data/maps/Route109/scripts.pory"

# 6 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 7 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 8 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 9 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109, 0
# 10 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, Route109_Movement_BrineyEnterBoat
# 11 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_BRINEY
# 13 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 14 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 15 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 16 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 17 "data/maps/Route109/scripts.pory"
	end
# 18 "data/maps/Route109/scripts.pory"

# 19 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 20 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 21 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 23 "data/maps/Route109/scripts.pory"
	end
# 24 "data/maps/Route109/scripts.pory"

# 25 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 26 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 27 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 29 "data/maps/Route109/scripts.pory"
	end
# 30 "data/maps/Route109/scripts.pory"

# 31 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 32 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 33 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 35 "data/maps/Route109/scripts.pory"
	end
# 36 "data/maps/Route109/scripts.pory"

# 37 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 38 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE109
# 39 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 40 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BOAT, Route109_Movement_SailToDewford
# 41 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_SailToDewford
# 42 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route109/scripts.pory"
	delay 50
# 44 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 45 "data/maps/Route109/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 46 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerExitBoat
# 47 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 49 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 50 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 18, 9
# 51 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 52 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 53 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route109_Movement_BrineyExitBoat
# 54 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 56 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 57 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_ROUTE109_BOAT, MAP_ROUTE109
# 58 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 59 "data/maps/Route109/scripts.pory"
	closemessage
# 60 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 61 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109
# 62 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 63 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 64 "data/maps/Route109/scripts.pory"
	release
# 65 "data/maps/Route109/scripts.pory"
	end
# 66 "data/maps/Route109/scripts.pory"

# 67 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 68 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 69 "data/maps/Route109/scripts.pory"
	walk_down
# 70 "data/maps/Route109/scripts.pory"
	walk_down
# 71 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 72 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 73 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 74 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 75 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 76 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 77 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 78 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 79 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 80 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 81 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 82 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 83 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 85 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 86 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 87 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 88 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 89 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 90 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 92 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 93 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 94 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 95 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 96 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 97 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 98 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 99 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 100 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 101 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 102 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 103 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 104 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 105 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 106 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 107 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 108 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 109 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 110 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 111 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 112 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 113 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 114 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 115 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 116 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 117 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 118 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 119 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 120 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 121 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 122 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 123 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 124 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 125 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 126 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 127 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 128 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 129 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 130 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 131 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 132 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 133 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 134 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 135 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 136 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 137 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 138 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 139 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 140 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 141 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 142 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 143 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 144 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 145 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 146 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 147 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 148 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 149 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 150 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 151 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 152 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 153 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 154 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 155 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 156 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 157 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 158 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 159 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 160 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 161 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 162 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 163 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 164 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 165 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 166 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 167 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 168 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 169 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 170 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 171 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 172 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 173 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 174 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 175 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 176 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 177 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 178 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 179 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 180 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 181 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 183 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 184 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 185 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 186 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 187 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 188 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 189 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 190 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 191 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 192 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 193 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 194 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 195 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 196 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 197 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 198 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 199 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 200 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 201 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 202 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 203 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 204 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 205 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 206 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 207 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 208 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 209 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 210 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 211 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 212 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 213 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 214 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 215 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 218 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 219 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 220 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 221 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 222 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 223 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 224 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 225 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 226 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 227 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 228 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 229 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 230 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 231 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 232 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 233 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 234 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 235 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 236 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 237 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 238 "data/maps/Route109/scripts.pory"
	walk_left
# 239 "data/maps/Route109/scripts.pory"
	walk_left
# 240 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 241 "data/maps/Route109/scripts.pory"
	step_end
# 242 "data/maps/Route109/scripts.pory"

# 243 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 244 "data/maps/Route109/scripts.pory"
	walk_down
# 245 "data/maps/Route109/scripts.pory"
	walk_down
# 246 "data/maps/Route109/scripts.pory"
	step_end
# 247 "data/maps/Route109/scripts.pory"

# 248 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 249 "data/maps/Route109/scripts.pory"
	walk_down
# 250 "data/maps/Route109/scripts.pory"
	walk_down
# 251 "data/maps/Route109/scripts.pory"
	walk_left
# 252 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 253 "data/maps/Route109/scripts.pory"
	step_end
# 254 "data/maps/Route109/scripts.pory"

# 255 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 256 "data/maps/Route109/scripts.pory"
	walk_right
# 257 "data/maps/Route109/scripts.pory"
	walk_down
# 258 "data/maps/Route109/scripts.pory"
	step_end
# 259 "data/maps/Route109/scripts.pory"

# 260 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 261 "data/maps/Route109/scripts.pory"
	walk_left
# 262 "data/maps/Route109/scripts.pory"
	walk_down
# 263 "data/maps/Route109/scripts.pory"
	step_end
# 264 "data/maps/Route109/scripts.pory"

# 265 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 266 "data/maps/Route109/scripts.pory"
	walk_down
# 267 "data/maps/Route109/scripts.pory"
	step_end
# 268 "data/maps/Route109/scripts.pory"

# 269 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 270 "data/maps/Route109/scripts.pory"
	walk_down
# 271 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 272 "data/maps/Route109/scripts.pory"
	step_end
# 273 "data/maps/Route109/scripts.pory"

# 274 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 275 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 276 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 277 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 278 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 279 "data/maps/Route109/scripts.pory"
	end
# 280 "data/maps/Route109/scripts.pory"

# 281 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 282 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 283 "data/maps/Route109/scripts.pory"
	waitmessage
# 284 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 285 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 287 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 288 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 289 "data/maps/Route109/scripts.pory"
	end
# 290 "data/maps/Route109/scripts.pory"

# 291 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 292 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 293 "data/maps/Route109/scripts.pory"
	closemessage
# 294 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 295 "data/maps/Route109/scripts.pory"
	end
# 296 "data/maps/Route109/scripts.pory"

# 297 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 298 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 299 "data/maps/Route109/scripts.pory"
	release
# 300 "data/maps/Route109/scripts.pory"
	end
# 301 "data/maps/Route109/scripts.pory"

# 302 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 303 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 304 "data/maps/Route109/scripts.pory"
	release
# 305 "data/maps/Route109/scripts.pory"
	end
# 306 "data/maps/Route109/scripts.pory"

# 307 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 308 "data/maps/Route109/scripts.pory"
	lock
# 309 "data/maps/Route109/scripts.pory"
	faceplayer
# 310 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 311 "data/maps/Route109/scripts.pory"
	closemessage
# 312 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 313 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 314 "data/maps/Route109/scripts.pory"
	release
# 315 "data/maps/Route109/scripts.pory"
	end
# 316 "data/maps/Route109/scripts.pory"

# 317 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 318 "data/maps/Route109/scripts.pory"
	lock
# 319 "data/maps/Route109/scripts.pory"
	faceplayer
# 320 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 321 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 322 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 323 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 324 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 325 "data/maps/Route109/scripts.pory"
	closemessage
# 326 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 327 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 328 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 329 "data/maps/Route109/scripts.pory"
	release
# 330 "data/maps/Route109/scripts.pory"
	end
# 331 "data/maps/Route109/scripts.pory"

# 332 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 333 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 334 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 335 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 336 "data/maps/Route109/scripts.pory"
	release
# 337 "data/maps/Route109/scripts.pory"
	end
# 338 "data/maps/Route109/scripts.pory"

# 339 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 340 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 341 "data/maps/Route109/scripts.pory"
	end
# 342 "data/maps/Route109/scripts.pory"

# 343 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 344 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 345 "data/maps/Route109/scripts.pory"
	end
# 346 "data/maps/Route109/scripts.pory"

# 347 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 348 "data/maps/Route109/scripts.pory"
	lock
# 349 "data/maps/Route109/scripts.pory"
	faceplayer
# 350 "data/maps/Route109/scripts.pory"
	waitse
# 351 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 352 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 353 "data/maps/Route109/scripts.pory"
	waitmoncry
# 354 "data/maps/Route109/scripts.pory"
	release
# 355 "data/maps/Route109/scripts.pory"
	end
# 356 "data/maps/Route109/scripts.pory"

# 357 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 358 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 359 "data/maps/Route109/scripts.pory"
	end
# 360 "data/maps/Route109/scripts.pory"

# 361 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 362 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 363 "data/maps/Route109/scripts.pory"
	end
# 364 "data/maps/Route109/scripts.pory"

# 365 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 366 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 367 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 368 "data/maps/Route109/scripts.pory"
	end
# 369 "data/maps/Route109/scripts.pory"

# 370 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 371 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 372 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/Route109/scripts.pory"
	end
# 374 "data/maps/Route109/scripts.pory"

# 375 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 376 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 377 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route109/scripts.pory"
	end
# 379 "data/maps/Route109/scripts.pory"

# 380 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 381 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 382 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 383 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 384 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 385 "data/maps/Route109/scripts.pory"
	release
# 386 "data/maps/Route109/scripts.pory"
	end
# 387 "data/maps/Route109/scripts.pory"

# 388 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 389 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 390 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 392 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 393 "data/maps/Route109/scripts.pory"
	release
# 394 "data/maps/Route109/scripts.pory"
	end
# 395 "data/maps/Route109/scripts.pory"

# 396 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 397 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 398 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 399 "data/maps/Route109/scripts.pory"
	end
# 400 "data/maps/Route109/scripts.pory"

# 401 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 402 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 403 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 404 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 405 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 406 "data/maps/Route109/scripts.pory"
	release
# 407 "data/maps/Route109/scripts.pory"
	end
# 408 "data/maps/Route109/scripts.pory"

# 409 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 410 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 411 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 413 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 414 "data/maps/Route109/scripts.pory"
	release
# 415 "data/maps/Route109/scripts.pory"
	end
# 416 "data/maps/Route109/scripts.pory"

# 417 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 418 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 419 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/Route109/scripts.pory"
	end
# 421 "data/maps/Route109/scripts.pory"

# 422 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 423 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 424 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/Route109/scripts.pory"
	end
# 426 "data/maps/Route109/scripts.pory"

# 427 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 428 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 429 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/Route109/scripts.pory"
	end
# 431 "data/maps/Route109/scripts.pory"

# 432 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 433 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 434 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 435 "data/maps/Route109/scripts.pory"
	end
# 436 "data/maps/Route109/scripts.pory"

# 437 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 438 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 439 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 440 "data/maps/Route109/scripts.pory"
	end
# 441 "data/maps/Route109/scripts.pory"

# 442 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 443 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 444 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 445 "data/maps/Route109/scripts.pory"
	end
# 446 "data/maps/Route109/scripts.pory"

# 447 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 448 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 449 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 450 "data/maps/Route109/scripts.pory"
	end
# 451 "data/maps/Route109/scripts.pory"

# 452 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 453 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 454 "data/maps/Route109/scripts.pory"
	.string "We've made land in SLATEPORT!\p"
# 455 "data/maps/Route109/scripts.pory"
	.string "I suppose you're going to visit CAPT.\n"
# 456 "data/maps/Route109/scripts.pory"
	.string "STERN and deliver the DEVON GOODS?$"
# 457 "data/maps/Route109/scripts.pory"

# 458 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 459 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: I thought you're supposed\n"
# 460 "data/maps/Route109/scripts.pory"
	.string "to deliver the DEVON GOODS.\p"
# 461 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 462 "data/maps/Route109/scripts.pory"
	.string "DEWFORD, then?$"
# 463 "data/maps/Route109/scripts.pory"

# 464 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 465 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
# 466 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 467 "data/maps/Route109/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 468 "data/maps/Route109/scripts.pory"

# 469 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 470 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 471 "data/maps/Route109/scripts.pory"
	.string "the DEVON GOODS. I'll be waiting.$"
# 472 "data/maps/Route109/scripts.pory"

# 473 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 474 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy! We've made land in\n"
# 475 "data/maps/Route109/scripts.pory"
	.string "SLATEPORT!\p"
# 476 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 477 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 478 "data/maps/Route109/scripts.pory"

# 479 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 480 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 481 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 482 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 483 "data/maps/Route109/scripts.pory"

# 484 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 485 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 486 "data/maps/Route109/scripts.pory"
	.string "you need to set sail again!$"
# 487 "data/maps/Route109/scripts.pory"

# 488 "data/maps/Route109/scripts.pory"
Route109_Text_ChillAtMyPapasSpot:
# 489 "data/maps/Route109/scripts.pory"
	.string "Yo, TRAINERS!\n"
# 490 "data/maps/Route109/scripts.pory"
	.string "Whether you're hot to trot,\l"
# 491 "data/maps/Route109/scripts.pory"
	.string "or cool cat not,\l"
# 492 "data/maps/Route109/scripts.pory"
	.string "chill at my papa's spot!$"
# 493 "data/maps/Route109/scripts.pory"

# 494 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 495 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 496 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 497 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 498 "data/maps/Route109/scripts.pory"
	.string "Mine are with my POKéMON, so they\n"
# 499 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 500 "data/maps/Route109/scripts.pory"

# 501 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 502 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 503 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 504 "data/maps/Route109/scripts.pory"

# 505 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 506 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 507 "data/maps/Route109/scripts.pory"

# 508 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 509 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 510 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 511 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 512 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 513 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 514 "data/maps/Route109/scripts.pory"

# 515 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 516 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 517 "data/maps/Route109/scripts.pory"
	.string "But, I get my ZIGZAGOON to pick up\n"
# 518 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 519 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 520 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 521 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 522 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 523 "data/maps/Route109/scripts.pory"

# 524 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 525 "data/maps/Route109/scripts.pory"
	.string "ZIGZAGOON: Guguu?$"
# 526 "data/maps/Route109/scripts.pory"

# 527 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 528 "data/maps/Route109/scripts.pory"
	.string "SEASHORE HOUSE\p"
# 529 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 530 "data/maps/Route109/scripts.pory"
	.string "The place for hot TRAINERS!”$"
# 531 "data/maps/Route109/scripts.pory"

# 532 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 533 "data/maps/Route109/scripts.pory"
	.string "TRAINER TIPS\p"
# 534 "data/maps/Route109/scripts.pory"
	.string "POKéMON at the same level may not\n"
# 535 "data/maps/Route109/scripts.pory"
	.string "always have identical stats.\p"
# 536 "data/maps/Route109/scripts.pory"
	.string "POKéMON raised by TRAINERS are said\n"
# 537 "data/maps/Route109/scripts.pory"
	.string "to grow stronger than wild POKéMON.$"

Route109_MapScripts::
# 541 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route109_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 542 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_HIDE_SLATEPORT_CITY_TEAM_GAIA, Route109_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route109_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 543 "data/maps/Route109/scripts.pory"
	call Route109_EventScript_Move_SeashoreHouseGirl
	return


Route109_EventScript_MrBriney::
# 549 "data/maps/Route109/scripts.pory"
	lock
# 550 "data/maps/Route109/scripts.pory"
	faceplayer
# 551 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_HIDE_SLATEPORT_CITY_TEAM_GAIA, Route109_EventScript_MrBriney_2
Route109_EventScript_MrBriney_1:
# 554 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 555 "data/maps/Route109/scripts.pory"
	release
	end

Route109_EventScript_MrBriney_2:
# 552 "data/maps/Route109/scripts.pory"
	msgbox Route109_EventScript_MrBriney_Text_0
	goto Route109_EventScript_MrBriney_1


Route109_EventScript_Huey::
# 560 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 561 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle
	return


Route109_EventScript_Austina::
# 565 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 566 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle
	return


Route109_EventScript_Gwen::
# 570 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 571 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle
	return


Route109_EventScript_SeashoreHouseGirl::
# 575 "data/maps/Route109/scripts.pory"
	setspeaker Route109_EventScript_SeashoreHouseGirl_Text_0
# 576 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_HIDE_SLATEPORT_CITY_TEAM_GAIA, Route109_EventScript_SeashoreHouseGirl_1
# 581 "data/maps/Route109/scripts.pory"
	faceplayer
# 582 "data/maps/Route109/scripts.pory"
	msgbox Route109_EventScript_SeashoreHouseGirl_Text_1
# 583 "data/maps/Route109/scripts.pory"
	msgbox Route109_EventScript_SeashoreHouseGirl_Text_2
# 584 "data/maps/Route109/scripts.pory"
	release
	return

Route109_EventScript_SeashoreHouseGirl_1:
# 577 "data/maps/Route109/scripts.pory"
	faceplayer
# 578 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot
# 579 "data/maps/Route109/scripts.pory"
	release
	return


Route109_EventScript_Move_SeashoreHouseGirl::
# 589 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_ROUTE109_SEASHOREHOUSE_GIRL, 11, 6
# 590 "data/maps/Route109/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE109_SEASHOREHOUSE_GIRL, MOVEMENT_TYPE_FACE_DOWN
	return


Route109_EventScript_MrBriney_Text_0:
# 552 "data/maps/Route109/scripts.pory"
	.string "You need to head to Dewford? As it\n"
	.string "happens, I'm headed there now!$"

Route109_EventScript_SeashoreHouseGirl_Text_0:
# 575 "data/maps/Route109/scripts.pory"
	.string "Little Girl$"

Route109_EventScript_SeashoreHouseGirl_Text_1:
# 582 "data/maps/Route109/scripts.pory"
	.string "We're still getting everything ready!$"

Route109_EventScript_SeashoreHouseGirl_Text_2:
# 583 "data/maps/Route109/scripts.pory"
	.string "Come back later please!$"
