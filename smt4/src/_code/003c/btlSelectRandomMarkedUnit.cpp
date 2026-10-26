#include "battle/BattleUnitSlot.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "util/Random.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {


/* Picks a random marked battle entry (flag 0x400) and sets byte 0x38 of its unit. */
void btlSelectRandomMarkedUnit(BtlMainState **owner)
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
