#include "title/TitleJobWork.h"
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
void renderCtxSelectStereoLayout(RenderCtx *context);
void FUN_002bed3c(void);
s32 FUN_002c5d80(u32 kind, u32 mode);
s32 jobIsValid(u32 job);
void FUN_00285584(u32 job, u32 mode, u32 flags);
void FUN_002c18e4(RenderCtx *context);

// Draw both live title jobs with a temporary render-state override.
void FUN_003a37dc(TitleJobWork *work)
{
    // These job handles are beyond the established title job's fixed prefix.
    struct TitleDrawView {
        u32 unk00;
        s32 state;
        u8 unk08[0x15D38];
        u32 firstJob;
        u32 secondJob;
    };
    typedef char TitleDrawOffsetsCheck[offsetof(TitleDrawView, firstJob) == 0x15D40 &&
        offsetof(TitleDrawView, secondJob) == 0x15D44 ? 1 : -1];
    TitleDrawView *draw = (TitleDrawView *)work;
    if (draw->state <= 0 || draw->state >= 18) {
        return;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    FUN_002bed3c();
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    if (jobIsValid(draw->firstJob)) {
        FUN_00285584(draw->firstJob, 0, 0);
    }
    if (jobIsValid(draw->secondJob)) {
        FUN_00285584(draw->secondJob, 0, 0);
    }
    renderStackPop(&g_titleScene->stackA);
    renderCtxApplyTransforms(g_titleScene);
    FUN_002c18e4(g_titleScene);
}
}
