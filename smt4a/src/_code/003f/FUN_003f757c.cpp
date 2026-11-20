/* NON_MATCHING: text coordinate setup now matches; retail hoists -1 (0xffffffff) into sl at entry and saves fp/ip (27 diff lines). */
#include "text/TextDraw.h"
#include "camp/RenderCtxA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct RenderCtxA;

extern "C" {
void efctSetSpeed(f32);
s32 fontMeasureLineAdvance(const char *, u32);
f32 renderCtxCalculateStereoParallax(RenderCtxA *, f32);
}

extern "C" void FUN_003f757c(u32, s32 x, s32 y, s32 depth, const char *text,
                             u32 spriteId, u32, u32, s32 centered, f32 speed)
{
    s32 alignment = 0;
    efctSetSpeed(speed);
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(49, spriteId);
    if (centered != 0) {
        alignment = (sprite->placement->width - fontMeasureLineAdvance(text, 3)) / 2;
    }
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    s32 drawX = sprite->x + x + parallax + alignment;
    s32 drawY = sprite->y + y;
    textDrawString((f32)drawX, (f32)drawY, (f32)(251 - depth) * 0.00390625f, 3, 0.0f,
                 0xffffffff, speed, text);
    efctSetSpeed(1.0f);
}
