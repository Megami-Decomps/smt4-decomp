#include "shard/Shard0042.h"

extern "C" {

/* Calls slot 0 on `b`, then slot 1 of `a` with `b` (tail call). */
void vcallSlot0ThenSlot12(u32 unused, VObj *a, VObj *b)
{
    b->vtbl->slot0(b);
    a->vtbl->slot1(a, b);
}

} /* extern "C" */
