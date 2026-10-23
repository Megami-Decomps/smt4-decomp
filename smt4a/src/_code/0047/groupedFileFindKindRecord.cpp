#include "gamedata/GroupedFileTables.h"

struct Kind41Record {
    u16 id;
    u8 unk02[0x1a];
};
typedef char Kind41RecordSize[sizeof(Kind41Record) == 0x1c ? 1 : -1];
extern "C" {
s32 FUN_001b315c(const FileTableGroup *);
const FileTableKindRecord *FUN_001b31ac(const FileTableGroup *);
u32 FUN_001b31e0(const FileTableGroup *);
void *dataTableFileGetTable(void *, u32);
void *dataTableGetEntries(void *);
u32 dataTableGetCount(void *);

// Search all loaded kind-41 file tables for the requested record id.
Kind41Record *groupedFileFindKindRecord(GroupedFileTables *tables, u32 id)
{
    for (s32 groupIndex = 0; groupIndex < tables->count; ++groupIndex) {
        FileTableGroup *group = &tables->groups[groupIndex];
        if (FUN_001b315c(group)) {
            const FileTableKindRecord *kinds = FUN_001b31ac(group);
            u32 count = FUN_001b31e0(group);
            for (u32 slot = 0; slot < count; ++slot) {
                if (kinds[slot].kind == 41) {
                    void *table = dataTableFileGetTable(group->slots[slot].file, 0);
                    Kind41Record *records = static_cast<Kind41Record *>(dataTableGetEntries(table));
                    s32 recordCount = dataTableGetCount(table);
                    for (s32 index = 0; index < recordCount; ++index) {
                        if (records[index].id == id)
                            return &records[index];
                    }
                }
            }
        }
    }
    return NULL;
}
}
