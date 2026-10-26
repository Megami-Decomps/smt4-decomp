/* NON_MATCHING: retail's identity FP products/addition are omitted and response-mask loads differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleSkillResponseMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/Shard004B.h"

extern "C" {
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, s32 id);
ScaledRecordValues *gameGetSlotRecord(s32 slot);
s32 recordGetScaledMaximum(const ScaledRecordValues *record);
s32 FUN_004c55e4(s32 unit, u32 skill);
f32 FUN_004c28b4(s32 unit, s32 kind);


s32 FUN_004c2aec(u32 skill, s32 sourceId, s32 targetId, s32 percentage, f32 amount)
{
    BtlCombatantEntryA *source = FUN_003f0e20(btlGetMainState(), sourceId);
    BtlCombatantEntryA *target = FUN_003f0e20(btlGetMainState(), targetId);
    if (percentage > 0) {
        s32 bonus;
        if (target) {
            if (source && !(DAT_005713f0.affinity & source->flags) &&
                (DAT_005713f0.affinity & target->flags)) {
                bonus = target->maxHp * percentage / 200;
            } else {
                bonus = target->maxHp * percentage / 100;
            }
        } else {
            bonus = recordGetScaledMaximum(gameGetSlotRecord(targetId - 109)) * percentage / 100;
        }
        if (bonus <= 0) {
            bonus = 1;
        }
        amount += (f32)bonus;
    }
    s32 bonusPercentage = FUN_004c55e4(sourceId, skill);
    f32 multiplier = FUN_004c28b4(sourceId, 25);
    amount *= multiplier;
    if (bonusPercentage > 0) {
        amount = (1.0f + (f32)bonusPercentage * 0.01f) * amount;
    }
    if (source && target && !(DAT_005713f0.affinity & source->flags) &&
        (DAT_005713f0.affinity & target->flags) && (s32)amount > 9999) {
        amount = 9999.0f;
    }
    return (s32)amount;
}
}
