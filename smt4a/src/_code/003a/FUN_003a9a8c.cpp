/* NON_MATCHING: final table-selection branch, roll/weight registers, and loop comparison orientation differ. */
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
void *btlGetTable(BtlMainStateA *state, u32 table);
s32 scrGetArg(u32 index);
s32 randRange(u32 maximum);
void scrSetResult(s32 value);

// Choose a one-based result from one of the battle's percentage-weight tables.
u32 FUN_003a9a8c(void)
{
    s32 kind = scrGetArg(0);
    void *table = NULL;
    if (kind == 1) {
        table = btlGetTable(btlGetMainState(), 10);
    } else if (kind == 2) {
        table = btlGetTable(btlGetMainState(), 11);
    } else if (kind == 3) {
        table = btlGetTable(btlGetMainState(), 12);
    }
    const u16 *weights = (const u16 *)dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    s32 roll = randRange(99);
    s32 cumulative = 0;
    s32 result = 0;
    for (s32 index = 0; index < count; ++index) {
        u32 weight = weights[index];
        if (weight != 0) {
            cumulative += weight;
            if (roll < cumulative) {
                result = index + 1;
                break;
            }
        }
    }
    scrSetResult(result);
    return 1;
}
}
