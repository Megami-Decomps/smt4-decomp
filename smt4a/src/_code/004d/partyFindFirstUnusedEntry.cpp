#include "shard/Shard0031.h"
#include <stddef.h>

struct PartySlotCountView : PartyStatusSlots {
    /* 0x1CA3 */ u8 count;
};
typedef char PartySlotCountOffset[offsetof(PartySlotCountView, count) == 0x1CA3 ? 1 : -1];

extern "C" {
PartySlotCountView *gameGetSlotTable(void);
s32 FUN_004bd730(SlotTableEntry *entry);

/* Return the first free entry when there is room in the ordered party slots. */
s32 partyFindFirstUnusedEntry(void)
{
    PartySlotCountView *table = gameGetSlotTable();
    PartySlotCountView *ordered = gameGetSlotTable();
    s32 used = 0;
    for (s32 index = 0; index < 24; ++index) {
        if (ordered->active.slots[index] < 0)
            break;
        ++used;
    }
    s32 capacity = table->count;
    if (used >= capacity)
        return -1;
    PartySlotCountView *entries = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        if (FUN_004bd730(&entries->active.entries[index]) == 0)
            return index;
    }
    return -1;
}

} /* extern "C" */
