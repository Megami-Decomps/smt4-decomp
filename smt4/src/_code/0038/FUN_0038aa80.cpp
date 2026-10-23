/* NON_MATCHING: flag test keeps TST instead of ANDS; stack push address scheduling and extended speed-field addressing differ. */
#include "gfx/DrawParameterOwner.h"
#include "camp/RenderCtx.h"

namespace {
// The speed belongs beyond the canonical draw-owner prefix, whose size remains 0x440.
struct ParameterOverlayWorkView {
    DrawParameterOwner owner;
    u8 unk440[0x20];
    f32 speed; // 0x460
};
typedef char ParameterOverlayWorkSpeedOffsetCheck[
    offsetof(ParameterOverlayWorkView, speed) == 0x460 ? 1 : -1];
}

extern "C" {
ParameterOverlayWorkView *jobGetWork(void);
extern RenderCtx *g_titleScene;
s32 FUN_002c5d80(u32 preset, u32 index);
void efctSetSpeed(f32 speed);
void FUN_002bf288(s32 font, s32 text, u32 entry, s32 x, s32 y, s32 layer);
void FUN_002bed3c(void);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

// Draw the enabled overlay at the owner's animation speed and restore render state.
u32 FUN_0038aa80(void)
{
    ParameterOverlayWorkView *work = jobGetWork();
    if (work->owner.dirty != 0 && (work->owner.control.flags & 0x10) != 0) {
        RenderCtx *context = g_titleScene;
        renderCtxPushA(context, FUN_002c5d80(1, 0));
        efctSetSpeed(work->speed);
        FUN_002bf288(2, 14, 0x14F, 0, 0, 6);
        efctSetSpeed(1.0f);
        renderStackPop(&g_titleScene->stackA);
        FUN_002bed3c();
        FUN_002c198c(g_titleScene);
        FUN_002c18e4(g_titleScene);
    }
    return 0;
}
}
