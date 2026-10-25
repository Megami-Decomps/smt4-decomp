/* NON_MATCHING: instruction/control-flow layout matches, but item ids and first/second priority values trade r4/r5. */
#include "gamedata/ItemPriorityRecords.h"
#include "addon/AocEntryKind.h"
#include "shard/dataTable8FindRecord.h"

extern "C" {
ContentItemPriorityRecord *contentEntryFindById2(u32 id);
EquipmentItemPriorityRecord *dataTable08Sub2GetRecord(u32 id);
u16 FUN_0049c9a0(const u16 *id);
}

static inline u32 itemPriority(const u16 *item)
{
    u32 id = *item;
    u32 priority = 0;
    switch (aocEntryGetKindForward(id)) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        priority = dataTable08Sub2GetRecord(id)->priority;
        break;
    case 0:
        priority = contentEntryFindById2(id)->priority;
        break;
    case 1:
    case 12: {
        // A word alias inside Table8Record's +0x42 padding would shift union alignment.
        struct PriorityView { u8 unk00[0x44]; u32 properties; };
        typedef char PriorityOffsetCheck[offsetof(PriorityView, properties) == 0x44 ? 1 : -1];
        priority = ((PriorityView *)dataTable8FindRecord(id))->properties & 0xFF;
        break;
    }
    }
    return priority;
}

// Compare mixed item ids by their category's priority field, breaking ties by secondary ordering.
extern "C" s32 FUN_0049393c(const u16 *left, const u16 *right)
{
    u32 first = itemPriority(left);
    u32 second = itemPriority(right);
    s32 difference = first - second;
    if (difference == 0) {
        difference = FUN_0049c9a0(left) - FUN_0049c9a0(right);
    }
    return difference;
}
