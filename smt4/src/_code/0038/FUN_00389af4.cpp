#include "shard/W8_X20_DataSet.h"

/* A 0x3C-byte entry of the '(' data tables. */
struct DataEntry389af4 {
    /* 0x00 */ u8 unk00[0x3C];
};

extern "C" {

s32 packageEntryIsLoaded(DataArchive *archive);
DataArchiveRecord *packageEntryGetDirectory(DataArchive *archive);
u32 packageEntryGetFileCount(DataArchive *archive);
void *dataTableFileGetTable(u32 fileId, s32 type);
s32 dataTableGetCount(void *table);
DataEntry389af4 *dataTableGetEntries(void *table);

// Find entry `index` across the '(' table files of every loaded archive, or NULL.
DataEntry389af4 *FUN_00389af4(DataArchiveSet *set, s32 index)
{
    s32 total = 0;
    for (s32 i = 0; i < set->archiveCount; i++) {
        DataArchive *archive = &set->archives[i];
        if (packageEntryIsLoaded(archive) != 0) {
            DataArchiveRecord *records = packageEntryGetDirectory(archive);
            u32 count = packageEntryGetFileCount(archive);
            for (u32 j = 0; j < count; j++) {
                if (records[j].kind == '(') {
                    void *table = dataTableFileGetTable(archive->files[j].fileId, 1);
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
