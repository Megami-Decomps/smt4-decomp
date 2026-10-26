#include "shard/PadState.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/PlayerDataBlock.h"

extern "C" {
s32 FUN_001386f8(u32);

static __inline s32 inventoryGetCapacity(void)
{
    s32 capacity = 4;
    if (flagBitIsSet(0x77)) ++capacity;
    if (flagBitIsSet(0x78)) ++capacity;
    if (flagBitIsSet(0x79)) ++capacity;
    if (flagBitIsSet(0x7a)) ++capacity;
    if (capacity > 8)
        capacity = 8;
    return capacity;
}

// Add one item to the unlocked inventory slots without exceeding its stack limit.
void FUN_00334058(u32 id)
{
    PadState *player = reinterpret_cast<PadState *>(gameGetPlayerData());
    s32 capacity = inventoryGetCapacity();
    for (s32 index = 0; index < capacity; ++index) {
        if (padStateInventoryIds(player)[index] == id) {
            s32 limit = FUN_001386f8(id);
            if (player->inventoryCounts[index] < limit)
                ++player->inventoryCounts[index];
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
