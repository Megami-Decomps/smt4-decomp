/* NON_MATCHING: same operations and call order as retail; retail keeps the 0.0f term in s22, the attacker/target ids in r6/r8 and the skill bonus in r8 across the attack-info copy, and moves base/rate with one vmov.f64; the build allocates r6-r9/fp and s17-s21 differently. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BattleBalanceRow.h"
#include "battle/BtlGlobals.h"

// What btlEntryBuildSummary collects about an attack (0x24 bytes).
struct AttackInfo {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 supportedValue;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u16 powerPercent;
    /* 0x0a */ u8 unk0a[4];
    /* 0x0e */ u8 resistance[0x16];  // percent per resistance slot, 0: not set
};

extern "C" {
f32 FUN_0022a690(s32 kind, f32 value);
f32 FUN_003be670(s32 attacker, s32 target);
AttackInfo btlEntryBuildSummary(BtlMainState *state, BtlEntry *entry);
void selectionCopySupportedValue(u16 value, u32 *output);
void *skillDataFindById(void *player);
u32 playerGetSkillRank(void *player);
s32 FUN_00283ebc(void *record, u32 rank, s32 flag);

// Damage of an attack by `attackerId` on `targetId`: the magic-scaled base power through the combatants' stat
// factors, the attack's power percent, the skill bonus and the target's resistance for the attack.
s32 FUN_003be918(void *player, s32 attackerId, s32 targetId, s32 first, f32 base, f32 rate, s32 second)
{
    f32 zero = 0.0f;
    f32 sideFactor = 1.0f;
    BtlMainState *state = btlGetMainState();
    BtlUnitData *attacker = btlFindEntryBlockByMemberId(state, attackerId);
    BtlUnitData *target = btlFindEntryBlockByMemberId(state, targetId);
    f32 magic = (f32)attacker->magic;
    if (attacker->flags & 4) {
        sideFactor = 0.8f;
    }
    f32 attackerStat = FUN_0022a690(8, (f32)attackerId);
    f32 targetStat = FUN_0022a690(10, (f32)targetId);
    f32 stats = attackerStat * targetStat * FUN_003be670(attackerId, targetId);

    AttackInfo info = btlEntryBuildSummary(state, btlMainFindEntryByListedId(state, attackerId));
    u32 supported = 0;
    selectionCopySupportedValue(info.supportedValue, &supported);

    s32 skillBonus = 0;
    if ((btlMainFindEntryByListedId(btlGetMainState(), attackerId)->flags & 2) != 0) {
        void *record = skillDataFindById(player);
        if (record != NULL) {
            skillBonus = FUN_00283ebc(record, playerGetSkillRank(player), 1);
        }
    }

    f32 damage = (base + magic * 4.5f) * 0.33333334f * rate * stats * sideFactor * ((f32)info.powerPercent * 0.01f) /
                     ((f32)(first + second) * 0.5f) +
                 zero + (f32)skillBonus;
    if ((state->battleFlags & 0x40000) == 0) {
        if (attacker->flags & 4) {
            if ((target->flags & 4) != 0) {
                damage = FUN_0023ea94()->scale0 * damage;
            } else {
                damage = FUN_0023ea94()->scale2 * damage;
            }
        } else if ((target->flags & 4) != 0) {
            damage = FUN_0023ea94()->scale0 * damage;
        } else {
            damage = FUN_0023ea94()->scale2 * damage;
        }
    }
    u32 resistance = info.resistance[target->affinityIndex];
    if (resistance != 0) {
        damage = damage * ((f32)resistance * 0.01f);
    }
    return (s32)damage;
}
}
