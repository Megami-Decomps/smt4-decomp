#include "ui/UiSpriteApi.h"
#include "addon/AocBoard.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

extern "C" {
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

// Draw the enabled overlay at the owner's animation speed and restore render state.
u32 aocBoardDrawParameterOverlay(u32 job)
{
    AocBoardWork *work = reinterpret_cast<AocBoardWork *>(jobGetWork(job));
    if (work->owner.dirty == 0)
        return 0;
    u32 enabled = work->owner.control.flags & 0x10;
    if (enabled == 0)
        return enabled;
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(vec2GetSpeed(&work->sprites[0]));
    texDrawTableEntryAtStoredOrigin(2, 8, 0x14F, 0, 0, 6);
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    gxResetColorQuadToWhite();
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
