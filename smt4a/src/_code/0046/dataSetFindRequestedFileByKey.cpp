#include <stddef.h>
#include "addon/AocSystemA.h"

extern "C" {

void *dataSetFindRequestedFileByKey(AocSystemA *system, u32 key)
{
    for (s32 entryIndex = 0; entryIndex < system->packageCount; ++entryIndex) {
        AocPackage *entry = &system->packages[entryIndex];
        if (packageEntryIsLoaded(entry)) {
            const AocPackageDirectoryEntry *rows = packageEntryGetDirectory(entry);
            u32 count = packageEntryGetFileCount(entry);
            for (u32 row = 0; row < count; ++row) {
                const AocPackageDirectoryEntry *candidate = &rows[row];
                if (candidate->kind == 3 && candidate->value == key && entry->files[row].available != 0) {
                    return entry->files[row].data;
                }
            }
        }
    }
    return NULL;
}
}
