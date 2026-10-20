/* NON_MATCHING: address arithmetic only: retail computes table + index*4 first, then derives the +0xC field pointer; built folds the offsets differently */
/* Frees the two resources of entry `index` (A at +0x68, B at +0x64) and clears the entry's dirty byte. */
#include "common.h"

extern "C" {

typedef struct EntryFields {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ void *resourceB;
    /* 0x5C */ void *resourceA;
    /* 0x60 */ u8 dirty;
} EntryFields;

typedef struct EntryTable {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 entries[1];   /* 4-byte stride; the fields above are addressed from entry + 0xC */
} EntryTable;

extern void FUN_001836b0(void *resource);
extern void asdMemFree(void *resource);

void FUN_00244848(EntryTable **table, s32 index)
{
    EntryFields *entry = (EntryFields *)((u8 *)*table + index * 4 + 0xC);

    if (entry->resourceA != NULL) {
        FUN_001836b0(entry->resourceA);
        entry->resourceA = NULL;
        entry->dirty = 0;
    }
    if (entry->resourceB != NULL) {
        asdMemFree(entry->resourceB);
        entry->resourceB = NULL;
        entry->dirty = 0;
    }
}

}
