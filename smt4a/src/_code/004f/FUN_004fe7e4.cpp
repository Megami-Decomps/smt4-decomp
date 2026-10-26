/* NON_MATCHING: action-building stack temporaries and cold branch placement differ; actor sign-extension and float payload recovered. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {


// Queue changes requested by active battle roster records, clearing each pending flag.
u32 FUN_004fe7e4(s32 actorId, u32 argument, u32 duration)
{
    BtlMainStateA *state = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA *record = &state->roster[index];
        u32 flags = record->render.flags;
        if ((flags & 1) && (flags & 2) && (flags & 0x10000)) {
            if (record->render.value6c == 0x4C4C4CFF) {
                f32 parameter = *(const f32 *)&record->render.value70;
                ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, argument);
                action->flagView.flags |= 4;
                action->target = (u32)record;
                action->kind = 0x2B;
                action->value = duration;
                action->parameterScalar = parameter;
            } else {
                u32 parameter = 0xFF;
                ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, argument);
                action->flagView.flags |= 4;
                action->target = (u32)record;
                action->kind = 0x2C;
                action->value = duration;
                action->parameter = parameter;
            }
            record->render.flags &= ~0x10000;
        }
    }
    return 1;
}
}
