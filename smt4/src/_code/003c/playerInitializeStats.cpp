/* The hero's growth file functions, one translation unit (0x3c1ab4-0x3c2024, the other growth functions between
 * them). Built with `"autoinline": false` (one compile, so all three units): playerGetGrowthParameters is IDENTICAL
 * only so (41 lines with armcc's autoinline), statMaximumsAtLevel either way. */
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

/* NON_MATCHING: 67 lines (48 with armcc's autoinline, when it inlines the file's two functions here itself): retail
 * inlines the growth parameters and the HP/MP computation (written as the header inlines those functions are), loads
 * the hpGrowth byte first, stores HP before computing MP and keeps 0 in r6 for the clears. The u8 index gives retail's
 * starting-stat copy (the record stays in r0); Apocalypse's playerResetToStartingStats copies the same way but its
 * frame changes with it. */
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
    for (u8 index = 0; index < 5; ++index) {
        player->baseStats.stats[index] = initial->initialStats[index];
    }
    StatGrowthParametersIV parameters;
    playerGrowthParametersIV(&parameters);
    /* The base HP and MP words are the output pair. */
    statMaximumsAtLevelIV(player->level, (StatMaximumsIV *)&player->baseStats.hp, &parameters);
    playerRecalcStatsFromEquipment(0);
    player->hp = player->maxHp;
    player->mp = player->maxMp;
}
}
