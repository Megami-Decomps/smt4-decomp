/* NON_MATCHING: growth-recipe aggregate construction/copy and HP/MP update register allocation differ from retail. */
#include "shard/Shard0034.h"
#include "gamedata/DataTable.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 FUN_003e0154(void);
s32 FUN_003e0164(void);
u32 gameGetUnlockedCountLimit(void);
void unitApplyWeightedStatPoint(void *stats, const PlayerGrowthRecipe *recipe, u32 mode);
void gameDataAddCappedPoints(u32 amount);
void FUN_003df7c4(u32 mode);
s32 gameDataFlagTestBit(u32 bit);

/* Advance player levels, then restore current HP/MP according to the recovery flags. */
void playerAdvanceLevelsAndRecover(PlayerDataA *player, s32 levels, s32 growStats)
{
    if (levels < 1) {
        return;
    }
    void *table = dataTableGet(9, 0);
    dataTableGetCount(table);
    const PlayerGrowRecord *entry = static_cast<const PlayerGrowRecord *>(dataTableGetEntries(table));
    PlayerGrowthRecipe recipe = playerGrowthRecipeFromEntry(entry);
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
        return;
    }
    player->ailments = 0;
    player->hp += player->maxHp - previousHp;
    player->mp += player->maxMp - previousMp;
    if (gameDataFlagTestBit(0x83)) {
        player->hp = player->maxHp;
        player->mp = player->maxMp;
    } else if (gameDataFlagTestBit(0x82)) {
        player->hp += (player->maxHp - player->hp) / 2;
        player->mp += (player->maxMp - player->mp) / 2;
    }
}
}
