#include "camp/RenderCtx.h"
#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {

extern RenderCtxA *g_renderCtx;
extern QuadVectorState DAT_006306f8;
void FUN_00167618(const QuadVector *first, const QuadVector *second, const QuadVector *third,
                  const QuadVector *fourth, f32 x, f32 y, f32 width, f32 height, f32 depth);

/* Draws a screen rectangle with the shared corner colors when they were set (the default color
 * otherwise); `fade` 0..256 maps to the depth argument (256 - fade) / 256. */
void screenDrawShadedRect(s32 x, s32 y, s32 width, s32 height, s32 fade)
{
    const QuadVector *first = NULL;
    const QuadVector *second = NULL;
    const QuadVector *third = NULL;
    const QuadVector *fourth = NULL;

    if (DAT_006306f8.dirty) {
        first = &DAT_006306f8.corners[0];
        second = &DAT_006306f8.corners[1];
        third = &DAT_006306f8.corners[2];
        fourth = &DAT_006306f8.corners[3];
    }
    renderCtxSelectTexture(g_renderCtx, 0);
    FUN_00167618(first, second, third, fourth, (f32)x, (f32)y, (f32)width, (f32)height,
                 (f32)(0x100 - fade) / 256.0f);
}

} /* extern "C" */
