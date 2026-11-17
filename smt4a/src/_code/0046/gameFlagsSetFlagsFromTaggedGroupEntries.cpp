#include "common.h"
#include "gamedata/GameFlags.h"
#include "addon/AocSystemA.h"

extern "C" {

// Set flags referenced by entries tagged '6' in each active group.
void gameFlagsSetFlagsFromTaggedGroupEntries(AocSystemA* system)
{
    for (s32 groupIndex = 0; groupIndex < system->packageCount; ++groupIndex) {
        AocPackage* package = &system->packages[groupIndex];
        if (packageEntryIsLoaded(package) != 0) {
            AocPackageDirectoryEntry* entries = packageEntryGetDirectory(package);
            u32 entryCount = packageEntryGetFileCount(package);
            for (u32 entryIndex = 0; entryIndex < entryCount; ++entryIndex) {
                AocPackageDirectoryEntry* entry = &entries[entryIndex];
                if (entry->kind == '6') {
                    gameFlagSetValue(entry->value, 1, 1);
                }
            }
        }
    }
}
}
