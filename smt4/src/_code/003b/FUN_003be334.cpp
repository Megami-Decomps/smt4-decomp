/* NON_MATCHING: readable rebuild from asm of the battle damage/value estimate for a skill or an item-like record; armcc here orders the local action-info block and the spilled arguments differently (retail pushes r0-r3 and d0 and reloads the stack arguments), and the 0.01f/25% scaling and the random bonus are scheduled differently. */
#include "common.h"

/* The skill record (only the fields read here). */
struct SkillRecord {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ u16 power;
    /* 0x2E */ u8 unk2E[0xA];
    /* 0x38 */ u32 flags;          /* 0x7F0000: cannot be used; 0x8000: halves the target's HP */
};

/* The item-like record (only the fields read here). */
struct ValueRecord {
    /* 0x00 */ u8 unk00[0x66];
    /* 0x66 */ u16 fixedValue;
    /* 0x68 */ u8 unk68;
    /* 0x69 */ u8 percent;         /* percent of the target's stat */
};

/* The action a battle entry is about to use, as FUN_00247478 fills it. */
struct ActionInfo {
    /* 0x00 */ u8 unk00[0x1D];
    /* 0x1D */ u8 flagA;
    /* 0x1E */ u8 flagB;
    /* 0x1F */ s8 rowArg;
    /* 0x20 */ s8 columnArg;
    /* 0x21 */ u8 unk21[3];
};

/* A battle entry (only the fields read here). */
struct BattleEntry {
    /* 0x000 */ u8 unk000[0x1B8];
    /* 0x1B8 */ s16 maxHp;
    /* 0x1BA */ u8 unk1BA[0xC];
    /* 0x1C6 */ u16 flags;         /* 8: value capped at 1, 0x80: takes 25% more, 0x200: deals 25% less */
};

struct BattleState {
    /* 0x0000 */ u8 unk0000[0xE0];
    /* 0x00E0 */ u32 flagsE0;
    /* 0x00E4 */ u8 unk00E4[0x43BC];
    /* 0x44A0 */ u32 flags44A0;
    /* 0x44A4 */ u8 unk44A4[8];
    /* 0x44AC */ u32 flags44AC;
};

struct UnitStats {
    /* 0x00 */ u8 unk00[0xEE];
    /* 0xEE */ u16 stat;
};

struct UnitRecord {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u16 stat;
};

extern "C" {
BattleState *btlGetMainState(void);
SkillRecord *dataTable40FindById(s32 id);
ValueRecord *dataTable08Sub1GetRecord(s32 id);
BattleEntry *btlMainFindEntryByListedId(BattleState *battle, s32 id);
void FUN_00247478(ActionInfo *info, BattleState *battle, BattleEntry *entry);
s32 FUN_003be918(s32 skill, s32 attacker, s32 target, s32 column, s32 row, f32 power, f32 multiplier);
UnitStats *FUN_0027da30(BattleState *battle, s32 id);
UnitRecord *gameGetUnitRecord(s32 index);
s32 flagWordTestBit(void *record, u32 bit);
s32 randRange(u32 limit);

/* Estimates the effect of a skill (`wantDamage`) or of an item-like record on `target` by
 * `attacker`: the damage with its random bonus for a skill, or the value change (a stat percentage
 * or a fixed number) for the record. Returns -1 when nothing applies. */
s32 FUN_003be334(s32 wantDamage, s32 skillId, u32 unused, s32 recordId, f32 multiplier, s32 attacker, s32 target)
{
    BattleState *battle = btlGetMainState();
    SkillRecord *skill = dataTable40FindById(skillId);
    ValueRecord *record = dataTable08Sub1GetRecord(recordId);
    BattleEntry *attackerEntry = btlMainFindEntryByListedId(battle, attacker);
    BattleEntry *targetEntry = btlMainFindEntryByListedId(battle, target);
    ActionInfo info;
    FUN_00247478(&info, battle, attackerEntry);
    s32 damage = -1;
    s32 value = -1;
    bool scaled = true;
    if (!info.flagB && info.flagA)
        return -1;
    if (skill != NULL) {
        if (skill->flags & 0x7F0000)
            return -1;
        f32 power = (f32)skill->power;
        if (skill->kind == 1) {
            if (skill->flags & 0x8000) {
                scaled = false;
                damage = targetEntry->maxHp / 2;
            } else if (info.flagB) {
                damage = FUN_003be918(skillId, attacker, target, info.columnArg, info.rowArg, power, multiplier);
                if (info.flagB) {
                    damage /= 3;
                    if (damage > 100)
                        damage = 100;
                }
                if (attackerEntry->flags & 0x200)
                    damage -= damage * 25 / 100;
                if (targetEntry->flags & 0x80)
                    damage += damage * 25 / 100;
            }
        }
        if (!(battle->flags44A0 & 0x40000) && scaled && damage > 0 && !(battle->flags44AC & 0x40) &&
            !(battle->flagsE0 & 0x20000000))
            damage += randRange(15);
        if (wantDamage == 0)
            return value;
        if (info.flagB && damage > targetEntry->maxHp)
            damage = targetEntry->maxHp;
        return damage;
    }
    if (record == NULL)
        return -1;
    if (record->fixedValue != 0)
        value = record->fixedValue;
    if (record->percent != 0) {
        s32 base = target < 109 ? FUN_0027da30(battle, target)->stat : gameGetUnitRecord(target - 109)->stat;
        value = (s32)((f32)(s16)(base * record->percent) * 0.01f);
    }
    if (wantDamage != 0)
        return damage;
    bool capped = target < 109 ? (targetEntry->flags & 8) != 0 : flagWordTestBit(gameGetUnitRecord(target - 109), 3) != 0;
    if (capped && value > 1)
        value = 1;
    return value;
}

} /* extern "C" */
