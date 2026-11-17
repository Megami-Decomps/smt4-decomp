#include "addon/AocSystemA.h"
#include "addon/aocMain.h"

extern "C" {

// Report whether a mounted content package grants the item (optionally only while content is available).
s32 aocPackageGrantsItem(AocSystemA *system, u32 itemId, s32 checkAvailable)
{
    if (checkAvailable && !objHasFlagBit16(g_aocMain)) {
        return 0;
    }
    for (s32 package = 0; package < system->packageCount; ++package) {
        AocPackage *entry = &system->packages[package];
        if (!packageEntryIsLoaded(entry)) {
            continue;
        }
        const AocPackageDirectoryEntry *rows = packageEntryGetDirectory(entry);
        u32 rowCount = packageEntryGetFileCount(entry);
        for (u32 row = 0; row < rowCount; ++row) {
            /* kinds 7 and 8 name the item they grant in their value word */
            bool grants = rows[row].kind == 7 || rows[row].kind == 8;
            if (grants) {
                grants = rows[row].value == itemId;
            }
            if (grants) {
                return 1;
            }
        }
    }
    return 0;
}
}
