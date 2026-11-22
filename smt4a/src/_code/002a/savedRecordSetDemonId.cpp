#include "gamedata/GameSaveBlocks.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Stores `value` in the halfword at 0xC of the saved record (save body + 0x27E00). */
void savedRecordSetDemonId(s16 value)
{
    GameSavedRecordA *record = &g_gameDataBlocks.saveBlock->body.record;
    record->tail.value = value;
}

} /* extern "C" */
