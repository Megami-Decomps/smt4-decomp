#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

void FUN_002b7160(u32 handle, s32 arg);
s32 jobIsValid(u32 handle);

extern BustupCutAnim *g_bustupCutAnim;

void bustupCutAnimRequestStopSlots(void)
{
    BustupCutAnim *anim = g_bustupCutAnim;
    s32 i;

    if (g_bustupCutAnim != NULL) {
        for (i = 1; i < BUSTUP_CUT_SLOTS; i++) {
            if (jobIsValid(anim->slots[i]) != 0) {
                FUN_002b7160(anim->slots[i], 1);
            }
        }
    }
}

} /* extern "C" */
