/* NON_MATCHING: retail dispatches the skill kind through a two-entry jump table (explicit empty cases 2-8, as the
 * sibling FUN_003bdab0 lists them, give that table here) and does not thread case 0's cleared `scaled` past the random
 * bonus test (this build branches straight past it); with the explicit cases the threading costs more rows (52 rows). */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/ConsumableRecord.h"
#include "gamedata/UnitRecordAccess.h"

/* The skill record (only the fields read here). */
struct SkillRecord {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ u16 power;
    /* 0x2E */ u8 unk2E[0xA];
    /* 0x38 */ u32 flags;          /* 0x7F0000: cannot be used; 0x8000: halves the target's HP */
};

/* The action a battle entry is about to use, as btlEntryBuildSummary fills it. */
struct ActionInfo {
    /* 0x00 */ u8 unk00[0x1D];
    /* 0x1D */ u8 flagA;
    /* 0x1E */ u8 flagB;
    /* 0x1F */ s8 rowArg;
    /* 0x20 */ s8 columnArg;
    /* 0x21 */ u8 unk21[3];
};


extern "C" {
void btlEntryBuildSummary(ActionInfo *info, BtlMainState *battle, BtlEntry *entry);
s32 FUN_003be918(s32 skill, s32 attacker, s32 target, s32 column, s32 row, f32 power, f32 multiplier);
s32 flagWordTestBit(void *record, u32 bit);
s32 randRange(u32 limit);

/* Estimates the effect of a skill (`wantDamage`) or of an item-like record on `target` by
 * `attacker`: the damage with its random bonus for a skill, or the value change (a stat percentage
 * or a fixed number) for the record. Returns -1 when nothing applies. */
s32 FUN_003be334(s32 wantDamage, s32 skillId, u32 unused, s32 recordId, f32 multiplier, s32 attacker, s32 target)
{
    BtlMainState *battle = btlGetMainState();
    SkillRecord *skill = reinterpret_cast<SkillRecord *>(skillDataFindById(skillId));
    ConsumableRecord *record = itemTableGetItemRecord(recordId);
    BtlEntry *attackerEntry = btlMainFindEntryByListedId(battle, attacker);
    BtlEntry *targetEntry = btlMainFindEntryByListedId(battle, target);
    ActionInfo info;
    btlEntryBuildSummary(&info, battle, attackerEntry);
    s32 damage = -1;
    s32 value = -1;
    bool scaled = true;
    if (!info.flagB && info.flagA)
        return damage;
    if (skill != NULL) {
        if (skill->flags & 0x7F0000)
            return damage;
        f32 power = (f32)skill->power;
        switch (skill->kind) {
        case 1:
            if ((skill->flags & 0x8000) == 0) {
                if (info.flagB) {
                    damage = FUN_003be918(skillId, attacker, target, info.columnArg, info.rowArg, power, multiplier);
                    if (info.flagB) {
                        damage /= 3;
                        if (damage > 100)
                            damage = 100;
                    }
                    if (attackerEntry->data.statusFlags & 0x200)
                        damage -= damage * 25 / 100;
                    if (targetEntry->data.statusFlags & 0x80)
                        damage += damage * 25 / 100;
                }
                break;
            }
            /* fall through: the skill halves the target's HP */
        case 0:
            scaled = false;
            damage = targetEntry->data.mp / 2;
            break;
        }
        if (!(battle->battleMask & 0x40000) && scaled && damage > 0 && !(battle->editorMask & (0x40ULL << 32)) &&
            !(battle->encounter.flags & 0x20000000))
            damage += randRange(15);
        if (wantDamage == 0)
            return value;
        if (info.flagB && damage > targetEntry->data.mp)
            damage = targetEntry->data.mp;
        return damage;
    }
    if (record == NULL)
        return value;
    if (record->healMp != 0)
        value = record->healMp;
    if (record->curesMp != 0) {
        if (target < 109)
            value = (s32)((f32)((s16)btlFindEntryBlockByMemberId(battle, target)->maxMp * record->curesMp) * 0.01f);
        else
            value = (s32)((f32)((s16)gameGetUnitRecord(target - 109)->maxMp * record->curesMp) * 0.01f);
    }
    if (wantDamage != 0)
        return damage;
    if (target < 109) {
        if ((targetEntry->data.statusFlags & 8) != 0 && value > 1)
            value = 1;
    } else if (flagWordTestBit(gameGetUnitRecord(target - 109), 3) != 0 && value > 1) {
        value = 1;
    }
    return value;
}

} /* extern "C" */
