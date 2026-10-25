/* NON_MATCHING: compiler combines the two flag tests into one mask; retail tests the flags separately. */
#include "battle/BattleUnitSlot.h"

namespace { struct Unit { u32 flags; }; }

extern "C" {
/* Reads or updates the requested state. */
extern u32 g_btlScriptUnit;
s32 FUN_00293230(void)
{
    Unit *unit = reinterpret_cast<Unit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    if (unit != NULL && ((unit->flags & 0x80) != 0 || (unit->flags & 0x1000) != 0)) {
        return 1;
    }
    return 0;
}
}
