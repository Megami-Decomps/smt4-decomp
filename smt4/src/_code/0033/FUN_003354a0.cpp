/* NON_MATCHING: the slot index scale (i * 5) is built in r0 instead of r1. */
#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
    /* 0x0C */ void *buffer;
    /* 0x10 */ u8 unk10[0x40];
} Slot;

typedef struct SlotSet {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 handle;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ Slot slots[3];
} SlotSet;

extern u8 DAT_004206f0;

int asdMdlManagerDestroy(u32 handle);
int asdMemFree(void *block);

/* Destructor: releases the handle and buffer of each of the three slots, then the set's own handle. */
SlotSet *FUN_003354a0(SlotSet *set)
{
    int i;

    set->vtbl = &DAT_004206f0;
    i = 0;
    do {
        Slot *slot = &set->slots[i];

        if (slot->handle != 0) {
            asdMdlManagerDestroy(slot->handle);
            slot->handle = 0;
        }
        if (slot->buffer != NULL) {
            asdMemFree(slot->buffer);
            slot->buffer = NULL;
        }
        i++;
    } while (i < 3);
    if (set->handle != 0) {
        asdMdlManagerDestroy(set->handle);
        set->handle = 0;
    }
    return set;
}

} /* extern "C" */
