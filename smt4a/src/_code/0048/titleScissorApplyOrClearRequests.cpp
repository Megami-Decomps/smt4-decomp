#include "camp/RenderCtx.h"

struct TitleScissorOwner {
    /* 0x000 */ u8 unk000[0x4d0];
    /* 0x4d0 */ f32 offset[2];
};

struct TitleScene : RenderCtxA {
    u8 prefix12CC[0x40];
    RenderStateStack requests;
};
typedef char TitleSceneRequestsOffsetCheck[
    offsetof(TitleScene, requests) == 0x1318 ? 1 : -1];

extern "C" {
extern TitleScene *g_renderCtx;

void words2Copy(const f32 *source, f32 *destination);
void renderSetClippedScissor(s32 x, s32 y, s32 width, s32 height);

/* With `clip`, sets the bottom-screen scissor offset by the owner's position; else runs the title scene's pending request callback. */
void titleScissorApplyOrClearRequests(TitleScissorOwner *owner, s32 clip)
{
    if (clip) {
        s32 x, y;
        u32 width, height;
        f32 offset[2];

        rectRecRead(19, 4004, &x, &y, &width, &height);
        words2Copy(owner->offset, offset);
        x = offset[0] + x;
        y = offset[1] + y;
        renderSetClippedScissor(x, y, width, height);
    } else {
        renderStackSetCounted(&g_renderCtx->requests, 0);
    }
}

} /* extern "C" */
