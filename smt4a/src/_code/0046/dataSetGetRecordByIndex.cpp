#include "common.h"
#include "shard/W4_Match6_DataSet.h"

extern "C" {

/* One record of a data table. */
typedef struct DataRecord {
    /* 0x0 */ u8 unk0[0x20];
} DataRecord;

extern u32 dataTableFileGetTable(u32 file, u32 arg);
extern int FUN_001b315c(DataEntry *entry);
extern DataRow *FUN_001b31ac(DataEntry *entry);
extern u32 FUN_001b31e0(DataEntry *entry);
extern int dataTableGetCount(u32 table);
extern DataRecord *dataTableGetEntries(u32 table);

#define DATA_ROW_TABLE '%'

/* Returns the record `index` of the data tables the set's entries list, counting across tables. */
DataRecord *dataSetGetRecordByIndex(DataSet *set, s32 index)
{
    s32 skipped = 0;
    s32 i;
    u32 j;

    for (i = 0; i < set->entryCount; i++) {
        DataEntry *entry = &set->entries[i];

        if (FUN_001b315c(entry) != 0) {
            DataRow *rows = FUN_001b31ac(entry);
            u32 rowCount = FUN_001b31e0(entry);

            for (j = 0; j < rowCount; j++) {
                if (rows[j].type == DATA_ROW_TABLE) {
                    u32 table = dataTableFileGetTable(entry->files[j].file, 0);
                    s32 total = dataTableGetCount(table) + skipped;

                    if (total >= index) {
                        return dataTableGetEntries(table) + (index - skipped);
                    }
                    skipped += total;
                }
            }
        }
    }
    return NULL;
}

}
