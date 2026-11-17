#include "addon/aocMain.h"
#include "shard/W6_W6Match8_AocTable03.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

extern "C" {
void *dataTableFileGetTable(void *file, u32 section);

Table03Record *aocFindTable03RecordByKey(AocSystem *system, u32 key)
{
    AocSystem *packages = (AocSystem *)system;
    for (s32 package = 0; package < packages->packageCount; ++package) {
        AocPackage *entry = &packages->packages[package];
        if (!packageEntryIsLoaded(entry)) {
            continue;
        }
        const AocPackageDirectoryEntry *rows = packageEntryGetDirectory(entry);
        u32 rowCount = packageEntryGetFileCount(entry);
        for (u32 row = 0; row < rowCount; ++row) {
            if (rows[row].kind == 0x1c) {
                void *section = dataTableFileGetTable(entry->files[row].data, 0);
                AocKeyedTable03Record *records =
                    (AocKeyedTable03Record *)dataTableGetEntries(section);
                s32 count = (s32)dataTableGetCount(section);
                for (s32 index = 0; index < count; ++index) {
                    if (records[index].key == key) {
                        return &records[index].record;
                    }
                }
            }
        }
    }
    return NULL;
}
}
