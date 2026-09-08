//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/                                                              /*Update Interval*/ /*Update Signal*/
    {"", 	   "~/scripts/systemstats", 							                      5, 	              0},
    {" ",      "~/scripts/dwmblocks_volumen",                                             1,                  0},
    {" 󰃭 ",	"date '+%a %d/%m/%Y'",                               					   5,                  0},
    {" 󰥔 ",    "date '+%H:%M'",                                                           5,                  0},
	{" ", 	   "~/scripts/dwmblocks_bateria", 							                  30, 	              0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " 󰇝 ";
static unsigned int delimLen = 5;
