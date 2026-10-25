#include "event/bustupEvent/BustupCutAnim.h"
#include "shard/JobWork.h"

extern "C" {

void gfxObjectDestroy(u32 arg);
void FUN_00359370(s32 arg, s32 flag);
void asdCameraInitAreas(void);
void asdMdlManagerDestroy(u32 arg);
void asdMemFree(void *block);

extern BustupCutAnimA *g_bustupCutAnim;

/* Destroy callback of the animation job: lets go of its resources and frees the block. */
void bustupCutAnimDestroy(u32 job)
{
    BustupCutAnimA *anim;
    u32 i;

    asdCameraInitAreas();
    anim = (BustupCutAnimA *)jobGetWork(job);
    if (anim->unk5EC != 0 && anim->unk5F0 != 5 && anim->unk5F0 != 6) {
        FUN_00359370(anim->unk5EC, 0);
    }
    anim->unk5EC = 0;
    anim->unk5E8 = 0;
    for (i = 0; i < BUSTUP_CUT_ENTRIES; i++) {
        gfxObjectDestroy(anim->unk6CC[i]);
        asdMdlManagerDestroy(anim->unk65C[i]);
    }
    asdMemFree(g_bustupCutAnim);
    g_bustupCutAnim = NULL;
}

} /* extern "C" */
