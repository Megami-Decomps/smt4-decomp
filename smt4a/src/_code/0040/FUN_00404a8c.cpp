#include "gfx/StereoParallax.h"
/* NON_MATCHING: register allocation and stack layout differ (retail spills the loop-invariant x+shift to the stack, keeps a panel+0x100 base in fp and builds the icon pairs with STM into a larger frame). */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"

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
void efctSetSpeed(f32 speed);

/* Draws the panel's frame sprites at (x, y), shifted for the stereo depth; the effect speed comes from the caller. */
void FUN_00404a8c(FramePanel *panel, s32 x, s32 y, f32 speed)
{
    efctSetSpeed(speed);
    renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
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
        s32 shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        for (s32 i = 0; i < 4; ++i)
            texDrawTableEntryAtStoredOrigin(2, 50, icons[i], shift + x, y, 191);
    }
    if (panel->centerFrame != 0) {
        TextureTableEntryIV *edge = asdTMTexTableEntryAt(50, 40);
        s32 shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        s32 edgeX = edge->x + (shift + x);
        s32 edgeY = edge->y + y;
        texDrawTableEntryAtStoredOrigin(2, 50, 34, edgeX, edgeY, 191);
        texDrawTableEntryAtStoredOrigin(2, 50, 35, edgeX, edgeY, 191);
        TextureTableEntryIV *corner = asdTMTexTableEntryAt(50, 41);
        shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        s32 cornerX = corner->x + (shift + x);
        s32 cornerY = corner->y + y;
        texDrawTableEntryAtStoredOrigin(2, 50, 37, cornerX, cornerY, 191);
        texDrawTableEntryAtStoredOrigin(2, 50, 39, cornerX, cornerY, 191);
    } else {
        TextureTableEntryIV *edge = asdTMTexTableEntryAt(50, 40);
        s32 shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        s32 edgeX = edge->x + (shift + x);
        s32 edgeY = edge->y + y;
        texDrawTableEntryAtStoredOrigin(2, 50, 37, edgeX, edgeY, 191);
        texDrawTableEntryAtStoredOrigin(2, 50, 38, edgeX, edgeY, 191);
        if (panel->leftFrame) {
            TextureTableEntryIV *corner = asdTMTexTableEntryAt(50, 41);
            shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
            s32 cornerX = corner->x + (shift + x);
            s32 cornerY = corner->y + y;
            texDrawTableEntryAtStoredOrigin(2, 50, 34, cornerX, cornerY, 191);
            texDrawTableEntryAtStoredOrigin(2, 50, 36, cornerX, cornerY, 191);
        }
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
