/* NON_MATCHING: growth-parameter copy (`add r6, sp, #20` vs `add r0, sp, #20`) and half-recovery register numbering (r1/r2/r3) differ from retail (28 diff lines). */
#include "gamedata/PlayerGrowthDefaults.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 FUN_003e0154(void);
s32 FUN_003e0164(void);
u32 gameGetUnlockedCountLimit(void);
void unitApplyWeightedStatPoint(void *stats, const StatGrowthParameters *recipe, u32 mode);
void gameDataAddCappedPoints(u32 amount);
void FUN_003df7c4(u32 mode);

/* Advance player levels, then restore current HP/MP according to the recovery flags. */
void playerAdvanceLevelsAndRecover(PlayerDataA *player, s32 levels, s32 growStats)
{
    if (levels <= 0) {
        return;
    }
    StatGrowthParameters recipe = playerGrowthParameters();
    s32 previousHp = FUN_003e0154();
    s32 previousMp = FUN_003e0164();
    for (s32 level = 0; level < levels; ++level) {
        if (gameGetUnlockedCountLimit() <= player->level) {
            break;
        }
        if (growStats != 0) {
            for (s32 growth = 0; growth < 5; ++growth) {
                unitApplyWeightedStatPoint(&player->baseStats, &recipe, 0);
            }
        }
        ++player->level;
        if (player->level < 100) {
            gameDataAddCappedPoints(10);
        }
    }
    FUN_003df7c4(0);
    if (growStats != 0) {
        player->hp = player->maxHp;
        player->ailments = 0;
        player->mp = player->maxMp;
    } else {
        s32 hpDiff = player->maxHp - previousHp;
        s32 mpDiff = player->maxMp - previousMp;
        player->ailments = 0;
        player->hp += hpDiff;
        player->mp += mpDiff;
        if (gameDataFlagTestBit(0x83)) {
            player->hp = player->maxHp;
            player->mp = player->maxMp;
        } else if (gameDataFlagTestBit(0x82)) {
            s32 halfHp = player->maxHp - player->hp;
            s32 halfMp = player->maxMp - player->mp;
            player->hp += halfHp / 2;
            player->mp += halfMp / 2;
        }
    }
}
}
