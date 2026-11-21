/* NON_MATCHING: 36 lines; uses real FUN_0047effc prototype and btlReflectQueueTransitionPair body, remaining: pair-call argument scheduling and flag-check register choice. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"
#include "battle/BattleHelpers_VariantB.h"

extern "C" {
u32 FUN_0047effc(u32, u32, s32);
}

/* Same body as btlReflectQueueTransitionPair (inlined across both branches here). */
static u32 reflectQueueTransitionPair(s32 actor, u32 options, u32 target, u32 parameter,
    s32 actorStep, u32 firstValue, u32 secondValue, s32 enabled)
{
    reflectCreateKind2b(actor, options, target, parameter, firstValue, enabled);
    reflectCreateKind2c(actor + actorStep, options, target, 0, secondValue, enabled);
    return 1;
}

/* Queues the combatant's 0x2b/0x2c reflect transition pair after notifying FUN_0047effc. */
extern "C" u32 FUN_004fd3f0(s32 actor, u32 unit, u32 target)
{
    if (btlScriptUnitHasFlags(btlGetMainState()) == 0) {
        FUN_0047effc(0, unit, actor);
        return reflectQueueTransitionPair(actor, unit, target, 0, 0, 0, 0x10, 0);
    }
    FUN_0047effc(0, unit, actor);
    return reflectQueueTransitionPair(actor, unit, target, 0, 0, 0, 0, 0);
}
