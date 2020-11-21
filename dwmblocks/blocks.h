//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "~/dwmblocks/scripts/battery.sh",				5,		3},
	
	{" ", "~/dwmblocks/scripts/volume.sh",   				0,		10},

	{"🌡 ", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	{" ", "~/dwmblocks/scripts/cpu.sh",   				10,		18},
	
	{"🧠 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"📅 ", "date '+%d/%m/%y' ",					5,		0},

	{"⏰ ", "date '+%r' " ,					1,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] =" ❱ ";
static unsigned int delimLen = 5;
