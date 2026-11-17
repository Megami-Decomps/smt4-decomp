/* NON_MATCHING: frame, the inlined growth parameters (playerGetGrowthParameters's body) and their 0x12-byte copy match; remaining: the saved registers of the HP/MP computation (retail level r5, parameters r6, maximums r7, as in FUN_004cc6a4), the starting-stat loads (retail keeps the record in r0) and the order of the constant 1/0 setup. */
#include "gamedata/PlayerGrowthDefaults.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
u32 FUN_003daaf8(s32 level, const StatGrowthParameters *parameters);
void FUN_003df7c4(PlayerDataA *player);
}

/* Maximum HP and MP at `level`. */
static __inline void statMaximumsAtLevel(s32 level, u16 *maximums, const StatGrowthParameters *parameters)
{
    maximums[0] = unitComputeMaximumHpAtLevel(level, parameters);
    maximums[1] = FUN_003daaf8(level, parameters);
}

/* Resets the hero to level 1 with the starting stats of data table 9. */
extern "C" void playerResetToStartingStats(void)
{
    PlayerDataA *player = gameGetPlayerData();
    player->level = 1;
    player->experience = 0;
    player->ailments = 0;

    const PlayerGrowRecord *defaults = playerGrowthDefaults();
    player->baseStats.stats[0] = defaults->initialStats[0];
    player->baseStats.stats[1] = defaults->initialStats[1];
    player->baseStats.stats[2] = defaults->initialStats[2];
    player->baseStats.stats[3] = defaults->initialStats[3];
    player->baseStats.stats[4] = defaults->initialStats[4];

    StatGrowthParameters parameters = playerGrowthParameters();
    statMaximumsAtLevel(player->level, &player->baseStats.hp, &parameters);
    FUN_003df7c4(NULL);
    player->hp = player->maxHp;
    player->mp = player->maxMp;
}
