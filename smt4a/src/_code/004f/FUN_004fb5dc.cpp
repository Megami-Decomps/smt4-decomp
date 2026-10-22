/* NON_MATCHING: Optional follow-up parameters use an LDM pair and different saved registers instead of retail's LDRD pair. */
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

/* Queues a target action and an optional follow-up for its corresponding battle unit. */
u32 FUN_004fb5dc(u32 actorId, u32 options, u32 value, ReflectTargetA *target, s32 followupActor, s32 followupValue)
{
    ReflectAction *request = FUN_004102d8(g_btlActionReflect, static_cast<s16>(actorId), 0, options);
    request->kind = 0x35;
    request->target = reinterpret_cast<u32>(target);
    request->value = value;
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), target->listedId);
    if (followupActor >= 0 && entry != NULL && followupValue >= 0) {
        request = FUN_004102d8(g_btlActionReflect, static_cast<s16>(followupActor), 0, options);
        request->kind = 7;
        request->wordValues.unk18 = reinterpret_cast<u32>(entry);
        request->value = followupValue;
    }
    return 1;
}
}
