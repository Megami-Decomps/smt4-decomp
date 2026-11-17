#include "common.h"
#include "gamedata/ItemSortCategory.h"
#include "gamedata/Table04Record.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 skillId;
} DevilRecord;

extern DevilRecord *dataTableFindType5Record(u16 id);

/* qsort-style comparison of two devil ids by the skill's rank (itemGetSortCategory), then its sort key, then id (descending). */
s32 devilCompareBySkillRank(u16 *a, u16 *b)
{
    DevilRecord *recordA = dataTableFindType5Record(*a);
    DevilRecord *recordB = dataTableFindType5Record(*b);
    s32 rankB = itemGetSortCategory(recordB->skillId);
    s32 rankA = itemGetSortCategory(recordA->skillId);
    s32 result = rankB - rankA;

    if (result == 0) {
        u16 keyA = dataTable04FindById(recordA->skillId)->listing.sortKey;

        result = keyA - dataTable04FindById(recordB->skillId)->listing.sortKey;
        if (result == 0) {
            result = *b - *a;
        }
    }
    return result;
}

} /* extern "C" */
