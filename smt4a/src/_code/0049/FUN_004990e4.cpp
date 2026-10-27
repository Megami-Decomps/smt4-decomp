/* NON_MATCHING: the two-element id table is loaded from the pool with ldm/stm in retail and the stereo-parallax float/int round trips schedule differently; the draw sequence is the same. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {

/* A layout record: its position at 8 and 10. */
typedef struct HintLayout {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
} HintLayout;


/* The hint window's work block (only the fields touched here). */
typedef struct HintWindow {
    /* 0x00000 */ u32 flags;           /* 0x2000: the arrow animation is shown */
    /* 0x00004 */ s32 step;
    /* 0x00008 */ u8 unk00008[0xC];
    /* 0x00014 */ s32 mode;            /* 1: skip drawing */
    /* 0x00018 */ u8 unk00018[8];
    /* 0x00020 */ u8 secondArrow;
    /* 0x00021 */ u8 firstArrow;
    /* 0x00022 */ u8 unk00022[0x16032];
    /* 0x16054 */ u32 animation;
    /* 0x16058 */ u32 frame;
} HintWindow;


void FUN_00183bb0(void);
s32 FUN_001692ac(u32 kind, u32 arg);
void shopMainDrawPairedJobs(HintWindow *window);
s32 placeWinGetValue(void);
s32 FUN_00284f70(void);
HintLayout *asdTMTexTableEntryAt(u32 kind, u32 index);
void FUN_00164b5c(s32 a, s32 b, s32 c, s32 x, s32 y, s32 z);
f32 renderCtxCalculateStereoParallax(RenderCtxA *ctx, f32 depth);
f32 asdAnimGetTrackLastFrame(u32 animation, s32 track);
void skinObjectUpdateMatrices(RenderCtxA *ctx);
void renderCtxResetColorScale(RenderCtxA *ctx);

/* Draws the hint window's arrows and, when shown, the stepping arrow animation. */
void FUN_004990e4(HintWindow *window)
{
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    if (window->mode != 1) {
        shopMainDrawPairedJobs(window);
        if (placeWinGetValue() != 0) {
            s32 x = FUN_00284f50();
            s32 y = FUN_00284f70();
            s32 arrowIds[2] = {0xF5, 0xF6};
            s32 used = 0;

            if (window->firstArrow != 0) {
                HintLayout *layout = asdTMTexTableEntryAt(0x20, arrowIds[0]);

                FUN_00164b5c(2, 0x20, 6, layout->x + x, layout->y + y, 13);
                used = 1;
            }
            if (window->secondArrow != 0) {
                HintLayout *layout = asdTMTexTableEntryAt(0x20, arrowIds[used]);

                FUN_00164b5c(2, 0x20, 7, layout->x + x, layout->y + y, 13);
            }
        }
        if ((window->flags & 0x2000) != 0 && window->step > 0 && window->step < 20) {
            SpriteDrawVector3 position;

            position.x = (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.33f);
            position.y = 46.0f;
            position.z = 0.0f;
            window->frame += 2;
            window->frame = window->frame % (s32)asdAnimGetTrackLastFrame(window->animation, 0);
            spriteDrawAnimationUnplaced(reinterpret_cast<SpriteDrawOwner *>(window->animation), 0, &position,
                          0xFFFFFFFFu, 0, (f32)(s32)window->frame, 1.0f);
        }
    }
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

}
