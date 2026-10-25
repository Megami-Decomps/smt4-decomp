#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
const SpriteInfo *FUN_001834a4(u32 group, u32 image);
void efctSetSpeed(f32 speed);

static inline s32 iconImageForKind(u32 kind)
{
    switch (kind) {
    case 0: return 1000;
    case 1: return 1006;
    case 2: return 1002;
    case 3: return 1003;
    case 4: return 1004;
    case 5: return 1008;
    case 6: return 1005;
    case 8: return 1001;
    case 7:
    case 9: return 1007;
    case 10: return 3;
    case 11: return 1009;
    default: return -1;
    }
}

// Draw a kind-specific icon at the selected image anchor with stereo offset and temporary effect speed.
void uiDrawStereoKindIcon(u32 context, s32 x, s32 y, u32 color, u32 kind, u32 anchorImage, f32 speed)
{
    s32 image = iconImageForKind(kind);
    if (image < 0) {
        return;
    }
    s32 parallax = renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    const SpriteInfo *anchor = FUN_001834a4(49, anchorImage);
    s32 drawX = anchor->x + (x + parallax);
    s32 drawY = anchor->y + y;
    efctSetSpeed(speed);
    FUN_001835b4(2, 49, image, drawX, drawY, color);
    efctSetSpeed(1.0f);
}
}
