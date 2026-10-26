#include "common.h"
#include "util/Random.h"
#include "gamedata/DataTable.h"
#include "util/Random.h"

extern "C" {

extern u32 DAT_004651c0;

/* Linear congruential generator (a = 0x41c64e6d, c = 0x3039); returns a value in 0..limit. */
u32 randNextInRange(int limit)
{
    u32 seed = DAT_004651c0 * 0x41c64e6d;

    DAT_004651c0 = seed + 0x3039;
    return (DAT_004651c0 >> 0x10) * (limit + 1) >> 0x10;
}

} /* extern "C" */
