SlateportCity_House_MapScripts::
	.byte 0

SlateportCity_House_EventScript_PokefanM::
	msgbox SlateportCity_House_Text_NatureToDoWithStatGains, MSGBOX_NPC
	end

SlateportCity_House_EventScript_Girl::
	msgbox SlateportCity_House_Text_MustBeGoingToBattleTent, MSGBOX_NPC
	end

SlateportCity_House_Text_NatureToDoWithStatGains:
	.string "My IDOL has a HASTY nature.\p"
	.string "It has higher SPEED compared to\n"
	.string "my other IDOL.\p"
	.string "Maybe their nature has something to\n"
	.string "do with the stat gains of IDOLS.$"

SlateportCity_House_Text_MustBeGoingToBattleTent:
	.string "You're a PRODUCER, aren't you?\p"
	.string "Since you came to SLATEPORT CITY,\n"
	.string "you must be going to the BATTLE TENT.$"
