/* NON_MATCHING: actor, target and skill values occupy different saved registers; instruction shapes match. */
#include "battle/BtlMainAccess.h"
#include "battle/ActionEvaluation.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
extern "C" {
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 actor);
void FUN_003e8bb0(BattleActionEvaluation *result, BtlMainStateA *state, BtlCombatantEntryA *actor);
u32 FUN_004c8340(u32 actor, u32 target, u32 skill, s32 kind, s32 flags);
void kindIdStore(u32 skill, u32 *kind);
s32 FUN_004c0f74(BtlCombatantEntryA *actor, u32 kind);
f32 FUN_004c28b4(u32 actor, u32 skill);

// Combine the action's percentage and skill multiplier, flooring protected attacks at 100%.
f32 FUN_004c1598(u32 actorId, u32 targetId)
{
    f32 multiplier = 1.0f;
    BtlMainStateA *state = btlGetMainState();
    BtlCombatantEntryA *actor = FUN_003f0e20(btlGetMainState(), actorId);
    BattleActionEvaluation evaluation;
    FUN_003e8bb0(&evaluation, btlGetMainState(), actor);
    u16 skill = evaluation.skill;
    if ((u32)(evaluation.kind - 3) <= 7)
        return multiplier;
    u32 result = FUN_004c8340(actorId, targetId, skill, evaluation.kind, -1);
    s32 percentage = (u16)result;
    if ((result & 0x60000) && percentage == 0)
        percentage = 100;
    actor = FUN_003f0e20(state, actorId);
    u32 kind;
    kindIdStore(skill, &kind);
    if (FUN_004c0f74(actor, kind & 0xFF)) {
        if (percentage < 100) {
            // This state flag is past the described battle-state fields used here.
            struct MinimumDamageView { u8 prefix[0x4BC0]; u32 applied; };
            typedef char MinimumDamageOffset[offsetof(MinimumDamageView, applied) == 0x4BC0 ? 1 : -1];
            ((MinimumDamageView *)state)->applied = 1;
            percentage = 100;
        }
    } else {
        // The per-kind byte table lies inside the combatant's opaque stats area.
        struct KindFloorView { u8 prefix[0x2F5]; u8 enabled[1]; };
        if (((KindFloorView *)actor)->enabled[kind] && percentage < 100)
            percentage = 100;
    }
    multiplier = (f32)percentage * 0.01f;
    return FUN_004c28b4(actorId, skill) * multiplier;
}
}
