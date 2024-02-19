SSDiscoveryNPCRoom3_MapScripts::
	.byte 0


SSDiscoveryNPCRoom3_LavaCookie::
	lock
	giveitem ITEM_LAVA_COOKIE, 1
	removeobject 1
	setflag FLAG_ITEM_SSDISCOVERY_LAVA_COOKIE
	release
	end

