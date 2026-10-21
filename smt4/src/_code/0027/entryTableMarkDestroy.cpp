#include "common.h"

extern "C" {

/* 0x38-byte entry; the word at +0xc is a handler pointer/flag. */
typedef struct {
    u8 unk00[0xc];
    u32 handler;        /* 0x0c */
    u8 unk10[0x28];
} Entry;

/* Table of 64 entries starting at 0x30. */
typedef struct {
    u8 unk00[0x30];
    Entry entries[64];  /* 0x30 */
} EntryTable;

int asdMdlManagerMarkDestroy(void);

extern EntryTable *g_deferredMapModels;

/* Walks the 64 entries from last to first and runs asdMdlManagerMarkDestroy for each one with a handler set. */
void entryTableMarkDestroy(void)
{
    int i;

    for (i = 63; i >= 0; i--) {
        Entry *entry = &g_deferredMapModels->entries[i];

        if (entry->handler != 0) {
            asdMdlManagerMarkDestroy();
        }
    }
}

} /* extern "C" */
