#include "config.h"

#include "block.h"
#include "util.h"

#define CS(s) "$HOME/.config/dwmblocks-async/scripts/" #s

Block blocks[] = {
	{ CS("date.sh"), 	15,	1 },
	{ CS("battery.sh"), 	90,	1 },
};

const unsigned short blockCount = LEN(blocks);
