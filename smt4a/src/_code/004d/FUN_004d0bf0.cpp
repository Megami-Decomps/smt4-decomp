#include "shard/W5_W5Match5_GameSaveViews.h"

struct GameStockTable {
    GameSlotEntry entries[24]; // 0x0000
    u8 unk1c20[0x68];
    s8 activeSlots[24]; // 0x1c88
};

extern "C" {
GameStockTable *gameGetSlotTable(void);

// Check whether any occupied stock slot contains the requested entry identifier.
u32 FUN_004d0bf0(u32 id)
{
    GameStockTable *stock = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        s32 slot = stock->activeSlots[index];
        if (slot >= 0 && stock->entries[slot].record.entryId == id)
            return 1;
    }
    return 0;
}
}
