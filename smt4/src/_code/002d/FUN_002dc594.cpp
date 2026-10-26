/* NON_MATCHING: body now matches retail except that retail keeps the two key addresses (&leftKey, &rightKey) in r6/r5 across the rank queries (push r4-r6, 16-byte frame); here they are recomputed for the fallback call. */
#include "gamedata/ReferencedKindRecord.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/GameDataAccess_Smt4.h"
extern "C" {
s32 FUN_00257568(const KindComparisonKey *left, const KindComparisonKey *right);

/* Rank of a key's kind; ids above 400 rank last. */
static __inline s32 kindKeyRank(const KindComparisonKey *key)
{
    return idIsAbove400(key->id) != 0 ? 99 : recordKindRank(key->id);
}

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
    s32 leftRank = kindKeyRank(&leftKey);
    s32 rightRank = kindKeyRank(&rightKey);
    s32 difference = leftRank - rightRank;
    if (difference == 0) {
        return FUN_00257568(&leftKey, &rightKey);
    }
    return difference;
}
}
