#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 handle;
} Entry;

typedef struct Record {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 slot;
} Record;

extern Record *gameGetUnitRecord(void);
extern int FUN_00257568(Entry *a, Entry *b);

/* If both entries have the same slot (0 for a negative handle), forwards them to FUN_00257568. */
void FUN_00219208(Entry *a, Entry *b)
{
    u16 slotA;
    u16 slotB;
    s32 diff;

    if (a->handle < 0) {
        slotA = 0;
    } else {
        slotA = gameGetUnitRecord()->slot;
    }
    if (b->handle < 0) {
        slotB = 0;
    } else {
        slotB = gameGetUnitRecord()->slot;
    }
    diff = slotA - slotB;
    if (diff == 0) {
        FUN_00257568(a, b);
    }
}

}
