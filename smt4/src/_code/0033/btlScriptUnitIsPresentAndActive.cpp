#include "battle/BattleUnitSlot.h"

extern "C" {

extern u32 g_btlScriptUnit; /* 0x43427c */


/* Whether the script's current unit exists and is not in state 5. */
u32 btlScriptUnitIsPresentAndActive(void)
{
    BtlUnit *unit = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit));

    if (unit != NULL) {
        if (unit->state == 5) {
            return 0;
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
