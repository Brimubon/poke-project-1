NewBirchLab_MapScripts::
	.byte 0


NewBirchLab_EventScript_Pokeball::
	lockall
	showmonpic SPECIES_TRAPINCH, 10, 3
	msgbox NewBirchLab_EventScript_Pokeball_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Pokeball_2
	hidemonpic
	msgbox NewBirchLab_NotChosen
NewBirchLab_EventScript_Pokeball_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Pokeball_2:
	givemon SPECIES_TRAPINCH, 5, ITEM_POKE_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Pokeball_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Pokeball_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Pokeball_Text_2
	goto NewBirchLab_EventScript_Pokeball_1

NewBirchLab_EventScript_Pokeball_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Pokeball_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Pokeball_1

NewBirchLab_EventScript_Pokeball_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Pokeball_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Pokeball_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchLab_EventScript_GiveJournal::
	lockall
	faceplayer
	goto_if_set FLAG_SYS_QUEST_MENU_GET, NewBirchLab_EventScript_GiveJournal_1
	msgbox NewBirchLab_EventScript_GiveJournal_Text_0
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_GiveJournal_Text_1
	setflag FLAG_SYS_QUEST_MENU_GET
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_GiveJournal_1:
	msgbox NewBirchLab_EventScript_ExplainJournal
	waitmessage
	releaseall
	end


NewBirchLab_EventScript_Pokeball_Text_0:
	.string "Ah, so you want Trapinch?$"

NewBirchLab_EventScript_Pokeball_Text_1:
	.string "Recieved Trapinch!$"

NewBirchLab_EventScript_Pokeball_Text_2:
	.string "No More Room$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC!$"

NewBirchLab_EventScript_GiveJournal_Text_0:
	.string "Hey, here's a journal!$"

NewBirchLab_EventScript_GiveJournal_Text_1:
	.string "Recieved Journal!$"

NewBirchLab_NotChosen::
	.string "You don't want that one?$"

NewBirchLab_EventScript_ExplainJournal::
	.string "That journal will be very useful. You\n"
	.string "can use it to keep track of requests\l"
	.string "you get from others.$"
