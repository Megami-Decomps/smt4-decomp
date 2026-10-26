#include "event/bustupEvent/BustupCutAnim.h"
#include "event/bustupEvent/BustupSlotControl.h"

extern "C" {

void FUN_00164ce0(u32 handle, s32 arg);
s32 jobIsValid(u32 handle);

extern BustupCutAnimA *g_bustupCutAnim;

void bustupCutAnimRequestStopSlots(s32 arg0)
{
    BustupCutAnimA *anim = g_bustupCutAnim;
    s32 i;

    if (g_bustupCutAnim != NULL) {
        for (i = 1; i < BUSTUP_CUT_SLOTS; i++) {
            if (jobIsValid(anim->slots[i]) != 0) {
                FUN_00164ce0(anim->slots[i], 1);
            }
        }
    }
}

} /* extern "C" */
