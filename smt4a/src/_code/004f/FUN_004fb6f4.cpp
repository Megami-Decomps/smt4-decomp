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

/* Queues a target action with an integer payload and an optional battle-unit follow-up. */
u32 FUN_004fb6f4(u32 actorId, u32 options, ReflectTargetA *target, u32 value, u32 parameter,
    s32 followupActor, s32 followupValue)
{
    ReflectAction *request = btlReflectQueueTargetAction(0x36, actorId, options, target, value);
    request->parameter = parameter;
    if (followupActor >= 0) {
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), target->listedId);
        if (entry != NULL && followupValue >= 0) {
            btlReflectQueueKind7(followupActor, options, entry, followupValue);
        }
    }
    return 1;
}

} /* extern "C" */
