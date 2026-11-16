/* Resolves an indexed record across loaded type-40 package tables. */
#include "addon/PackageSelection.h"

extern "C" {
s32 packageEntryIsLoaded(PackageEntry *package);
char (*packageEntryGetDirectory(PackageEntry *package))[0x40];
u32 packageEntryGetFileCount(PackageEntry *package);

PackageIndexedRecord *packageFindIndexedRecord(PackageList *packages, s32 index)
{
    s32 base = 0;
    for (s32 i = 0; i < packages->count; ++i) {
        PackageEntry *package = &packages->entries[i];
        if (packageEntryIsLoaded(package)) {
            char (*records)[0x40] = packageEntryGetDirectory(package);
            u32 count = packageEntryGetFileCount(package);
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
}
