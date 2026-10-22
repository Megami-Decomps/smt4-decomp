#include "common.h"

extern "C" const u8 DAT_00536266[11];

/* Look up the percentage, using the maximum for an out-of-range rank. */
extern "C" u32 FUN_002a0a20(u32 rank)
{
    return rank < 11 ? DAT_00536266[rank] : 80;
}
