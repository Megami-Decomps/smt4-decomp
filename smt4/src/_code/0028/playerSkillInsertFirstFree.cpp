#include "shard/GameDataBlocks.h"

struct PlayerSkillSlots {
    u8 unk00[0x78];
    u16 skills[8]; // 0x78
};
struct PlayerSkillDataBlock {
    u8 unk00[0x90];
    PlayerSkillSlots player; // 0x90
};

extern "C" {
s32 statusGetAvailableChoiceCount(void);

// Add a skill to the first empty slot within the player's unlocked capacity.
void playerSkillInsertFirstFree(u32 skill)
{
    PlayerSkillSlots *player = &((PlayerSkillDataBlock *)g_gameDataBlocks.saveBlock)->player;
    s32 capacity = statusGetAvailableChoiceCount();
    for (s32 index = 0; index < capacity; ++index) {
        if (player->skills[index] == 0) {
            player->skills[index] = skill;
            return;
        }
    }
}
}
