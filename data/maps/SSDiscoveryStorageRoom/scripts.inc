SSDiscoveryStorageRoom_MapScripts::
	.byte 0


SSDiscoveryStorageRoom_Worker1::
	lock
	faceplayer
	msgbox SSDiscoveryStorageRoom_Worker1_Text_0
	msgbox SSDiscoveryStorageRoom_Worker1_Text_1
	release
	end


SSDiscoveryStorageRoom_Worker2::
	lock
	faceplayer
	msgbox SSDiscoveryStorageRoom_Worker2_Text_0
	msgbox SSDiscoveryStorageRoom_Worker2_Text_1
	release
	end


SSDiscoveryStorageRoom_Potion::
	lock
	giveitem ITEM_POTION, 1
	removeobject 3
	setflag FLAG_ITEM_SSDISCOVERY_POTION
	release
	end


SSDiscoveryStorageRoom_Worker1_Text_0:
	.string "How'd you end up in the storage room\n"
	.string "lookin' for the exit?$"

SSDiscoveryStorageRoom_Worker1_Text_1:
	.string "Ship exit's two floors up, mate.$"

SSDiscoveryStorageRoom_Worker2_Text_0:
	.string "Hey! You're not supposed to be here!$"

SSDiscoveryStorageRoom_Worker2_Text_1:
	.string "...Ah, whatever. I don't get paid enough\n"
	.string "to care.$"
