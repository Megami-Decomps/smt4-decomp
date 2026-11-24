#include "gamedata/MsSearchTableIV.h"

extern "C" {

u32 dataTableFileGetTable(void *table, s32 sub);

/* Returns record `index` counted across every loaded kind-0x27 table of the file set, or NULL. */
MsSearchRecord *msSearchGetAddonRecordAt(AocSystem *system, s32 index)
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
                if (headers[j].kind == MS_SEARCH_ADDON_KIND) {
                    void *table = (void *)dataTableFileGetTable(package->files[j].data, 0);
                    s32 end = dataTableGetCount(table) + base;
                    if (end >= index) {
                        return &msSearchRecords(table)[index - base];
                    }
                    base += end;
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
