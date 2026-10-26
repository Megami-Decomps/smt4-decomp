/* NON_MATCHING: Retail retains packed growth-parameter assembly and signed MP division; scalar fields fold them away. */
#include "gamedata/PlayerInitialization.h"
#include "gamedata/DataTable.h"
#include "gamedata/PlayerDataBlock.h"

extern "C" {
void FUN_00299370(s32 mode);

/* Resets player advancement and initial attributes, computes base HP/MP, then restores both. */
void FUN_003c1ef4(void)
{
    /* A u32 view of the shared byte padding at 0x2E would change that member's alignment. */
    struct PlayerExperienceView {
        /* 0x00 */ u8 unk00[0x30];
        /* 0x30 */ u32 experience;
    };
    typedef char PlayerExperienceOffsetCheck[offsetof(PlayerExperienceView, experience) == 0x30 ? 1 : -1];
    PlayerInitialRecordIV *player = reinterpret_cast<PlayerInitialRecordIV *>(gameGetPlayerData());
    player->enabled = 1;
    ((PlayerExperienceView *)player)->experience = 0;
    player->advancement.points = 0;
    void *table = dataTableGet(9, 0);
    dataTableGetCount(table);
    const PlayerInitialGrowthIV *initial = (const PlayerInitialGrowthIV *)dataTableGetEntries(table);
    for (s32 index = 0; index < 5; ++index) {
        player->baseStats.stats[index] = initial->stats[index];
    }
    table = dataTableGet(9, 0);
    dataTableGetCount(table);
    const PlayerInitialGrowthIV *growth = (const PlayerInitialGrowthIV *)dataTableGetEntries(table);
    s32 hp = player->enabled * growth->hpGrowth + growth->baseHp;
    player->baseStats.baseHp = hp > 9999 ? 9999 : (u16)hp;
    s32 mp = (player->enabled * growth->mpGrowth + growth->baseMp) * 45 / 100;
    player->baseStats.baseMp = mp > 9999 ? 9999 : (u16)mp;
    FUN_00299370(0);
    player->hp = player->maximumHp;
    player->mp = player->maximumMp;
}
}
