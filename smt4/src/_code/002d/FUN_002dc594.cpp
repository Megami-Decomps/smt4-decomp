/* NON_MATCHING: Stack-key addresses are recomputed for the fallback call instead of retained across the rank queries. */
#include "gamedata/ReferencedKindRecord.h"
#include "gamedata/Table8Type5Lookup.h"
extern "C" {
s32 recordKindRank(u32 id);
s32 FUN_00257568(const KindComparisonKey *left, const KindComparisonKey *right);

/* Compares the referenced kinds by category rank, then delegates equal-rank keys. */
s32 FUN_002dc594(const u16 *left, const u16 *right)
{
    Table8Type5Record *leftRecord = table8Type5FindById(*left);
    Table8Type5Record *rightRecord = table8Type5FindById(*right);
    KindComparisonKey leftKey = {leftRecord->value, 0};
    KindComparisonKey rightKey = {rightRecord->value, 0};
    s32 leftRank = idIsAbove400(leftKey.id) != 0 ? 99 : recordKindRank(leftKey.id);
    s32 rightRank = idIsAbove400(rightKey.id) != 0 ? 99 : recordKindRank(rightKey.id);
    s32 difference = leftRank - rightRank;
    if (difference == 0) {
        return FUN_00257568(&leftKey, &rightKey);
    }
    return difference;
}
}
