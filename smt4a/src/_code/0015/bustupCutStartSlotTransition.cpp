#include "event/bustupEvent/BustupCutAnim.h"
#include "event/bustupEvent/BustupSlotControl_BustupCutAnim.h"

extern "C" {

extern BustupCutAnimA *g_bustupCutAnim;

s32 jobIsValid(u32 job);
s32 jobGetWorkId(u32 job);
void FUN_0019c6cc(u32 job, s32 frame, s32 enabled, s32 available, s32 transition);

/* Forwards a texture transition to the first bust-up slot whose work id is `workId`; 1 if one matched. */
s32 bustupCutStartSlotTransition(s32 workId, s32 frame, s32 enabled, s32 available, s32 transition)
{
    BustupCutAnimA *anim = g_bustupCutAnim;
    s32 found;
    s32 i;

    if (anim == NULL) {
        return 0;
    }
    found = 0;
    for (i = 1; i < BUSTUP_CUT_SLOTS; i++) {
        if (jobIsValid(anim->slots[i]) != 0 && jobGetWorkId(anim->slots[i]) == workId) {
            FUN_0019c6cc(anim->slots[i], frame, enabled, available, transition);
            found = 1;
            break;
        }
    }
    return found;
}

} /* extern "C" */
