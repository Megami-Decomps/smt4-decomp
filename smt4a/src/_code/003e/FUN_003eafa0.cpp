/* NON_MATCHING: 14 lines; subobject null test and masks now match, only roster offset r0/r1 swap and `unk228 = 0` scheduling differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"

extern "C" {
void rt_memclr(void *buffer, u32 size);
void clearTwoWords(void *value);

/* Clears queued commands for the requested roster category, excluding inactive combatants. */
void FUN_003eafa0(BtlMainStateA *battle, s32 category)
{
    for (s32 index = 0; index < 109; ++index) {
        s32 combatantIndex = battle->roster[index].combatant.combatantIndex;
        if (combatantIndex >= 0) {
            if ((g_btlMain.combatantMasks.required & battle->entries[combatantIndex].flags) != 0 &&
                (g_btlMain.exclusionMask & battle->entries[combatantIndex].flags) == 0) {
                BtlUnitDataA *data = &battle->entries[combatantIndex].data;
                if (data != NULL) {
                    s32 shouldClear = 0;
                    if (category == 0) {
                        if ((g_btlMain.actorCategories[2] & battle->entries[combatantIndex].flags) == 0 &&
                            (g_btlMain.actorCategories[3] & battle->entries[combatantIndex].flags) == 0)
                            shouldClear = 1;
                    } else if (category == 1) {
                        if ((g_btlMain.actorCategories[2] & battle->entries[combatantIndex].flags) != 0)
                            shouldClear = 1;
                    } else {
                        shouldClear = 1;
                    }
                    if (shouldClear) {
                        data->unk228 = 0;
                        clearTwoWords(&data->actionKind);
                        rt_memclr((u8 *)data + 0x1D6, 0x50);
                    }
                }
            }
        }
    }
}

} /* extern "C" */
