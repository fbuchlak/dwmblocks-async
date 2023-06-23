#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
/*	  command,                             update interval, update sig   */
	{ "sb-alsa-input",                     0,               10         },
	{ "sb-alsa-output",                    0,               11         },
/*	{ "sb-alsa-output Speaker \" [󰓃]\"",   0,               12         },*/
/*	{ "sb-alsa-output Headphone \" [󰋋]\"", 0,               13         },*/
	{ "sb-date",                           15,              1          },
	{ "sb-battery",                        90,              2          },
};

const unsigned short blockCount = LEN(blocks);
