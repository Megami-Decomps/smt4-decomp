#include "shard/W5_W5Match5_GameSaveViews.h"

namespace {
struct EntrySlot {
    /* 0x00 */ u16 entryId; /* 0 when free */
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ s16 value;
};
}

extern "C" {

EntrySlot *FUN_002613f0(s32 index);
s32 FUN_003f3104(SlotRecord *record);

// Index of the slot holding `entryId`, else of a free slot (cleared), else -1.
static inline s32 entrySlotFind(u16 entryId)
{
    s32 i;

    for (i = 0; i < 24; ++i) {
        if (FUN_002613f0(i)->entryId == entryId) {
            return i;
        }
    }
    for (i = 0; i < 24; ++i) {
        if (FUN_002613f0(i)->entryId == 0) {
            EntrySlot *slot = FUN_002613f0(i);
            slot->entryId = 0;
            slot->unk02 = 0;
            slot->unk04 = 0;
            slot->value = 0;
            return i;
        }
    }
    return -1;
}

/* Store a record's computed value in the slot for its entry id, taking a free slot when it has none. */
s32 entrySlotStoreRecordValue(SlotRecord *record)
{
    s32 index;
    s32 value;

    if (record == NULL) {
        return 0;
    }
    index = entrySlotFind(record->entryId);
    if (index < 0) {
        return 0;
    }
    value = FUN_003f3104(record);
    if (value == 0) {
        return 0;
    }
    FUN_002613f0(index)->entryId = record->entryId;
    FUN_002613f0(index)->value = value;
    return 1;
}

} /* extern "C" */
