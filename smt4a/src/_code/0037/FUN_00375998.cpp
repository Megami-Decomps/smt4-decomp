/* NON_MATCHING: comparison form only: retail tests the slot ids with `subs r0,r0,r4; bne`, built uses `cmp r0,r4; bne` */
/* If both entries have the same slot id (u16 at +0x62 of their gameGetSlotRecord record, 0 for negative handles), forwards them to FUN_003811ec. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 handle;
} Entry;

typedef struct Record {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 slot;
} Record;

extern Record *gameGetSlotRecord(void);
extern void FUN_003811ec(Entry *a, Entry *b);

void FUN_00375998(Entry *a, Entry *b)
{
    u16 slotA;
    u16 slotB;

    if (a->handle < 0) {
        slotA = 0;
    } else {
        slotA = gameGetSlotRecord()->slot;
    }
    if (b->handle < 0) {
        slotB = 0;
    } else {
        slotB = gameGetSlotRecord()->slot;
    }
    if (slotB != slotA) {
        return;
    }
    FUN_003811ec(a, b);
}

}
