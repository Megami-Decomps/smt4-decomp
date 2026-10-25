/* NON_MATCHING: ARMCC merges flag tests and uses an immediate target limit with different saved registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BattleUnitSlot.h"
#include "script/ScriptArgs.h"

extern "C" {
extern u32 g_btlScriptUnit;

// Install two script action ids and select up to two eligible reserve entries.
u32 FUN_002f6b48(void)
{
    // Pending actions lie beyond the shared battle prefix's recovered end.
    struct PendingActionsView {
        u8 unk00[0x1FD0];
        s64 first;
        s64 second;
    };
    typedef char PendingActionsOffsets[offsetof(PendingActionsView, first) == 0x1FD0 &&
        offsetof(PendingActionsView, second) == 0x1FD8 ? 1 : -1];
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->data->unk14C = 12;
    reinterpret_cast<PendingActionsView*>(btlGetMainState())->first = (s64)(s32)(first | 0x10000);
    reinterpret_cast<PendingActionsView*>(btlGetMainState())->second = (s64)(s32)(second | 0x10000);
    s8 found = 0;
    for (s32 i = 4; i < 54; ++i) {
        u32 flags = btlGetMainState()->entries[i].flags;
        if ((flags & 1) == 0 && (flags & 0x40) == 0) {
            reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->targets[i] = i;
            if (++found >= 2) {
                break;
            }
        }
    }
    return 1;
}
}
