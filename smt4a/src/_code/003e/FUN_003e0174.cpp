#include "shard/PadState.h"
#include "gamedata/PlayerDataBlock.h"
#include "shard/W6_W6Match8_StatGrowth.h"
extern "C" {
}

/* The player block seen through its signed per-slot counts. */
struct PlayerCountsView {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s8 counts[8];
};

extern "C" {
s32 dataTableCountRecordStages(u32);

static __inline s32 inventoryGetCapacity(void)
{
    s32 capacity = 4;
    if (gameDataFlagTestBit(0x77)) ++capacity;
    if (gameDataFlagTestBit(0x78)) ++capacity;
    if (gameDataFlagTestBit(0x79)) ++capacity;
    if (gameDataFlagTestBit(0x7a)) ++capacity;
    if (capacity > 8)
        capacity = 8;
    return capacity;
}

// Add one item to the unlocked inventory slots without exceeding its stack limit.
void FUN_003e0174(u32 id)
{
    PadState *player = reinterpret_cast<PadState *>(gameGetPlayerData());
    s32 capacity = inventoryGetCapacity();
    for (s32 index = 0; index < capacity; ++index) {
        if (padStateInventoryIds(player)[index] == id) {
            s32 limit = dataTableCountRecordStages(id);
            PlayerCountsView *view = reinterpret_cast<PlayerCountsView *>(player);
            if (view->counts[index] < limit)
                ++view->counts[index];
            return;
        }
    }
    for (s32 index = 0; index < capacity; ++index) {
        if (padStateInventoryIds(player)[index] == 0) {
            padStateInventoryIds(player)[index] = static_cast<u16>(id);
            player->inventoryCounts[index] = 1;
            return;
        }
    }
}
}
