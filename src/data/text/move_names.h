const u8 gMoveNames[MOVES_COUNT][MOVE_NAME_LENGTH + 1] =
{
    [MOVE_NONE] = _("-"),
    [MOVE_POUND] = _("POUND"),
    [MOVE_KARATE_CHOP] = _("KARATE CHOP"),
    [MOVE_DOUBLE_SLAP] = _("DOUBLESLAP"),
    [MOVE_BUG_BUZZ] = _("BUG BUZZ"),
    [MOVE_MEGA_PUNCH] = _("MEGA PUNCH"),
    [MOVE_PAY_DAY] = _("PAY DAY"),
    [MOVE_FIRE_PUNCH] = _("FIRE PUNCH"),
    [MOVE_ICE_PUNCH] = _("ICE PUNCH"),
    [MOVE_HEAVEN_PUNCH] = _("HEAVEN PUNCH"),
    [MOVE_SCRATCH] = _("SCRATCH"),
    [MOVE_PINCH] = _("PINCH"),
    [MOVE_GUILLOTINE] = _("GUILLOTINE"),
    [MOVE_RAZOR_WIND] = _("RAZOR WIND"),
    [MOVE_SWORDS_DANCE] = _("SWORDS DANCE"),
    [MOVE_CUT] = _("CUT"),
    [MOVE_GUST] = _("GUST"),
    [MOVE_WING_ATTACK] = _("WING ATTACK"),
    [MOVE_WHIRLWIND] = _("WHIRLWIND"),
    [MOVE_SPACE_TRAVEL] = _("SPACE FLIGHT"),
    [MOVE_BIND] = _("BIND"),
    [MOVE_SLAM] = _("SLAM"),
    [MOVE_VINE_WHIP] = _("VINE WHIP"),
    [MOVE_STOMP] = _("STOMP"),
    [MOVE_DOUBLE_KICK] = _("DOUBLE KICK"),
    [MOVE_MEGA_KICK] = _("MEGA KICK"),
    [MOVE_JUMP_KICK] = _("JUMP KICK"),
    [MOVE_FLASHY_KICK] = _("FLASHY KICK"),
    [MOVE_SAND_ATTACK] = _("SAND-ATTACK"),
    [MOVE_HEADBUTT] = _("HEADBUTT"),
    [MOVE_NAIL_JAB] = _("NAIL JAB"),
    [MOVE_FURY_ATTACK] = _("FURY ATTACK"),
    [MOVE_HEAD_SMASH] = _("HEAD SMASH"),
    [MOVE_TACKLE] = _("TACKLE"),
    [MOVE_BODY_SLAM] = _("BODY SLAM"),
    [MOVE_WRAP] = _("WRAP"),
    [MOVE_TAKE_DOWN] = _("TAKE DOWN"),
    [MOVE_THRASH] = _("THRASH"),
    [MOVE_DOUBLE_EDGE] = _("DOUBLE-EDGE"),
    [MOVE_TAIL_WAG] = _("TAIL WAG"),
    [MOVE_POISON_STING] = _("POISON STING"),
    [MOVE_SNEAKY_NEEDLE] = _("SNEAKYNEEDLE"),
    [MOVE_PIN_MISSILE] = _("PIN MISSILE"),
    [MOVE_LEER] = _("LEER"),
    [MOVE_BITE] = _("BITE"),
    [MOVE_GROWL] = _("GROWL"),
    [MOVE_ROAR] = _("ROAR"),
    [MOVE_SING] = _("SING"),
    [MOVE_SUPERSONIC] = _("SUPERSONIC"),
    [MOVE_SONIC_BOOM] = _("SONICBOOM"),
    [MOVE_DISABLE] = _("DISABLE"),
    [MOVE_ACID] = _("ACID"),
    [MOVE_EMBER] = _("EMBER"),
    [MOVE_FLAMETHROWER] = _("FLAMETHROWER"),
    [MOVE_MIST] = _("MIST"),
    [MOVE_WATER_GUN] = _("WATER GUN"),
    [MOVE_HYDRO_PUMP] = _("HYDRO PUMP"),
    [MOVE_SURF] = _("SURF"),
    [MOVE_ICE_BEAM] = _("ICE BEAM"),
    [MOVE_BLIZZARD] = _("BLIZZARD"),
    [MOVE_PSYBEAM] = _("PSYBEAM"),
    [MOVE_BUBBLE_BEAM] = _("BUBBLEBEAM"),
    [MOVE_AURORA_BEAM] = _("AURORA BEAM"),
    [MOVE_HYPER_BEAM] = _("HYPER BEAM"),
    [MOVE_POKE] = _("POKE"),
    [MOVE_DRILL_PECK] = _("DRILL PECK"),
    [MOVE_SUBMISSION] = _("SUBMISSION"),
    [MOVE_LOW_KICK] = _("LOW KICK"),
    [MOVE_COUNTER] = _("COUNTER"),
    [MOVE_SEISMIC_TOSS] = _("SEISMIC TOSS"),
    [MOVE_STRENGTH] = _("STRENGTH"),
    [MOVE_ABSORB] = _("ABSORB"),
    [MOVE_MEGA_DRAIN] = _("MEGA DRAIN"),
    [MOVE_LEECH_SEED] = _("LEECH SEED"),
    [MOVE_GROWTH] = _("GROWTH"),
    [MOVE_RAZOR_LEAF] = _("RAZOR LEAF"),
    [MOVE_SOLAR_BEAM] = _("SOLARBEAM"),
    [MOVE_POISON_POWDER] = _("POISONPOWDER"),
    [MOVE_STUN_SPORE] = _("STUN SPORE"),
    [MOVE_SLEEP_POWDER] = _("SLEEP POWDER"),
    [MOVE_PETAL_DANCE] = _("PETAL DANCE"),
    [MOVE_STRING_SHOT] = _("STRING SHOT"),
    [MOVE_DRAGON_RAGE] = _("DRAGON RAGE"),
    [MOVE_FIRE_SPIN] = _("FIRE SPIN"),
    [MOVE_HEAVEN_SHOCK] = _("HEAVENSHOCK"),
    [MOVE_HEAVENBOLT] = _("HEAVENBOLT"),
    [MOVE_ROCK_SHOCK] = _("ROCK SHOCK"),
    [MOVE_THUNDER] = _("THUNDER"),
    [MOVE_ROCK_THROW] = _("ROCK THROW"),
    [MOVE_EARTHQUAKE] = _("EARTHQUAKE"),
    [MOVE_FISSURE] = _("FISSURE"),
    [MOVE_DIG] = _("DIG"),
    [MOVE_TOXIC] = _("TOXIC"),
    [MOVE_CONFUSION] = _("CONFUSION"),
    [MOVE_PSYCHIC] = _("PSYCHIC"),
    [MOVE_HYPNOSIS] = _("HYPNOSIS"),
    [MOVE_MEDITATE] = _("MEDITATE"),
    [MOVE_AGILITY] = _("AGILITY"),
    [MOVE_QUICK_ATTACK] = _("QUICK ATTACK"),
    [MOVE_RAGE] = _("RAGE"),
    [MOVE_TELEPORT] = _("TELEPORT"),
    [MOVE_NIGHT_SHADE] = _("NIGHT SHADE"),
    [MOVE_MIMIC] = _("MIMIC"),
    [MOVE_SCREECH] = _("SCREECH"),
    [MOVE_DOUBLE_TEAM] = _("DOUBLE TEAM"),
    [MOVE_RECOVER] = _("RECOVER"),
    [MOVE_HARDEN] = _("HARDEN"),
    [MOVE_MINIMIZE] = _("MINIMIZE"),
    [MOVE_SMOKESCREEN] = _("SMOKESCREEN"),
    [MOVE_CONFUSE_RAY] = _("CONFUSE RAY"),
    [MOVE_WITHDRAW] = _("WITHDRAW"),
    [MOVE_DEFENSE_CURL] = _("DEFENSE CURL"),
    [MOVE_BARRIER] = _("BARRIER"),
    [MOVE_LIGHT_SCREEN] = _("LIGHT SCREEN"),
    [MOVE_HAZE] = _("HAZE"),
    [MOVE_REFLECT] = _("REFLECT"),
    [MOVE_FOCUS_ENERGY] = _("FOCUS BLAST"),
    [MOVE_BIDE] = _("BIDE"),
    [MOVE_METRONOME] = _("METRONOME"),
    [MOVE_COPYCAT] = _("COPYCAT"),
    [MOVE_SELF_DESTRUCT] = _("SELFDESTRUCT"),
    [MOVE_EGG_BOMB] = _("EGG BOMB"),
    [MOVE_LICK] = _("LICK"),
    [MOVE_SMOG] = _("SMOG"),
    [MOVE_SLUDGE] = _("SLUDGE"),
    [MOVE_BONE_CLUB] = _("BONE CLUB"),
    [MOVE_FIRE_BLAST] = _("FIRE BLAST"),
    [MOVE_WATERFALL] = _("WATERFALL"),
    [MOVE_CLAMP] = _("CLAMP"),
    [MOVE_SPEED_STAR] = _("SPEED STAR"),
    [MOVE_SKULL_BASH] = _("SKULL BASH"),
    [MOVE_SPIKE_CANNON] = _("SPIKE CANNON"),
    [MOVE_CONSTRICT] = _("CONSTRICT"),
    [MOVE_AMNESIA] = _("AMNESIA"),
    [MOVE_KINESIS] = _("KINESIS"),
    [MOVE_SOFT_BOILED] = _("SOFTBOILED"),
    [MOVE_HI_JUMP_KICK] = _("HI JUMP KICK"),
    [MOVE_GLARE] = _("GLARE"),
    [MOVE_DREAM_EATER] = _("DREAM EATER"),
    [MOVE_FOUL_SCENT] = _("FOUL SCENT"),
    [MOVE_BARRAGE] = _("BARRAGE"),
    [MOVE_LEECH_LIFE] = _("LEECH LIFE"),
    [MOVE_DRAIN_KISS] = _("DRAIN KISS"),
    [MOVE_SKY_ATTACK] = _("SKY ATTACK"),
    [MOVE_TRANSFORM] = _("TRANSFORM"),
    [MOVE_BUBBLE] = _("BUBBLE"),
    [MOVE_DIZZY_HEART] = _("DIZZY HEART"),
    [MOVE_SPORE] = _("SPORE"),
    [MOVE_FLASH] = _("FLASH"),
    [MOVE_PSYWAVE] = _("PSYWAVE"),
    [MOVE_SPLASH] = _("SPLASH"),
    [MOVE_ACID_ARMOR] = _("ACID ARMOR"),
    [MOVE_CRABHAMMER] = _("CRABHAMMER"),
    [MOVE_EXPLOSION] = _("EXPLOSION"),
    [MOVE_FURY_SWIPES] = _("FURY SWIPES"),
    [MOVE_BONEMERANG] = _("BONEMERANG"),
    [MOVE_REST] = _("REST"),
    [MOVE_ROCK_SLIDE] = _("ROCK SLIDE"),
    [MOVE_HYPER_FANG] = _("HYPER FANG"),
    [MOVE_SHARPEN] = _("SHARPEN"),
    [MOVE_CONVERSION] = _("CONVERSION"),
    [MOVE_TRI_ATTACK] = _("TRI ATTACK"),
    [MOVE_SUPER_FANG] = _("SUPER FANG"),
    [MOVE_SLASH] = _("SLASH"),
    [MOVE_SUBSTITUTE] = _("SUBSTITUTE"),
    [MOVE_STRUGGLE] = _("STRUGGLE"),
    [MOVE_SKETCH] = _("SKETCH"),
    [MOVE_TRIPLE_KICK] = _("TRIPLE KICK"),
    [MOVE_THIEF] = _("THIEF"),
    [MOVE_SPIDER_WEB] = _("SPIDER WEB"),
    [MOVE_MIND_READER] = _("MIND READER"),
    [MOVE_NIGHTMARE] = _("NIGHTMARE"),
    [MOVE_FLAME_WHEEL] = _("FLAME WHEEL"),
    [MOVE_SNORE] = _("SNORE"),
    [MOVE_CURSE] = _("CURSE"),
    [MOVE_FLAIL] = _("FLAIL"),
    [MOVE_CONVERSION_2] = _("CONVERSION 2"),
    [MOVE_AEROBLAST] = _("AEROBLAST"),
    [MOVE_COTTON_SPORE] = _("COTTON SPORE"),
    [MOVE_REVERSAL] = _("REVERSAL"),
    [MOVE_SPITE] = _("SPITE"),
    [MOVE_POWDER_SNOW] = _("POWDER SNOW"),
    [MOVE_PROTECT] = _("PROTECT"),
    [MOVE_MACH_PUNCH] = _("MACH PUNCH"),
    [MOVE_SCARY_FACE] = _("SCARY FACE"),
    [MOVE_FEINT_ATTACK] = _("FEINT ATTACK"),
    [MOVE_SWEET_KISS] = _("SWEET KISS"),
    [MOVE_BELLY_DRUM] = _("BELLY DRUM"),
    [MOVE_SLUDGE_BOMB] = _("SLUDGE BOMB"),
    [MOVE_MUD_SLAP] = _("MUD-SLAP"),
    [MOVE_OCTAZOOKA] = _("OCTAZOOKA"),
    [MOVE_SPIKES] = _("SPIKES"),
    [MOVE_ZAP_CANNON] = _("ZAP CANNON"),
    [MOVE_FORESIGHT] = _("FORESIGHT"),
    [MOVE_DESTINY_BOND] = _("DESTINY BOND"),
    [MOVE_PERISH_SONG] = _("PERISH SONG"),
    [MOVE_ICY_WIND] = _("ICY WIND"),
    [MOVE_DETECT] = _("DETECT"),
    [MOVE_BONE_RUSH] = _("BONE RUSH"),
    [MOVE_LOCK_ON] = _("LOCK-ON"),
    [MOVE_OUTRAGE] = _("OUTRAGE"),
    [MOVE_SANDSTORM] = _("SANDSTORM"),
    [MOVE_GIGA_DRAIN] = _("GIGA DRAIN"),
    [MOVE_ENDURE] = _("ENDURE"),
    [MOVE_CHARM] = _("CHARM"),
    [MOVE_ROLLOUT] = _("ROLLOUT"),
    [MOVE_FALSE_SWIPE] = _("FALSE SWIPE"),
    [MOVE_SWAGGER] = _("SWAGGER"),
    [MOVE_MILK_DRINK] = _("MILK DRINK"),
    [MOVE_SWEET_TALK] = _("SWEET TALK"),
    [MOVE_FURY_CUTTER] = _("FURY CUTTER"),
    [MOVE_METAL_GALE] = _("METAL GALE"),
    [MOVE_MEAN_LOOK] = _("MEAN LOOK"),
    [MOVE_ATTRACT] = _("ATTRACT"),
    [MOVE_SLEEP_TALK] = _("SLEEP TALK"),
    [MOVE_HEAL_BELL] = _("HEAL BELL"),
    [MOVE_RETURN] = _("RETURN"),
    [MOVE_PRESENT] = _("PRESENT"),
    [MOVE_FRUSTRATION] = _("FRUSTRATION"),
    [MOVE_SAFEGUARD] = _("SAFEGUARD"),
    [MOVE_PAIN_SPLIT] = _("PAIN SPLIT"),
    [MOVE_SACRED_FIRE] = _("SACRED FIRE"),
    [MOVE_MAGNITUDE] = _("MAGNITUDE"),
    [MOVE_HALLOWEEN] = _("HALLOWEEN"),
    [MOVE_BEETLEHORN] = _("BEETLEHORN"),
    [MOVE_DRAGON_BREATH] = _("DRAGONBREATH"),
    [MOVE_BATON_PASS] = _("BATON PASS"),
    [MOVE_ENCORE] = _("ENCORE"),
    [MOVE_PURSUIT] = _("PURSUIT"),
    [MOVE_TIDY_UP] = _("TIDY UP"),
    [MOVE_SWEET_SCENT] = _("SWEET SCENT"),
    [MOVE_IRON_TACKLE] = _("IRON TACKLE"),
    [MOVE_METAL_CLAW] = _("METAL CLAW"),
    [MOVE_BODY_PRESS] = _("BODY PRESS"),
    [MOVE_MORNING_SUN] = _("MORNING SUN"),
    [MOVE_SYNTHESIS] = _("SYNTHESIS"),
    [MOVE_MOONLIGHT] = _("MOONLIGHT"),
    [MOVE_HIDDEN_POWER] = _("HIDDEN POWER"),
    [MOVE_CROSS_CHOP] = _("CROSS CHOP"),
    [MOVE_TWISTER] = _("TWISTER"),
    [MOVE_RAIN_DANCE] = _("RAIN DANCE"),
    [MOVE_SUNNY_DAY] = _("SUNNY DAY"),
    [MOVE_VAMPIRE] = _("VAMPIRE"),
    [MOVE_MIRROR_COAT] = _("MIRROR COAT"),
    [MOVE_PSYCH_UP] = _("PSYCH UP"),
    [MOVE_TRENDSETTER] = _("TRENDSETTER"),
    [MOVE_ANCIENT_POWER] = _("ANCIENTPOWER"),
    [MOVE_SHADOW_BALL] = _("SHADOW BALL"),
    [MOVE_FUTURE_SIGHT] = _("FUTURE SIGHT"),
    [MOVE_ROCK_SMASH] = _("ROCK SMASH"),
    [MOVE_WHIRLPOOL] = _("WHIRLPOOL"),
    [MOVE_BEAT_UP] = _("BEAT UP"),
    [MOVE_FAKE_OUT] = _("FAKE OUT"),
    [MOVE_ROCK_OUT] = _("ROCK OUT"),
    [MOVE_STOCKPILE] = _("STOCKPILE"),
    [MOVE_SPIT_UP] = _("SPIT UP"),
    [MOVE_SWALLOW] = _("SWALLOW"),
    [MOVE_HEAT_WAVE] = _("HEAT WAVE"),
    [MOVE_HAIL] = _("HAIL"),
    [MOVE_TORMENT] = _("TORMENT"),
    [MOVE_FLATTER] = _("FLATTER"),
    [MOVE_WILL_O_WISP] = _("WILL-O-WISP"),
    [MOVE_MEMENTO] = _("MEMENTO"),
    [MOVE_FACADE] = _("FACADE"),
    [MOVE_FOCUS_BLAST] = _("FOCUS BLAST"),
    [MOVE_SURPRISE_HIT] = _("SURPRISE HIT"),
    [MOVE_FOLLOW_ME] = _("FOLLOW ME"),
    [MOVE_NATURE_POWER] = _("NATURE POWER"),
    [MOVE_CHARGE] = _("CHARGE"),
    [MOVE_TAUNT] = _("TAUNT"),
    [MOVE_HELPING_HAND] = _("HELPING HAND"),
    [MOVE_TRICK] = _("TRICK"),
    [MOVE_ROLE_PLAY] = _("ROLE PLAY"),
    [MOVE_WISH] = _("WISH"),
    [MOVE_ASSIST] = _("ASSIST"),
    [MOVE_INGRAIN] = _("INGRAIN"),
    [MOVE_PLANETFALL] = _("PLANETFALL"),
    [MOVE_MAGIC_COAT] = _("MAGIC COAT"),
    [MOVE_RECYCLE] = _("RECYCLE"),
    [MOVE_REVENGE] = _("REVENGE"),
    [MOVE_BRICK_BREAK] = _("BRICK BREAK"),
    [MOVE_YAWN] = _("YAWN"),
    [MOVE_KNOCK_OFF] = _("KNOCK OFF"),
    [MOVE_ENDEAVOR] = _("ENDEAVOR"),
    [MOVE_ERUPTION] = _("ERUPTION"),
    [MOVE_SKILL_SWAP] = _("SKILL SWAP"),
    [MOVE_IMPRISON] = _("IMPRISON"),
    [MOVE_REFRESH] = _("REFRESH"),
    [MOVE_GRUDGE] = _("GRUDGE"),
    [MOVE_SNATCH] = _("SNATCH"),
    [MOVE_SECRET_POWER] = _("SECRET POWER"),
    [MOVE_DIVE] = _("DIVE"),
    [MOVE_ARM_THRUST] = _("ARM THRUST"),
    [MOVE_CAMOUFLAGE] = _("CAMOUFLAGE"),
    [MOVE_STAR_GLOW] = _("STAR GLOW"),
    [MOVE_LUSTER_PURGE] = _("LUSTER PURGE"),
    [MOVE_MIST_BALL] = _("MIST BALL"),
    [MOVE_FEATHER_DANCE] = _("FEATHERDANCE"),
    [MOVE_TEETER_DANCE] = _("TEETER DANCE"),
    [MOVE_JEALOUS_HEAT] = _("JEALOUS HEAT"),
    [MOVE_MUD_SPORT] = _("MUD SPORT"),
    [MOVE_ICE_BALL] = _("ICE BALL"),
    [MOVE_NEEDLE_ARM] = _("NEEDLE ARM"),
    [MOVE_SLACK_OFF] = _("SLACK OFF"),
    [MOVE_HYPER_VOICE] = _("HYPER VOICE"),
    [MOVE_POISON_FANG] = _("POISON FANG"),
    [MOVE_CRUSH_CLAW] = _("CRUSH CLAW"),
    [MOVE_BLAST_BURN] = _("BLAST BURN"),
    [MOVE_HYDRO_CANNON] = _("HYDRO CANNON"),
    [MOVE_METEOR_MASH] = _("METEOR MASH"),
    [MOVE_ASTONISH] = _("ASTONISH"),
    [MOVE_WEATHER_BALL] = _("WEATHER BALL"),
    [MOVE_AROMATHERAPY] = _("AROMATHERAPY"),
    [MOVE_FAKE_TEARS] = _("FAKE TEARS"),
    [MOVE_SOAK] = _("SOAK"),
    [MOVE_OVERHEAT] = _("OVERHEAT"),
    [MOVE_ODOR_SLEUTH] = _("ODOR SLEUTH"),
    [MOVE_ROCK_TOMB] = _("ROCK TOMB"),
    [MOVE_STARDUST] = _("STARDUST"),
    [MOVE_METAL_SOUND] = _("METAL SOUND"),
    [MOVE_GRASS_WHISTLE] = _("GRASSWHISTLE"),
    [MOVE_TICKLE] = _("TICKLE"),
    [MOVE_COSMIC_POWER] = _("COSMIC POWER"),
    [MOVE_WATER_SPOUT] = _("WATER SPOUT"),
    [MOVE_SIGNAL_BEAM] = _("SIGNAL BEAM"),
    [MOVE_SHADOW_PUNCH] = _("SHADOW HAND"),
    [MOVE_EXTRASENSORY] = _("EXTRASENSORY"),
    [MOVE_LUNGE] = _("LUNGE"),
    [MOVE_SAND_TOMB] = _("SAND TOMB"),
    [MOVE_SHEER_COLD] = _("SHEER COLD"),
    [MOVE_MUDDY_WATER] = _("MUDDY WATER"),
    [MOVE_BULLET_SEED] = _("BULLET SEED"),
    [MOVE_AERIAL_ACE] = _("AERIAL ACE"),
    [MOVE_ICICLE_SPEAR] = _("ICICLE SPEAR"),
    [MOVE_IRON_DEFENSE] = _("IRON DEFENSE"),
    [MOVE_BLOCK] = _("BLOCK"),
    [MOVE_HOWL] = _("HOWL"),
    [MOVE_DEVIL_CLAW] = _("DEVIL CLAW"),
    [MOVE_FRENZY_PLANT] = _("FRENZY PLANT"),
    [MOVE_BULK_UP] = _("BULK UP"),
    [MOVE_BOUNCE] = _("BOUNCE"),
    [MOVE_MUD_SHOT] = _("MUD SHOT"),
    [MOVE_POISON_TAIL] = _("POISON TAIL"),
    [MOVE_COVET] = _("COVET"),
    [MOVE_VOLT_TACKLE] = _("VOLT TACKLE"),
    [MOVE_MAGICAL_LEAF] = _("MAGICAL LEAF"),
    [MOVE_WATER_SPORT] = _("WATER SPORT"),
    [MOVE_CALM_MIND] = _("CALM MIND"),
    [MOVE_LEAF_BLADE] = _("LEAF BLADE"),
    [MOVE_DEVIL_WALTZ] = _("DEVIL WALTZ"),
    [MOVE_ROCK_BLAST] = _("ROCK BLAST"),
    [MOVE_COSMIC_PULSE] = _("COSMIC PULSE"),
    [MOVE_WATER_PULSE] = _("WATER PULSE"),
    [MOVE_DOOM_DESIRE] = _("DOOM DESIRE"),
    [MOVE_PSYCHO_BOOST] = _("PSYCHO BOOST"),
};
