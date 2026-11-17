#include "gamedata/MapSaveBlockA.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 hasValue;
    /* 0x16 */ u8 unk16[6];
    /* 0x1C */ s32 flagId;
} Entry;

extern Entry *dataTable2FType1GetEntry(s32 id);

extern void gameFlagsSet(s32 index, s32 value);

/* When enabled, apply the current table-0x2f entry's flag and value (0xff when absent). */
void gameApplyCurrentFlagTableEntry(void)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 id;
    Entry *entry;

    if (g_gameState.unk0DC == 0) {
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
