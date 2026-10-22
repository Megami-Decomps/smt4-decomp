#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


/* Stores `value` in the halfword at 0xC of the record at 0x27E88 of the game-data table. */
void FUN_002a6480(u16 value)
{
    GameSavedRecordA *record = &g_gameDataBlocks.saveBlock->records.record;
    record->unk0C = value;
}

} /* extern "C" */
