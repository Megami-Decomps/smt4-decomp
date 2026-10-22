#include "shard/W8_X20_DataSet.h"

struct ArchiveRangeRecord { u8 data[0x38]; };
extern "C" {
s32 FUN_001b315c(DataArchive *archive);
const DataArchiveRecord *FUN_001b31ac(DataArchive *archive);
u32 FUN_001b31e0(DataArchive *archive);
void *dataTableFileGetTable(u32 file, u32 table);
s32 dataTableGetCount(void *table);
ArchiveRangeRecord *dataTableGetEntries(void *table);

// Resolve a ranged record index across loaded archives' dollar-kind data tables.
ArchiveRangeRecord *FUN_0046c288(DataArchiveSet *set, s32 index)
{
    s32 base = 0;
    for (s32 i = 0; i < set->archiveCount; ++i) {
        DataArchive *archive = &set->archives[i];
        if (FUN_001b315c(archive)) {
            const DataArchiveRecord *records = FUN_001b31ac(archive);
            u32 fileCount = FUN_001b31e0(archive);
            for (u32 file = 0; file < fileCount; ++file) {
                if (records[file].kind == '$') {
                    void *table = dataTableFileGetTable(archive->files[file].fileId, 0);
                    s32 count = dataTableGetCount(table);
                    if (index <= count + base)
                        return dataTableGetEntries(table) + (index - base);
                    base += count + base;
                }
            }
        }
    }
    return NULL;
}
}
