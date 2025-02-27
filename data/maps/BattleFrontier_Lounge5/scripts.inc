BattleFrontier_Lounge5_MapScripts::
	.byte 0

BattleFrontier_Lounge5_EventScript_NatureGirl::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	special ChoosePartyMon
	waitstate
	lock
	faceplayer
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge5_EventScript_NatureGirlEgg
	special ShowNatureGirlMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_Gentleman::
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_BlackBelt::
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_LittleBoy::
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
	end

BattleFrontier_Lounge5_Text_NatureGirlGreeting::
	.string "Ehehe!\n"
	.string "I can tell what IDOLS are thinking!\p"
	.string "Please!\n"
	.string "Can I see your IDOLS?$"

BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
	.string "Boo!\n"
	.string "Cheapie!$"

BattleFrontier_Lounge5_Text_NatureGirlHardy::
	.string "Hmhm…\p"
	.string "This one likes to battle!\n"
	.string "She will battle even if she has a lot\l"
	.string "of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlLonely::
	.string "Hmhm…\p"
	.string "This one likes to be sneaky!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will hit back!$"

BattleFrontier_Lounge5_Text_NatureGirlBrave::
	.string "Hmhm…\p"
	.string "This one likes to battle!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will worry about herself!$"

BattleFrontier_Lounge5_Text_NatureGirlAdamant::
	.string "Hmhm…\p"
	.string "This one likes to battle!\n"
	.string "She will battle even if she has a lot\l"
	.string "of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlNaughty::
	.string "Hmhm…\p"
	.string "This one looks after herself!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will hit back!$"

BattleFrontier_Lounge5_Text_NatureGirlBold::
	.string "Hmhm…\p"
	.string "This one likes to be sneaky!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will worry about herself!$"

BattleFrontier_Lounge5_Text_NatureGirlDocileNaiveQuietQuirky::
	.string "Hmhm…\p"
	.string "This one likes to battle!\n"
	.string "She will battle even if she has a lot\l"
	.string "of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlRelaxed::
	.string "Hmhm…\p"
	.string "This one likes to be sneaky!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will hit back!$"

BattleFrontier_Lounge5_Text_NatureGirlImpish::
	.string "Hmhm…\p"
	.string "This one likes to battle!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will worry about herself!$"

BattleFrontier_Lounge5_Text_NatureGirlLax::
	.string "Hmhm…\p"
	.string "This one likes to be sneaky!\n"
	.string "She likes to be sneaky even\l"
	.string "if she has a lot of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlTimid::
	.string "Hmhm…\p"
	.string "This one likes to battle!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will turn sneaky!$"

BattleFrontier_Lounge5_Text_NatureGirlHasty::
	.string "Hmhm…\p"
	.string "This one likes to battle!\n"
	.string "She will battle even if she has a lot\l"
	.string "of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlSerious::
	.string "Hmhm…\p"
	.string "This one likes to be sneaky!\n"
	.string "She likes to be sneaky even\l"
	.string "if she has a lot of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlJolly::
	.string "Hmhm…\p"
	.string "This one likes to be sneaky!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will worry about herself!$"

BattleFrontier_Lounge5_Text_NatureGirlModest::
	.string "Hmhm…\p"
	.string "This one looks after herself!\n"
	.string "She worries about herself whether\l"
	.string "or not she has a lot of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlMild::
	.string "Hmhm…\p"
	.string "This one says she looks after herself!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will turn sneaky!$"

BattleFrontier_Lounge5_Text_NatureGirlBashful::
	.string "Hmhm…\p"
	.string "This one looks after herself!\n"
	.string "She worries about herself even\l"
	.string "if she has a lot of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlRash::
	.string "Hmhm…\p"
	.string "This one likes to be sneaky!\n"
	.string "She likes to be sneaky even\l"
	.string "if she has a lot of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlCalm::
	.string "Hmhm…\p"
	.string "This one looks after herself!\n"
	.string "She worries about herself even\l"
	.string "if she has a lot of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlGentle::
	.string "Hmhm…\p"
	.string "This one looks after herself!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will hit back!$"

BattleFrontier_Lounge5_Text_NatureGirlSassy::
	.string "Hmhm…\p"
	.string "This one likes to battle!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will turn sneaky!$"

BattleFrontier_Lounge5_Text_NatureGirlCareful::
	.string "Hmhm…\p"
	.string "This one looks after herself!\n"
	.string "But if she gets enough ouchies,\l"
	.string "she will turn sneaky!$"

BattleFrontier_Lounge5_Text_NatureGirlEgg::
	.string "That's silly! An EGG is asleep!\n"
	.string "I can't talk to it!$"

BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
	.string "How charming!\n"
	.string "That little lady claims she can\l"
	.string "tell an IDOLS' true nature!$"

BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
	.string "I have this feeling that the little girl\n"
	.string "is saying something profound.$"

BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
	.string "I know something!\p"
	.string "That little girl plays at the red house\n"
	.string "a lot!$"
