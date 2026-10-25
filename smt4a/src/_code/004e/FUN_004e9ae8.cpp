/* NON_MATCHING: candidate removal loops use different count/index registers and branch sharing. */
/* Removes candidates according to their exclusion chance and returns the remaining count. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
s32 lcgRandomRange(u32 maximum);

s32 FUN_004e9ae8(BtlMainStateA **owner, s32 *indices, s32 count, s32 force)
{
    if (count <= 1) {
        return count;
    }
    u8 changed = 0;
    for (s32 i = 0; i < count; ++i) {
        s32 chance = btlFindEntryNonzeroRecordValue((*owner)->entries[indices[i]].unitIndex);
        if (chance != 0 && (force != 0 || lcgRandomRange(99) <= chance)) {
            indices[i] = -1;
            changed = 1;
        }
    }
    s32 remaining = count;
    if (changed) {
        for (s32 i = 0; i < count; ++i) {
            if (indices[i] == -1) {
                --remaining;
            }
        }
    }
    return remaining;
}
}
