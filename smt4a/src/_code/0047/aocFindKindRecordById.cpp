#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "addon/PackageRecordSearch.h"
#include "gamedata/DataTable.h"

extern "C" {
s32 FUN_001b315c(AocPackage *package);
const AocPackageFileDescription *FUN_001b31ac(AocPackage *package);
u32 FUN_001b31e0(AocPackage *package);
void *dataTableFileGetTable(void *file, u32 section);

// Find a matching id in section one of any loaded package file of kind 0x29.
PackageKind29Record *aocFindKindRecordById(AocSystemA *system, u32 id)
{
    for (s32 packageIndex = 0; packageIndex < system->packages.count; ++packageIndex) {
        AocPackage *package = &system->packages.entries[packageIndex];
        if (FUN_001b315c(package)) {
            const AocPackageFileDescription *descriptions = FUN_001b31ac(package);
            u32 fileCount = FUN_001b31e0(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (descriptions[fileIndex].kind == 0x29) {
                    void *section = dataTableFileGetTable(package->fileTable.files[fileIndex].data, 1);
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
