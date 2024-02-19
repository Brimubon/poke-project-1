SSDiscoveryRoomsFloor2_MapScripts::
	.byte 0


SSDiscoveryRoomsFloor2_Gentleman::
	lock
	faceplayer
	msgbox SSDiscoveryRoomsFloor2_Gentleman_Text_0
	msgbox SSDiscoveryRoomsFloor2_Gentleman_Text_1
	release
	end


SSDiscoveryRoomsFloor2_Scientist::
	lock
	faceplayer
	msgbox SSDiscoveryRoomsFloor2_Scientist_Text_0
	msgbox SSDiscoveryRoomsFloor2_Scientist_Text_1
	msgbox SSDiscoveryRoomsFloor2_Scientist_Text_2
	release
	end


SSDiscoveryRoomsFloor2_Girl::
	lock
	faceplayer
	msgbox SSDiscoveryRoomsFloor2_Girl_Text_0
	msgbox SSDiscoveryRoomsFloor2_Girl_Text_1
	release
	end


SSDiscoveryRoomsFloor2_Campers::
	lock
	applymovement 4, MovementCamper1
	waitmovement 4
	msgbox SSDiscoveryRoomsFloor2_Campers_Text_0
	msgbox SSDiscoveryRoomsFloor2_Campers_Text_1
	applymovement 3, MovementCamper2
	waitmovement 3
	msgbox SSDiscoveryRoomsFloor2_Campers_Text_2
	msgbox SSDiscoveryRoomsFloor2_Campers_Text_3
	release
	end


MovementCamper1:
	walk_in_place_left
	step_end

MovementCamper2:
	walk_in_place_slow_right
	step_end

SSDiscoveryRoomsFloor2_Gentleman_Text_0:
	.string "Considering the price I paid for my\n"
	.string "ticket, I assumed the food serivce\l"
	.string "here would've at least been passable.$"

SSDiscoveryRoomsFloor2_Gentleman_Text_1:
	.string "But I guess that was too much to ask...$"

SSDiscoveryRoomsFloor2_Scientist_Text_0:
	.string "I've been tasked with collecting data\n"
	.string "on the Pokemon that live in Astrua's\l"
	.string "various caves.$"

SSDiscoveryRoomsFloor2_Scientist_Text_1:
	.string "But the guy I'm assigned to go with...\n"
	.string "well...$"

SSDiscoveryRoomsFloor2_Scientist_Text_2:
	.string "He's nice and all, but a little annoying.$"

SSDiscoveryRoomsFloor2_Girl_Text_0:
	.string "I've never been on a ship like this\n"
	.string "before.$"

SSDiscoveryRoomsFloor2_Girl_Text_1:
	.string "This whole experience has been so\n"
	.string "surreal...$"

SSDiscoveryRoomsFloor2_Campers_Text_0:
	.string "C'mon, you can't chicken out now!$"

SSDiscoveryRoomsFloor2_Campers_Text_1:
	.string "Pull yourself together!$"

SSDiscoveryRoomsFloor2_Campers_Text_2:
	.string "Ugh...$"

SSDiscoveryRoomsFloor2_Campers_Text_3:
	.string "My stomach...$"
