#include "battle/BattleUnitSlot.h"
#include "shard/W4_Match6_BtlScript.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlMain.h"

extern "C" {

extern u32 g_btlScriptUnit; /* 0x43427c */

extern u32 FUN_00245a7c(u32 arg, u32 pending);

/* Queues request 2 for the script unless the scripted unit is busy. */
void btlScriptQueueRequestIfIdle(BtlMainState *script)
{
    BattleActionUnit *unit = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit));

    if (unit == NULL || (unit->flags & BTL_UNIT_FLAG_BUSY_A) == 0) {
        if (unit == NULL || (unit->flags & BTL_UNIT_FLAG_BUSY_B) == 0) {
            script->pending = FUN_00245a7c(2, script->pending);
        }
    }
}

}
