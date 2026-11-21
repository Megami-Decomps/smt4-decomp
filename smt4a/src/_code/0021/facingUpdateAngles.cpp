/* NON_MATCHING (b1454): target pair now loads with vldmia like retail (named direction/target locals); only the order of the two direction loads before it (retail y then x) differs. */
#include "shard/W6_W6Match7_FacingAngles.h"

extern "C" u32 mathAtan2AngleU16(f32 y, f32 x);

// Update quantized facing angles or aim toward the supplied target position.
extern "C" void facingUpdateAngles(FacingAngles *state, s32 reverse)
{
    if (state->mode == 0) {
        return;
    }
    if (state->mode == 1) {
        f32 y = state->direction.y;
        if (y > 0.0f) {
            if (state->direction.x > 0.0f) {
                state->yaw = 90 / static_cast<s32>(state->divisor);
            } else {
                state->yaw = -90 / static_cast<s32>(state->divisor);
            }
        } else {
            if (state->direction.x > 0.0f) {
                state->yaw = 90 / static_cast<s32>(state->divisor) + 90;
            } else {
                state->yaw = -90 / static_cast<s32>(state->divisor) - 90;
            }
        }
        if (state->flags & 1) {
            s32 pitch;
            if (y > 0.0f) {
                s32 turn = state->direction.z > 0.0f ? -90 : 90;
                pitch = turn / static_cast<s32>(state->divisor);
            } else if (state->direction.z > 0.0f) {
                pitch = -90 / static_cast<s32>(state->divisor) - 90;
            } else {
                pitch = 90 / static_cast<s32>(state->divisor) + 90;
            }
            state->pitch = pitch;
        }
        return;
    }
    if (state->mode == 2) {
        f32 directionX = state->direction.x;
        f32 directionY = state->direction.y;
        f32 targetX = state->target.x;
        f32 targetY = state->target.y;
        u32 angle = mathAtan2AngleU16(directionY - targetY, directionX - targetX);
        u32 degrees = (static_cast<u16>(angle - 0x4000) * 360u) >> 16;
        state->yaw = degrees;
        if (reverse) {
            state->yaw = -degrees;
        }
    }
}
