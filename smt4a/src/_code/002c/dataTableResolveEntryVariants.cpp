#include "common.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id;
    /* 0x22 */ u8 unk22[4];
    /* 0x26 */ u8 variant;
    /* 0x27 */ u8 unk27;
} TableEntry; /* 0x28 bytes */

extern s32 dataTableValueOrZero(s32 table);
extern u32 dataTableGet(s32 table, u32 index);
extern u32 dataTableGetCount(u32 index);
extern u32 tbcrBlockGetPayload(void);
extern void *dataTableGetEntries(void);

/* Resolves each entry's variant of table 0x19: an entry with a variant set is pointed at the
 * variant table whose first entry has the same id. */
void dataTableResolveEntryVariants(void)
{
    u32 variantCount;
    u32 count;
    u32 i;
    u32 variant;
    u32 table;
    TableEntry *entry;

    dataTableValueOrZero(0x19);
    variantCount = tbcrBlockGetPayload();
    table = dataTableGet(0x19, 0);
    entry = (TableEntry *)dataTableGetEntries();
    count = dataTableGetCount(table);
    for (i = 0; i < count; i++, entry++) {
        if (entry->variant != 0) {
            variant = 1;
            if (variantCount > 1) {
                do {
                    dataTableGet(0x19, variant);
                    if (*(s32 *)dataTableGetEntries() == entry->id) {
                        entry->variant = variant;
                        break;
                    }
                    variant++;
                } while (variant < variantCount);
            }
        }
    }
}

} /* extern "C" */
