/* NON_MATCHING: the follow-up pair now loads with ldrd like retail; remaining diff is the register assignment of options/target/value (r6/r7/r8 vs r9/r6/r7) and where the entry is copied. */
#include "battle/BtlMainAccess.h"
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

BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, s32 listedId);

/* Queues a target action and an optional follow-up for its corresponding battle unit. */
u32 FUN_004fb5dc(u32 actorId, u32 options, u32 value, ReflectTargetA *target, u64 followup)
{
    ReflectAction *request = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(actorId), 0, options);
    request->kind = 0x35;
    request->target = reinterpret_cast<u32>(target);
    request->value = value;
    s32 followupActor = static_cast<s32>(followup);
    s32 followupValue = static_cast<s32>(followup >> 32);
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), target->listedId);
    if (followupActor >= 0 && entry != NULL && followupValue >= 0) {
        request = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(followupActor), 0, options);
        request->kind = 7;
        request->wordValues.unk18 = reinterpret_cast<u32>(entry);
        request->value = followupValue;
    }
    return 1;
}
}
