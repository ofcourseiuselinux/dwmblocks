//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},

	{"",  "~/.local/bin/sb-nettraf.sh", 1,  16},
        {"",  "~/.local/bin/sb-volume.sh",  1,  10},
        {"",  "~/.local/bin/sb-internet.sh", 5,  5},
        {"",  "~/.local/bin/sb-clock.sh",  60, 1},
        {"",  "~/.local/bin/sb-cpu.sh", 1,  5},
	{"",  "~/.local/bin/sb-cpubars.sh", 1, 1},
	{"",  "~/.local/bin/sb-disk.sh",  300, 1},
	{"",  "~/.local/bin/sb-music.sh", 30, 5},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
