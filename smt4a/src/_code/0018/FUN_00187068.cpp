#include "gamedata/PartySortRecord.h"
#include "shard/W6_W6Match1_PartySlot.h"
#include "code/Code0019.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 FUN_0019d4a4(const SortRecord *left, const SortRecord *right);
void qsort(void *records, u32 count, u32 stride, s32 (*compare)(const SortRecord *, const SortRecord *));
}

static __inline PartySlotA *resolveRankedPartySlot(u16 index)
{
    if (index >= 12)
        return NULL;
    return &gameGetSlotTable()->slots[index];
}

// Sort the twelve party slots by their definition rank and id, then return the requested slot.
extern "C" PartySlotA *FUN_00187068(u32 rank)
{
    if (rank < 12) {
        SortRecord records[12];
        for (s32 i = 0; i < 12; ++i) {
            PartySlotA *slot = resolveRankedPartySlot((u16)i);
            if (slot && slot->id) {
                records[i].value = i;
                records[i].secondary = slot->id;
                records[i].primary = FUN_0019acdc(slot->id, 0);
            } else {
                records[i].value = i;
                records[i].secondary = 0;
                records[i].primary = 99;
            }
        }
        qsort(records, 12, sizeof(SortRecord), FUN_0019d4a4);
        u16 index = (u16)records[rank].value;
        if (index < 12)
            return &gameGetSlotTable()->slots[index];
    }
    return NULL;
}
