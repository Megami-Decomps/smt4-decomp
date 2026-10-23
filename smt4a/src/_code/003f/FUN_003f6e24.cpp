/* NON_MATCHING: Retail retains an unused alpha load; track alpha addressing and saved-register allocation differ. */
#include "camp/RenderCtx.h"

struct MenuLayerTrack {
    u8 unk00[0x20];
    f32 alpha;
};
struct MenuLayerComposition {
    u8 unk000[0x1F8];
    MenuLayerTrack position;
    u8 unk21C[0x68];
    MenuLayerTrack offset;
    u8 unk2A8[0x298];
    MenuLayerTrack background;
};
extern "C" {
extern RenderCtxA *g_renderCtx;
s32 vec2GetXInt(MenuLayerTrack *track);
s32 vec2GetYInt(MenuLayerTrack *track);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void efctSetSpeed(f32 alpha);
void FUN_001835b4(s32 layer, s32 font, s32 glyph, s32 y, u32 color, s32 frame);
void FUN_003f5b14(MenuLayerComposition *owner, s32 x, s32 y, s32 first, s32 second, f32 alpha);
void FUN_003f54c4(MenuLayerComposition *owner, s32 x, s32 y, f32 alpha);
void FUN_003f61b4(MenuLayerComposition *owner, s32 x, s32 y, f32 alpha);

/* Draws background glyphs followed by the positioned, faded content and its overlay. */
void FUN_003f6e24(MenuLayerComposition *owner, s32 y, u32 color, f32 alpha)
{
    vec2GetXInt(&owner->background);
    vec2GetYInt(&owner->background);
    y += (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(alpha);
    FUN_001835b4(2, 0x31, 0, y, color, 0x8D);
    FUN_001835b4(2, 0x31, 1, y, color, 0x8D);
    FUN_001835b4(2, 0x31, 9, y, color, 0x8D);
    s32 x = vec2GetXInt(&owner->position);
    s32 positionY = vec2GetYInt(&owner->position);
    f32 contentAlpha = owner->position.alpha;
    FUN_003f5b14(owner, x, positionY, 0x17, 0x1A, contentAlpha);
    s32 offsetX = vec2GetXInt(&owner->offset) + x;
    s32 offsetY = vec2GetYInt(&owner->offset) + positionY;
    contentAlpha *= owner->offset.alpha;
    FUN_003f54c4(owner, offsetX, offsetY, contentAlpha);
    FUN_003f61b4(owner, x, positionY, contentAlpha);
}
}
