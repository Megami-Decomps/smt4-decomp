#include "gfx/StereoParallax.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
/* NON_MATCHING: 12 lines. The pops now go through renderStackPopChecked as in retail; what remains: retail converts the
 * stereo parallax through s1 (the build reuses s0), and loads g_renderCtx into r0 before building the stack address in r4.
 * Wave 91: an extra accessor, renderStackPopCounted(renderCtxStackAt(g_renderCtx, RENDER_STACK_A)) at both pops (with the
 * parallax cast in a renderCtxStereoPixelOffset inline) is IDENTICAL here and in its siblings, but it is a third spelling
 * of renderCtxPopCounted chosen by score: renderCtxPopCounted written through it loses guestWinDraw (both games) and
 * runWinDraw, so it is not kept. */
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace {
// The overlay task: its phase and the fade scale of its second pass.
struct OverlayTask {
    s32 phase;              // 0x00
    u8 unk04[0x1C];
    s32 enabled;            // 0x20
    f32 fadeScale;          // 0x24
};
}

extern "C" {
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);

/* Draw the two parallax-shifted overlay sprites while the overlay task is in phase 9. */
u32 btlGameOverDrawOverlay(OverlayTask *task)
{
    if (task->phase == 9 && task->enabled != 0) {
        RenderCtxA *context = g_renderCtx;
        u32 mode = renderCtxPackPassFlags(1, 0);
        renderCtxPushA(context, mode);
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
        asdTMTexTableEntryAt(0x22, 3000);
        f32 shift = (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.35f);
        texDrawTableEntryAtStoredOrigin(2, 0x22, 3000, (s32)shift, 0, 2);
        renderStackPopChecked(g_renderCtx->stacks + RENDER_STACK_A);
        efctSetSpeed(1.0f);
        context = g_renderCtx;
        mode = renderCtxPackPassFlags(1, 0);
        renderCtxPushA(context, mode);
        efctSetSpeed(task->fadeScale);
        gxResetColorQuadToWhite();
        asdTMTexTableEntryAt(0x22, 1000);
        shift = (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.28f);
        texDrawTableEntryAtStoredOrigin(2, 0x22, 1000, (s32)shift, 0, 6);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        efctSetSpeed(1.0f);
        return 0;
    }
    return 0;
}
}
