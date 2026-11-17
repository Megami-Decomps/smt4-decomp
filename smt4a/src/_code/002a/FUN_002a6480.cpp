#include "gamedata/GameSaveBlocks.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Stores `value` in the halfword at 0xC of the saved record (save body + 0x27E00). */
void FUN_002a6480(u16 value)
{
    GameSavedRecordA *record = &g_gameDataBlocks.saveBlock->body.record;
    record->unk0C = value;
}

} /* extern "C" */
