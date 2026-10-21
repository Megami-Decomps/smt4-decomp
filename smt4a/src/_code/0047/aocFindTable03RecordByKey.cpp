#include "addon/aocMain.h"
#include "shard/W4_Match6_DataSet.h"
#include "shard/W6_W6Match8_AocTable03.h"
#include "gamedata/DataTable.h"

extern "C" {
s32 FUN_001b315c(DataEntry *entry);
const DataRow *FUN_001b31ac(DataEntry *entry);
u32 FUN_001b31e0(DataEntry *entry);
void *dataTableFileGetTable(void *file, u32 section);

Table03Record *aocFindTable03RecordByKey(AocSystemA *system, u32 key)
{
    DataSet *packages = (DataSet *)system;
    for (s32 package = 0; package < packages->entryCount; ++package) {
        DataEntry *entry = &packages->entries[package];
        if (!FUN_001b315c(entry)) {
            continue;
        }
        const DataRow *rows = FUN_001b31ac(entry);
        u32 rowCount = FUN_001b31e0(entry);
        for (u32 row = 0; row < rowCount; ++row) {
            if (rows[row].type == 0x1c) {
                void *section = dataTableFileGetTable((void *)entry->files[row].file, 0);
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
