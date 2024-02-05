NewBirchLab_MapScripts::
	.byte 0


NewBirchLab_EventScript_Pokeball::
	lockall
	showmonpic SPECIES_ZANGOOSE, 10, 3
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
	givemon SPECIES_ZANGOOSE, 6, ITEM_POKE_BALL
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


NewBirchLab_EventScript_GiveDexnav::
	lockall
	faceplayer
	goto_if_set FLAG_SYS_DEXNAV_GET, NewBirchLab_EventScript_GiveDexnav_1
	msgbox NewBirchLab_EventScript_GiveDexnav_Text_0
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_GiveDexnav_Text_1
	setflag FLAG_SYS_DEXNAV_GET
	setflag FLAG_SYS_DETECTOR_MODE
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_GiveDexnav_1:
	msgbox NewBirchLab_EventScript_AfterDexnav
	waitmessage
	releaseall
	end


NewBirchLab_EventScript_Pokeball_Text_0:
	.string "Oh, a free Zangoose! Take it?$"

NewBirchLab_EventScript_Pokeball_Text_1:
	.string "Recieved Zangoose!$"

NewBirchLab_EventScript_Pokeball_Text_2:
	.string "No More Room.$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC!$"

NewBirchLab_EventScript_GiveJournal_Text_0:
	.string "Hey, here's a journal!$"

NewBirchLab_EventScript_GiveJournal_Text_1:
	.string "Recieved Journal!$"

NewBirchLab_EventScript_GiveDexnav_Text_0:
	.string "Hey, take this Dexnav!$"

NewBirchLab_EventScript_GiveDexnav_Text_1:
	.string "Recieved Dexnav!$"

NewBirchLab_NotChosen::
	.string "But it's free...$"

NewBirchLab_EventScript_ExplainJournal::
	.string "That journal will be very useful. You\n"
	.string "can use it to keep track of requests\l"
	.string "you get from others.$"

NewBirchLab_EventScript_AfterDexnav::
	.string "I would try explaining the Dexnav, but\n"
	.string "you already know how to use it.$"
