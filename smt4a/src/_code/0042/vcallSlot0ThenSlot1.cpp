#include "shard/Shard0042.h"

extern "C" {

/* Calls slot 0 on `b`, then slot 1 of `a` with `b` (tail call); does nothing when `b` is NULL. */
void vcallSlot0ThenSlot1(u32 unused, VObj *a, VObj *b)
{
    if (b != NULL) {
        b->vtbl->slot0(b);
        a->vtbl->slot1(a, b);
    }
}

} /* extern "C" */
