static const Block blocks[] = {
	/*Icon*/  /*Command*/                      /*Interval*/ /*Signal*/

	{"VOL ",  "~/.local/bin/dwmblocks/volume",           2,          1},
	{"BAT ",  "~/.local/bin/dwmblocks/battery",          30,         2},
	{"MEM ",  "~/.local/bin/dwmblocks/memory",           5,          0},
	{"DISK ", "~/.local/bin/dwmblocks/disk",             60,         0},
	//{"NET ",  "~/.local/bin/dwmblocks/network",          5,          0},
	{"",      "~/.local/bin/dwmblocks/datetime",         5,          0},
};

//sets delimiter between status commands
static char delim[] = " | ";
static unsigned int delimLen = 3;
