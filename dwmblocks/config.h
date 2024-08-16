//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "echovoid", 1000, 10},
	{"",  "volume", 1,  10},
	{"",  "clock",  60, 1},
	{"",  "lunarmare", 1000,  10},
	{"",  "memory",   5,  4},
	{"",  "echovoid", 1000,  10}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   |   ";
static unsigned int delimLen = 7;
