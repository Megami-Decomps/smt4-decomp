/* NON_MATCHING: 76 lines: the 999 clamps compare against 1000 where retail keeps 999 in r0 (and clamps the last
 * stat through a register copy), the skill words are copied without retail's vldm/vstm triple, and the upgrade
 * buffer and frame sit 8 bytes lower. The equipment id is read through a switch on the slot, as retail's jump
 * table does. */
#include "shard/W6_W6Match8_StatGrowth.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/PlayerRecordParts.h"
#include "code/Code004c_Smt4a.h"

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

/* Maximum HP, MP and the five stats. */
struct StatValues {
    /* 0x00 */ u16 hp;
    /* 0x02 */ u16 mp;
    /* 0x04 */ u16 stats[5];
};

/* A player's stat record. */
struct PlayerStats {
    union {
        /* 0x00 */ u16 equipment[7];
        /* 0x00 */ PlayerEquipment equipped;
    };
    /* 0x0E */ StatValues base;     /* without equipment */
    /* 0x1C */ StatValues total;    /* with equipment and growth applied */
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
void equipmentGetCappedUpgradeBonuses(u32 id, UpgradeBonuses *out);
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
    stats->total = stats->base;
    for (s32 slot = 0; slot < 7; slot++) {
        u32 id;
        switch (slot) {
        case 0:
            id = stats->equipped.weapon;
            break;
        case 1:
            id = stats->equipped.gun;
            break;
        case 2:
            id = stats->equipped.bullets;
            break;
        case 3:
            id = stats->equipped.head;
            break;
        case 4:
            id = stats->equipped.body;
            break;
        case 5:
            id = stats->equipped.legs;
            break;
        case 6:
            id = stats->equipped.accessory;
            break;
        }
        if (id == 0)
            continue;
        EquipmentRecordA *record = itemTableGetEquipmentRecord(id);
        if (record == NULL)
            continue;
        for (s32 i = 0; i < 5; i++)
            stats->total.stats[i] += record->statBonus[i];
        u16 recordHp = record->hpBonus;
        u16 recordMp = record->mpBonus;
        hpBonus += recordHp;
        mpBonus += recordMp;
        UpgradeBonuses upgrade;
        equipmentGetCappedUpgradeBonuses(id, &upgrade);
        for (s32 i = 0; i < 5; i++)
            stats->total.stats[i] += upgrade.stats[i];
        hpBonus = (s16)(upgrade.hp + hpBonus);
        mpBonus = (s16)(upgrade.mp + mpBonus);
    }
    {
        s32 value = (s16)stats->total.stats[0];
        if (value > 999)
            value = 999;
        else if (value < 1)
            value = 1;
        stats->total.stats[0] = (u16)value;
    }
    {
        s32 value = (s16)stats->total.stats[2];
        if (value > 999)
            value = 999;
        else if (value < 1)
            value = 1;
        stats->total.stats[2] = (u16)value;
    }
    {
        s32 value = (s16)stats->total.stats[3];
        if (value > 999)
            value = 999;
        else if (value < 1)
            value = 1;
        stats->total.stats[3] = (u16)value;
    }
    {
        s32 value = (s16)stats->total.stats[4];
        if (value > 999)
            value = 999;
        else if (value < 1)
            value = 1;
        stats->total.stats[4] = (u16)value;
    }
    {
        s32 value = (s16)stats->total.stats[1];
        if (value > 999)
            value = 999;
        else if (value < 1)
            value = 1;
        stats->total.stats[1] = (u16)value;
    }
    StatGrowthParameters parameters = playerGetGrowthParameters(0);
    FUN_004cc6a4(stats->level, &stats->total.hp, &parameters);
    s32 hpGrowth = stats->base.hp - FUN_003da998(1, &parameters);
    s32 mpGrowth = stats->base.mp - FUN_003daaf4(1, &parameters);
    stats->total.hp = stats->total.hp + hpGrowth + hpBonus;
    stats->total.mp = stats->total.mp + mpGrowth + mpBonus;
    GrowthExtra extra;
    extra.word = stats->extraWord;
    extra.vector[0] = stats->extraVector[0];
    extra.vector[1] = stats->extraVector[1];
    extra.vector[2] = stats->extraVector[2];
    EquipmentRecordA *last = itemTableGetEquipmentRecord(stats->equipment[6]);
    extra.special = last != NULL ? last->modifierId : 0;
    FUN_0034cb50(&stats->total.hp, &extra, 9);
    stats->hp = (s16)stats->hp > (s16)stats->total.hp ? stats->total.hp : stats->hp;
    stats->mp = (s16)stats->mp > (s16)stats->total.mp ? stats->total.mp : stats->mp;
}

} /* extern "C" */
