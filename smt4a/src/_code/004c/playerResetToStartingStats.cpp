/* NON_MATCHING: frame, the inlined growth parameters (playerGetGrowthParameters's body) and their 0x12-byte copy match; remaining: the saved registers of the HP/MP computation (retail level r5, parameters r6, maximums r7, as in FUN_004cc6a4), the starting-stat loads (retail keeps the record in r0) and the order of the constant 1/0 setup. */
#include "gamedata/PlayerGrowthDefaults.h"

/* The hero's record (only the fields set here). */
struct PlayerInitView {
    /* 0x00 */ u8 unk00[0x0E];
    /* 0x0E */ u16 maxHp;
    /* 0x10 */ u16 maxMp;
    /* 0x12 */ s16 stats[5];
    /* 0x1C */ u16 totalHp;
    /* 0x1E */ u16 totalMp;
    /* 0x20 */ u8 unk20[0x0A];
    /* 0x2A */ u16 hp;
    /* 0x2C */ u16 mp;
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ u32 experience;
    /* 0x34 */ u8 unk34[0x2A];
    /* 0x5E */ u16 unk5E;
    /* 0x60 */ u8 unk60[2];
    /* 0x62 */ u16 level;
};

extern "C" {
u32 FUN_003daaf8(s32 level, const StatGrowthParameters *parameters);
void FUN_003df7c4(PlayerInitView *player);
PlayerInitView *gameGetPlayerData(void);
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
    PlayerInitView *player = gameGetPlayerData();
    player->level = 1;
    player->experience = 0;
    player->unk5E = 0;

    const PlayerGrowthDefaults *defaults = playerGrowthDefaults();
    player->stats[0] = defaults->initialStats[0];
    player->stats[1] = defaults->initialStats[1];
    player->stats[2] = defaults->initialStats[2];
    player->stats[3] = defaults->initialStats[3];
    player->stats[4] = defaults->initialStats[4];

    StatGrowthParameters parameters = playerGrowthParameters();
    statMaximumsAtLevel(player->level, &player->maxHp, &parameters);
    FUN_003df7c4(NULL);
    player->hp = player->totalHp;
    player->mp = player->totalMp;
}
