/* NON_MATCHING: stack-key addresses are recomputed for the fallback call instead of retained across rank queries. */
#include "gamedata/ReferencedKindRecord.h"

extern "C" {
ReferencedKindRecord *FUN_002498ec(u32 id);
u32 idIsAbove400(u32 id);
s32 recordKindRank(u32 id);
s32 FUN_002497f8(const KindComparisonKey *left, const KindComparisonKey *right);

s32 FUN_0030bce8(const u16 *left, const u16 *right)
{
    ReferencedKindRecord *leftRecord = FUN_002498ec(*left);
    ReferencedKindRecord *rightRecord = FUN_002498ec(*right);
    KindComparisonKey leftKey = {leftRecord->kind, 0};
    KindComparisonKey rightKey = {rightRecord->kind, 0};
    s32 leftRank = idIsAbove400(leftKey.id) ? 99 : recordKindRank(leftKey.id);
    s32 rightRank = idIsAbove400(rightKey.id) ? 99 : recordKindRank(rightKey.id);
    s32 difference = rightRank - leftRank;
    if (difference == 0) {
        return FUN_002497f8(&leftKey, &rightKey);
    }
    return difference;
}
}
