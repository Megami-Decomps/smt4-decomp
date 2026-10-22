/* NON_MATCHING: The target, value, and optional follow-up arguments use different saved registers and stack-pair loads. */
#include "battle/btlReflect.h"
#include "shard/W4_W4Match2_BtlUnits.h"

namespace {
struct ReflectTarget {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 listedId;
};
}
extern "C" {
ReflectAction *FUN_0022699c(ReflectContext *context, s16 actorId, s32 secondaryId, u32 options);
BtlState *btlGetMainState(void);
BtlUnitEntry *btlMainFindEntryByListedId(BtlState *state, s32 listedId);

/* Queues the target action and, when requested, a follow-up action for its listed battle unit. */
u32 FUN_003dda54(u32 actorId, u32 options, u32 value, ReflectTarget *target, s32 followupActor, s32 followupValue)
{
    ReflectAction *request = FUN_0022699c(g_btlActionReflect, static_cast<s16>(actorId), 0, options);
    request->kind = 0x2B;
    request->target = reinterpret_cast<u32>(target);
    request->value = value;
    if (followupActor >= 0) {
        BtlUnitEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), target->listedId);
        if (entry != NULL && followupValue >= 0) {
            request = FUN_0022699c(g_btlActionReflect, static_cast<s16>(followupActor), 0, options);
            request->kind = 6;
            request->wordValues.unk18 = reinterpret_cast<u32>(entry);
            request->value = followupValue;
        }
    }
    return 1;
}
}
