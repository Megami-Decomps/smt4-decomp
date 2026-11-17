#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"
#include "battle/BtlTables.h"
#include "util/Random.h"
#include "script/ScriptArgs.h"

extern "C" {
void scrSetResult(s32 value);

// Choose a one-based result from one of the battle's percentage-weight tables.
u32 FUN_00312c6c(void)
{
    s32 kind = scrGetArg(0);
    void *table = NULL;
    switch (kind) {
    case 1:
        table = btlMainGetDataTable(btlGetMainState(), 10);
        break;
    case 2:
        table = btlMainGetDataTable(btlGetMainState(), 11);
        break;
    case 3:
        table = btlMainGetDataTable(btlGetMainState(), 12);
        break;
    }
    const u16 *weights = (const u16 *)dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    s32 roll = randNextInRange(99);
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
}
