SSDiscovery2NPCRoom1_MapScripts::
	.byte 0


SSDiscovery2NPCRoom1_Guy::
	lock
	faceplayer
	goto_if_set FLAG_SSDISCOVERY_GIVEPOTION, SSDiscovery2NPCRoom1_Guy_1
	msgbox SSDiscovery2NPCRoom1_NoPotion_0
	msgbox SSDiscovery2NPCRoom1_NoPotion_1
	waitmessage
	giveitem ITEM_POTION
	setflag FLAG_SSDISCOVERY_GIVEPOTION
	release
	end

SSDiscovery2NPCRoom1_Guy_1:
	msgbox SSDiscovery2NPCRoom1_GotPotion_0
	msgbox SSDiscovery2NPCRoom1_GotPotion_1
	waitmessage
	release
	end


SSDiscovery2NPCRoom1_Box::
	lock
	msgbox SSDiscovery2NPCRoom1_Box_Text_0
	release
	end


SSDiscovery2NPCRoom1_Box_Text_0:
	.string "It's a box full of high-tech equipment.$"

SSDiscovery2NPCRoom1_GotPotion_0::
	.string "I'm gonna be doing a bunch of exploring\n"
	.string "stuff, too.$"

SSDiscovery2NPCRoom1_GotPotion_1::
	.string "Here's to hoping we both find something\n"
	.string "cool!$"

SSDiscovery2NPCRoom1_NoPotion_0::
	.string "That outfit... are you an explorer?$"

SSDiscovery2NPCRoom1_NoPotion_1::
	.string "Here, have this!$"
