SSDiscovery2NPCRoom2_MapScripts::
	.byte 0


SSDiscovery2NPCRoom2_OldMan::
	lock
	faceplayer
	msgbox SSDiscovery2NPCRoom2_OldMan_Text_0
	msgbox SSDiscovery2NPCRoom2_OldMan_Text_1
	release
	end


SSDiscovery2NPCRoom2_OldWoman::
	lock
	faceplayer
	msgbox SSDiscovery2NPCRoom2_OldWoman_Text_0
	release
	end


SSDiscovery2NPCRoom2_OldMan_Text_0:
	.string "My wife and I are supposed to be coming\n"
	.string "here with a tour group.$"

SSDiscovery2NPCRoom2_OldMan_Text_1:
	.string "I don't have the heart to tell her I\n"
	.string "bought tickets for the wrong ship...$"

SSDiscovery2NPCRoom2_OldWoman_Text_0:
	.string "I can't seem to find my camera\n"
	.string "anywhere...$"
