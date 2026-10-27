/* NON_MATCHING: the percentage/kind locals now spill as in retail (ldrsh + mul); retail stores the third local separately and reads the unit index after the flag tests. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlHelp.h"

extern "C" {
void FUN_0027df30(s32, u32, BtlActionRecord *, s32, s32, s32, u32, s32, s32, s32, s32, s32, s32);
void FUN_00282820(s32, u32, s32, s32, s32, s32, s32, s32);

// Queue staggered half-HP/MP recovery actions for the active party.
void FUN_003ca32c(BtlMainState **main, u32 job)
{
    struct Rates { s32 hp, mp, kind; } rates;
    rates.mp = 50;
    rates.hp = 50;
    s32 queued = 0;
    rates.kind = 5;
    for (s32 i = 0; i < 4; ++i) {
        BtlEntry *entry = &(*main)->entries[i];
        if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && entry->members.ids[0] >= 0) {
            s32 hp = rates.hp * entry->maxHp / 100;
            if (hp == 0)
                hp = -1;
            s32 mp = entry->maxMp * rates.mp / 100;
            if (mp == 0)
                mp = -1;
            if (hp > 0 && (entry->groupMask & 8) != 0)
                hp = 1;
            if (mp > 0 && (entry->groupMask & 8) != 0)
                mp = 1;
            s32 delay = queued * 5;
            FUN_00282820(delay, job, entry->members.ids[0], entry->members.ids[0], 9, 0, 5, 0);
            FUN_0027df30(rates.kind, job, &(*main)->actions[entry->members.ids[0]], 0, hp, mp,
                         0xFFFFFFFF, 0, delay, delay, 9, 1, 0);
            ++queued;
        }
    }
    FUN_00229a3c(0, job, 0, 30, 0);
}
}
