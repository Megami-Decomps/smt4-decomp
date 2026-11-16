#include "gamedata/ReferencedKindRecord.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {
s32 itemSortCompareByCategoryAndId(const KindComparisonKey *left, const KindComparisonKey *right);
}

/* Orders two keys by rank (ids above 400 rank 99, others by recordKindRank); ties go to
 * itemSortCompareByCategoryAndId. */
static __inline s32 kindKeyCompareRank(const KindComparisonKey &left, const KindComparisonKey &right)
{
    s32 leftRank;
    s32 rightRank;

    if (idIsAbove400(left.id) != 0) {
        leftRank = 99;
    } else {
        leftRank = recordKindRank(left.id);
    }
    if (idIsAbove400(right.id) != 0) {
        rightRank = 99;
    } else {
        rightRank = recordKindRank(right.id);
    }
    s32 order = rightRank - leftRank;

    if (order != 0) {
        return order;
    }
    return itemSortCompareByCategoryAndId(&left, &right);
}

extern "C" {

/* Sort compare of two type-5 table-8 entries by the rank of the items they refer to. */
s32 FUN_0030bce8(const u16 *left, const u16 *right)
{
    Table8Type5Record *leftRecord = table8Type5FindById(*left);
    Table8Type5Record *rightRecord = table8Type5FindById(*right);
    KindComparisonKey leftKey;
    KindComparisonKey rightKey;
    leftKey.id = leftRecord->value;
    leftKey.unk04 = 0;
    rightKey.id = rightRecord->value;
    rightKey.unk04 = 0;
    return kindKeyCompareRank(leftKey, rightKey);
}
}
