/* NON_MATCHING: draws the job's sprite with a grey level and alpha (special sprite ids draw twice, the second pass additive); written from the decompilation, render-stack push scheduling and the float to byte conversions not compared with retail */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

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
    /* 0x24 */ u8 unk24[0x10];
    /* 0x34 */ s32 sprite;
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ s32 frame;
};

#define SPRITE_ID_FADE_A 0xFE49
#define SPRITE_ID_FADE_B 0xFE4C
#define SPRITE_ID_FADE_C 0xFFF2

extern "C" {
extern RenderCtxA *g_renderCtx;

SpriteJobWork *jobGetWork(void);
void FUN_00230038(SpriteJobWork *work);
s32 FUN_001692ac(u32 a, u32 b);
s32 FUN_00387580(u32 mode);
void FUN_003fba4c(s32 sprite, s32 layer, s32 frame, s32 *origin, u32 color, s32 mode);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Packs a grey level and alpha (0..1) into RGBA with the level in all three colour bytes. */
static __inline u32 spriteColorPack(f32 level, f32 alpha)
{
    u32 grey = (u32)(level * 255.0f);
    u32 a = (u32)(alpha * 255.0f);
    return (((grey * 0x100 + grey) * 0x100) + grey) * 0x100 + a;
}

u32 FUN_00289f10(void)
{
    SpriteJobWork *work = jobGetWork();
    if (work->blocked == 0 && work->visible != 0) {
        if (work->prepared == 0) {
            FUN_00230038(work);
            work->prepared = 1;
        }
        RenderCtxA *context = g_renderCtx;
        renderStackPush(&context->stackA, FUN_001692ac(5, 1));
        context = g_renderCtx;
        renderStackPush(&context->additional.stackC, FUN_00387580(6));

        bool twoPass = work->spriteId == SPRITE_ID_FADE_A || work->spriteId == SPRITE_ID_FADE_B
                       || work->spriteId == SPRITE_ID_FADE_C;
        if (!twoPass) {
            FUN_003fba4c(work->sprite, 0, (s32)(f32)work->frame, (s32 *)&work->origin,
                         spriteColorPack(work->level, work->alpha), 0);
        } else {
            SpriteDrawPlacementOptions options = {1, 0};
            spriteDrawWithOrigin((SpriteDrawOwner *)work->sprite, 0, &work->origin,
                                 spriteColorPack(work->level, work->alpha), options,
                                 (f32)work->frame, 1.0f);
            FUN_003fba4c(work->sprite, 0, (s32)(f32)work->frame, (s32 *)&work->origin,
                         spriteColorPack(work->level, work->alpha), 2);
        }

        renderStackPop(&g_renderCtx->additional.stackC);
        renderStackPop(&g_renderCtx->stackA);
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}

} /* extern "C" */
