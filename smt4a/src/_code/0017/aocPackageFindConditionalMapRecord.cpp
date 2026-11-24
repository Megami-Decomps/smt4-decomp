#include "addon/AocSystemA.h"
#include "gamedata/DataTableAccess_VariantA.h"
#include "gamedata/EncountData.h"
#include "gamedata/GameDataAccess_VariantG.h"

enum { AOC_ENCOUNTER_DATA_KIND = 0x1B };

extern "C" {

/* Finds the first encounter record for this map and area whose game flags match. */
EncountRecordA *aocPackageFindConditionalMapRecord(AocSystemA *system, u32 map, u32 area)
{
    for (s32 i = 0; i < system->packageCount; ++i) {
        AocPackage *package = &system->packages[i];
        if (packageEntryIsLoaded(package) != 0) {
            AocPackageDirectoryEntry *entries = packageEntryGetDirectory(package);
            u32 fileCount = packageEntryGetFileCount(package);
            for (u32 j = 0; j < fileCount; ++j) {
                if (entries[j].kind == AOC_ENCOUNTER_DATA_KIND) {
                    void *table = dataTableFileGetTable((u32)package->files[j].data, 0);
                    EncountRecordA *records = (EncountRecordA *)dataTableGetEntries(table);
                    s32 recordCount = dataTableGetCount(table);
                    for (s32 k = 0; k < recordCount; ++k) {
                        if (records[k].map == map && records[k].area == area &&
                            (records[k].requiredFlag == 0 || gameFlagIsSet(records[k].requiredFlag)) &&
                            (records[k].excludedFlag == 0 || !gameFlagIsSet(records[k].excludedFlag))) {
                            return &records[k];
                        }
                    }
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
