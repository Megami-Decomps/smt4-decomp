#include "gamedata/PlayerInitialization.h"
#include "gamedata/PlayerGrowthDefaults.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/PlayerInitialization.h"

extern "C" {
void playerRecalcStatsFromEquipment(s32 mode);

/* Copies the hero's growth parameters (PlayerGrow.tbb) into parameters. */
void playerGetGrowthParameters(StatGrowthParametersIV *parameters)
{
    playerGrowthParametersIV(parameters);
}

/* Computes HP and MP at `level`. */
void statMaximumsAtLevel(s16 level, StatMaximumsIV *maximums, const StatGrowthParametersIV *parameters)
{
    statMaximumsAtLevelIV(level, maximums, parameters);
}

/* Resets player advancement and initial attributes, computes base HP/MP, then restores both. */
void playerInitializeStats(void)
{
    /* A u32 view of the shared byte padding at 0x2E would change that member's alignment. */
    struct PlayerExperienceView {
        /* 0x00 */ u8 unk00[0x30];
        /* 0x30 */ u32 experience;
    };
    typedef char PlayerExperienceOffsetCheck[offsetof(PlayerExperienceView, experience) == 0x30 ? 1 : -1];
    PlayerDataIV *player = gameGetPlayerData();
    player->level = 1;
    ((PlayerExperienceView *)player)->experience = 0;
    player->ailments = 0;
    const PlayerGrowRecord *initial = playerGrowthDefaults();
    for (s32 index = 0; index < 5; ++index) {
        player->baseStats.stats[index] = initial->initialStats[index];
    }
    StatGrowthParametersIV parameters;
    playerGetGrowthParameters(&parameters);
    /* The base HP and MP words are the output pair. */
    statMaximumsAtLevel(player->level, (StatMaximumsIV *)&player->baseStats.hp, &parameters);
    playerRecalcStatsFromEquipment(0);
    player->hp = player->maxHp;
    player->mp = player->maxMp;
}
}
