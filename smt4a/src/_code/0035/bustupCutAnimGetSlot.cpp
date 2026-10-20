#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

extern BustupCutAnimA *g_bustupCutAnim;

/* The job handle in slot `index`, or -1. */
u32 bustupCutAnimGetSlot(u32 index)
{
    u32 handle = 0xFFFFFFFF;

    if (g_bustupCutAnim != NULL && index < BUSTUP_CUT_SLOTS) {
        handle = g_bustupCutAnim->slots[index];
    }
    return handle;
}

} /* extern "C" */
