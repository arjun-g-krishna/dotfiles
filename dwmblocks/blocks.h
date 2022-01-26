//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{" ", "weather",					60,		0},

	{" Battery ", "battery.sh",					30,		0},
	
	{"", "volume",				0,		10},

	{"Mem ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"CPU ", "cpu.sh",					30,		0},

	{"", "date '+%a %D %H:%M'",					5,		0},
	

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ❯ ";
static unsigned int delimLen = 5;
