/* NON_MATCHING: compiler materializes the stats member offset in a literal instead of retail split immediate additions. */
#include "common.h"

namespace { struct Stats { u8 padding[0x126]; u16 values[1]; }; struct Unit { u8 padding[0x28]; Stats *stats; }; }

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 index);
Unit *btlUnitGet(u32 id);
void scrSetResult(u32 value);
u32 FUN_002f7100(u32 argument)
{
    u32 index = scrGetArg(argument);
    Unit *unit = btlUnitGet(g_btlScriptUnit);
    scrSetResult((unit->stats->values[index] >> 10) == 1);
    return 1;
}
}
