#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"

extern "C" {

/* Queues a kind-0x22 overlay for every other participating action record in front of `reference` (by depth)
 * and a kind-0x21 one for those behind it, skipping records in the same placement slot. */
u32 btlReflectQueueDepthOverlays(s32 actor, u32 secondary, u32 value, BtlActionRecord *reference)
{
    BtlMainState *state = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BtlActionRecord *target = &state->actions[index];
        if ((target->status & 1) && (target->status & 2) &&
            !(target->stateFlags & 2) && target->memberId != reference->memberId) {
            if (reference->placement.slot != target->placement.slot || reference->placement.slot < 0 || target->placement.slot < 0) {
                if (target->geometry.position[2] > reference->geometry.position[2]) {
                    reflectCreateKind22(actor, secondary, (u32)target, 0, value, 0);
                } else {
                    reflectCreateKind21(actor, secondary, (u32)target, 0x4C4C4CFF, value, 0);
                }
                target->status |= 0x10000;
            }
        }
    }
    return 1;
}
} /* extern "C" */
