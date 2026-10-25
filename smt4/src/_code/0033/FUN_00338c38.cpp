/* NON_MATCHING: the final flags |= 0x8000000 uses r0 as its temporary; retail uses r1. */
#include "battle/BattleUnitSlot.h"
#include "shard/W4_Match6_BtlScript.h"
#include "util/CalleeContracts.h"

extern "C" {

extern u32 g_btlScriptUnit; /* 0x43427c */

extern int btlFindNthActiveSpecialEntry(BtlScript *script, int arg);
extern u32 FUN_00245a7c(u32 arg, u32 pending);

/* Starts the pending request (state 0) when the script is idle, the scripted unit is free and the script flags allow it. */
void FUN_00338c38(BtlScript *script)
{
    BtlScriptUnit *unit;

    if (script->busyA == 0 && script->busyB == 0) {
        unit = reinterpret_cast<BtlScriptUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
        if (unit == NULL || (unit->flags & BTL_UNIT_FLAG_BUSY_A) == 0) {
            if (unit == NULL || (unit->flags & BTL_UNIT_FLAG_BUSY_B) == 0) {
                if (FUN_002b6ad0() != 0 && btlFindNthActiveSpecialEntry(script, 1) < 0) {
                    if ((script->flags & 0x200) == 0) {
                        if ((script->flags & 0x8000000) == 0) {
                            script->pending = FUN_00245a7c(0, script->pending);
                            script->flags |= 0x8000000;
                        }
                    }
                }
            }
        }
    }
}

}
