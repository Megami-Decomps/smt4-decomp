/* NON_MATCHING: action-table pointer and first-loop index occupy different registers; later scans match. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"

/* Preserve the selected action identity when possible, otherwise choose the first eligible action. */
extern "C" void FUN_003d8a18(BtlActionSelection *selection, BtlMainState *state)
{
    BtlActionRecord **actions = &state->actions;
    if (state != NULL && *actions != NULL) {
        for (s32 index = 4; index < 54; ++index) {
            BtlActionRecord *action = &(*actions)[index];
            u32 status = action->status;
            if ((status & 1) && (status & 0x80)) {
                action->status = status & ~8;
            }
        }
    }
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
