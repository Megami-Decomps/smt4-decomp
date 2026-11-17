#include "shard/GameDataBlocks.h"
extern "C" s32 statusGetAvailableChoiceCount(void);

// Tests whether a value appears among the player's currently available choices.
extern "C" u32 FUN_00262cb0(u32 value)
{
    PlayerDataIV *player = &g_gameDataBlocks.saveBlock->body.slots.player;
    s32 count = statusGetAvailableChoiceCount();
    for (s32 index = 0; index < count; ++index) {
        if (player->skills[index] == value) {
            return 1;
        }
    }
    return 0;
}
