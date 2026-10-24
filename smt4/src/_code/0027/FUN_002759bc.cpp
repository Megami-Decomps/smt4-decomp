/* NON_MATCHING: retail keeps each slot's address in r5 across the release call (add r5,r4,#imm before the test) and holds zero in r6; built folds the slot address into the store. */
#include "ui/FrameTex.h"

// The frame work's texture slots past the shared prefix.
struct FrameTextureSlots : FrameWork {
    void *slotA;      // 0xFDC
    u8 unkFE0[4];
    void *slotC;      // 0xFE4
    void *slotB;      // 0xFE8
};

extern "C" {

int asdTextureRelease(void *texture);
extern FrameTextureSlots *g_frameTex; /* 0x43e278 */

static __inline void frameTextureSlotRelease(void **slot)
{
    if (*slot != NULL) {
        asdTextureRelease(*slot);
        *slot = NULL;
    }
}

// Release the frame work's extra textures and mark the quad inactive.
void FUN_002759bc(void)
{
    FrameTextureSlots *work = g_frameTex;
    work->unkE8C = 0;
    frameTextureSlotRelease(&work->slotA);
    frameTextureSlotRelease(&work->slotB);
    frameTextureSlotRelease(&work->slotC);
}

} /* extern "C" */
