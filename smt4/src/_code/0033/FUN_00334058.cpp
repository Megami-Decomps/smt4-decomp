/* NON_MATCHING: retail 58 vs built 58 rows; inventory capacity conditions and slot-loop register allocation differ. */
#include "shard/PadState.h"

extern "C" {
PadState *gameGetPlayerData(void);
s32 flagBitIsSet(u32);
s32 FUN_001386f8(u32);

// Add one item to the unlocked inventory slots without exceeding its stack limit.
void FUN_00334058(u32 id)
{
    PadState *player = gameGetPlayerData();
    s32 capacity = 4;
    if (flagBitIsSet(0x77)) capacity = 5;
    if (flagBitIsSet(0x78)) ++capacity;
    if (flagBitIsSet(0x79)) ++capacity;
    if (flagBitIsSet(0x7a)) ++capacity;
    if (capacity > 8) capacity = 8;
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
