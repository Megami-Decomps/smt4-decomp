/* NON_MATCHING: corrected identifier width/saved flag signedness; inventory base offset folds into the member displacement. */
#include "gamedata/Table00.h"
#include "gamedata/Table00Lookup.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"
extern "C" {

// Tests the collection flag for this identifier and its related identifiers.
u32 FUN_0026264c(u16 id)
{
    if (id > 0x500) {
        return 0;
    }
    Table00Record* record = dataTable00FindById(id);
    if ((record->flags & 1) == 0) {
        return 0;
    }
    GameDataBlock* save = g_gameDataBlocks.saveBlock;
    GameSavedItemA* item = &save->inventory.items[id];
    if ((item->flags & 2) != 0) {
        return 1;
    }
    for (u32 index = 0; index < 3; ++index) {
        u16 related = record->relatedIds[index];
        if (related != 0) {
            item = &save->inventory.items[related];
            if ((item->flags & 2) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
}
