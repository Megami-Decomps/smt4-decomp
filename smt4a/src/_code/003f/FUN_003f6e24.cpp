/* NON_MATCHING: the track alpha reads (including the retail dead read of the background track's speed) now go through vec2GetSpeed and everything from the content draw on matches; retail loads the glyph flags constant 0x8D into r6 before the efctSetSpeed call and keeps y in r7, ours loads it after the call (y in r6, constant in r7). */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "code/Code003f.h"

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
void efctSetSpeed(f32 alpha);
void FUN_003f54c4(MenuLayerComposition *owner, s32 x, s32 y, f32 alpha);
void FUN_003f61b4(MenuLayerComposition *owner, s32 x, s32 y, f32 alpha);
f32 vec2GetSpeed(const void *track);

/* Draws background glyphs followed by the positioned, faded content and its overlay. */
void FUN_003f6e24(MenuLayerComposition *owner, s32 y, u32 color, f32 alpha)
{
    vec2GetXInt(&owner->background);
    vec2GetYInt(&owner->background);
    vec2GetSpeed(&owner->background);
    y += (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(alpha);
    FUN_001835b4(2, 0x31, 0, y, color, 0x8D);
    FUN_001835b4(2, 0x31, 1, y, color, 0x8D);
    FUN_001835b4(2, 0x31, 9, y, color, 0x8D);
    s32 x = vec2GetXInt(&owner->position);
    s32 positionY = vec2GetYInt(&owner->position);
    f32 contentAlpha = vec2GetSpeed(&owner->position);
    FUN_003f5b14(owner, x, positionY, 0x17, 0x1A, contentAlpha);
    s32 offsetX = vec2GetXInt(&owner->offset) + x;
    s32 offsetY = vec2GetYInt(&owner->offset) + positionY;
    contentAlpha *= vec2GetSpeed(&owner->offset);
    FUN_003f54c4(owner, offsetX, offsetY, contentAlpha);
    FUN_003f61b4(owner, x, positionY, contentAlpha);
}
}
