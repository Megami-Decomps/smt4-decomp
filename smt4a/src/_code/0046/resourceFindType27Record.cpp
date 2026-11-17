#include "common.h"
#include "addon/AocSystemA.h"

struct ResourceTableRecord {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 payload[0x78];
};

extern "C" {
void *dataTableFileGetTable(void *file, u32 index);
ResourceTableRecord *dataTableGetEntries(void *table);
s32 dataTableGetCount(void *table);

// Find an ID in the first table of a type-0x1b package file.
void *resourceFindType27Record(AocSystemA *system, s32 id)
{
    for (s32 i = 0; i < system->packageCount; ++i) {
        AocPackage *package = &system->packages[i];
        if (packageEntryIsLoaded(package)) {
            AocPackageDirectoryEntry *descriptions = packageEntryGetDirectory(package);
            u32 count = packageEntryGetFileCount(package);
            for (u32 j = 0; j < count; ++j) {
                if (descriptions[j].kind == 0x1b) {
                    void *table = dataTableFileGetTable(package->files[j].data, 0);
                    ResourceTableRecord *records = dataTableGetEntries(table);
                    s32 recordCount = dataTableGetCount(table);
                    for (s32 k = 0; k < recordCount; ++k) {
                        if (records[k].id == id)
                            return records[k].payload;
                    }
                }
            }
        }
    }
    return NULL;
}
}
