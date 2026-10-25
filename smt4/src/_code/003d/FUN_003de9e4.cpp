/* NON_MATCHING: saved-register allocation and the parameter-sentinel constant lifetime differ. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlReflect.h"

extern "C" {
BtlMainState *btlGetMainState();


u32 FUN_003de9e4(s32 actor, u32 options, u32 value)
{
    for (s32 index = 67; index < 109; ++index) {
        BtlActionRecord *record = &btlGetMainState()->actions[index];
        if (record->status & 0x8000) {
            ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
            action->flagView.flags |= 4;
            action->target = reinterpret_cast<u32>(record);
            action->kind = 0x22;
            action->value = value;
            action->parameter = 0xff;
        }
    }
    return 1;
}
}
