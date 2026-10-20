/* NON_MATCHING: register allocation only: retail forms the row pointer in place in r0 (`add r0, r0, r1, lsl #2`) and reads the first resource through it; built puts the row pointer in r1. */
#include "common.h"

extern "C" {

typedef struct EntryFields {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ void *resourceB;
    /* 0x5C */ void *resourceA;
    /* 0x60 */ u8 dirty;
} EntryFields;

typedef struct EntryRow {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ void *resourceA;
} EntryRow;

typedef struct EntryTable {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 entries[1];   /* 4-byte stride; the fields above are addressed from entry + 0xC */
} EntryTable;

extern void resourceListDestroy(void *resource);
extern void asdMemFree(void *resource);

/* Frees the two resources of entry `index` (A at +0x68, B at +0x64) and clears the entry's dirty byte. */
void FUN_0024483c(EntryTable **table, s32 index)
{
    EntryRow *row = (EntryRow *)((u8 *)*table + index * 4);
    EntryFields *entry = (EntryFields *)((u8 *)row + 0xC);

    if (row->resourceA != NULL) {
        resourceListDestroy(entry->resourceA);
        entry->resourceA = NULL;
        entry->dirty = 0;
    }
    if (entry->resourceB != NULL) {
        asdMemFree(entry->resourceB);
        entry->resourceB = NULL;
        entry->dirty = 0;
    }
}

} /* extern "C" */
