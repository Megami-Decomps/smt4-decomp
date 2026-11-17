#include "common.h"
#include "addon/AocSystem.h"

/* One record of the kind-0x27 tables. */
struct DataRecord27 {
    /* 0x00 */ u8 unk00[0x28];
};

extern "C" {

u32 dataTableFileGetTable(void *table, s32 sub);
u32 dataTableGetCount(u32 table);
DataRecord27 *dataTableGetEntries(u32 table);

/* Returns record `index` counted across every loaded kind-0x27 table of the file set, or NULL. */
DataRecord27 *FUN_00387eb4(AocSystem *system, s32 index)
{
    s32 base = 0;
    s32 i;

    for (i = 0; i < system->packageCount; i++) {
        AocPackage *package = &system->packages[i];
        if (packageEntryIsLoaded(package) != 0) {
            AocPackageDirectoryEntry *headers = packageEntryGetDirectory(package);
            u32 tableCount = packageEntryGetFileCount(package);
            u32 j;
            for (j = 0; j < tableCount; j++) {
                if (headers[j].kind == 0x27) {
                    u32 table = dataTableFileGetTable(package->files[j].data, 0);
                    s32 end = dataTableGetCount(table) + base;
                    if (end >= index) {
                        return &dataTableGetEntries(table)[index - base];
                    }
                    base += end;
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
