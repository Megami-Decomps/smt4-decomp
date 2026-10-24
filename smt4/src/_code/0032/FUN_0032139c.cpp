/* NON_MATCHING: same loop, but armcc keeps the count in r1 and the -1 in r2 (retail: r2 and r1). */
#include "common.h"

struct SlotEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[0x1c];
};

struct SlotList {
    /* 0x00 */ SlotEntry *entries;
};

struct SlotSetup {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 count;
};

struct SlotOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3C */ SlotList *list;
    /* 0x40 */ SlotSetup *setup;
};

typedef char SlotEntrySize[sizeof(SlotEntry) == 32 ? 1 : -1];

extern "C" {

/* Virtual slot: marks every entry of the owner's list as unused (id -1). */
void FUN_0032139c(SlotOwner *self)
{
    SlotEntry *entries = self->list->entries;
    s32 count = self->setup->count;

    for (s32 index = 0; index < count; index++) {
        entries[index].id = -1;
    }
}

} /* extern "C" */
