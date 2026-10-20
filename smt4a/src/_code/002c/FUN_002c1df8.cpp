/* NON_MATCHING: instruction order only: retail loads the other table's first word before the entry's id (ldr r0, [r0] then ldrsh r1); the compiler loads the id first. */
#include "common.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id;
    /* 0x22 */ u8 unk22[4];
    /* 0x26 */ u8 fileIndex;
    /* 0x27 */ u8 unk27;
} TableEntry;                        /* 0x28 */

u32 tbcrBlockGetPayload(void);
void *dataTableFileGetTable(void *file, u32 index);
TableEntry *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);

/* For every entry of the file's first table that has a file index set, finds the first of the
 * file's other tables whose first entry has the same id and stores that table's index. */
void FUN_002c1df8(void *file)
{
    u32 tableCount = tbcrBlockGetPayload();
    void *table = dataTableFileGetTable(file, 0);
    TableEntry *entry = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    u32 i;
    u32 j;

    for (i = 0; i < count; i++, entry++) {
        if (entry->fileIndex == 0) {
            continue;
        }
        for (j = 1; j < tableCount; j++) {
            if (*(s32 *)dataTableGetEntries(dataTableFileGetTable(file, j)) == entry->id) {
                entry->fileIndex = j;
                break;
            }
        }
    }
}

} /* extern "C" */
