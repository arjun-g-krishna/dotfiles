//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

//	{"", "weather",					60,		0},

	{" ", "battery.sh",					30,		0},
	
	{"󰋋 ", "volume.sh",				60,		10},

	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"  ", "cpu.sh",					30,		0},

	{" ", "date '+%a %d %b %I:%M %p'",					5,		0},
	

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
