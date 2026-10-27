/* NON_MATCHING: same control flow and operations as retail; 64-bit mask loads/ands are ordered differently and the effect counter reload sits after the compare. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

/* The queued capacity-change action (the common ReflectAction layout, only the fields used here). */
struct CapacityAction {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[0x1F];
    /* 0x24 */ s16 first;
    /* 0x26 */ s16 second;
    /* 0x28 */ s32 value;
};
typedef char CapacityActionOffsetCheck[offsetof(CapacityAction, value) == 0x28 ? 1 : -1];

/* The effect counter lies beyond the published BtlMainStateA extent. */
struct BattleEffectStateView {
    BtlMainStateA battle;
    /* 0x4CF0 */ u8 unk4CF0[0x7C];
    /* 0x4D6C */ s32 effectCounter; /* hits left for the running effect */
};
typedef char BattleEffectCounterOffsetCheck[offsetof(BattleEffectStateView, effectCounter) == 0x4D6C ? 1 : -1];

/* The battle context handed to action handlers: the battle state pointer is its first word. */
struct BattleActionContext {
    BattleEffectStateView *state;
};

/* The constant status masks stored behind g_btlActionReflect's context pointer. */
struct BtlStatusMasks {
    /* 0x00 */ void *context;
    /* 0x04 */ u8 unk04[0x54];
    /* 0x58 */ u64 entryMask;
    /* 0x60 */ u64 blockedMask;
    /* 0x68 */ u8 unk68[0x18];
    /* 0x80 */ u64 stoppedMask;
    /* 0x88 */ u8 unk88[0x10];
    /* 0x98 */ u64 expiredMask;
    /* 0xA0 */ u64 depletedMask;
    /* 0xA8 */ u64 stateBlockMask;
    /* 0xB0 */ u8 unkB0[0x10];
    /* 0xC0 */ u64 markerBlockMask;
};
typedef char BtlStatusMasksOffsetCheck[
    offsetof(BtlStatusMasks, entryMask) == 0x58 && offsetof(BtlStatusMasks, markerBlockMask) == 0xC0 && offsetof(BtlStatusMasks, stateBlockMask) == 0xA8 ? 1 : -1];

extern "C" {
extern BtlStatusMasks g_btlActionReflect;
void FUN_003ebc08(BtlMainStateA *state, s32 mode);
void FUN_003e7ef0(BtlMainStateA *state);

/* Applies a capacity-change action to the battle state and, once the effect's counter runs out, marks the state flags. */
void FUN_00410410(BattleActionContext *context, const CapacityAction *action)
{
    if ((g_btlActionReflect.markerBlockMask & context->state->battle.markerMasks.bits) != 0)
        return;
    if (!((g_btlActionReflect.stateBlockMask & context->state->battle.stateFlags64.bits) == 0 && action->kind == 0x27))
        return;
    s32 capacity = action->first + context->state->battle.targetCapacity.counts[0];
    if (capacity < 0)
        capacity = 0;
    context->state->battle.targetCapacity.counts[0] = capacity;
    capacity = action->second + context->state->battle.targetCapacity.counts[1];
    if (capacity < 0)
        capacity = 0;
    context->state->battle.targetCapacity.counts[1] = capacity;
    if (action->value != 0)
        FUN_003ebc08(&context->state->battle, 0);
    if (context->state->effectCounter <= 0)
        return;
    u64 flags = context->state->battle.stateFlags64.bits;
    if ((g_btlActionReflect.blockedMask & flags) != 0 || (g_btlActionReflect.stoppedMask & flags) != 0)
        return;
    if (!(!(!((flags & g_btlActionReflect.depletedMask) != 0)))) {
        if (context->state->battle.targetCapacity.counts[0] != 0 || context->state->battle.targetCapacity.counts[1] != 0) {
            s32 lowest = action->first;
            if (action->first >= action->second)
                lowest = action->second;
            s32 remaining = lowest + context->state->effectCounter;
            context->state->effectCounter = remaining;
            if (remaining > 0)
                return;
            context->state->battle.stateFlags64.bits |= g_btlActionReflect.expiredMask;
        } else {
            s32 worst = action->first;
            if (worst > -4)
                worst = action->second;
            if (worst > -4)
                flags |= g_btlActionReflect.expiredMask;
            else
                flags |= g_btlActionReflect.depletedMask;
            context->state->battle.stateFlags64.bits = flags;
        }
        context->state->effectCounter = 0;
    } else {
        context->state->effectCounter = 0;
    }
    context->state->battle.entries[54].flags |= g_btlActionReflect.entryMask;
    FUN_003e7ef0(&context->state->battle);
}
}
