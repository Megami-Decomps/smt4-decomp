/* NON_MATCHING: slots are now indexed like retail (slot address kept in r5 across the release call); the last slot still folds into a writeback load and the zero constant is materialised through r0 in retail. */
#include "ui/FrameTex.h"

// The frame work's texture slots past the shared prefix.
struct FrameTextureSlots : FrameWork {
    void *slots[4];   // 0xFDC: A, unused, C, B
};

extern "C" {

int asdTextureRelease(void *texture);
extern FrameTextureSlots *g_frameTex; /* 0x43e278 */

static __inline void frameTextureSlotRelease(FrameTextureSlots *work, s32 index)
{
    if (work->slots[index] != NULL) {
        asdTextureRelease(work->slots[index]);
        work->slots[index] = NULL;
    }
}

// Release the frame work's extra textures and mark the quad inactive.
void FUN_002759bc(void)
{
    FrameTextureSlots *work = g_frameTex;
    work->unkE8C = 0;
    frameTextureSlotRelease(work, 0);
    frameTextureSlotRelease(work, 3);
    frameTextureSlotRelease(work, 2);
}

} /* extern "C" */
