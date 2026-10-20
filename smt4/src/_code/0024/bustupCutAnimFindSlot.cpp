#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

extern BustupCutAnim *g_bustupCutAnim;

/* The index of the slot holding `handle`, or -1. */
s32 bustupCutAnimFindSlot(u32 handle)
{
    s32 index;

    if (g_bustupCutAnim->slots[0] == handle) {
        index = 0;
    } else if (g_bustupCutAnim->slots[1] == handle) {
        index = 1;
    } else if (g_bustupCutAnim->slots[2] == handle) {
        index = 2;
    } else if (g_bustupCutAnim->slots[3] == handle) {
        index = 3;
    } else {
        index = -1;
    }
    return index;
}

} /* extern "C" */
