/* NON_MATCHING: the render-stack pushes, pops, branches and calls match; retail converts each colour channel separately (four vmul/vcvt per call, no common subexpressions, 255.0f kept in s18 with d9 saved), where this build shares the grey channel's product. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/JobWork.h"
#include "code/Code0038.h"

struct SpriteJobWork {
    /* 0x00 */ s32 spriteId;
    /* 0x04 */ s32 blocked;
    /* 0x08 */ f32 level;       /* grey level 0..1 */
    /* 0x0C */ f32 alpha;       /* alpha 0..1 */
    /* 0x10 */ u8 unk10[5];
    /* 0x15 */ u8 prepared;
    /* 0x16 */ u8 visible;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ SpriteDrawVector3 origin;
    /* 0x24 */ f32 scale;
    /* 0x28 */ f32 scaleY;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ s32 sprite;
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ f32 frame;
};

#define SPRITE_ID_FADE_A 0xFE49
#define SPRITE_ID_FADE_B 0xFE4C
#define SPRITE_ID_FADE_C 0xFFF2

extern "C" {
void FUN_00230038(SpriteJobWork *work);
s32 renderCtxPackPassFlags(u32 a, u32 b);
void FUN_003fba4c(s32 sprite, s32 layer, s32 frame, SpriteDrawVector3 *origin, u32 color, s32 mode, f32 x, f32 y);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Packs four 0..1 components into one RGBA word. */
static u32 spriteColorPack(f32 red, f32 green, f32 blue, f32 alpha)
{
    return ((((((u32)(red * 255.0f) << 8) + (u32)(green * 255.0f)) << 8) + (u32)(blue * 255.0f)) << 8) +
           (u32)(alpha * 255.0f);
}

/* Draws the job's sprite with its grey level and alpha; the fade sprites draw twice, the second pass additive. */
u32 spriteJobDraw(u32 job)
{
    SpriteJobWork *work = (SpriteJobWork *)jobGetWork(job);
    if (work->blocked != 0) {
        return 0;
    }
    if (work->visible == 0) {
        return 0;
    }
    if (work->prepared == 0) {
        FUN_00230038(work);
        work->prepared = 1;
    }
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(5, 1);
    renderStackPush(context->stacks + RENDER_STACK_A, state);
    context = g_renderCtx;
    state = renderCtxPackPassFlagsWithAlpha(6, 0.0f);
    renderStackPush(context->stacks + RENDER_STACK_C, state);

    f32 level = work->level;
    f32 alpha = work->alpha;
    if (work->spriteId != SPRITE_ID_FADE_A && work->spriteId != SPRITE_ID_FADE_B && work->spriteId != SPRITE_ID_FADE_C) {
        FUN_003fba4c(work->sprite, 0, (s32)work->frame, &work->origin,
                     spriteColorPack(level, level, level, alpha),
                     0, work->scale, work->scaleY);
    } else {
        spriteDrawWithOrigin((SpriteDrawOwner *)work->sprite, 0, &work->origin,
                             spriteColorPack(level, level, level, alpha),
                             1, 0, work->frame, work->scale);
        FUN_003fba4c(work->sprite, 0, (s32)work->frame, &work->origin,
                     spriteColorPack(level, level, level, alpha),
                     2, work->scale, work->scaleY);
    }

    renderStackPop(g_renderCtx->stacks + RENDER_STACK_C);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
