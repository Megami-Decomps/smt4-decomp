/* NON_MATCHING: one floating-point add uses reversed operands, and opacity conversion
 * and endpoint loads are scheduled differently at the tail call. */
#include "gfx/RoutedConnector.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"

extern "C" {
/* Draws a two-segment connector with a clamped diagonal and a horizontal end segment. */
void drawFacingElbowSegments(const RoutedConnectorStateA *state, const f32 *start, const f32 *end,
                            u32 color, s32 fade)
{
    renderCtxSelectTexture(g_renderCtx, 0);
    f32 bendX;
    f32 pixelOffset = 0.0f;
    f32 pixelOffsetY = 0.0f;
    f32 bendY = end[1];
    if (state->reverse) {
        bendX = end[0] - 16.0f;
        bendX = snapConnectorBend(start, bendX);
        f32 vertical = fabsf(bendY - start[1]);
        if (vertical - fabsf(bendX - start[0]) < 0.0f) {
            bendX = vertical + start[0];
            pixelOffset = -0.5f;
        }
    } else {
        bendX = end[0] + 16.0f;
        bendX = snapConnectorBend(start, bendX);
        f32 vertical = fabsf(bendY - start[1]);
        if (vertical - fabsf(bendX - start[0]) < 0.0f) {
            bendX = start[0] - vertical;
            pixelOffset = 0.5f;
        }
    }
    f32 joinX = pixelOffset + bendX;
    f32 joinY = pixelOffsetY + bendY;
    uiDrawSegmentStrip(color, color, start[0], start[1], bendX, bendY,
                      (256 - fade) * (1.0f / 256.0f), 1.0f);
    uiDrawSegmentStrip(color, color, joinX, joinY, end[0], end[1],
                      (256 - fade) * (1.0f / 256.0f), 1.0f);
}
} /* extern "C" */
