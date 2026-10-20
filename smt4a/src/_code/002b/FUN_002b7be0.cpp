/* Calls ptrListRemoveClearOwner for every slot (last to first) whose entry has a linked child. */
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

extern u32 g_handleRegistry;
extern SlotTable *g_mapGimic;

extern void ptrListRemoveClearOwner(u32 arg, void *child);

void FUN_002b7be0(void)
{
    s32 i;

    for (i = 34; i >= 0; i--) {
        Entry *entry = g_mapGimic->slots[i].entry;

        if (entry != NULL && entry->child != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, entry->child);
        }
    }
}

}
