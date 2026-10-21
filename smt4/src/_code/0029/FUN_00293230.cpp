/* NON_MATCHING: compiler combines the two flag tests into one mask; retail tests the flags separately. */
#include "common.h"

namespace { struct Unit { u32 flags; }; }

extern "C" {
/* Reads or updates the requested state. */
extern u32 g_btlScriptUnit;
Unit *btlUnitGet(u32 id);
s32 FUN_00293230(void)
{
    Unit *unit = btlUnitGet(g_btlScriptUnit);
    if (unit != NULL && ((unit->flags & 0x80) != 0 || (unit->flags & 0x1000) != 0)) {
        return 1;
    }
    return 0;
}
}
