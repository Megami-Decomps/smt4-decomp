#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Returns the halfword at 0xC of the record at 0x27E88 of the game-data table. */
s32 gameDataGetRecordValue(void)
{
    GameSavedRecordA *record = &g_gameDataBlocks.saveBlock->body.record;
    return record->value;
}

} /* extern "C" */
