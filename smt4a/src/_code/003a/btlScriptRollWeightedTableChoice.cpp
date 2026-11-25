#include "battle/BattleChoiceWeights.h"
#include "util/Random.h"
#include "gamedata/DataTable.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlTables.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Rolls a weighted choice from the available candidates in one battle-table row. */
s32 btlScriptRollWeightedTableChoice(void)
{
    s32 row = scrGetArg(0);
    scrGetArg(1);
    void *table = btlGetTable(btlGetMainState(), 6);
    const BattleChoiceRow *candidates = (const BattleChoiceRow *)dataTableGetEntries(table);
    dataTableGetCount(table);
    table = btlGetTable(btlGetMainState(), 7);
    const BattleChoiceRow *weightRows = (const BattleChoiceRow *)dataTableGetEntries(table);
    BattleChoiceRow weights = weightRows[row];
    s32 total = 0;
    for (s32 i = 0; i < 4; i++) {
        if (!candidates[row].values[i]) {
            weights.values[i] = 0;
        } else {
            total += weights.values[i];
        }
    }
    s32 percentages[4];
    for (s32 i = 0; i < 4; ++i) {
        if (weights.values[i] != 0) {
            percentages[i] = weights.values[i] * 100 / total;
        } else {
            percentages[i] = 0;
        }
    }
    s32 secondLimit = percentages[1] + percentages[0];
    s32 thirdLimit = percentages[2] + secondLimit;
    s32 fourthLimit = percentages[3] + thirdLimit;
    s32 roll = randRange((u16)(fourthLimit - 1));
    s32 result = -1;
    if (percentages[0] > 0 && percentages[0] > roll) {
        result = 1;
    } else if (percentages[1] > 0 && secondLimit > roll) {
        result = 2;
    } else if (percentages[2] > 0 && thirdLimit > roll) {
        result = 3;
    } else if (percentages[3] > 0 && fourthLimit > roll) {
        result = 4;
    }
    scrSetResult(result);
    return 1;
}
}
