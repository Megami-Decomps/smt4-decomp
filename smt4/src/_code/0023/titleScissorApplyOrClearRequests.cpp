#include "camp/RenderCtxTitle.h"
#include "camp/RenderCtxTitle.h"

struct TitleScissorOwner {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ f32 offset[2];
};


extern "C" {
void asdTMTexTableGetEntryPlacement(s32 kind, u32 size, s32 *x, s32 *y, s32 *width, s32 *height);
void pairCopy(const f32 *source, f32 *destination);
void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height);

/* With `clip`, sets the bottom-screen scissor offset by the owner's position; else runs the title scene's pending request callback. */
void titleScissorApplyOrClearRequests(TitleScissorOwner *owner, s32 clip)
{
    if (clip) {
        s32 x, y, width, height;
        f32 offset[2];

        asdTMTexTableGetEntryPlacement(0x1c, 0xfa4, &x, &y, &width, &height);
        pairCopy(owner->offset, offset);
        x = offset[0] + x;
        y = offset[1] + y;
        gxSetClippedBottomScreenScissor(x, y, width, height);
    } else {
        renderStackSetCounted(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);
    }
}

} /* extern "C" */
