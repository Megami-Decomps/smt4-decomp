/* NON_MATCHING: readable rebuild from asm of the player stat recompute; retail unrolls the five stat clamps in a fixed order (0x20, 0x24, 0x26, 0x28, 0x22) and interleaves the growth block copy, which armcc here emits from a loop and a struct copy. */
#include "shard/W6_W6Match8_StatGrowth.h"

/* The equipment record (only the fields read here). */
struct EquipmentRecord {
    /* 0x00 */ u8 unk00[0x31];
    /* 0x31 */ s8 statBonus[5];
    /* 0x36 */ u16 hpBonus;
    /* 0x38 */ u16 mpBonus;
    /* 0x3A */ u16 special;
};

/* The capped upgrade bonuses of one equipment piece. */
struct UpgradeBonuses {
    /* 0x00 */ u16 hp;
    /* 0x02 */ u16 mp;
    /* 0x04 */ u16 stats[5];
    /* 0x0E */ u8 unk0E[6];
};

/* An extra block the growth step reads next to the stats. */
struct GrowthExtra {
    u32 word;
    f32 vector[3];
    u16 special;
    u16 pad;
};

/* A player's stat record. */
struct PlayerStats {
    /* 0x00 */ u16 equipment[7];
    /* 0x0E */ u16 base[7];        /* HP, MP, then the five stats */
    /* 0x1C */ u16 total[7];       /* the same, with equipment and growth applied */
    /* 0x2A */ u16 hp;
    /* 0x2C */ u16 mp;
    /* 0x2E */ u8 unk2E[6];
    /* 0x34 */ u32 extraWord;
    /* 0x38 */ f32 extraVector[3];
    /* 0x44 */ u8 unk44[0x1E];
    /* 0x62 */ u16 level;
};

extern "C" {
PlayerStats *gameGetPlayerData(void);
EquipmentRecord *dataTable08Sub2GetRecord(u32 id);
void equipmentGetCappedUpgradeBonuses(u32 id, UpgradeBonuses *out);
void FUN_004cceb8(StatGrowthParameters *out, s32 arg);
void FUN_004cc6a4(s32 level, u16 *totals, const StatGrowthParameters *parameters);
s16 FUN_003da998(s32 kind, const StatGrowthParameters *parameters);
s16 FUN_003daaf4(s32 kind, const StatGrowthParameters *parameters);
void FUN_0034cb50(u16 *totals, GrowthExtra *extra, s32 count);

/* Recomputes a player's stat totals (the hero when `stats` is null): base stats plus the seven
 * equipment pieces and their upgrades, clamped to 1..999, then the level growth and the
 * special-effect step, and caps current HP/MP at the new maximums. */
void FUN_003df7c4(PlayerStats *stats)
{
    if (stats == NULL)
        stats = gameGetPlayerData();
    s16 hpBonus = 0;
    s16 mpBonus = 0;
    for (s32 i = 0; i < 7; i++)
        stats->total[i] = stats->base[i];
    for (s32 slot = 0; slot < 7; slot++) {
        u32 id = stats->equipment[slot];
        if (id == 0)
            continue;
        EquipmentRecord *record = dataTable08Sub2GetRecord(id);
        if (record == NULL)
            continue;
        for (s32 i = 0; i < 5; i++)
            stats->total[2 + i] += record->statBonus[i];
        u16 recordHp = record->hpBonus;
        u16 recordMp = record->mpBonus;
        hpBonus += recordHp;
        mpBonus += recordMp;
        UpgradeBonuses upgrade;
        equipmentGetCappedUpgradeBonuses(id, &upgrade);
        for (s32 i = 0; i < 5; i++)
            stats->total[2 + i] += upgrade.stats[i];
        hpBonus = (s16)(upgrade.hp + hpBonus);
        mpBonus = (s16)(upgrade.mp + mpBonus);
    }
    for (s32 i = 2; i < 7; i++) {
        s32 value = (s16)stats->total[i];
        if (value > 999)
            value = 999;
        else if (value < 1)
            value = 1;
        stats->total[i] = (u16)value;
    }
    StatGrowthParameters parameters;
    FUN_004cceb8(&parameters, 0);
    FUN_004cc6a4(stats->level, stats->total, &parameters);
    s32 hpGrowth = stats->base[0] - FUN_003da998(1, &parameters);
    s32 mpGrowth = stats->base[1] - FUN_003daaf4(1, &parameters);
    stats->total[0] = stats->total[0] + hpGrowth + hpBonus;
    stats->total[1] = stats->total[1] + mpGrowth + mpBonus;
    GrowthExtra extra;
    extra.word = stats->extraWord;
    extra.vector[0] = stats->extraVector[0];
    extra.vector[1] = stats->extraVector[1];
    extra.vector[2] = stats->extraVector[2];
    EquipmentRecord *last = dataTable08Sub2GetRecord(stats->equipment[6]);
    extra.special = last != NULL ? last->special : 0;
    FUN_0034cb50(stats->total, &extra, 9);
    if ((s16)stats->hp > (s16)stats->total[0])
        stats->hp = stats->total[0];
    if ((s16)stats->mp > (s16)stats->total[1])
        stats->mp = stats->total[1];
}

} /* extern "C" */
