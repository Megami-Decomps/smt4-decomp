#include "addon/aocMain.h"
#include "shard/W4_Match6_DataSet.h"
#include "shard/W6_W6Match8_AocTable03.h"
#include "gamedata/DataTable.h"

extern "C" {
s32 FUN_002ac12c(DataEntry *entry);
const DataRow *FUN_002ac0f8(DataEntry *entry);
u32 FUN_002ac0c4(DataEntry *entry);
void *dataTableFileGetTable(void *file, u32 section);

Table03Record *aocFindTable03RecordByKey(AocSystem *system, u32 key)
{
    DataSet *packages = (DataSet *)system;
    for (s32 package = 0; package < packages->entryCount; ++package) {
        DataEntry *entry = &packages->entries[package];
        if (!FUN_002ac12c(entry)) {
            continue;
        }
        const DataRow *rows = FUN_002ac0f8(entry);
        u32 rowCount = FUN_002ac0c4(entry);
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
