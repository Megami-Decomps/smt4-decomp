#include "ui/MessageMainA.h"
#include "shard/Shard0036.h"

extern "C" {

extern void uiPanelCloseStateSection(MessageWindowA *obj, u32 value);

/* Finishes the pending change of the message state's child; returns 1 when the child is idle (state 0). */
u32 obj04ApplyPending(void)
{
    MessageWindowA *child = g_messageMain.window;

    if (child->closeRequested != 0) {
        uiPanelCloseStateSection(child, child->mode);
        child->state = 3;
        child->unk0034 = 0;
        child->closeRequested = 0;
    } else if (child->state == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
