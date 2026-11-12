Route104North_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route104North_OnTransition
	.byte 0

Route104North_OnTransition:
	call Route104North_EventScript_ShowOrHideWhiteHerbFlorist
	end

Route104North_EventScript_ShowOrHideWhiteHerbFlorist::
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104North_EventScript_HideWhiteHerbFlorist
	goto_if_unset FLAG_BADGE03_GET, Route104North_EventScript_HideWhiteHerbFlorist
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	return

Route104North_EventScript_HideWhiteHerbFlorist::
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	return

Route104North_EventScript_ExpertF::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104North_EventScript_ReceivedBerry
	msgbox Route104North_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_CHESTO_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
	msgbox Route104North_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
	release
	end

Route104North_EventScript_ReceivedBerry::
	msgbox Route104North_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
	release
	end

Route104North_EventScript_WhiteHerbFlorist::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104North_EventScript_ReceivedWhiteHerb
	msgbox Route104North_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
	giveitem ITEM_WHITE_HERB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_WHITE_HERB
	release
	end

Route104North_EventScript_ReceivedWhiteHerb::
	msgbox Route104North_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
	release
	end

Route104North_EventScript_RouteSignRustboro::
	msgbox Route104North_Text_RouteSignRustboro, MSGBOX_SIGN
	end

Route104North_EventScript_FlowerShopSign::
	msgbox Route104North_Text_PrettyPetalFlowShop, MSGBOX_SIGN
	end

Route104North_EventScript_TrainerTipsDoubleBattles::
	msgbox Route104North_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
	end

Route104North_EventScript_Boy2::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104North_EventScript_ReceivedBulletSeed
	msgbox Route104North_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_BULLET_SEED
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_BULLET_SEED
	release
	end

Route104North_EventScript_ReceivedBulletSeed::
	msgbox Route104North_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
	release
	end

Route104North_EventScript_Ivan::
	trainerbattle_single TRAINER_IVAN, Route104North_Text_IvanIntro, Route104North_Text_IvanDefeat
	msgbox Route104North_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end

Route104North_EventScript_Haley::
	trainerbattle_single TRAINER_HALEY_1, Route104North_Text_HaleyIntro, Route104North_Text_HaleyDefeat, Route104North_EventScript_TryRegisterHaleyAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route104North_EventScript_RematchHaley
	setvar VAR_0x8004, TRAINER_HALEY_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route104North_EventScript_TryRegisterHaley
	msgbox Route104North_Text_HaleyPostBattle, MSGBOX_DEFAULT
	release
	end

Route104North_EventScript_TryRegisterHaleyAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route104North_EventScript_RegisterHaleyAfterBattle
	release
	end

Route104North_EventScript_RegisterHaleyAfterBattle::
	msgbox Route104North_Text_HaleyRegister2, MSGBOX_DEFAULT
	register_matchcall TRAINER_HALEY_1
	release
	end

Route104North_EventScript_TryRegisterHaley::
	goto_if_set FLAG_HAS_MATCH_CALL, Route104North_EventScript_RegisterHaley
	msgbox Route104North_Text_HaleyPostBattle, MSGBOX_DEFAULT
	release
	end

Route104North_EventScript_RegisterHaley::
	msgbox Route104North_Text_HaleyRegister1, MSGBOX_DEFAULT
	register_matchcall TRAINER_HALEY_1
	release
	end

Route104North_EventScript_RematchHaley::
	trainerbattle_rematch TRAINER_HALEY_1, Route104North_Text_HaleyRematchIntro, Route104North_Text_HaleyRematchDefeat
	msgbox Route104North_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
	end

Route104North_EventScript_Winston::
	trainerbattle_single TRAINER_WINSTON_1, Route104North_Text_WinstonIntro, Route104North_Text_WinstonDefeat, Route104North_EventScript_TryRegisterWinstonAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route104North_EventScript_RematchWinston
	setvar VAR_0x8004, TRAINER_WINSTON_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route104North_EventScript_TryRegisterWinston
	msgbox Route104North_Text_WinstonPostBattle, MSGBOX_DEFAULT
	release
	end

Route104North_EventScript_TryRegisterWinstonAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route104North_EventScript_RegisterWinstonAfterBattle
	release
	end

Route104North_EventScript_RegisterWinstonAfterBattle::
	msgbox Route104North_Text_WinstonRegister2, MSGBOX_DEFAULT
	register_matchcall TRAINER_WINSTON_1
	release
	end

Route104North_EventScript_TryRegisterWinston::
	goto_if_set FLAG_HAS_MATCH_CALL, Route104North_EventScript_RegisterWinston
	msgbox Route104North_Text_WinstonPostBattle, MSGBOX_DEFAULT
	release
	end

Route104North_EventScript_RegisterWinston::
	msgbox Route104North_Text_WinstonRegister1, MSGBOX_DEFAULT
	register_matchcall TRAINER_WINSTON_1
	release
	end

Route104North_EventScript_RematchWinston::
	trainerbattle_rematch TRAINER_WINSTON_1, Route104North_Text_WinstonRematchIntro, Route104North_Text_WinstonRematchDefeat
	msgbox Route104North_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
	end

Route104North_EventScript_Gina::
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104North_Text_GinaIntro, Route104North_Text_GinaDefeat, Route104North_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route104North_Text_GinaPostBattle, MSGBOX_DEFAULT
	release
	end

Route104North_EventScript_Mia::
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104North_Text_MiaIntro, Route104North_Text_MiaDefeat, Route104North_Text_MiaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route104North_Text_MiaPostBattle, MSGBOX_DEFAULT
	release
	end

Route104North_Text_LikeFillingMouthWithSeedsTakeThis:
	.string "I like filling my mouth with seeds,\n"
	.string "then spitting them out fast!\p"
	.string "You can have this, so you try it out!\p"
	.string "Use it on a POKéMON, and it will learn\n"
	.string "a move for firing seeds rapidly.$"

Route104North_Text_TMsAreOneTimeUse:
	.string "A word of advice!\p"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
	.string "for one-time use.\p"
	.string "Once you use it, it's gone.\n"
	.string "Think twice before using it!$"

Route104North_Text_DontNeedThisTakeIt:
	.string "This FLOWER SHOP started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping.\p"
	.string "I don't need this WHITE HERB anymore.\n"
	.string "Would you take it, please?$"

Route104North_Text_FlowerShopSellingSaplings:
	.string "This FLOWER SHOP started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping. Where should I put them?$"

Route104North_Text_RouteSignRustboro:
	.string "ROUTE 1O4\n"
	.string "{UP_ARROW} RUSTBORO CITY$"

Route104North_Text_PrettyPetalFlowShop:
	.string "PRETTY PETAL FLOWER SHOP$"

Route104North_Text_TrainerTipsDoubleBattles:
	.string "TRAINER TIPS\p"
	.string "In the HOENN region there are pairs\n"
	.string "of TRAINERS who challenge others\l"
	.string "for 2-on-2 POKéMON battles called\l"
	.string "DOUBLE BATTLES.\p"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
	.string "send out two POKéMON, the one at the\l"
	.string "left of the list and the top one.\l"
	.string "Watch how POKéMON are lined up.$"

Route104North_Text_MayWeShouldRegister:
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
	.string "DEVON upgraded your POKéNAV with\n"
	.string "the MATCH CALL system, huh?\p"
	.string "We should register each other so we\n"
	.string "can get in contact anytime.$"

Route104North_Text_RegisteredMay:
	.string "{PLAYER} registered MAY\n"
	.string "in the POKéNAV.$"

Route104North_Text_MayHowsYourPokedex:
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
	.string "how's your POKéDEX coming along?$"

Route104North_Text_MayMinesDecentLetsBattle:
	.string "Mine's looking pretty decent.\n"
	.string "So…\l"
	.string "How about a little battle?$"

Route104North_Text_MayHaventRaisedPokemon:
	.string "MAY: Oh, what's the matter?\p"
	.string "Haven't you caught or raised your\n"
	.string "POKéMON very much?\p"
	.string "That's not very good for a TRAINER!$"

Route104North_Text_MayLetsBattle:
	.string "MAY: So, what do you think?\n"
	.string "How about a little battle here?$"

Route104North_Text_MayIntro:
	.string "MAY: You just became a TRAINER,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

Route104North_Text_MayDefeat:
	.string "Yikes!\n"
	.string "You're better than I expected!$"

Route104North_Text_MayPostBattle:
	.string "MAY: I can tell you've gotten pretty\n"
	.string "good with the way you handle POKéMON.\p"
	.string "But instead of only making them\n"
	.string "battle, you should be like MR. BRINEY.\p"
	.string "It's important to become friends with\n"
	.string "POKéMON, too.$"

Route104North_Text_BrendanWeShouldRegister:
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
	.string "Cool, you had DEVON install the MATCH\n"
	.string "CALL system on your POKéNAV!\p"
	.string "Let's register each other in our\n"
	.string "POKéNAVS so we can keep in touch.$"

Route104North_Text_RegisteredBrendan:
	.string "{PLAYER} registered BRENDAN\n"
	.string "in the POKéNAV.$"

Route104North_Text_BrendanHowsYourPokedex:
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
	.string "Have you filled in any pages yet?$"

Route104North_Text_BrendanDoingGreatLetsBattle:
	.string "Me, I'm doing great!\p"
	.string "Want to check out how good I am with\n"
	.string "a battle?$"

Route104North_Text_BrendanNoConfidence:
	.string "BRENDAN: What's the matter? Don't have\n"
	.string "any confidence in your POKéMON?$"

Route104North_Text_BrendanLetsBattle:
	.string "BRENDAN: What's up?\n"
	.string "Want to have a battle with me?$"

Route104North_Text_BrendanIntro:
	.string "BRENDAN: I know you just became\n"
	.string "a TRAINER, but I won't go easy!$"

Route104North_Text_BrendanDefeat:
	.string "Hmm…\n"
	.string "You're pretty good.$"

Route104North_Text_BrendanPostBattle:
	.string "BRENDAN: You've gotten pretty decent\n"
	.string "at handling POKéMON.\p"
	.string "But, you know, you shouldn't just be\n"
	.string "making POKéMON battle.\p"
	.string "Like MR. BRINEY, it's important to\n"
	.string "become friends with your POKéMON.$"
