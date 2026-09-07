//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/                                                              /*Update Interval*/ /*Update Signal*/
    {"󰍛 ",     "free -h | awk '/^Mem:/ {print $3 \" / \" $2}' | sed 's/Gi//g; s/Mi/M/g'", 30,                 0},
    {" ",      "~/scripts/dwmblocks_volumen",                                             1,                  0},
    {" 󰃭 ",	"date '+%a %d/%m/%Y'",                               					   60,                 0},
    {" 󰥔 ",    "date '+%H:%M'",                                                           5,                  0},
	{"", 	   "~/scripts/dwmblocks_bateria", 							                  60, 	              0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " 󰇝 ";
static unsigned int delimLen = 5;
