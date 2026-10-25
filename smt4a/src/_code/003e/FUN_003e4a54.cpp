/* NON_MATCHING: second slot lookup adds a base-pointer MOV during index arithmetic, shifting the final branch-to-next NOP by one instruction. */
#include "shard/W6_W6Match1_PartySlot.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
u32 FUN_003e4b2c(u32 id, s32 targetLevel, s32 maximumIncrease);
}

static __inline PartySlotA *getPartySlot(u16 index)
{
    if (index >= 12)
        return NULL;
    return &gameGetSlotTable()->slots[index];
}

static __inline PartySlotA *findPartySlotById(u32 id)
{
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *slot = getPartySlot((u16)index);
        if (slot->id == id)
            return slot;
    }
    return NULL;
}

// Raise the destination toward the source's level, bounded by their current level difference.
extern "C" u32 FUN_003e4a54(u32 sourceId, u32 destinationId)
{
    PartySlotA *source = findPartySlotById(sourceId);
    if (source == NULL)
        return 0;
    PartySlotA *destination = findPartySlotById(destinationId);
    if (destination == NULL)
        return 0;
    s32 difference = source->level - destination->level;
    if (difference < 0)
        return 0;
    return FUN_003e4b2c(destinationId, source->level, difference);
}
