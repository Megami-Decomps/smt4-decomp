#include "common.h"

extern "C" {

typedef struct SlotRecord {
    u16 id;       /* 0x00: 0 = free */
    u16 value;    /* 0x02 */
    u16 count;    /* 0x04 */
    u16 unk06;    /* 0x06 */
} SlotRecord;

typedef struct SlotSource {
    u8 unk00[0x34];
    u16 values[23]; /* 0x34 */
    u16 id;         /* 0x62 */
} SlotSource;

s32 gameFlagIsSet(u32 flag);
SlotRecord *saveGetSelectedRecordSlot(s32 index);
s32 skillChooseRandomFlaggedSlot(u16 *values);
u16 FUN_003f36a4(u16 *values, s32 index, u16 id);

/* Returns the record slot holding id, else the first free slot (cleared), else -1. */
static __inline s32 slotRecordFind(u16 id)
{
    s32 i;

    for (i = 0; i < 24; i++) {
        if (saveGetSelectedRecordSlot(i)->id == id) {
            return i;
        }
    }
    for (i = 0; i < 24; i++) {
        if (saveGetSelectedRecordSlot(i)->id == 0) {
            SlotRecord *record = saveGetSelectedRecordSlot(i);

            record->id = 0;
            record->value = 0;
            record->count = 0;
            record->unk06 = 0;
            return i;
        }
    }
    return -1;
}

/* Records the source's picked value and count in its id's slot (needs flag 0x4d7); returns whether it was stored. */
s32 FUN_0035ac58(SlotSource *source)
{
    s32 index;
    u16 count;
    s32 slot;

    if (source == NULL) {
        return 0;
    }
    if (!gameFlagIsSet(0x4d7)) {
        return 0;
    }
    index = skillChooseRandomFlaggedSlot(source->values);
    count = FUN_003f36a4(source->values, index, source->id);
    if (count == 0) {
        return 0;
    }
    slot = slotRecordFind(source->id);
    if (slot < 0) {
        return 0;
    }
    saveGetSelectedRecordSlot(slot)->id = source->id;
    saveGetSelectedRecordSlot(slot)->value = source->values[index];
    saveGetSelectedRecordSlot(slot)->count = count;
    return 1;
}

} /* extern "C" */
