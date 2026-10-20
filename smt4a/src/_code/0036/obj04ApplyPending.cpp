#include "shard/Shard0036.h"

extern "C" {

extern void FUN_00165088(Obj04 *obj, u32 value);

/* Finishes the pending change of the owner's child; returns 1 when the child is idle (state 0). */
u32 obj04ApplyPending(PanelRef *owner)
{
    Obj04 *child = owner->unk04;

    if (child->unk35 != 0) {
        FUN_00165088(child, child->unk09);
        child->state = 3;
        child->unk34 = 0;
        child->unk35 = 0;
    } else if (child->state == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
