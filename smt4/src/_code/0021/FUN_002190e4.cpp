#include "common.h"

extern "C" {

#define KEY_NONE 99

int recordKindRank(u32 id);
int itemSortCompareRankThenKey(u32 *a, u32 *b);
int idIsAbove400(u32 id);

/* Runs itemSortCompareRankThenKey on two entries when their category keys (99 when idIsAbove400 flags the id, else recordKindRank(id)) are equal. */
void FUN_002190e4(u32 *a, u32 *b)
{
    int keyA = (idIsAbove400(*a) != 0) ? KEY_NONE : recordKindRank(*a);
    int keyB = (idIsAbove400(*b) != 0) ? KEY_NONE : recordKindRank(*b);

    int diff = keyA - keyB;

    if (diff != 0) {
        return;
    }
    itemSortCompareRankThenKey(a, b);
}

} /* extern "C" */
