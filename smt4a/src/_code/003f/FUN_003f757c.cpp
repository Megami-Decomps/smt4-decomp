/* NON_MATCHING: text placement uses different saved registers and a tail-called speed reset. */
#include "shard/S1ListPanel.h"
#include "text/TextDraw.h"

struct RenderCtxA;

extern "C" {
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32);
SpriteInfo *asdTMTexTableEntryAt(u32, u32);
s32 fontMeasureLineAdvance(const char *, u32);
f32 renderCtxCalculateStereoParallax(RenderCtxA *, f32);
}

extern "C" void FUN_003f757c(u32, s32 x, s32 y, s32 depth, const char *text,
                             u32 spriteId, u32, u32, s32 centered, f32 speed)
{
    s32 alignment = 0;
    efctSetSpeed(speed);
    SpriteInfo *sprite = asdTMTexTableEntryAt(49, spriteId);
    if (centered != 0) {
        alignment = (sprite->size[0] - fontMeasureLineAdvance(text, 3)) / 2;
    }
    s32 screenX = sprite->x + x + s32(renderCtxCalculateStereoParallax(g_renderCtx, 0.26f)) + alignment;
    textDrawString(3, -1, text, f32(screenX), f32(sprite->y + y),
                 f32(251 - depth) * 0.00390625f, 0.0f, speed);
    efctSetSpeed(1.0f);
}
