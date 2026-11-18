/* NON_MATCHING: alpha/extent conversion scheduling differs; the preset lookups' stereo mode is the inlined renderCtxGetStereoMode getter (armcc's hint NOPs around it now match). */
#include "common.h"
#include "camp/RenderCtx.h"
#include "event/eventCommand.h"
#include "shard/JobWork.h"
#include "camp/RenderCtxTitle.h"


extern "C" {
u32 renderCtxPackPassFlags(u32 state, u32 flags);
u32 asdGxPresetsGetByKind(u32 target);
u32 asdGxPresetsGetHeightByKind(u32 target);
void gxSubmitDrawZeroExtraParams(u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

// Draw a full-target fade quad with its stored alpha scaled by the job's fade amount.
u32 uiFadeQuadDrawJob(u32 job)
{
    EventCommand *work = (EventCommand *)jobGetWork(job);
    if (work->alpha != 0.0f) {
        u32 color = work->color;
        RenderCtx *context = g_titleScene;
        u32 alpha = static_cast<u32>(work->alpha * static_cast<f32>(color & 0xff));
        if (alpha > 255) {
            alpha = 255;
        }
        color = (color & 0xffffff00) | alpha;
        renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
        renderCtxSelectTexture(g_titleScene, 0);
        f32 height = static_cast<f32>(asdGxPresetsGetByKind(renderCtxGetStereoMode(g_titleScene)));
        f32 width = static_cast<f32>(asdGxPresetsGetHeightByKind(renderCtxGetStereoMode(g_titleScene)));
        gxSubmitDrawZeroExtraParams(color, color, color, color, 0.0f, 0.0f, width, height, 0.0f);
        renderStackPop(&g_titleScene->stackA);
    }
    return 0;
}
}
