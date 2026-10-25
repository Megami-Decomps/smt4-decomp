/* NON_MATCHING: register allocation only: retail keeps the random pick in r3 across the btlUnitGet call (armcc knew its register use) and the index array base in r5; the build saves them in r5/r6 (frame 440 vs 436). */
#include "battle/ListedEntry.h"
#include "battle/BattleUnitSlot.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "shard/randRange.h"

/* A battle entry seen through its flags (bit 10 marks it) and its index at +0x6e. */
struct MarkedEntry {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x6A];
    /* 0x06E */ s16 index;
    /* 0x070 */ u8 unk070[0x218];
};

struct MarkedState {
    /* 0x0000 */ u8 unk0000[0x1fc0];
    /* 0x1FC0 */ MarkedEntry *entries;
};

extern "C" {


/* Picks a random marked battle entry (flag 0x400) and sets byte 0x38 of its unit. */
void FUN_003cf1a8(MarkedState **owner)
{
    s32 indices[109];
    s32 count = 0;
    MarkedEntry *entry = (*owner)->entries;

    for (s32 i = 0; i < 109; i++, entry++) {
        if ((entry->flags & 0x400) != 0) {
            indices[count++] = entry->index;
        }
    }
    s32 pick = randRange((u16)(count - 1));
    btlUnitGet(reinterpret_cast<BtlState *const *>(owner))->selectedUnits[indices[pick]] = 1;
}

} /* extern "C" */
