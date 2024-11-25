#include <random>
#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h>
 
using namespace std;

void welcome() {


	cout << " _         _      ______      _             _____        _____         _     _       ______        " << endl;
	cout << "| |       | |    | _____|    | |           |  ___|      |  _  |       | |   | |     | _____|       " << endl;
	cout << "| |   _   | |    | |___      | |          |  |         |  | |  |     |  |   |  |    | |___         " << endl;
	cout << "| |  | |  | |    | ____|     | |         |  |         |  |   |  |    |   |_|   |    | ____|        " << endl;
	cout << " | | |_| | |     | |____     | |____      |  |___      |  |_|  |     | |     | |    | |____        " << endl;
	cout << "  |_|   |_|      |______|    |______|      |_____|      |_____|      |_|     |_|    |______|       " << endl;
	cout << endl;
	cout << endl;
}


string arr[1509] = { "aback", "abase", "abate", "abbey", "abbot", "abhor", "abide", "abled", "abode", "abort", "about", "above", "abuse", "abyss", "acorn", "acrid", "actor", "acute", "adage", "adapt", "adept", "admin", "admit", "adobe", "adopt", "adore", "adorn", "adult", "affix", "afire", "afoot", "afoul", "after", "again", "agape", "agate", "agent", "agile", "aging", "aglow", "agony", "agree", "ahead", "aider", "aisle", "alarm", "album", "alert", "algae", "alibi", "alien", "align", "alike", "alive", "allay", "alley", "allot", "allow", "alloy", "aloft", "alone", "along", "aloof", "aloud", "alpha", "altar", "alter", "amass", "amaze", "amber", "amble", "amend", "amiss", "amity", "among", "ample", "amply", "amuse", "angel", "anger", "angle", "angry", "angst", "anime", "ankle", "annex", "annoy", "annul", "anode", "antic", "anvil", "aorta", "apart", "aphid", "aping", "apnea", "apple", "apply", "apron", "aptly", "arbor", "ardor", "arena", "argue", "arise", "armor", "aroma","arose", "array", "arrow", "arson", "artsy", "ascot", "ashen", "aside", "askew", "assay", "asset", "atoll", "atone", "attic", "audio", "audit", "augur", "aunty", "avail", "avert", "avian", "avoid", "await", "awake", "award", "aware", "awash", "awful", "awoke", "axial", "axiom", "axion", "azure","bacon", "badge", "badly", "bagel", "baggy", "baker", "baler", "balmy", "banal", "banjo", "barge", "baron", "basal", "basic", "basil", "basin", "basis", "baste", "batch", "bathe", "baton", "batty", "bawdy", "bayou", "beach", "beady", "beard", "beast", "beech", "beefy", "befit", "began", "begat", "beget", "begin", "begun", "being", "belch", "belie", "belle", "belly", "below", "bench", "beret", "berry", "berth", "beset", "betel", "bevel", "bezel", "bible", "bicep", "biddy", "bigot", "bilge", "billy", "binge", "bingo", "biome", "birch", "birth", "bison", "bitty", "black", "blade", "blame", "bland", "blank", "blare", "blast", "blaze", "bleak", "bleat", "bleed", "bleep", "blend", "bless", "blimp", "blind", "blink", "bliss", "blitz", "bloat", "block", "bloke", "blond", "blood", "bloom", "blown", "bluer", "bluff", "blunt", "blurb", "blurt", "blush","board", "boast", "bobby", "boney", "bongo", "bonus", "booby", "boost", "booth", "booty", "booze", "boozy", "borax", "borne", "bosom", "bossy", "botch", "bough", "boule", "bound", "bowel", "boxer", "brace", "braid", "brain", "brake", "brand", "brash", "brass", "brave", "bravo", "brawl", "brawn", "bread", "break", "breed", "briar", "bribe", "brick", "bride", "brief", "brine", "bring", "brink", "briny", "brisk", "broad", "broil", "broke", "brood", "brook", "broom", "broth", "brown", "brunt", "brush", "brute", "buddy", "budge", "buggy", "bugle", "build", "built", "bulge", "bulky", "bully", "bunch", "bunny", "burly", "burnt", "burst", "bused", "bushy", "butch", "butte", "buxom", "buyer", "bylaw","cabal", "cabby", "cabin", "cable", "cacao", "cache", "cacti", "caddy", "cadet", "cagey", "cairn", "camel", "cameo", "canal", "candy", "canny", "canoe", "canon", "caper", "caput", "carat", "cargo", "carol", "carry", "carve", "caste", "catch", "cater", "catty", "caulk", "cause", "cavil", "cease", "cedar", "cello", "chafe", "chaff", "chain", "chair", "chalk", "champ", "chant", "chaos", "chard", "charm", "chart", "chase", "chasm", "cheap", "cheat", "check", "cheek", "cheer", "chess", "chest", "chick", "chide", "chief", "child", "chili", "chill", "chime", "china", "chirp", "chock", "choir", "choke", "chord", "chore", "chose", "chuck", "chump", "chunk", "churn", "chute", "cider", "cigar", "cinch", "circa", "civic", "civil", "clack", "claim", "clamp", "clang", "clank", "clash", "clasp", "class", "clean", "clear", "cleat", "cleft", "clerk", "click", "cliff", "climb", "cling", "clink", "cloak", "clock", "clone", "close", "cloth", "cloud", "clout", "clove", "clown", "cluck", "clued", "clump", "clung","coach", "coast", "cobra", "cocoa", "colon", "color", "comet", "comfy", "comic", "comma", "conch", "condo", "conic", "copse", "coral", "corer", "corny", "couch", "cough", "could", "count", "coupe", "court", "coven", "cover", "covet", "covey", "cower", "coyly", "crack", "craft", "cramp", "crane", "crank", "crash", "crass", "crate", "crave", "crawl", "craze", "crazy", "creak", "cream", "credo", "creed", "creek", "creep", "creme", "crepe", "crept", "cress", "crest", "crick", "cried", "crier", "crime", "crimp", "crisp", "croak", "crock", "crone", "crony", "crook", "cross", "croup", "crowd", "crown", "crude", "cruel", "crumb", "crump", "crush", "crust", "crypt", "cubic", "cumin", "curio", "curly", "curry", "curse", "curve", "curvy", "cutie", "cyber", "cycle", "cynic","daddy", "daily", "dairy", "daisy", "dally", "dance", "dandy", "datum", "daunt", "dealt", "death", "debar", "debit", "debug", "debut", "decal", "decay", "decor", "decoy", "decry", "defer", "deign", "deity", "delay", "delta", "delve", "demon", "demur", "denim", "dense", "depot", "depth", "derby", "deter", "detox", "deuce", "devil", "diary", "dicey", "digit", "dilly", "dimly", "diner", "dingo", "dingy", "diode", "dirge", "dirty", "disco", "ditch", "ditto", "ditty", "diver", "dizzy", "dodge", "dodgy", "dogma", "doing", "dolly", "donor", "donut", "dopey", "doubt", "dough", "dowdy", "dowel", "downy", "dowry", "dozen", "draft", "drain", "drake", "drama", "drank", "drape", "drawl", "drawn", "dread", "dream", "dress", "dried", "drier", "drift", "drill", "drink", "drive", "droit", "droll", "drone", "drool", "droop", "dross", "drove", "drown", "druid", "drunk", "dryer", "dryly", "duchy", "dully", "dummy", "dumpy", "dunce", "dusky", "dusty", "dutch", "duvet", "dwarf", "dwell", "dwelt", "dying","eager", "eagle", "early", "earth", "easel", "eaten", "eater", "ebony", "eclat", "edict", "edify", "eerie", "egret", "eight", "eject", "eking", "elate", "elbow", "elder", "elect", "elegy", "elfin", "elide", "elite", "elope", "elude", "email", "embed", "ember", "emcee", "empty", "enact", "endow", "enema", "enemy", "enjoy", "ennui", "ensue", "enter", "entry", "envoy", "epoch", "epoxy", "equal", "equip", "erase", "erect", "erode", "error", "erupt", "essay", "ester", "ether", "ethic", "ethos", "etude", "evade", "event", "every", "evict", "evoke", "exact", "exalt", "excel", "exert", "exile", "exist", "expel", "extol", "extra", "exult", "eying","fable", "facet", "faint", "fairy", "faith", "false", "fancy", "fanny", "farce", "fatal", "fatty", "fault", "fauna", "favor", "feast", "fecal", "feign", "fella", "felon", "femme", "femur", "fence", "feral", "ferry", "fetal", "fetch", "fetid", "fetus", "fever", "fewer", "fiber", "ficus", "field", "fiend", "fiery", "fifth", "fifty", "fight", "filer", "filet", "filly", "filmy", "filth", "final", "finch", "finer", "first", "fishy", "fixer", "fizzy", "fjord", "flack", "flail", "flair", "flake", "flaky", "flame", "flank", "flare", "flash", "flask", "fleck", "fleet", "flesh", "flick", "flier", "fling", "flint", "flirt", "float", "flock", "flood", "floor", "flora", "floss", "flour", "flout", "flown", "fluff", "fluid", "fluke", "flume", "flung", "flunk", "flush", "flute", "flyer", "foamy", "focal", "focus", "foggy", "foist", "folio", "folly", "foray", "force", "forge", "forgo", "forte", "forth", "forty", "forum", "found", "foyer", "frail", "frame", "frank", "fraud", "freak", "freed", "freer", "fresh", "friar", "fried", "frill", "frisk", "fritz", "frock", "frond", "front", "frost", "froth", "frown", "froze", "fruit", "fudge", "fugue", "fully", "fungi", "funky", "funny", "furor", "furry", "fussy", "fuzzy","gaffe", "gaily", "gamer", "gamma", "gamut", "gassy", "gaudy", "gauge", "gaunt", "gauze", "gavel", "gawky", "gayer", "gayly", "gazer", "gecko", "geeky", "geese", "genie", "genre", "ghost", "ghoul", "giant", "giddy", "gipsy", "girly", "girth", "given", "giver", "glade", "gland", "glare", "glass", "glaze", "gleam", "glean", "glide", "glint", "gloat", "globe", "gloom", "glory", "gloss", "glove", "glyph", "gnash", "gnome", "godly", "going", "golem", "golly", "gonad", "goner", "goody", "gooey", "goofy", "goose", "gorge", "gouge", "gourd", "grace", "grade", "graft", "grail", "grain", "grand", "grant", "grape", "graph", "grasp", "grass", "grate", "grave", "gravy", "graze", "great", "greed", "green", "greet", "grief", "grill", "grime", "grimy", "grind", "gripe", "groan", "groin", "groom", "grope", "gross", "group", "grout", "grove", "growl", "grown", "gruel", "gruff", "grunt", "guard", "guava", "guess", "guest", "guide", "guild", "guile", "guilt", "guise", "gulch", "gully", "gumbo", "gummy", "guppy", "gusto", "gusty", "gypsy","habit", "hairy", "halve", "handy", "happy", "hardy", "harem", "harpy", "harry", "harsh", "haste", "hasty", "hatch", "hater", "haunt", "haute", "haven", "havoc", "hazel", "heady", "heard", "heart", "heath", "heave", "heavy", "hedge", "hefty", "heist", "helix", "hello", "hence", "heron", "hilly", "hinge", "hippo", "hippy", "hitch", "hoard", "hobby", "hoist", "holly", "homer", "honey", "honor", "horde", "horny", "horse", "hotel", "hotly", "hound", "house", "hovel", "hover", "howdy", "human", "humid", "humor", "humph", "humus", "hunch", "hunky", "hurry", "husky", "hussy", "hutch", "hydro", "hyena", "hymen", "hyper","icily", "icing", "ideal", "idiom", "idiot", "idler", "idyll", "igloo", "iliac", "image", "imbue", "impel", "imply", "inane", "inbox", "incur", "index", "inept", "inert", "infer", "ingot", "inlay", "inlet", "inner", "input", "inter", "intro", "ionic", "irate", "irony", "islet", "issue", "itchy", "ivory","jaunt", "jazzy", "jelly", "jerky", "jetty", "jewel", "jiffy", "joint", "joist", "joker", "jolly", "joust", "judge", "juice", "juicy", "jumbo", "jumpy", "junta", "junto", "juror","kappa", "karma", "kayak", "kebab", "khaki", "kinky", "kiosk", "kitty", "knack", "knave", "knead", "kneed", "kneel", "knelt", "knife", "knock", "knoll", "known", "koala", "krill","label", "labor", "laden", "ladle", "lager", "lance", "lanky", "lapel", "lapse", "large", "larva", "lasso", "latch", "later", "lathe", "latte", "laugh", "layer", "leach", "leafy", "leaky", "leant", "leapt", "learn", "lease", "leash", "least", "leave", "ledge", "leech", "leery", "lefty", "legal", "leggy", "lemon", "lemur", "leper", "level", "lever", "libel", "liege", "light", "liken", "lilac", "limbo", "limit", "linen", "liner", "lingo", "lipid", "lithe", "liver", "livid", "llama", "loamy", "loath", "lobby", "local", "locus", "lodge", "lofty", "logic", "login", "loopy", "loose", "lorry", "loser", "louse", "lousy", "lover", "lower", "lowly", "loyal", "lucid", "lucky", "lumen", "lumpy", "lunar", "lunch", "lunge", "lupus", "lurid", "lushy","macro", "madly", "magic", "mafia", "maize", "major", "maker", "males", "malls", "malay", "mango", "mangy", "mania", "manly", "march", "mardy", "marsh", "martha", "marvy", "mashy", "masky", "mason", "match", "matey", "maths", "mayor", "mealy", "meant", "meaty", "medal", "media", "melod", "melts", "meme", "memory","mend", "menu", "mercy", "merge", "merit", "mesas", "mess", "metal", "meter", "method", "mild", "milky", "mined", "miner", "minus", "mocha", "model", "moist", "molar", "money", "month", "mood", "moral", "moray", "morph", "motor", "mourn", "mouse", "mouth", "move", "mower", "munch", "musky", "mushy", "music", "myth","nacho", "nadir", "naive", "nigga", "naked", "natal", "naive", "needy", "neigh", "nerdy", "nerve", "newer", "newly", "nicer", "niche", "night", "noble", "nodal", "noise", "noble", "noisy", "north", "noted", "noted", "novel", "nudge", "nurse","oasis", "oaths", "obese", "ocean", "occur", "odds", "older", "olymp", "omens", "opera", "opine", "optim", "order", "overt", "oxide", "ounce","pacer", "paddy", "paint", "palms", "panel", "pants", "party", "peach", "peaky", "peace", "pearl", "pedal", "peeps", "perch", "peril", "perky", "piano", "pilot", "plaza", "plumb", "pluck", "plume", "plush", "polar", "pouch", "pound", "prank", "preen", "prime", "prize", "purse", "pushy", "pylon","quail", "quake", "quash", "queen", "query", "quest", "quick", "quiet", "quilt", "quirk","racer", "rally", "ramp", "ranch", "rebel", "react", "reach", "ready", "ream", "recta", "reset", "repro", "revue", "rhyme","sacra", "sail", "scary", "scout", "scope", "shape", "sheer", "shock", "short", "shout", "shred", "shrub", "sight", "silly", "slate","tacky", "taken", "tears", "tiger", "tiled", "timid", "touch","ulcer", "under", "undo", "unite","vapor", "vocal", "vowel","waste", "waste", "waxer", "wager", "warmy", "weary","year", "yoga", "youth","vague", "valet", "valid", "valor", "value", "vapor", "vault", "vegan", "venom", "venue", "verge", "verse", "vicar", "video", "vigil", "vigor", "villa", "vinyl", "viola", "viper", "viral", "virus", "visit", "visor", "vista", "vital", "vivid", "vixen", "vocal", "vodka", "vogue", "voice", "voila", "vomit", "voter", "vouch", "vowel", "vying","wacky", "wafer", "wager", "wagon", "waist", "waive", "waltz", "warty", "waste", "watch", "water", "waver", "waxen", "weary", "weave", "wedge", "weedy", "weigh", "weird", "welch", "welsh", "whack", "whale", "wharf", "wheat", "wheel", "whelp", "where", "which", "whiff", "while", "whine", "whiny", "whirl", "whisk", "white", "whole", "whoop", "whose", "widen", "wider", "widow", "width", "wield","wierd", "wight", "willy", "wimpy", "wince", "winch", "windy", "wiser", "wispy", "witch", "witty", "woken", "woman", "women", "woody", "wooer", "wooly", "woozy", "wordy", "world", "worry", "worse", "worst", "worth", "would", "wound", "woven", "wrack", "wrath", "wreak", "wreck", "wrest", "wring", "wrist", "write", "wrong", "wrote", "wrung", "wryly","yacht", "yearn", "yeast", "yield", "young", "youth","zebra", "zesty", "zonal" };


	int main() {

	

		random_device dev;
		mt19937 rng(dev());
		uniform_int_distribution<mt19937::result_type> dist6(0, 1507); // distribution in range [0, 1507]

		int RN = dist6(rng);
		
		cout << arr[RN] << endl;
		



		//cout << "Guess The Word\n";


		string word;
		cin >> word;
		
         //word[0] used to see the letter individually
		if (word[0] == arr[RN][0]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		cout << word[0];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		if (word[1] == arr[RN][1]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		cout << word[1];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		if (word[2] == arr[RN][2]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		cout << word[2];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		if (word[3] == arr[RN][3]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		cout << word[3];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		if (word[4] == arr[RN][4]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		cout << word[4];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		cout << word<<"\033[2K"; // delete the line
		cout << "\033[F" << "\033[K";    // Move cursor up one line
			




        if (word[0] == arr[RN][0]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		else if (word[0] == arr[RN][1] || word[0] == arr[RN][2] || word[0] == arr[RN][3] || word[0] == arr[RN][4]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); }
		else{ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); }
		cout << word[0];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);


		if (word[1] == arr[RN][1]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		else if (word[1] == arr[RN][0] || word[1]== arr[RN][2] || word[1] ==arr[RN][3] || word[1]== arr[RN][4]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); }
		else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); }
		cout << word[1];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);


		if (word[2] == arr[RN][2]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		else if (word[2] == arr[RN][1] || word[2] == arr[RN][0] || word[2] == arr[RN][3] || word[2] == arr[RN][4]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); }
		else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); }
		cout << word[2];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);


		if (word[3] == arr[RN][3]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		else if (word[3] == arr[RN][1] || word[3] == arr[RN][2] || word[3] == arr[RN][0] || word[3] == arr[RN][4]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); }
		else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); }
		cout << word[3];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);


		if (word[4] == arr[RN][4]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); }
		else if (word[4] == arr[RN][1] || word[4] == arr[RN][2]|| word[4] == arr[RN][3]|| word[4] == arr[RN][0]) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); }
		else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); }
		cout << word[4];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);


		






		//else if (word[0]==arr[RN][1]|| arr[RN][2] || arr[RN][3] || arr[RN][4]){}




		
		/*
		string Menu[3] = { "Start Game", "Options", "Exit" };
		int pointer = 0;

		while (true)
		{
			system("cls");

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			welcome();

			for (int i = 0; i < 3; ++i)
			{
				if (i == pointer)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
					cout << Menu[i] << endl;
				}
				else
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
					cout << Menu[i] << endl;
				}
			}

			while (true)
			{
				if (GetAsyncKeyState(VK_UP) != 0)
				{
					pointer -= 1;
					if (pointer == -1)
					{
						pointer = 2;
					}
					break;
				}
				else if (GetAsyncKeyState(VK_DOWN) != 0)
				{
					pointer += 1;
					if (pointer == 3)
					{
						pointer = 0;
					}
					break;
				}
				else if (GetAsyncKeyState(VK_RETURN) != 0)
				{
					switch (pointer)
					{
					case 0:
					{
						cout << "\n\n\nStarting new game...";
						Sleep(1000);
					} break;
					case 1:
					{
						cout << "\n\n\nThis is the options...";
						Sleep(1000);
					} break;
					case 2:
					{
						return 0;
					} break;
					}
					break;
				}
			}

			Sleep(100);
		}

		return 0;*/
	}