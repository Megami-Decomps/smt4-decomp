/* NON_MATCHING: ported arrow draw, s32 frame (__aeabi_idivmod), and HintAnim sub-struct from smt4; only VFP vstmia vs three vstr stores and r8/r9 allocation differ. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "Model/MoriModelShadowMap.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* The arrow-animation tail at +0x16000. */
typedef struct HintAnim {
    u8 unk00[0x54];
    u32 animation;
    s32 frame;
} HintAnim;

/* The hint window's work block (only the fields touched here). */
typedef struct HintWindow {
    /* 0x00000 */ u32 flags;           /* 0x2000: the arrow animation is shown */
    /* 0x00004 */ s32 step;
    /* 0x00008 */ u8 unk00008[0xC];
    /* 0x00014 */ s32 mode;            /* 1: skip drawing */
    /* 0x00018 */ u8 unk00018[8];
    /* 0x00020 */ u8 secondArrow;
    /* 0x00021 */ u8 firstArrow;
    /* 0x00022 */ u8 unk00022[0x15FDE];
    /* 0x16000 */ HintAnim anim;
} HintWindow;

void gxResetColorQuadToWhite(void);
void shopMainDrawPairedJobs(HintWindow *window);
s32 placeWinGetValue(void);
s32 FUN_00284f70(void);
void texDrawCompositeSprite(s32 a, s32 b, s32 c, s32 x, s32 y, s32 z);
f32 renderCtxCalculateStereoParallax(RenderCtxA *ctx, f32 depth);
f32 asdAnimGetTrackLastFrame(u32 animation, s32 track);
void skinObjectUpdateMatrices(RenderCtxA *ctx);
void renderCtxResetColorScale(RenderCtxA *ctx);

/* Draws the hint window's arrows and, when shown, the stepping arrow animation. */
void hintWindowDrawArrows(HintWindow *window)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    gxResetColorQuadToWhite();
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    if (window->mode != 1) {
        shopMainDrawPairedJobs(window);
        if (placeWinGetValue()) {
            s32 depth = 13;
            struct { s32 x, y; } offset;
            offset.x = FUN_00284f50();
            offset.y = FUN_00284f70();
            u32 positions[2] = {0xF5, 0xF6};
            u32 position = 0;

            if (window->firstArrow) {
                const TextureTableEntryIV *origin = asdTMTexTableEntryAt(0x20, positions[position]);
                s32 arrowX = origin->x + offset.x;
                s32 arrowY = origin->y + offset.y;
                texDrawCompositeSprite(2, 0x20, 6, arrowX, arrowY, depth);
                ++position;
            }
            if (window->secondArrow) {
                const TextureTableEntryIV *origin = asdTMTexTableEntryAt(0x20, positions[position]);
                s32 arrowX = origin->x + offset.x;
                s32 arrowY = origin->y + offset.y;
                texDrawCompositeSprite(2, 0x20, 7, arrowX, arrowY, depth);
            }
        }
        if ((window->flags & 0x2000) != 0 && window->step > 0 && window->step < 20) {
            HintAnim *anim = &window->anim;
            SpriteDrawVector3 position;
            position.x = (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.33f);
            position.y = 46.0f;
            position.z = 0.0f;
            anim->frame += 2;
            anim->frame %= (s32)asdAnimGetTrackLastFrame(anim->animation, 0);
            spriteDrawAnimationUnplaced(reinterpret_cast<SpriteDrawOwner *>(anim->animation), 0, &position,
                          0xFFFFFFFFu, 0, (f32)anim->frame, 1.0f);
        }
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

}
