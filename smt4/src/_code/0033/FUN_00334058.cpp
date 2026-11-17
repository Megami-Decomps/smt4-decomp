#include "gamedata/GameDataAccess.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 FUN_001386f8(u32);

static __inline s32 skillSlotCapacity(void)
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

// Adds skill `id` to the player's unlocked skill slots, or raises its rank up to the skill's limit.
void FUN_00334058(u32 id)
{
    PlayerDataIV *player = gameGetPlayerData();
    s32 capacity = skillSlotCapacity();
    for (s32 index = 0; index < capacity; ++index) {
        if (player->skills[index] == id) {
            s32 limit = FUN_001386f8(id);
            if (player->skillRanks[index] < limit)
                ++player->skillRanks[index];
            return;
        }
    }
    for (s32 index = 0; index < capacity; ++index) {
        if (player->skills[index] == 0) {
            player->skills[index] = static_cast<u16>(id);
            player->skillRanks[index] = 1;
            return;
        }
    }
}
}
