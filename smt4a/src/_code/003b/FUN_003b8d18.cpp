#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"
#include "battle/BtlTables.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"
#include "script/ScriptArgs.h"
#include "AsdSDK/AsdMemUtil.h"
#include "util/Random.h"

extern "C" {

/* Selects a random nonempty demon id from a record's choices and the battle's extra table. */
u32 FUN_003b8d18(void)
{
    NkmEnemyRecordA *record = nkmEnemyFindById((u16)scrGetArg(0));
    u32 candidates[128];
    sysMemClear(candidates, sizeof(candidates));
    u8 count = 0;
    if (record->choices[0].value != 0x7B6 && record->choices[0].value != 0) {
        candidates[count++] = record->choices[0].value;
    }
    if (record->choices[1].value != 0x7B6 && record->choices[1].value != 0) {
        candidates[count++] = record->choices[1].value;
    }
    if (record->choices[2].value != 0x7B6 && record->choices[2].value != 0) {
        candidates[count++] = record->choices[2].value;
    }
    void *table = btlGetTable(btlGetMainState(), 0x10);
    u16 *entries = (u16 *)dataTableGetEntries(table);
    s32 remaining = (s32)dataTableGetCount(table);
    while (remaining > 0) {
        if (*entries != 0) {
            candidates[count++] = *entries;
        }
        --remaining;
        ++entries;
    }
    scrSetResult(candidates[randRange((u16)(count - 1))]);
    return 1;
}
}
