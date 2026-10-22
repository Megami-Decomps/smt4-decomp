#include "common.h"

extern "C" const u8 DAT_00536271[11];

/* Look up the threshold, using the maximum for an out-of-range rank. */
extern "C" u32 FUN_00316508(u32 rank)
{
    return rank < 11 ? DAT_00536271[rank] : 50;
}
