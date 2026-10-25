#include "gamedata/DataTable.h"
#include "gamedata/Table04Record.h"
#include "shard/dataTableCountRecordStages.h"

struct AocSystemA;
extern "C" {
extern AocSystemA *g_aocSystem;
Table04ExtraRecord *FUN_001b2e78(AocSystemA *system, u32 id);
s32 FUN_001ac8dc(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

static inline Table04ExtraRecord *findExtraRecord(u32 id)
{
    Table04ExtraRecord *record = FUN_001b2e78(g_aocSystem, id);
    if (record == NULL) {
        void *section = dataTableGet(4, 1);
        void *entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);
        Table04ExtraRecord key;
        key.id = (u16)id;
        record = (Table04ExtraRecord *)libc_bsearch(&key, entries, count, sizeof(key), FUN_001ac8dc);
    }
    return record;
}

// Count the available stages of a table-four record, including DLC records.
u32 dataTableCountRecordStages(u32 id)
{
    if (id > 400) {
        Table04ExtraRecord *record = findExtraRecord(id);
        if (record != NULL) {
            return (u32)record->flags >> 31;
        }
    } else {
        Table04Record *record = dataTable04FindById(id);
        if (record != NULL && (record->flags & 0x20000000) == 0) {
            // The stage slots lie beyond the established Table04Record prefix.
            struct RecordStagesView {
                u8 unk00[0x62];
                u8 stages[9][2];
            };
            typedef char StagesOffsetCheck[offsetof(RecordStagesView, stages) == 0x62 ? 1 : -1];
            RecordStagesView *stages = (RecordStagesView *)record;
            for (s32 index = 0; index < 9; ++index) {
                if (stages->stages[index][0] == 0) {
                    return index + 1;
                }
            }
            return 10;
        }
    }
    return 0;
}
}
