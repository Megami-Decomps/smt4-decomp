#include "ui/UiSpriteApi.h"
#include "addon/AocBoard.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
s32 renderCtxPackPassFlags(u32 preset, u32 index);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);
void renderCtxResetColorScale(RenderCtx *context);

// Draw the enabled overlay at the owner's animation speed and restore render state.
u32 aocBoardDrawParameterOverlay(u32 job)
{
    AocBoardWork *work = reinterpret_cast<AocBoardWork *>(jobGetWork(job));
    if (work->owner.dirty == 0)
        return 0;
    u32 enabled = work->owner.control.flags & 0x10;
    if (enabled == 0)
        return enabled;
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(vec2GetSpeed(&work->sprites[0]));
    texDrawTableEntryAtStoredOrigin(2, 14, 0x14F, 0, 0, 6);
    efctSetSpeed(1.0f);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    gxResetColorQuadToWhite();
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}
}
