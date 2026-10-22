/* NON_MATCHING: stat caps use immediate-1000 comparisons instead of the shared 999 register, and boon HP/MP caching differs. */
#include "common.h"

struct CharacterStats {
    s16 hp, mp, strength, magic, dexterity, agility, luck;
};
struct CharacterStatBonuses {
    u16 hp, mp, strength, magic, dexterity, agility, luck;
};
struct CharacterStatWork {
    /* 0x000 */ CharacterStats base;
    /* 0x00E */ CharacterStats effective;
    /* 0x01C */ u8 unk01c[0xe];
    /* 0x02A */ s16 currentHP, currentMP;
    /* 0x02E */ u8 unk02e[6];
    /* 0x034 */ s16 limits[8];
    /* 0x044 */ u8 unk044[2];
    /* 0x046 */ u16 id;
    /* 0x048 */ u8 level;
    /* 0x049 */ u8 unk049[0x543];
    /* 0x58C */ CharacterStatBonuses bonuses;
    /* 0x59A */ u8 unk59a[0x67];
    /* 0x601 */ u8 boon;
};
union CharacterGrowth {
    u32 words[4];
    struct {
        u8 unk00[12];
        u16 hp, mp;
    } maxima;
};
typedef char CharacterStatsSizeCheck[sizeof(CharacterStats) == 0xe ? 1 : -1];
typedef char CharacterStatWorkSizeCheck[sizeof(CharacterStatWork) == 0x602 ? 1 : -1];

extern "C" {
CharacterGrowth FUN_003c1cfc(u32 id);
void FUN_003c1ab4(u32 level, CharacterStats *stats, const CharacterGrowth *growth);
void FUN_002dada4(CharacterStats *stats, const s16 *limits, u32 count);
}

static inline s32 clampCharacterStat(s32 value)
{
    if (value > 999)
        value = 999;
    else if (value < 1)
        value = 1;
    return value;
}

static inline void applyCharacterBoon(CharacterStats *stats, const CharacterGrowth *growth, u8 boon)
{
    s32 hpBonus, mpBonus;
    switch (boon) {
    case 1:
        hpBonus = growth->maxima.hp * 5u / 100u;
        mpBonus = growth->maxima.mp * 5u / 100u;
        break;
    case 2:
        hpBonus = growth->maxima.hp * 8u / 100u;
        mpBonus = growth->maxima.mp * 8u / 100u;
        break;
    case 3:
        hpBonus = growth->maxima.hp * 10u / 100u;
        mpBonus = growth->maxima.mp * 10u / 100u;
        break;
    default:
        return;
    }
    if (hpBonus == 0)
        hpBonus = 1;
    if (mpBonus == 0)
        mpBonus = 1;
    if (hpBonus > 0)
        stats->hp += hpBonus;
    if (mpBonus > 0)
        stats->mp += mpBonus;
}

extern "C" void unitRecalculateEffectiveStats(CharacterStatWork *work)
{
    if (work == NULL)
        return;

    work->effective = work->base;
    work->effective.strength = clampCharacterStat(work->effective.strength + work->bonuses.strength);
    work->effective.dexterity = clampCharacterStat(work->effective.dexterity + work->bonuses.dexterity);
    work->effective.agility = clampCharacterStat(work->effective.agility + work->bonuses.agility);
    work->effective.luck = clampCharacterStat(work->effective.luck + work->bonuses.luck);
    work->effective.magic = clampCharacterStat(work->effective.magic + work->bonuses.magic);

    CharacterGrowth growth;
    growth = FUN_003c1cfc(work->id);
    FUN_003c1ab4(work->level, &work->effective, &growth);
    work->effective.hp += work->bonuses.hp;
    work->effective.mp += work->bonuses.mp;
    applyCharacterBoon(&work->effective, &growth, work->boon);
    FUN_002dada4(&work->effective, work->limits, 8);
    if (work->currentHP > work->effective.hp)
        work->currentHP = work->effective.hp;
    if (work->currentMP > work->effective.mp)
        work->currentMP = work->effective.mp;
}
