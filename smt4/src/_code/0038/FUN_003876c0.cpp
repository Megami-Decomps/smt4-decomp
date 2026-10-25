#include "shard/W8X15_PackageList.h"

extern "C" {
/* Returns the index-th record (8 bytes each) across every '#' data table file of the loaded
 * packages, or NULL past the end. */
u8 *FUN_003876c0(PackageList *list, s32 index)
{
    s32 total = 0;
    for (s32 i = 0; i < list->count; i++) {
        PackageEntry *entry = &list->entries[i];
        if (FUN_002ac12c(entry) != 0) {
            char (*names)[0x40] = FUN_002ac0f8(entry);
            u32 fileCount = FUN_002ac0c4(entry);
            for (u32 j = 0; j < fileCount; j++) {
                if (names[j][0] == '#') {
                    void *table = dataTableFileGetTable(entry->files[j].fileId, 0);
                    s32 end = dataTableGetCount(table) + total;
                    if (end >= index) {
                        return reinterpret_cast<u8 *>(dataTableGetEntries(table)) + (index - total) * 8;
                    }
                    total += end;
                }
            }
        }
    }
    return NULL;
}
}
