#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"

extern "C" {
s32 statusGetAvailableChoiceCount(void);

// Add a skill to the first empty slot within the player's unlocked capacity.
void playerSkillInsertFirstFree(u32 skill)
{
    PlayerDataIV *player = &g_gameDataBlocks.saveBlock->body.slots.player;
    s32 capacity = statusGetAvailableChoiceCount();
    for (s32 index = 0; index < capacity; ++index) {
        if (player->skills[index] == 0) {
            player->skills[index] = skill;
            return;
        }
    }
}
}
