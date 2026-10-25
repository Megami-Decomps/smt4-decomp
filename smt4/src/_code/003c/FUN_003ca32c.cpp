/* NON_MATCHING: retail spills percentage constants; compiler uses SMULBB and different call-argument registers. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlAction.h"
#include "shard/FUN_00229a3c.h"

extern "C" {
void FUN_0027df30(s32, u32, BtlActionRecord *, s32, s32, s32, u32, s32, s32, s32, s32, s32, s32);
void FUN_00282820(s32, u32, s32, s32, s32, s32, s32, s32);

// Queue staggered half-HP/MP recovery actions for the active party.
void FUN_003ca32c(BtlMainState **main, u32 job)
{
    s32 queued = 0;
    for (s32 i = 0; i < 4; ++i) {
        BtlEntry *entry = &(*main)->entries[i];
        s32 unitIndex = entry->members.ids[0];
        if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && unitIndex >= 0) {
            s32 hp = entry->maxHp * 50 / 100;
            if (hp == 0)
                hp = -1;
            s32 mp = entry->maxMp * 50 / 100;
            if (mp == 0)
                mp = -1;
            if (hp > 0 && (entry->groupMask & 8) != 0)
                hp = 1;
            if (mp > 0 && (entry->groupMask & 8) != 0)
                mp = 1;
            s32 delay = queued * 5;
            FUN_00282820(delay, job, unitIndex, unitIndex, 9, 0, 5, 0);
            FUN_0027df30(5, job, &(*main)->actions.records[entry->members.ids[0]], 0, hp, mp,
                         0xFFFFFFFF, 0, delay, delay, 9, 1, 0);
            ++queued;
        }
    }
    FUN_00229a3c(0, job, 0, 30, 0);
}
}
