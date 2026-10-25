/* NON_MATCHING: zero is not kept in a saved register, changing row/weight registers and stack-frame allocation. */
#include "battle/BattleChoiceWeights.h"
#include "gamedata/DataTable.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlTables.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
void wordPairCopy(BattleChoiceRow* destination, const BattleChoiceRow* source);
s32 randRange(u16 maximum);

s32 FUN_003a9d48(void)
{
    s32 row = scrGetArg(0);
    scrGetArg(1);
    void* table = btlGetTable(btlGetMainState(), 6);
    BattleChoiceRow* candidates = static_cast<BattleChoiceRow*>(dataTableGetEntries(table));
    dataTableGetCount(table);
    table = btlGetTable(btlGetMainState(), 7);
    BattleChoiceRow* weightRows = static_cast<BattleChoiceRow*>(dataTableGetEntries(table));
    BattleChoiceRow weights;
    wordPairCopy(&weights, &weightRows[row]);
    s32 total = 0;
    if (!candidates[row].values[0]) {
        weights.values[0] = 0;
    } else {
        total = weights.values[0];
    }
    if (!candidates[row].values[1]) {
        weights.values[1] = 0;
    } else {
        total += weights.values[1];
    }
    if (!candidates[row].values[2]) {
        weights.values[2] = 0;
    } else {
        total += weights.values[2];
    }
    if (!candidates[row].values[3]) {
        weights.values[3] = 0;
    } else {
        total += weights.values[3];
    }
    s32 first = weights.values[0] ? weights.values[0] * 100 / total : 0;
    s32 second = weights.values[1] ? weights.values[1] * 100 / total : 0;
    s32 third = weights.values[2] ? weights.values[2] * 100 / total : 0;
    s32 fourth = weights.values[3] ? weights.values[3] * 100 / total : 0;
    s32 secondLimit = second + first;
    s32 thirdLimit = third + secondLimit;
    s32 fourthLimit = fourth + thirdLimit;
    s32 roll = randRange(static_cast<u16>(fourthLimit - 1));
    s32 result = -1;
    if (first > 0 && first > roll) {
        result = 1;
    } else if (second > 0 && secondLimit > roll) {
        result = 2;
    } else if (third > 0 && thirdLimit > roll) {
        result = 3;
    } else if (fourth > 0 && fourthLimit > roll) {
        result = 4;
    }
    scrSetResult(result);
    return 1;
}
}
