#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

void gfxObjectDestroy(u32 arg);
void FUN_0029c2cc(s32 arg, s32 flag);
void asdWorkAreaReset(void);
void asdMdlManagerDestroy(u32 arg);
void asdMemFree(void *block);
BustupCutAnim *jobGetWork(u32 job);

extern BustupCutAnim *g_bustupCutAnim;

/* Destroy callback of the animation job: lets go of its resources and frees the block. */
void bustupCutAnimDestroy(u32 job)
{
    BustupCutAnim *anim;
    u32 i;

    asdWorkAreaReset();
    anim = jobGetWork(job);
    if (anim->unk5E8 != 0 && anim->unk5EC != 5 && anim->unk5EC != 6) {
        FUN_0029c2cc(anim->unk5E8, 0);
    }
    anim->unk5E8 = 0;
    anim->unk5E4 = 0;
    for (i = 0; i < BUSTUP_CUT_ENTRIES; i++) {
        gfxObjectDestroy(anim->unk6C8[i]);
        asdMdlManagerDestroy(anim->unk658[i]);
    }
    asdMemFree(g_bustupCutAnim);
    g_bustupCutAnim = NULL;
}

} /* extern "C" */
