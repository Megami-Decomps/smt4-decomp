#include "battle/BtlMainAccess.h"
#include "gamedata/DataTable.h"
#include "script/ScriptArgs.h"

extern "C" {

void *btlGetTable(BtlMainStateA *state, u32 table);

/* Script command: passes entry (script argument 0, clamped to 1..count) of the u16 table, counted by dataTableGetCount, to scrSetResult. */
u32 FUN_003a9a30(void)
{
    s32 requested = scrGetArg(0);
    void *field = btlGetTable(btlGetMainState(), 0xd);
    u16 *table = static_cast<u16 *>(dataTableGetEntries(field));
    s32 count = dataTableGetCount(field);
    if (requested < 1) {
        count = 1;
    } else {
        count = count < requested ? count : requested;
    }
    s32 index = count - 1;
    scrSetResult(table[index]);
    return 1;
}

} /* extern "C" */
