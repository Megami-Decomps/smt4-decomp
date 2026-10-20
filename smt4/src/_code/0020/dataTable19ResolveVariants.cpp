#include "common.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 key;
    /* 0x22 */ u8 unk22[8];
    /* 0x2A */ u8 variant;
    /* 0x2B */ u8 unk2B;
} TableEntry;

extern int fileSlotGetBuffer(int slot);
extern u32 tbcrBlockGetPayload(void);
extern u32 dataTableGet(int table, u32 index);
extern void *dataTableGetEntries(void);
extern u32 dataTableGetCount(u32 table);

/* Resolves each entry's variant index of table 0x19: a non-zero variant is replaced by the first row whose key matches the entry's key. */
void dataTable19ResolveVariants(void)
{
    u32 payload;
    u32 table;
    u32 count;
    u32 i;
    u32 j;
    TableEntry *entry;

    fileSlotGetBuffer(0x19);
    payload = tbcrBlockGetPayload();
    table = dataTableGet(0x19, 0);
    entry = (TableEntry *)dataTableGetEntries();
    count = dataTableGetCount(table);
    for (i = 0; i < count; i++, entry++) {
        if (entry->variant == 0) {
            continue;
        }
        for (j = 1; j < payload; j++) {
            dataTableGet(0x19, j);
            if (*(s32 *)dataTableGetEntries() == entry->key) {
                entry->variant = j;
                break;
            }
        }
    }
}

} /* extern "C" */
