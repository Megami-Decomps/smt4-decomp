/* NON_MATCHING: loop body matches; retail folds the loop-entry test into the clamp (`movgt r3, #8; cmple r3, #0`) where
 * armcc tests the limit separately. A ternary clamp with `total` declared before `limit` is IDENTICAL, but that
 * declaration order was only found by scoring, so it is not used. */
#include "gamedata/SkillDataLookup.h"

extern "C" {

/* Sums the amounts of the leading rank bonuses of one kind; a zero kind ends the list. */
s32 skillSumRankBonuses(const SkillDataRecord *record, s32 rank, u32 kind)
{
    if (record != NULL && (record->rankInfo.rankFlags & 0x80000000) == 0) {
        s32 limit = rank - 1;
        if (limit > 8) {
            limit = 8;
        }
        s32 total = 0;
        for (s32 i = 0; i < limit; i++) {
            u8 entryKind = record->rankBonuses[i].kind;
            if (entryKind == 0) {
                break;
            }
            if (entryKind == kind) {
                total += record->rankBonuses[i].amount;
            }
        }
        return total;
    }
    return 0;
}

} /* extern "C" */
