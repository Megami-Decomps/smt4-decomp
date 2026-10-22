/* Resolves an indexed record across loaded type-40 package tables. */
#include "addon/PackageSelection.h"

extern "C" PackageIndexedRecord *packageFindIndexedRecord(PackageList *packages, s32 index)
{
    s32 base = 0;
    for (s32 i = 0; i < packages->count; ++i) {
        PackageEntry *package = &packages->entries[i];
        if (FUN_002ac12c(package)) {
            char (*records)[0x40] = FUN_002ac0f8(package);
            u32 count = FUN_002ac0c4(package);
            for (u32 j = 0; j < count; ++j) {
                if (records[j][0] == 40) {
                    void *table = dataTableFileGetTable(package->files[j].fileId, 0);
                    s32 next = dataTableGetCount(table) + base;
                    if (next >= index) {
                        return (PackageIndexedRecord *)dataTableGetEntries(table) + (index - base);
                    }
                    base += next;
                }
            }
        }
    }
    return NULL;
}
