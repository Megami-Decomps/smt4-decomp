/* Calls FUN_001aea28 for every slot (last to first) whose entry has a linked child. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *child;
} Entry;

typedef struct Slot {
    /* 0x00 */ Entry *entry;
    /* 0x04 */ u8 unk04[0x38];
} Slot; /* 0x3C */

typedef struct SlotTable {
    /* 0x00 */ u8 unk00[0xA8];
    /* 0xA8 */ Slot slots[35];
} SlotTable;

extern u32 DAT_0056fcc0;
extern SlotTable *DAT_00580ca0;

extern void FUN_001aea28(u32 arg, void *child);

void FUN_002b7be0(void)
{
    s32 i;

    for (i = 34; i >= 0; i--) {
        Entry *entry = DAT_00580ca0->slots[i].entry;

        if (entry != NULL && entry->child != NULL) {
            FUN_001aea28(DAT_0056fcc0, entry->child);
        }
    }
}

}
