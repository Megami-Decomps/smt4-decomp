#include "gamedata/GamePlayerData.h"

extern "C" {

u8 playerGetSkillRank(u32 skill)
{
    PlayerDataIV *player = gameGetPlayerData();
    for (s32 index = 0; index < 8; ++index) {
        if (player->skills[index] == skill) {
            return player->skillRanks[index];
        }
    }
    return 0;
}

} /* extern "C" */
