#include "common.h"
#include "gamedata/DataTable40.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 skillId;
} DevilRecord;

extern DevilRecord *table8Type5FindById(u16 id);
extern s32 itemGetSortCategory(u16 skillId);

/* qsort-style comparison of two devil ids by the skill's rank (itemGetSortCategory), then its sort key, then id (descending). */
s32 devilCompareBySkillRank(u16 *a, u16 *b)
{
    DevilRecord *recordA = table8Type5FindById(*a);
    DevilRecord *recordB = table8Type5FindById(*b);
    s32 rankB = itemGetSortCategory(recordB->skillId);
    s32 rankA = itemGetSortCategory(recordA->skillId);
    s32 result = rankB - rankA;

    if (result == 0) {
        u16 keyA = dataTable40FindById(recordA->skillId)->listing.sortKey;

        result = keyA - dataTable40FindById(recordB->skillId)->listing.sortKey;
        if (result == 0) {
            result = *b - *a;
        }
    }
    return result;
}

} /* extern "C" */
