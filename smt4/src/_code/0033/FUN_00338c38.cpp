/* NON_MATCHING: the final flags |= 0x8000000 uses r0 as its temporary; retail uses r1. */
#include "battle/BattleUnitSlot.h"
#include "shard/W4_Match6_BtlScript.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlMain.h"
#include "util/CalleeContracts.h"
#include "util/BtlFindNthActiveSpecialEntry.h"

extern "C" {

extern u32 g_btlScriptUnit; /* 0x43427c */

extern u32 FUN_00245a7c(u32 arg, u32 pending);

/* Starts the pending request (state 0) when the script is idle, the scripted unit is free and the script flags allow it. */
void FUN_00338c38(BtlMainState *script)
{
    BattleActionUnit *unit;

    if (script->encounterControl.busyA == 0 && script->encounterControl.blocked == 0) {
        unit = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit));
        if (unit == NULL || (unit->flags & BTL_UNIT_FLAG_BUSY_A) == 0) {
            if (unit == NULL || (unit->flags & BTL_UNIT_FLAG_BUSY_B) == 0) {
                if (FUN_002b6ad0() != 0 && btlFindNthActiveSpecialEntry(script, 1) < 0) {
                    if ((script->battleFlags & 0x200) == 0) {
                        if ((script->battleFlags & 0x8000000) == 0) {
                            script->pending = FUN_00245a7c(0, script->pending);
                            script->battleFlags |= 0x8000000;
                        }
                    }
                }
            }
        }
    }
}

}
