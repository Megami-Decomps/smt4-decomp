#include "battle/btlMain.h"
#include "battle/btlAction.h"

/* Preserve the selected action identity when possible, otherwise choose the first eligible action. */
extern "C" void FUN_003d8a18(BtlActionSelection *selection, BtlMainState *state)
{
    if (state != NULL && state->actions != NULL) {
        for (s32 index = 4; index < 54; ++index) {
            BtlActionRecord *action = &state->actions[index];
            if ((action->status & 1) && (action->status & 0x80)) {
                action->status &= ~8;
            }
        }
    }
    BtlActionRecord **actions = &state->actions;
    for (s32 index = 4; index < 54; ++index) {
        BtlActionRecord *action = &(*actions)[index];
        if ((action->status & 1) && (action->status & 0x80) &&
            action->identity.category == selection->category &&
            action->identity.variant == selection->variant) {
            action->status |= 8;
            selection->memberId = action->memberId;
            return;
        }
    }
    for (s32 index = 4; index < 54; ++index) {
        BtlActionRecord *action = &(*actions)[index];
        if ((action->status & 1) && (action->status & 0x80)) {
            action->status |= 8;
            selection->memberId = action->memberId;
            selection->category = action->identity.category;
            selection->variant = action->identity.variant;
            return;
        }
    }
}
