SSDiscoveryRoomsFloor1_MapScripts::
	.byte 0


SSDiscovery_RoomsFloor1_HexManiac::
	lock
	faceplayer
	msgbox SSDiscovery_RoomsFloor1_HexManiac_Text_0
	msgbox SSDiscovery_RoomsFloor1_HexManiac_Text_1
	applymovement 4, Movement1
	waitmovement 4
	release
	end


SSDiscovery_RoomsFloor1_Fighter::
	lock
	faceplayer
	msgbox SSDiscovery_RoomsFloor1_Fighter_Text_0
	msgbox SSDiscovery_RoomsFloor1_Fighter_Text_1
	applymovement 3, Movement2
	waitmovement 3
	release
	end


SSDiscovery_RoomsFloor1_Psychic::
	lock
	faceplayer
	msgbox SSDiscovery_RoomsFloor1_Psychic_Text_0
	msgbox SSDiscovery_RoomsFloor1_Psychic_Text_1
	applymovement 5, Movement3
	waitmovement 5
	release
	end


SSDiscovery_RoomsFloor1_Artist::
	lock
	faceplayer
	msgbox SSDiscovery_RoomsFloor1_Artist_Text_0
	msgbox SSDiscovery_RoomsFloor1_Artist_Text_1
	applymovement 2, Movement4
	waitmovement 2
	release
	end


SSDiscovery_RoomsFloor1_Girl1::
	lock
	faceplayer
	msgbox SSDiscovery_RoomsFloor1_Girl1_Text_0
	msgbox SSDiscovery_RoomsFloor1_Girl1_Text_1
	release
	end


SSDiscovery_RoomsFloor1_Girl2::
	lock
	faceplayer
	msgbox SSDiscovery_RoomsFloor1_Girl2_Text_0
	release
	end


Movement1:
	face_down
	step_end

Movement2:
	face_right
	step_end

Movement3:
	face_left
	step_end

Movement4:
	face_up
	step_end

SSDiscovery_RoomsFloor1_HexManiac_Text_0:
	.string "We're going to form our own exploration\n"
	.string "team, starting today.$"

SSDiscovery_RoomsFloor1_HexManiac_Text_1:
	.string "Oh, and sorry to disappoint, but we're\n"
	.string "an exclusive club.$"

SSDiscovery_RoomsFloor1_Fighter_Text_0:
	.string "My team shares an unbreakable bond.$"

SSDiscovery_RoomsFloor1_Fighter_Text_1:
	.string "Together, we shall scale the tallest\n"
	.string "mountains, sail the rockiest seas, and\l"
	.string "discover untold treasures!$"

SSDiscovery_RoomsFloor1_Psychic_Text_0:
	.string "I can sense it...$"

SSDiscovery_RoomsFloor1_Psychic_Text_1:
	.string "Great fortunes await me and my team...$"

SSDiscovery_RoomsFloor1_Artist_Text_0:
	.string "The view of Petaldew Town from here is\n"
	.string "breathtaking...$"

SSDiscovery_RoomsFloor1_Artist_Text_1:
	.string "I shall translate my feelings on this\n"
	.string "beautiful sight onto my canvas!$"

SSDiscovery_RoomsFloor1_Girl1_Text_0:
	.string "Potions... Repels... Pokeballs...$"

SSDiscovery_RoomsFloor1_Girl1_Text_1:
	.string "Ugh, I still feel like I'm forgetting\n"
	.string "something.$"

SSDiscovery_RoomsFloor1_Girl2_Text_0:
	.string "Oh, are you joining the Explorer's Guild?\n"
	.string "Your outfit's pretty cute!$"
