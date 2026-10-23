/* NON_MATCHING: reflection scan saved-register allocation differs from retail. */
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"

extern "C" {
BtlMainState *btlGetMainState(void);
ReflectAction *btlQueueReflectAction(ReflectContext *queue, s16 actor, s16 secondary, u32 options);

/* Queue the pending color/opacity updates for active battle action records. */
u32 FUN_003de758(u32 actor, u32 options, u32 value)
{
    BtlMainState *battle = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BtlActionRecord *entry = &battle->actions[index];
        u32 status = entry->status;
        if ((status & 1) != 0 && (status & 2) != 0 && (status & 0x10000) != 0) {
            if (entry->editorRestore.current == 0x4C4C4CFF) {
                f32 amount = *reinterpret_cast<const f32 *>(&entry->editorRestore.saved);
                ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(actor), 0, options);
                action->flagView.flags |= 4;
                action->target = reinterpret_cast<u32>(entry);
                action->kind = 0x21;
                action->value = value;
                action->parameterScalar = amount;
            } else {
                ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(actor), 0, options);
                action->flagView.flags |= 4;
                action->target = reinterpret_cast<u32>(entry);
                action->kind = 0x22;
                action->value = value;
                action->parameter = 255;
            }
            entry->status &= ~0x10000;
        }
    }
    return 1;
}
}
