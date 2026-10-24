/* NON_MATCHING: float register allocation differs (retail keeps scale in s16, power in s17) and the 0x44a0 flag word is addressed through a separate add. */
#include "common.h"

struct BattleMain {
    u8 unk0000[0x44a0];
    u32 flags;          // 0x44a0, bit 18: skip the side multiplier
};

// Combatant record: only the fields the damage formula reads.
struct BattleCombatant {
    u8 flags;           // 0x00, bit 2: boosted/charged side
    u8 unk01[0xef];
    s16 strength;       // 0xf0
    s16 magic;          // 0xf2
    u8 unkF4[0x57];
    u8 affinityIndex;   // 0x14b
};

struct BattleListEntry;

// Per-affinity rates (percent) of an attacker, by value as retail copies it.
struct AffinityRates {
    u8 unk00[2];
    u16 skillId;        // 0x02
    u8 unk04[4];
    u16 critRate;       // 0x08
    u8 unk0a[4];
    u8 percent[22];     // 0x0e
};

extern "C" {

BattleMain* btlGetMainState(void);
BattleCombatant* FUN_0027da30(BattleMain* main, s32 id);
BattleListEntry* btlMainFindEntryByListedId(BattleMain* main, s32 id);
f32 FUN_0022a690(s32 kind, f32 value);
f32 FUN_003be670(s32 attacker, s32 defender);
AffinityRates FUN_00247478(BattleMain* main, BattleListEntry* entry);
void selectionCopySupportedValue(u32 id, u32* out);
u32* dataTable40FindById(s32 id);
s32 playerGetSkillRank(s32 id);
s32 FUN_00283ebc(u32* record, s32 rank, s32 mode);
f32* FUN_0023ea94(void);

// Computes a damage amount for an attack by `attackerId` on `defenderId` from
// the attacker's stats, the party's skill rank bonus and the defender's affinity.
s32 FUN_003beba8(s32 partyId, s32 mode, s32 attackerId, s32 defenderId, f32 power, f32 modifier,
                 s32 baseStat, s32 bonusA, s32 bonusB)
{
    f32 adjust = 0.0f;
    f32 scale = 1.0f;
    BattleMain* main = btlGetMainState();
    BattleCombatant* attacker = FUN_0027da30(main, attackerId);
    BattleCombatant* defender = FUN_0027da30(main, defenderId);
    if (attacker->flags & 4) scale = 0.8f;

    f32 magic = (f32)attacker->magic;
    f32 strength = (f32)attacker->strength;
    f32 rateA = FUN_0022a690(7, (f32)attackerId);
    f32 rateB = FUN_0022a690(10, (f32)defenderId);
    f32 base = rateA * rateB * FUN_003be670(attackerId, defenderId);

    AffinityRates rates = FUN_00247478(main, btlMainFindEntryByListedId(main, attackerId));
    u32 supported = 0;
    selectionCopySupportedValue(rates.skillId, &supported);

    s32 rankBonus = 0;
    if ((*(u32*)btlMainFindEntryByListedId(btlGetMainState(), attackerId) & 2) != 0) {
        u32* record = dataTable40FindById(partyId);
        if (record != NULL) rankBonus = FUN_00283ebc(record, playerGetSkillRank(partyId), 1);
    }

    f32 percent = (f32)(u32)rates.critRate * 0.01f;
    f32 divisor = (f32)(bonusA + bonusB) * 0.5f;
    f32 damage;
    if (partyId > 0) {
        f32 stat = magic + strength * 0.5f;
        damage = (power + stat * 4.5f) * 0.33333334f * modifier * base * scale * percent / divisor;
    } else if (mode != 1) {
        damage = (magic + (f32)baseStat) * 0.33333334f * power * modifier * base * scale * percent;
    } else {
        damage = (strength + (f32)baseStat) * 0.33333334f * power * modifier * base * scale * percent;
    }
    damage = damage + adjust + (f32)rankBonus;

    if ((main->flags & 0x40000) == 0) {
        if (attacker->flags & 4) {
            if (defender->flags & 4) {
                adjust = FUN_0023ea94()[0];
            } else {
                adjust = FUN_0023ea94()[2];
            }
        } else if (defender->flags & 4) {
            adjust = FUN_0023ea94()[0];
        } else {
            adjust = FUN_0023ea94()[2];
        }
        damage = adjust * damage;
    }
    u32 resist = rates.percent[defender->affinityIndex];
    if (resist != 0) damage = damage * ((f32)resist * 0.01f);
    return (s32)damage;
}

} /* extern "C" */
