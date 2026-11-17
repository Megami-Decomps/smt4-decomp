#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "gamedata/DataTable.h"
#include "gamedata/DisplayName.h"
#include "addon/AocSystem.h"

extern "C" {
void *dataTableFileGetTable(void *file, u32 section);

// Find the first available display-name override in a loaded package's name tables.
const char *aocFindDisplayNameOverrideText(AocSystem *system, s32 id)
{
    for (s32 packageIndex = 0; packageIndex < system->packageCount; ++packageIndex) {
        AocPackage *package = &system->packages[packageIndex];
        if (packageEntryIsLoaded(package)) {
            const AocPackageDirectoryEntry *descriptions = packageEntryGetDirectory(package);
            u32 fileCount = packageEntryGetFileCount(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                const AocPackageDirectoryEntry *description = &descriptions[fileIndex];
                if (description->kind == 0x21 && package->files[fileIndex].available) {
                    void *table = dataTableFileGetTable(package->files[fileIndex].data, 1);
                    DisplayNameOverride *records = (DisplayNameOverride *)dataTableGetEntries(table);
                    s32 count = dataTableGetCount(table);
                    for (s32 recordIndex = 0; recordIndex < count; ++recordIndex) {
                        if (records[recordIndex].id == id)
                            return records[recordIndex].text;
                    }
                }
            }
        }
    }
    return 0;
}
}
