/* NON_MATCHING: file availability/data access uses a shared computed address rather than two indexed loads. */
#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "gamedata/DataTable.h"
#include "gamedata/DisplayName.h"

extern "C" {
s32 FUN_002ac12c(AocPackage *package);
const AocPackageFileDescription *FUN_002ac0f8(AocPackage *package);
u32 FUN_002ac0c4(AocPackage *package);
void *dataTableFileGetTable(void *file, u32 section);

// Find the first available display-name override in a loaded package's name tables.
const char *FUN_00387c78(AocSystem *system, s32 id)
{
    for (s32 packageIndex = 0; packageIndex < system->packages.count; ++packageIndex) {
        AocPackage *package = &system->packages.entries[packageIndex];
        if (FUN_002ac12c(package)) {
            const AocPackageFileDescription *descriptions = FUN_002ac0f8(package);
            u32 fileCount = FUN_002ac0c4(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (descriptions[fileIndex].kind != 0x21)
                    continue;
                AocPackageFile *files = package->fileTable.files;
                if (files[fileIndex].state.available) {
                    void *table = dataTableFileGetTable(files[fileIndex].data, 1);
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
