#include "shard/W6_W6Match2_RecordValue.h"
#include "gamedata/GameDataAccess_VariantB_RecordValue.h"

// Copy one complete saved record when its index is valid.
extern "C" bool gameRecordCopy(u32 recordIndex, GameSavedItem* destination)
{
    if (recordIndex > 0x500) {
        return false;
    }
    GameSaveData *save = g_gameDataBlocks.saveBlock;
    const GameSavedItem* record = &save->body.items[recordIndex];
    *destination = *record;
    return true;
}
