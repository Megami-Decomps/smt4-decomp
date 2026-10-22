/* NON_MATCHING: the stack follow-up pair loads with LDM into r5/r6 instead of retail's LDRD into r4/r5; callee-saved registers rotate accordingly. */
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

namespace {
struct ReflectTargetA {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 listedId;
};
}
extern "C" {
ReflectAction *FUN_004102d8(ReflectContext *context, s16 actorId, s32 secondaryId, u32 options);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, s32 listedId);

/* Queues a target action with an integer payload and an optional battle-unit follow-up. */
u32 FUN_004fb6f4(u32 actorId, u32 options, ReflectTargetA *target, u32 value, u32 parameter,
                          s32 followupActor, s32 followupValue)
{
    ReflectAction *request = FUN_004102d8(g_btlActionReflect, static_cast<s16>(actorId), 0, options);
    request->kind = 0x36;
    request->target = reinterpret_cast<u32>(target);
    request->value = value;
    request->parameter = parameter;
    if (followupActor >= 0) {
        BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), target->listedId);
        if (entry != NULL && followupValue >= 0) {
            request = FUN_004102d8(g_btlActionReflect, static_cast<s16>(followupActor), 0, options);
            request->kind = 7;
            request->wordValues.unk18 = reinterpret_cast<u32>(entry);
            request->value = followupValue;
        }
    }
    return 1;
}
}
