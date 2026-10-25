#include "gfx/StereoParallax.h"
/* NON_MATCHING: register allocation and stack layout differ (retail spills the loop-invariant x+shift to the stack, keeps a panel+0x100 base in fp and builds the icon pairs with STM into a larger frame). */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

/* The placement record a sprite sheet gives for a part. */
struct SpritePlacement {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

/* The panel whose frame sprites are drawn; only the fields this draw reads are named. */
struct FramePanel {
    /* 0x000 */ u8 unk000[0x104];
    /* 0x104 */ u8 leftFrame;
    /* 0x105 */ u8 unk105[3];
    /* 0x108 */ s32 centerFrame;
    /* 0x10C */ u8 unk10C[0x55C];
    /* 0x668 */ u8 firstAlternate;
    /* 0x669 */ u8 secondAlternate;
};

extern "C" {
extern RenderCtx *g_renderCtx;
void efctSetSpeed(f32 speed);
SpritePlacement *FUN_001834a4(s32 sheet, s32 part);

/* Draws the panel's frame sprites at (x, y), shifted for the stereo depth; the effect speed comes from the caller. */
void FUN_00404a8c(FramePanel *panel, s32 x, s32 y, f32 speed)
{
    efctSetSpeed(speed);
    renderCtxCalculateStereoParallax(g_renderCtx, 0.27f);
    if (panel->leftFrame) {
        u32 icons[4];
        icons[0] = 26;
        icons[1] = 27;
        if (panel->firstAlternate) {
            icons[0] = 28;
            icons[1] = 29;
        }
        icons[2] = 30;
        icons[3] = 31;
        if (panel->secondAlternate) {
            icons[2] = 32;
            icons[3] = 33;
        }
        s32 shift = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.27f));
        for (s32 i = 0; i < 4; ++i)
            FUN_001835b4(2, 50, icons[i], shift + x, y, 191);
    }
    if (panel->centerFrame != 0) {
        SpritePlacement *edge = FUN_001834a4(50, 40);
        s32 shift = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.27f));
        s32 edgeY = edge->y + y;
        s32 edgeX = edge->x + (shift + x);
        FUN_001835b4(2, 50, 34, edgeX, edgeY, 191);
        FUN_001835b4(2, 50, 35, edgeX, edgeY, 191);
        SpritePlacement *corner = FUN_001834a4(50, 41);
        shift = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.27f));
        s32 cornerY = corner->y + y;
        s32 cornerX = corner->x + (shift + x);
        FUN_001835b4(2, 50, 37, cornerX, cornerY, 191);
        FUN_001835b4(2, 50, 39, cornerX, cornerY, 191);
    } else {
        SpritePlacement *edge = FUN_001834a4(50, 40);
        s32 shift = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.27f));
        s32 edgeY = edge->y + y;
        s32 edgeX = edge->x + (shift + x);
        FUN_001835b4(2, 50, 37, edgeX, edgeY, 191);
        FUN_001835b4(2, 50, 38, edgeX, edgeY, 191);
        if (panel->leftFrame) {
            SpritePlacement *corner = FUN_001834a4(50, 41);
            shift = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.27f));
            s32 cornerY = corner->y + y;
            s32 cornerX = corner->x + (shift + x);
            FUN_001835b4(2, 50, 34, cornerX, cornerY, 191);
            FUN_001835b4(2, 50, 36, cornerX, cornerY, 191);
        }
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
