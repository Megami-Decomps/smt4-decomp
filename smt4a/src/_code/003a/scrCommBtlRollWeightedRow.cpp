#include "battle/BtlMainAccess.h"
#include "util/Random.h"
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"
#include "battle/BtlTables.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script command: rolls 0-99 against the percentage weights of section 10, 11 or 12 (argument 0 =
 * 1, 2 or 3) of the battle's data-table file and sets the result to the one-based index of the row
 * the roll lands in, or 0 when it lands past them. */
u32 scrCommBtlRollWeightedRow(void)
{
    s32 kind = scrGetArg(0);
    void *table = NULL;
    switch (kind) {
    case 1:
        table = btlGetTable(btlGetMainState(), 10);
        break;
    case 2:
        table = btlGetTable(btlGetMainState(), 11);
        break;
    case 3:
        table = btlGetTable(btlGetMainState(), 12);
        break;
    }
    const u16 *weights = (const u16 *)dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    s32 roll = randRange(99);
    s32 cumulative = 0;
    s32 result = 0;
    for (s32 index = 0; index < count; ++index) {
        if (weights[index] == 0)
            continue;
        cumulative += weights[index];
        if (cumulative > roll) {
            result = index + 1;
            break;
        }
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
