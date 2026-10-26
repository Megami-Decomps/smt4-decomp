#include "gfx/StereoParallax.h"
/* NON_MATCHING: logic and call sequence match; retail keeps one more value live (constant 201 hoisted into r11 and x held in r6), so its register assignment and 12-byte frame differ from the build. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"


struct RenderCtx;

/* A camp status screen with its two sprites. */
struct CampStatusScreen {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ u32 mode;
    /* 0x018 */ u8 unk018[0x38];
    /* 0x050 */ s32 scroll;
    /* 0x054 */ u8 unk054[0xD4];
    /* 0x128 */ s32 scrollBase;
    /* 0x12C */ u8 unk12C[0x40];
    /* 0x16C */ u8 spriteA[0x118];
    /* 0x284 */ u8 unk284[0x2BC];
    /* 0x540 */ u8 spriteB[0x98];
    /* 0x5D8 */ void *panel;
};

extern "C" {
extern RenderCtx *g_renderCtx;
s32 vec2GetXInt(const void *position);
s32 vec2GetYInt(const void *position);
f32 vec2GetSpeed(const void *position);
void efctSetSpeed(f32 speed);
void FUN_003f5b14(void *owner, s32 y, u32 color, s32 firstX, s32 secondX, f32 alpha);
void FUN_003f5d94(void *owner, s32 x, s32 y, f32 alpha);
void FUN_003f6e24(void *owner, s32 x, s32 y, f32 alpha);
void FUN_003f78f8(void *owner, s32 x, s32 y, f32 alpha);
void FUN_00164168(void *panel, s32 x, s32 y, u32 color, u32 layer, s32 value, f32 alpha);

// Draw the camp status screen for its current mode at the main sprite's position, then reset the draw speed.
void FUN_003f82b8(CampStatusScreen *screen)
{
    s32 x = vec2GetXInt(screen->spriteA);
    s32 y = vec2GetYInt(screen->spriteA);
    f32 speed = vec2GetSpeed(screen->spriteA);

    switch (screen->mode) {
    case 0:
    case 1:
    case 2:
    case 3: {
        s32 secondX = vec2GetXInt(screen->spriteB);
        s32 secondY = vec2GetYInt(screen->spriteB);
        f32 secondSpeed = vec2GetSpeed(screen->spriteB);
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        s32 drawX = x + parallax;
        efctSetSpeed(speed);
        FUN_001835b4(2, 49, 0, drawX, y, 141);
        FUN_001835b4(2, 49, 1, drawX, y, 141);
        FUN_001835b4(2, 49, 9, drawX, y, 141);
        break;
    }
    case 4:
    case 5:
        FUN_003f6e24(screen, x, y, speed);
        break;
    case 9:
    case 10:
    case 11: {
        s32 baseX = x;
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        FUN_003f5b14(screen, baseX, y, 226, 229, speed);
        for (s32 i = 0; i < 8; i++) {
            s32 value = screen->scroll + i - screen->scrollBase;
            if (value >= 0) {
                TextureTableEntryIV *frame = asdTMTexTableEntryAt(49, 252 + i);
                FUN_00164168(screen->panel, frame->x + baseX + parallax, frame->y + y, 201, 6, value, speed);
            }
        }
        FUN_003f78f8(screen, baseX, y, speed);
        break;
    }
    default:
        FUN_003f5d94(screen, x, y, speed);
        break;
    }
    efctSetSpeed(1.0f);
}

}
