#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

namespace {
struct ReflectTargetA {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 listedId;
};
}
extern "C" {

/* Queues a target action and an optional follow-up for its corresponding battle unit. */
u32 FUN_004fb5dc(u32 actorId, u32 options, u32 value, ReflectTargetA *target,
    s32 followupActor, s32 followupValue)
{
    btlReflectQueueTargetAction(0x35, actorId, options, target, value);
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), target->listedId);
    if (followupActor >= 0 && entry != NULL && followupValue >= 0) {
        btlReflectQueueKind7(followupActor, options, entry, followupValue);
    }
    return 1;
}

} /* extern "C" */
