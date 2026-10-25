/* NON_MATCHING: lane scaling and canonical render pushes now match their retail operation shapes; VFP conversion registers, draw-argument scheduling and the cleared early return differ. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match3_EffectColor.h"

static __inline u32 packFadeColor(EffectColor color)
{
    u32 red = (u32)(color.red * 255.0f);
    u32 green = (u32)(color.green * 255.0f);
    u32 blue = (u32)(color.blue * 255.0f);
    u32 alpha = (u32)(color.alpha * 255.0f);
    return (((((red << 8) + green) << 8) + blue) << 8) + alpha;
}

extern "C" {

typedef struct FadeVec2 {
    f32 x, y;
} FadeVec2;

typedef struct FadeJob {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 pending;
    /* 0x08 */ f32 intensity;
    /* 0x0C */ f32 alpha;
    /* 0x10 */ u8 unk10[5];
    /* 0x15 */ u8 initialized;
    /* 0x16 */ u8 active;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 params[12];
    /* 0x24 */ FadeVec2 origin;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ u32 handle;
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ f32 level;
} FadeJob;

extern RenderCtx *g_titleScene;
FadeJob *jobGetWork(void);
void FUN_001a79a8(FadeJob *job);
s32 FUN_002c5d80(u32 slot, u32 flags);
s32 FUN_002865c0(u32 state, f32 value);
void FUN_0033e160(u32 handle, s32 zero, s32 level, u8 *params, u32 color, u32 flag, FadeVec2 origin);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

/* Draws the fade job with temporary title-scene render states, when it has no pending request and is active. */
u32 FUN_001e023c(void)
{
    FadeJob *job = jobGetWork();
    if (job->pending == 0 && job->active != 0) {
        if (job->initialized == 0) {
            FUN_001a79a8(job);
            job->initialized = 1;
        }
        RenderCtx *context = g_titleScene;
        s32 state = FUN_002c5d80(5, 1);
        renderCtxPushA(context, state);
        context = g_titleScene;
        state = FUN_002865c0(6, 0.0f);
        renderCtxPushC(context, state);
        EffectColor fade = {job->intensity, job->intensity, job->intensity, job->alpha};
        u32 color = packFadeColor(fade);
        FUN_0033e160(job->handle, 0, (s32)job->level, job->params, color, 0, job->origin);
        renderStackPop(&g_titleScene->additional.stackC);
        renderStackPop(&g_titleScene->stackA);
        FUN_002c198c(g_titleScene);
        FUN_002c18e4(g_titleScene);
    }
    return 0;
}

} /* extern "C" */
