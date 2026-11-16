#include "common.h"
#include "util/Random.h"
#include "gamedata/DataTable.h"
#include "util/Random.h"

extern "C" {

extern u32 g_lcgSeed;

/* Linear congruential generator (a = 0x41c64e6d, c = 0x3039); returns a value in 0..limit. */
u32 randNextInRange(int limit)
{
    u32 seed = g_lcgSeed * 0x41c64e6d;

    g_lcgSeed = seed + 0x3039;
    return (g_lcgSeed >> 0x10) * (limit + 1) >> 0x10;
}

} /* extern "C" */
