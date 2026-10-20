#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

void FUN_003ae864(u32 arg);
void FUN_00359370(s32 arg, s32 flag);
void FUN_001ad6d8(void);
void asdMdlManagerDestroy(u32 arg);
void asdMemFree(void *block);
BustupCutAnimA *jobGetWork(u32 job);

extern BustupCutAnimA *g_bustupCutAnim;

/* Destroy callback of the animation job: lets go of its resources and frees the block. */
void bustupCutAnimDestroy(u32 job)
{
    BustupCutAnimA *anim;
    u32 i;

    FUN_001ad6d8();
    anim = jobGetWork(job);
    if (anim->unk5EC != 0 && anim->unk5F0 != 5 && anim->unk5F0 != 6) {
        FUN_00359370(anim->unk5EC, 0);
    }
    anim->unk5EC = 0;
    anim->unk5E8 = 0;
    for (i = 0; i < BUSTUP_CUT_ENTRIES; i++) {
        FUN_003ae864(anim->unk6CC[i]);
        asdMdlManagerDestroy(anim->unk65C[i]);
    }
    asdMemFree(g_bustupCutAnim);
    g_bustupCutAnim = NULL;
}

} /* extern "C" */
