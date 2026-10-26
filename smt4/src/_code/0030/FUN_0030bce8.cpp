/* NON_MATCHING: stack-key addresses are recomputed for the fallback call instead of retained across rank queries. */
#include "gamedata/ReferencedKindRecord.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {
s32 FUN_002497f8(const KindComparisonKey *left, const KindComparisonKey *right);

s32 FUN_0030bce8(const u16 *left, const u16 *right)
{
    Table8Type5Record *leftRecord = table8Type5FindById(*left);
    Table8Type5Record *rightRecord = table8Type5FindById(*right);
    KindComparisonKey leftKey = {leftRecord->value, 0};
    KindComparisonKey rightKey = {rightRecord->value, 0};
    s32 leftRank = idIsAbove400(leftKey.id) ? 99 : recordKindRank(leftKey.id);
    s32 rightRank = idIsAbove400(rightKey.id) ? 99 : recordKindRank(rightKey.id);
    s32 difference = rightRank - leftRank;
    if (difference == 0) {
        return FUN_002497f8(&leftKey, &rightKey);
    }
    return difference;
}
}
