#include "shard/PadState.h"

union PlayerSkillState {
    PadState base;
    struct {
        u8 unk00[0x34];
        u16 ids[8];
        u8 ranks[8];
    } skills;
};

extern "C" {

PlayerSkillState *gameGetPlayerData(void);


u8 playerGetSkillRank(u32 skill)
{
    PlayerSkillState *player = gameGetPlayerData();
    for (s32 index = 0; index < 8; ++index) {
        if (player->skills.ids[index] == skill) {
            return player->skills.ranks[index];
        }
    }
    return 0;
}

} /* extern "C" */
