#include "shard/W8_X20_DataSet.h"

/* A 0xC-byte entry of the % data tables. */
struct DataEntry385b84 {
    /* 0x00 */ u8 unk00[0xC];
};

extern "C" {

s32 FUN_002ac12c(DataArchive *archive);
DataArchiveRecord *FUN_002ac0f8(DataArchive *archive);
u32 FUN_002ac0c4(DataArchive *archive);
void *dataTableFileGetTable(u32 fileId, s32 type);
s32 dataTableGetCount(void *table);
DataEntry385b84 *dataTableGetEntries(void *table);

// Find entry `index` across the % table files of every loaded archive, or NULL.
DataEntry385b84 *FUN_00385b84(DataArchiveSet *set, s32 index)
{
    s32 total = 0;
    for (s32 i = 0; i < set->archiveCount; i++) {
        DataArchive *archive = &set->archives[i];
        if (FUN_002ac12c(archive) != 0) {
            DataArchiveRecord *records = FUN_002ac0f8(archive);
            u32 count = FUN_002ac0c4(archive);
            for (u32 j = 0; j < count; j++) {
                if (records[j].kind == '%') {
                    void *table = dataTableFileGetTable(archive->files[j].fileId, 4);
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
