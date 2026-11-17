#include "common.h"
#include "gamedata/ItemSortCategory.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {

typedef struct NkmBaseRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 skillId;
} NkmBaseRecord;

extern NkmBaseRecord *table8Type5FindById(u16 id);

/* qsort-style comparison of two devil ids by the skill's rank (itemGetSortCategory), then its sort key, then id (descending). */
s32 devilCompareBySkillRank(u16 *a, u16 *b)
{
    NkmBaseRecord *recordA = table8Type5FindById(*a);
    NkmBaseRecord *recordB = table8Type5FindById(*b);
    s32 rankB = itemGetSortCategory(recordB->skillId);
    s32 rankA = itemGetSortCategory(recordA->skillId);
    s32 result = rankB - rankA;

    if (result == 0) {
        u16 keyA = skillDataFindById(recordA->skillId)->listing.sortKey;

        result = keyA - skillDataFindById(recordB->skillId)->listing.sortKey;
        if (result == 0) {
            result = *b - *a;
        }
    }
    return result;
}

} /* extern "C" */
