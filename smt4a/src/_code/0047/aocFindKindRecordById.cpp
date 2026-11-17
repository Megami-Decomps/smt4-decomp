#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "addon/PackageRecordSearch.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

extern "C" {
void *dataTableFileGetTable(void *file, u32 section);

// Find a matching id in section one of any loaded package file of kind 0x29.
PackageKind29Record *aocFindKindRecordById(AocSystemA *system, u32 id)
{
    for (s32 packageIndex = 0; packageIndex < system->packageCount; ++packageIndex) {
        AocPackage *package = &system->packages[packageIndex];
        if (packageEntryIsLoaded(package)) {
            const AocPackageDirectoryEntry *descriptions = packageEntryGetDirectory(package);
            u32 fileCount = packageEntryGetFileCount(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (descriptions[fileIndex].kind == 0x29) {
                    void *section = dataTableFileGetTable(package->files[fileIndex].data, 1);
                    PackageKind29Record *records = (PackageKind29Record *)dataTableGetEntries(section);
                    s32 count = dataTableGetCount(section);
                    for (s32 recordIndex = 0; recordIndex < count; ++recordIndex) {
                        if (records[recordIndex].id == id) {
                            return &records[recordIndex];
                        }
                    }
                }
            }
        }
    }
    return NULL;
}
}
