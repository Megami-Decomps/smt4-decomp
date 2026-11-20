#include "gamedata/DataTable.h"
#include "gamedata/SkillDataRecord.h"
#include "shard/W6_W6Match2_HelpResources.h"
#include "addon/AocSystemA.h"

struct AocSystemA;
extern "C" {
Table04ExtraRecord *dataTable41FindByIdImpl(AocSystemA *system, u32 id);
s32 recordSortEntryCompareByKey(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

static inline Table04ExtraRecord *findExtraRecord(u32 id)
{
    Table04ExtraRecord *record = dataTable41FindByIdImpl(g_aocSystem, id);
    if (record == NULL) {
        void *section = dataTableGet(4, 1);
        void *entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);
        Table04ExtraRecord key;
        key.id = (u16)id;
        record = (Table04ExtraRecord *)libc_bsearch(&key, entries, count, sizeof(key), recordSortEntryCompareByKey);
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
        SkillDataRecordA *record = skillDataFindById(id);
        if (record != NULL && (record->flags & 0x20000000) == 0) {
            // The stage slots lie beyond the established SkillDataRecordA prefix.
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
