/* NON_MATCHING: corrected identifier width/saved flag signedness; inventory base offset folds into the member displacement. */
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"
extern "C" {

// Tests the collection flag for this identifier and its related identifiers.
u32 itemIsCollectedWithRelated(u16 id)
{
    if (id > 0x500) {
        return 0;
    }
    NkmEnemyRecordA* record = nkmEnemyFindById(id);
    if ((record->flags & 1) == 0) {
        return 0;
    }
    GameSaveDataA* save = g_gameDataBlocks.saveBlock;
    GameSavedItemA* item = &save->body.items[id];
    if ((item->flags & 2) != 0) {
        return 1;
    }
    for (u32 index = 0; index < 3; ++index) {
        u16 related = record->relatedIds[index];
        if (related != 0) {
            item = &save->body.items[related];
            if ((item->flags & 2) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
}
