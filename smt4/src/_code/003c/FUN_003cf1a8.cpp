/* NON_MATCHING: register allocation only: retail keeps the random pick in r3 across the btlUnitGet call (armcc knew its register use) and the index array base in r5; the build saves them in r5/r6 (frame 440 vs 436). */
#include "battle/BattleUnitSlot.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "util/Random.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {


/* Picks a random marked battle entry (flag 0x400) and sets byte 0x38 of its unit. */
void FUN_003cf1a8(BtlMainState **owner)
{
    s32 indices[109];
    s32 count = 0;
    BtlEntry *entry = (*owner)->entries;

    for (s32 i = 0; i < 109; i++, entry++) {
        if ((entry->flags & 0x400) != 0) {
            indices[count++] = entry->selectionIndex;
        }
    }
    s32 pick = randRange((u16)(count - 1));
    btlUnitGet(owner)->selectedUnits[indices[pick]] = 1;
}

} /* extern "C" */
