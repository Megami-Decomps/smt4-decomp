/* NON_MATCHING: growth-recipe aggregate construction/copy and HP/MP update register allocation differ from retail. */
#include "shard/Shard0034.h"

extern "C" {
const void *dataTableGet(u32 table, u32 group);
u32 dataTableGetCount(const void *table);
const PlayerGrowthEntry *dataTableGetEntries(const void *table);
s32 FUN_003e0154(void);
s32 FUN_003e0164(void);
u32 gameGetUnlockedCountLimit(void);
void FUN_004cd340(void *stats, const PlayerGrowthRecipe *recipe, u32 mode);
void gameDataAddCappedPoints(u32 amount);
void FUN_003df7c4(u32 mode);
s32 gameDataFlagTestBit(u32 bit);

/* Advance player levels, then restore current HP/MP according to the recovery flags. */
void playerAdvanceLevelsAndRecover(PlayerData *player, s32 levels, s32 growStats)
{
    if (levels < 1) {
        return;
    }
    const void *table = dataTableGet(9, 0);
    dataTableGetCount(table);
    const PlayerGrowthEntry *entry = dataTableGetEntries(table);
    PlayerGrowthRecipe recipe = playerGrowthRecipeFromEntry(entry);
    s32 previousHp = FUN_003e0154();
    s32 previousMp = FUN_003e0164();
    for (s32 level = 0; level < levels; ++level) {
        if (gameGetUnlockedCountLimit() <= player->unk62) {
            break;
        }
        if (growStats != 0) {
            for (s32 growth = 0; growth < 5; ++growth) {
                FUN_004cd340(player->unk0E, &recipe, 0);
            }
        }
        ++player->unk62;
        if (player->unk62 < 100) {
            gameDataAddCappedPoints(10);
        }
    }
    FUN_003df7c4(0);
    if (growStats != 0) {
        player->unk2A = player->unk1C;
        player->unk5E = 0;
        player->unk2C = player->unk1E;
        return;
    }
    player->unk5E = 0;
    player->unk2A += player->unk1C - previousHp;
    player->unk2C += player->unk1E - previousMp;
    if (gameDataFlagTestBit(0x83)) {
        player->unk2A = player->unk1C;
        player->unk2C = player->unk1E;
    } else if (gameDataFlagTestBit(0x82)) {
        player->unk2A += (player->unk1C - player->unk2A) / 2;
        player->unk2C += (player->unk1E - player->unk2C) / 2;
    }
}
}
