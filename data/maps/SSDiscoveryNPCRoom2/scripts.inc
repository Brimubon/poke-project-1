SSDiscoveryNPCRoom2_MapScripts::
	.byte 0


SSDiscoveryNPCRoom2_Mom::
	lock
	faceplayer
	msgbox SSDiscoveryNPCRoom2_Mom_Text_0
	msgbox SSDiscoveryNPCRoom2_Mom_Text_1
	applymovement 1, MovementMom
	waitmovement 1
	release
	end


SSDiscoveryNPCRoom2_Daughter::
	lock
	faceplayer
	msgbox SSDiscoveryNPCRoom2_Daughter_Text_0
	applymovement 2, MovementDaughter
	waitmovement 2
	release
	end


SSDiscoveryNPCRoom2_Doll::
	lock
	msgbox SSDiscoveryNPCRoom2_Doll_Text_0
	release
	end


MovementMom:
	face_down
	step_end

MovementDaughter:
	face_up
	step_end

SSDiscoveryNPCRoom2_Mom_Text_0:
	.string "My daughter's very excited for our trip\n"
	.string "to Astrua.$"

SSDiscoveryNPCRoom2_Mom_Text_1:
	.string "Maybe a little too excited...$"

SSDiscoveryNPCRoom2_Daughter_Text_0:
	.string "Adventure! Adventure!$"

SSDiscoveryNPCRoom2_Doll_Text_0:
	.string "It's a cute Pokemon doll!$"
