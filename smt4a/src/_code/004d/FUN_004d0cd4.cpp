/* NON_MATCHING: canonical slot table and signed loop recovered; ordered-index and used-count registers are exchanged. */
#include "shard/Shard0031.h"
#include <stddef.h>

struct PartySlotCountView : PartyStatusSlots {
    /* 0x1CA3 */ u8 count;
};
typedef char PartySlotCountOffset[offsetof(PartySlotCountView, count) == 0x1CA3 ? 1 : -1];

extern "C" {
PartySlotCountView *gameGetSlotTable(void);
s32 FUN_004bd730(SlotTableEntry *entry);

static inline s32 countOrderedSlots(const PartySlotCountView *table)
{
    s32 count = 0;
    for (s32 index = 0; index < 24; ++index) {
        if (table->active.slots[index] < 0)
            break;
        ++count;
    }
    return count;
}

/* Return the first free entry when there is room in the ordered party slots. */
s32 FUN_004d0cd4(void)
{
    PartySlotCountView *table = gameGetSlotTable();
    s32 used = countOrderedSlots(gameGetSlotTable());
    if (table->count > used) {
        PartySlotCountView *entries = gameGetSlotTable();
        for (s32 index = 0; index < 24; ++index) {
            if (FUN_004bd730(&entries->active.entries[index]) == 0)
                return index;
        }
    }
    return -1;
}

} /* extern "C" */
