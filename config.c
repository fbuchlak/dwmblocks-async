#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
	/* command, update interval, update sig */
	{ "sb-date",    10, 1 },
	{ "sb-battery", 90, 1 },
};

const unsigned short blockCount = LEN(blocks);
