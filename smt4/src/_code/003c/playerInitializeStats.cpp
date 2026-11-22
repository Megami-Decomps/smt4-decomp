#include "gamedata/PlayerInitialization.h"
#include "gamedata/PlayerGrowthDefaults.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/PlayerInitialization.h"

extern "C" {
void playerRecalcStatsFromEquipment(s32 mode);

/* NON_MATCHING: 41 lines, scheduling only: retail interleaves the record's byte loads with the shifts and ors of the
 * three packed growth words (it loads byte 6 first); the build loads bytes 6, 7 and 12 first. */
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

/* NON_MATCHING: 48 lines: the inlined growth parameters and HP/MP computation are scheduled differently (retail loads
 * the hpGrowth byte first and stores HP before computing MP). The u8 index gives retail's starting-stat copy (the
 * record stays in r0); Apocalypse's playerResetToStartingStats copies the same way but its frame changes with it. */
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
    playerGetGrowthParameters(&parameters);
    /* The base HP and MP words are the output pair. */
    statMaximumsAtLevel(player->level, (StatMaximumsIV *)&player->baseStats.hp, &parameters);
    playerRecalcStatsFromEquipment(0);
    player->hp = player->maxHp;
    player->mp = player->maxMp;
}
}
