#include "shard/Shard0033.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

extern u32 partySlotIsOccupied(void *entry);

/* Counts how many of the 12 slots partySlotIsOccupied reports as non-zero. */
s32 partyCountOccupiedSlots(void)
{
    s32 count = 0;
    u32 i;

    for (i = 0; (s32)i < 0xC; i++) {
        if (partySlotIsOccupied(partyGetSlot(i & 0xFFFF)) != 0) {
            count++;
        }
    }
    return count;
}

} /* extern "C" */
