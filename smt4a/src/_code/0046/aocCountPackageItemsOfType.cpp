#include "addon/aocMain.h"
#include "shard/W4_Match3_AocMainA.h"
#include "addon/AocSystemA.h"

extern "C" {

s32 asdFsIsSdCardDetected(void);
s32 objGetFlagBit16(AocMain *main);

/* Counts the items of the given type across all valid packages; without an SD card clears AOC flag 0x10000 and returns 0. */
s32 aocCountPackageItemsOfType(AocSystemA *system, s32 type)
{
    s32 count;
    s32 i;

    if (!asdFsIsSdCardDetected()) {
        g_aocMain->flags &= ~0x10000;
        return 0;
    }
    if (!objGetFlagBit16(g_aocMain)) {
        return 0;
    }
    count = 0;
    for (i = 0; i < system->packageCount; i++) {
        AocPackage *package = &system->packages[i];

        if (packageEntryIsLoaded(package)) {
            AocPackageDirectoryEntry *items = packageEntryGetDirectory(package);
            u32 itemCount = packageEntryGetFileCount(package);
            u32 j;

            for (j = 0; j < itemCount; j++) {
                if (items[j].kind == type) {
                    count++;
                }
            }
        }
    }
    return count;
}

} /* extern "C" */
