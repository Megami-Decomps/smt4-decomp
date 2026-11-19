#include "event/bustupEvent/BustupCutAnim.h"
#include "sys/RuntimeObjects.h"

extern "C" {

extern BustupCutAnim *g_bustupCutAnim;

s32 jobWorkGetFirstWord(u32 job);
void textureRequestIndexedFrame(u32 job, s32 index, s32 row, s32 column, s32 transition);

/* Requests texture frame `index` (row, column) with `transition` to the first bust-up slot whose work id is `workId`; 1 if one matched. */
s32 bustupCutStartSlotTransition(s32 workId, s32 index, s32 row, s32 column, s32 transition)
{
    BustupCutAnim *anim = g_bustupCutAnim;
    s32 found;
    s32 i;

    if (anim == NULL) {
        return 0;
    }
    found = 0;
    for (i = 1; i < BUSTUP_CUT_SLOTS; i++) {
        if (jobIsValid(anim->slots[i]) != 0 && jobWorkGetFirstWord(anim->slots[i]) == workId) {
            textureRequestIndexedFrame(anim->slots[i], index, row, column, transition);
            found = 1;
            break;
        }
    }
    return found;
}

} /* extern "C" */
