#include "battle/BattleUnitSlot.h"

namespace { struct Unit { u32 flags; }; }

extern "C" {
extern u32 g_btlScriptUnit;

/* Returns whether the script's battle unit has flag 0x80 or 0x1000 set. */
s32 FUN_00293230(void)
{
    Unit *unit = reinterpret_cast<Unit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    if (unit == NULL)
        return 0;
    if (unit->flags & 0x80)
        return 1;
    if (unit->flags & 0x1000)
        return 1;
    return 0;
}
}
