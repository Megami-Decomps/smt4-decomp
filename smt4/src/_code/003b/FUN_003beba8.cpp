/* NON_MATCHING: float register allocation differs (retail keeps scale in s16, power in s17) and the 0x44a0 flag word is addressed through a separate add. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BattleBalanceRow.h"
#include "battle/BtlGlobals.h"

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

f32 FUN_0022a690(s32 kind, f32 value);
f32 FUN_003be670(s32 attacker, s32 defender);
AffinityRates btlEntryBuildSummary(BtlMainState* main, BtlEntry* entry);
void selectionCopySupportedValue(u32 id, u32* out);
u32* skillDataFindById(s32 id);
s32 playerGetSkillRank(s32 id);
s32 FUN_00283ebc(u32* record, s32 rank, s32 mode);

// Computes a damage amount for an attack by `attackerId` on `defenderId` from
// the attacker's stats, the party's skill rank bonus and the defender's affinity.
s32 FUN_003beba8(s32 partyId, s32 mode, s32 attackerId, s32 defenderId, f32 power, f32 modifier,
                 s32 baseStat, s32 bonusA, s32 bonusB)
{
    f32 adjust = 0.0f;
    f32 scale = 1.0f;
    BtlMainState* main = btlGetMainState();
    BtlUnitData* attacker = btlFindEntryBlockByMemberId(main, attackerId);
    BtlUnitData* defender = btlFindEntryBlockByMemberId(main, defenderId);
    if (attacker->flags & 4) scale = 0.8f;

    f32 dexterity = (f32)attacker->dexterity;
    f32 strength = (f32)attacker->strength;
    f32 rateA = FUN_0022a690(7, (f32)attackerId);
    f32 rateB = FUN_0022a690(10, (f32)defenderId);
    f32 base = rateA * rateB * FUN_003be670(attackerId, defenderId);

    AffinityRates rates = btlEntryBuildSummary(main, btlMainFindEntryByListedId(main, attackerId));
    u32 supported = 0;
    selectionCopySupportedValue(rates.skillId, &supported);

    s32 rankBonus = 0;
    if ((btlMainFindEntryByListedId(btlGetMainState(), attackerId)->flags & 2) != 0) {
        u32* record = skillDataFindById(partyId);
        if (record != NULL) rankBonus = FUN_00283ebc(record, playerGetSkillRank(partyId), 1);
    }

    f32 percent = (f32)(u32)rates.critRate * 0.01f;
    f32 divisor = (f32)(bonusA + bonusB) * 0.5f;
    f32 damage;
    if (partyId > 0) {
        f32 stat = dexterity + strength * 0.5f;
        damage = (power + stat * 4.5f) * 0.33333334f * modifier * base * scale * percent / divisor;
    } else if (mode != 1) {
        damage = (dexterity + (f32)baseStat) * 0.33333334f * power * modifier * base * scale * percent;
    } else {
        damage = (strength + (f32)baseStat) * 0.33333334f * power * modifier * base * scale * percent;
    }
    damage = damage + adjust + (f32)rankBonus;

    if ((main->battleFlags & 0x40000) == 0) {
        if (attacker->flags & 4) {
            if (defender->flags & 4) {
                adjust = FUN_0023ea94()->scale0;
            } else {
                adjust = FUN_0023ea94()->scale2;
            }
        } else if (defender->flags & 4) {
            adjust = FUN_0023ea94()->scale0;
        } else {
            adjust = FUN_0023ea94()->scale2;
        }
        damage = adjust * damage;
    }
    u32 resist = rates.percent[defender->affinityIndex];
    if (resist != 0) damage = damage * ((f32)resist * 0.01f);
    return (s32)damage;
}

} /* extern "C" */
