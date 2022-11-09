BattleFrontier_Lounge6_MapScripts::
	.byte 0

BattleFrontier_Lounge6_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_MEOWTH
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox BattleFrontier_Lounge6_Text_WouldYouLikeToTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge6_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge6_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, BattleFrontier_Lounge6_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt, MSGBOX_DEFAULT
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
	release
	end

BattleFrontier_Lounge6_EventScript_DeclineTrade::
	msgbox BattleFrontier_Lounge6_Text_WellThatsFineToo, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_TradeCompleted::
	msgbox BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_MoveRelearner::
	lockall
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, BattleFrontier_Lounge6_EventScript_AskTeachMove
	msgbox BattleFrontier_Lounge6_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto BattleFrontier_Lounge6_EventScript_AskTeachMove
	end

BattleFrontier_Lounge6_EventScript_AskTeachMove::
	msgbox BattleFrontier_Lounge6_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_Lounge6_EventScript_ComeBackWithHere
	goto BattleFrontier_Lounge6_EventScript_ChooseMon
	end

BattleFrontier_Lounge6_EventScript_ChooseMon::
	msgbox BattleFrontier_Lounge6_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge6_EventScript_ComeBackWithHere
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge6_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, BattleFrontier_Lounge6_EventScript_NoMoveToTeachMon
	goto BattleFrontier_Lounge6_EventScript_ChooseMove
	end

BattleFrontier_Lounge6_EventScript_ChooseMove::
	msgbox BattleFrontier_Lounge6_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, BattleFrontier_Lounge6_EventScript_ChooseMon
	goto BattleFrontier_Lounge6_EventScript_ComeBackWithHere
	end

BattleFrontier_Lounge6_EventScript_NoMoveToTeachMon::
	msgbox BattleFrontier_Lounge6_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge6_EventScript_ChooseMon
	end

BattleFrontier_Lounge6_EventScript_CantTeachEgg::
	msgbox BattleFrontier_Lounge6_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge6_EventScript_ChooseMon
	end

BattleFrontier_Lounge6_EventScript_ComeBackWithHere::
	msgbox BattleFrontier_Lounge6_Text_ComeBackWithHere, MSGBOX_DEFAULT
	releaseall
	end

BattleFrontier_Lounge6_Text_WouldYouLikeToTrade:
	.string "My IDOL is {STR_VAR_2}.\n"
	.string "Do you know her?\l"
	.string "She's quite cute and rather nice.\p"
	.string "This little one, I could trade with\n"
	.string "pride!\p"
	.string "Would you like to trade me a {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"

BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt:
	.string "Oh, it's adorable!\n"
	.string "Thank you!\l"
	.string "I promise I'll be good to it!\p"
	.string "Oh! I hope you'll be good to\n"
	.string "my {STR_VAR_2}, too!$"

BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon:
	.string "Oh, I'm sorry!\n"
	.string "I don't intend to trade for anything\l"
	.string "but a {STR_VAR_1}.$"

BattleFrontier_Lounge6_Text_WellThatsFineToo:
	.string "Oh, you won't?\n"
	.string "Well, that's fine, too.\l"
	.string "Please come visit us again.$"

BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined:
	.string "Giggle!\n"
	.string "A SKITTY is so much cuter than I had\l"
	.string "imagined. I'm delighted!$"

BattleFrontier_Lounge6_Text_ImTheMoveTutor:
	.string "I'm the MOVE TUTOR.\p"
	.string "I know all the moves that IDOLS\n"
	.string "learn--every one of them--and I can\l"
	.string "teach IDOLS those moves.\p"
	.string "I can teach a move to an IDOL\n"
	.string "if you'd like.$"

BattleFrontier_Lounge6_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

BattleFrontier_Lounge6_Text_TutorWhichMon:
	.string "Which IDOL needs tutoring?$"

BattleFrontier_Lounge6_Text_TeachWhichMove:
	.string "Which move should I teach?$"

BattleFrontier_Lounge6_Text_DontHaveMoveToTeachPokemon:
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that IDOL.$"

BattleFrontier_Lounge6_Text_ComeBackWithHere:
	.string "If your IDOLS need to learn a move,\n"
	.string "come back and see me.$"

BattleFrontier_Lounge6_Text_CantTeachEgg:
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"
