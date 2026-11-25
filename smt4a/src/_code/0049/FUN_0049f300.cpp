#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
struct PanelFrameDrawWork {
    u32 job;
    u8 state;
    u8 unk005[0x46F];
    s8 showIcon;
};
typedef char PanelFrameDrawWorkIconCheck[offsetof(PanelFrameDrawWork, showIcon) == 0x474 ? 1 : -1];
extern "C" {
void FUN_0049d594(PanelFrameDrawWork *work);
void efctSetSpeed(f32 speed);
void renderCtxResetColorScale(RenderCtxA *context);

u32 FUN_0049f300(PanelFrameDrawWork *work)
{
    if (work->state == 0 || work->state == 2)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    if (work->state != 7) {
        if (work->state == 8 || work->state == 9) {
            if (work->showIcon)
                texDrawTableEntryAtStoredOrigin(2, 0x33, 0x7E, 0, 0, 0xC9);
        } else {
            FUN_0049d594(work);
        }
    }
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
