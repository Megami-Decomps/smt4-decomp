#include "shard/W8_X20_DataSet.h"
#include "addon/AocSystem.h"

/* A 0xC-byte entry of the % data tables. */
struct DataEntry385b84 {
    /* 0x00 */ u8 unk00[0xC];
};

extern "C" {

void *dataTableFileGetTable(void *fileId, s32 type);
s32 dataTableGetCount(void *table);
DataEntry385b84 *dataTableGetEntries(void *table);

// Find entry `index` across the % table files of every loaded archive, or NULL.
DataEntry385b84 *aocPackagesGetPercentTableEntry(AocSystem *system, s32 index)
{
    s32 total = 0;
    for (s32 i = 0; i < system->packageCount; i++) {
        AocPackage *package = &system->packages[i];
        if (packageEntryIsLoaded(package) != 0) {
            AocPackageDirectoryEntry *records = packageEntryGetDirectory(package);
            u32 count = packageEntryGetFileCount(package);
            for (u32 j = 0; j < count; j++) {
                if (records[j].kind == '%') {
                    void *table = dataTableFileGetTable(package->files[j].data, 4);
                    s32 end = dataTableGetCount(table) + total;
                    if (end >= index) {
                        return &dataTableGetEntries(table)[index - total];
                    }
                    total += end;
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
