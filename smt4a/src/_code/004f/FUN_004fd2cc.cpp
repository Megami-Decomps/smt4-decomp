/* NON_MATCHING: argument homing adds stack saves; model flags fold into conditional loads and slot addresses differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"

extern "C" {


/* Queue scalar actions for the requested model slot, or every enabled model slot. */
u8 FUN_004fd2cc(s32 actor, u32 options, s32 allSlots, s32 slot,
                s32 parameter, u32 scalarBits, f32 value)
{
    BtlMainStateA *battle = btlGetMainState();
    if (battle->environmentModel.loaded && battle->environmentModel.ready) {
        if (allSlots) {
            s32 index = 0;
            for (s32 i = 0; i < 4; ++i) {
                if (battle->reflectedSlots.enabled[i]) {
                    s16 offset = battle->reflectedSlots.actorOffsets[index];
                    if (offset < 0)
                        return 0;
                    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + offset), 0, options);
                    action->kind = 0x46;
                    action->first = i;
                    action->second = (s16)parameter;
                    action->scalarPayload.scalar = value;
                    action->value = scalarBits;
                    ++index;
                    action->parameter = 0;
                }
            }
        } else {
            ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
            action->kind = 0x46;
            action->first = slot;
            action->second = (s16)parameter;
            action->scalarPayload.scalar = value;
            action->value = scalarBits;
            action->parameter = 0;
        }
        return 1;
    }
    return 0;
}
}
