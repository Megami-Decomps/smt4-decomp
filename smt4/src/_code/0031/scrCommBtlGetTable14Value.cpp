#include "battle/BtlMainAccess.h"
#include "battle/BtlTables.h"
#include "gamedata/DataTable.h"
#include "script/ScriptArgs.h"

/* A 12-byte record of the battle table with six 16-bit values. */
struct BattleTableRow {
    u16 values[6];
};

extern "C" {

// Script command: returns one of the six values of a record of battle data table 14 (-1 for an invalid field).
u32 scrCommBtlGetTable14Value(void)
{
    s32 index = scrGetArg(0);
    s32 field = scrGetArg(1);
    void *table = btlMainGetDataTable(btlGetMainState(), 14);
    BattleTableRow *rows = static_cast<BattleTableRow *>(dataTableGetEntries(table));
    dataTableGetCount(table);
    s32 value = -1;
    switch (field) {
    case 0:
        value = rows[index].values[0];
        break;
    case 1:
        value = rows[index].values[1];
        break;
    case 2:
        value = rows[index].values[2];
        break;
    case 3:
        value = rows[index].values[3];
        break;
    case 4:
        value = rows[index].values[4];
        break;
    case 5:
        value = rows[index].values[5];
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
