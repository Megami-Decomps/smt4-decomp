#include "gamedata/SaveSlotTable.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

// Check whether any occupied stock slot contains the requested entry identifier.
u32 gameStockContainsEntry(u32 id)
{
    SaveSlotTableA *stock = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        s32 slot = stock->party[index];
        if (slot >= 0 && stock->entries[slot].id == id)
            return 1;
    }
    return 0;
}
}
