#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
/* NON_MATCHING: initial argument loads and screen-offset addition use different registers. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"

extern "C" {
void efctSetSpeed(f32);
}

extern "C" void FUN_003f707c(u32, s32 x, s32 y, u32 color, s32 first,
                             s32 second, s32 third, s32 last, f32 speed)
{
    efctSetSpeed(speed);
    x += s32(renderCtxCalculateStereoParallax(g_renderCtx, 0.26f));
    for (s32 i = 0; i < 8; ++i) {
        texDrawTableEntryAtStoredOrigin(2, 49, first + i, x, y, color);
    }
    for (s32 i = 0; i < 3; ++i) {
        texDrawTableEntryAtStoredOrigin(2, 49, second + i, x, y, color);
    }
    for (s32 i = 0; i < 3; ++i) {
        texDrawTableEntryAtStoredOrigin(2, 49, third + i, x, y, color);
    }
    texDrawTableEntryAtStoredOrigin(2, 49, last, x, y, color);
    efctSetSpeed(1.0f);
}
