#include "common.h"
#include "addon/AocSystemA.h"

extern "C" {

/* One record of a data table. */
typedef struct DataRecord {
    /* 0x0 */ u8 unk0[0x30];
} DataRecord;

extern u32 dataTableFileGetTable(void *file, u32 arg);
extern int dataTableGetCount(u32 table);
extern DataRecord *dataTableGetEntries(u32 table);

#define DATA_ROW_TABLE '#'

/* Returns the record `index` of the data tables the set's entries list, counting across tables. */
DataRecord *dataSetRecordAt(AocSystemA *system, s32 index)
{
    s32 skipped = 0;
    s32 i;
    u32 j;

    for (i = 0; i < system->packageCount; i++) {
        AocPackage *entry = &system->packages[i];

        if (packageEntryIsLoaded(entry) != 0) {
            AocPackageDirectoryEntry *rows = packageEntryGetDirectory(entry);
            u32 rowCount = packageEntryGetFileCount(entry);

            for (j = 0; j < rowCount; j++) {
                if (rows[j].kind == DATA_ROW_TABLE) {
                    u32 table = dataTableFileGetTable(entry->files[j].data, 4);
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
