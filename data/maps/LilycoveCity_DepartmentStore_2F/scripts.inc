LilycoveCity_DepartmentStore_2F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_2F_EventScript_Cook::
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE04_GET, LilycoveCity_DepartmentStore_2F_EventScript_Pokemart4
	goto_if_set FLAG_BADGE02_GET, LilycoveCity_DepartmentStore_2F_EventScript_Pokemart2
	goto LilycoveCity_DepartmentStore_2F_EventScript_Pokemart1
	end

LilycoveCity_DepartmentStore_2F_EventScript_Pokemart1::
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_2F_Pokemart1:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_AWAKENING
	pokemartlistend

LilycoveCity_DepartmentStore_2F_EventScript_Pokemart2::
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_2F_Pokemart2:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_AWAKENING
	pokemartlistend

LilycoveCity_DepartmentStore_2F_EventScript_Pokemart4::
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart4
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_2F_Pokemart4:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_AWAKENING
	pokemartlistend

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE04_GET, LilycoveCity_DepartmentStore_2F_EventScript_PokemartC
	goto_if_set FLAG_BADGE02_GET, LilycoveCity_DepartmentStore_2F_EventScript_PokemartB
	goto LilycoveCity_DepartmentStore_2F_EventScript_PokemartA
	end

LilycoveCity_DepartmentStore_2F_EventScript_PokemartA::
	pokemart LilycoveCity_DepartmentStore_2F_PokemartA
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_2F_PokemartA:
	.2byte ITEM_POTION
	.2byte ITEM_REPEL
	.2byte ITEM_ESCAPE_ROPE
	pokemartlistend

LilycoveCity_DepartmentStore_2F_EventScript_PokemartB::
	pokemart LilycoveCity_DepartmentStore_2F_PokemartB
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
	.align 2
LilycoveCity_DepartmentStore_2F_PokemartB:
	.2byte ITEM_POTION
	.2byte ITEM_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte 
	pokemartlistend

LilycoveCity_DepartmentStore_2F_EventScript_PokemartC::
	pokemart LilycoveCity_DepartmentStore_2F_PokemartC
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
	.align 2
LilycoveCity_DepartmentStore_2F_PokemartC:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	pokemartlistend

LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
	.string "Learn to use items properly.\n"
	.string "That's basic, really.$"

LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
	.string "My husband is waiting at home.\n"
	.string "What would make a good gift for him?$"

LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
	.string "I'm leaving on a long journey soon.\n"
	.string "I need to stock up on items.$"

