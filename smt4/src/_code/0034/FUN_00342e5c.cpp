/* NON_MATCHING: connector coordinate scheduling and floating-point register allocation differ. */
#include "gfx/RoutedConnector.h"
#include "title/titleMain.h"
#include <math.h>

extern "C" {
extern TitleScene* g_titleScene;
void FUN_002d5900(u32 firstColor, u32 secondColor, f32 startX, f32 startY,
                  f32 endX, f32 endY, f32 opacity, f32 width);

// Draw a two-segment connector with a clamped diagonal and a horizontal end segment.
void FUN_00342e5c(const RoutedConnectorState* state, const f32* start, const f32* end,
                  u32 color, s32 fade)
{
    renderCtxSelectTexture(g_titleScene, 0);
    f32 bendX;
    f32 pixelOffset = 0.0f;
    f32 bendY = end[1];
    if (state->reverse) {
        bendX = end[0] - 16.0f;
        if (fabsf(bendX - start[0]) < 1.0f)
            bendX = start[0];
        f32 vertical = fabsf(end[1] - start[1]);
        if (vertical - fabsf(bendX - start[0]) < 0.0f) {
            bendX = start[0] + vertical;
            pixelOffset = -0.5f;
        }
    } else {
        bendX = end[0] + 16.0f;
        if (fabsf(bendX - start[0]) < 1.0f)
            bendX = start[0];
        f32 vertical = fabsf(end[1] - start[1]);
        if (vertical - fabsf(bendX - start[0]) < 0.0f) {
            bendX = start[0] - vertical;
            pixelOffset = 0.5f;
        }
    }
    FUN_002d5900(color, color, start[0], start[1], pixelOffset + bendX, bendY,
                  (256 - fade) * (1.0f / 256.0f), 1.0f);
    FUN_002d5900(color, color, bendX + pixelOffset, bendY, end[0], end[1],
                  (256 - fade) * (1.0f / 256.0f), 1.0f);
}
}
