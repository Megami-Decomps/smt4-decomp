#include "gamedata/ReferencedKindRecord.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {
s32 FUN_00257568(const KindComparisonKey *left, const KindComparisonKey *right);
}

/* Orders two keys by ascending rank (ids above 400 rank 99, others by recordKindRank); ties go to
 * FUN_00257568. */
static __inline s32 kindKeyCompareRankAscending(const KindComparisonKey &left, const KindComparisonKey &right)
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
    s32 order = leftRank - rightRank;

    if (order != 0) {
        return order;
    }
    return FUN_00257568(&left, &right);
}

extern "C" {

/* Compares the referenced kinds by category rank, then delegates equal-rank keys. */
s32 FUN_002dc594(const u16 *left, const u16 *right)
{
    Table8Type5Record *leftRecord = table8Type5FindById(*left);
    Table8Type5Record *rightRecord = table8Type5FindById(*right);
    KindComparisonKey leftKey;
    KindComparisonKey rightKey;
    leftKey.id = leftRecord->value;
    leftKey.unk04 = 0;
    rightKey.id = rightRecord->value;
    rightKey.unk04 = 0;
    return kindKeyCompareRankAscending(leftKey, rightKey);
}
}
