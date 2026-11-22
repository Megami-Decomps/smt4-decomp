/* NON_MATCHING: 125 lines (182 vs 183 rows): per-rank constant-rate specializations (5/8/10), shared bonus post-check, and currentMp clamp match; armcc optimizes > 999 into >= 1000 and allocates r8 around HP/MP addition. */
#include <string.h>
#include "shard/W6_W6Match8_StatGrowth.h"

struct DerivedBattleStats {
    /* 0x000 */ u16 base[7];
    /* 0x00E */ s16 derived[7];
    /* 0x01C */ u8 unk01c[0xe];
    /* 0x02A */ s16 currentHp;
    /* 0x02C */ s16 currentMp;
    /* 0x02E */ u8 unk02e[6];
    /* 0x034 */ u16 skills[8];
    /* 0x044 */ u8 unk044[0x1e];
    /* 0x062 */ u16 id;
    /* 0x064 */ u16 level;
    /* 0x066 */ u8 unk066[0x42];
    /* 0x0A8 */ u16 bonuses[7];
    /* 0x0B6 */ u8 unk0b6[0x75];
    /* 0x12B */ u8 growthRank;
};

extern "C" {
StatGrowthParameters unitBuildStatGrowthPacket(u16 id);
void FUN_004cc6a4(u16 level, s16 *output, const StatGrowthParameters *parameters);
u32 FUN_003da998(s32 level, const StatGrowthParameters *parameters);
u32 FUN_003daaf4(s32 level, const StatGrowthParameters *parameters);
void FUN_0034cb50(s16 *stats, const u16 *skills, u32 count);
s32 unitHasRankingBonus(u16 id);
}

static __inline s16 clampDerivedStat(s32 value)
{
    if (value > 999) {
        value = 999;
    } else if (value < 1) {
        value = 1;
    }
    return (s16)value;
}

static __inline s16 derivedMaximumHp(DerivedBattleStats *record)
{
    s16 maximum = record->derived[0];
    if (unitHasRankingBonus(record->id)) {
        maximum = (s16)(s32)(maximum * 1.25f);
    }
    return maximum;
}

/* Recalculate bounded battle stats, growth bonuses, and skill modifiers, then clamp current HP/MP. */
extern "C" void unitRecomputeDerivedStats(DerivedBattleStats *record)
{
    if (record == NULL) {
        return;
    }
    memcpy(record->derived, record->base, sizeof(record->base));
    record->derived[2] = clampDerivedStat(record->derived[2] + record->bonuses[2]);
    record->derived[4] = clampDerivedStat(record->derived[4] + record->bonuses[4]);
    record->derived[5] = clampDerivedStat(record->derived[5] + record->bonuses[5]);
    record->derived[6] = clampDerivedStat(record->derived[6] + record->bonuses[6]);
    record->derived[3] = clampDerivedStat(record->derived[3] + record->bonuses[3]);
    StatGrowthParameters parameters = unitBuildStatGrowthPacket(record->id);
    FUN_004cc6a4(record->level, record->derived, &parameters);
    s32 hpDifference = record->base[0] - FUN_003da998(1, &parameters);
    u32 baseMp = FUN_003daaf4(1, &parameters);
    s16 hp = record->derived[0] + record->bonuses[0] + hpDifference;
    s16 mp = record->base[1] - baseMp + record->derived[1] + record->bonuses[1];
    record->derived[0] = hp;
    record->derived[1] = mp;
    s32 hpBonus = 0;
    s32 mpBonus = 0;
    bool hasRank = true;
    if (record->growthRank == 1) {
        hpBonus = (u32)parameters.hp * 5 / 100;
        mpBonus = (u32)parameters.mp * 5 / 100;
    } else if (record->growthRank == 2) {
        hpBonus = (u32)parameters.hp * 8 / 100;
        mpBonus = (u32)parameters.mp * 8 / 100;
    } else if (record->growthRank == 3) {
        hpBonus = (u32)parameters.hp * 10 / 100;
        mpBonus = (u32)parameters.mp * 10 / 100;
    } else {
        hasRank = false;
    }
    if (hasRank) {
        if (hpBonus == 0) {
            hpBonus = 1;
        }
        if (mpBonus == 0) {
            mpBonus = 1;
        }
        if (hpBonus > 0) {
            record->derived[0] = hp + hpBonus;
        }
        if (mpBonus > 0) {
            record->derived[1] = mp + mpBonus;
        }
    }
    FUN_0034cb50(record->derived, record->skills, 8);
    if (derivedMaximumHp(record) < record->currentHp) {
        record->currentHp = derivedMaximumHp(record);
    }
    if (record->currentMp > record->derived[1]) {
        record->currentMp = record->derived[1];
    }
}
