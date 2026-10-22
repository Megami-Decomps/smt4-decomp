#include "shard/Shard0036.h"

extern "C" {
extern MessageGlobalsA g_messageMain;

extern void FUN_00165088(MessageWorkA *obj, u32 value);

/* Finishes the pending change of the owner's child; returns 1 when the child is idle (state 0). */
u32 obj04ApplyPending(MessageGlobalsA *owner)
{
    MessageWorkA *child = owner->state;

    if (child->closeRequested != 0) {
        FUN_00165088(child, child->mode);
        child->state = 3;
        child->unk34 = 0;
        child->closeRequested = 0;
    } else if (child->state == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
