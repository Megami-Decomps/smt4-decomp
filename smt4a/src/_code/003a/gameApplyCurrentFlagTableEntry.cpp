#include "gamedata/MapSaveBlockA.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "gamedata/Table2FType1Entry.h"

extern "C" {

extern void gameFlagsSet(s32 index, s32 value);

/* When enabled, apply the current table-0x2f entry's flag and value (0xff when absent). */
void gameApplyCurrentFlagTableEntry(void)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 id;
    Table2FType1Entry *entry;

    if (g_gameState.table2FCounterPending == 0) {
        return;
    }
    id = block->savePoint.tableId;
    entry = dataTable2FType1GetEntry(id);
    if (entry->flagId != 0) {
        gameFlagSetValue(entry->flagId, 1, 1);
    }
    s32 value = entry->hasValue;
    if (value != 0) {
        gameFlagsSet(id, value);
        return;
    }
    gameFlagsSet(id, 0xFF);
}

} /* extern "C" */
