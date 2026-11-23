#include "shard/W6_W6Match7_FacingAngles.h"

extern "C" u32 mathAtan2AngleU16(f32 y, f32 x);

// Update quantized facing angles or aim toward the supplied target position.
extern "C" void facingUpdateAngles(FacingAngles *state, s32 reverse)
{
    if (state->mode == 0) {
        return;
    }
    if (state->mode == 1) {
        if (state->direction.y > 0.0f) {
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
            if (state->direction.y > 0.0f) {
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
        f32 deltaY = state->direction.y - state->target.y;
        f32 deltaX = state->direction.x - state->target.x;
        /* The direction's 16-bit angle (65536 per turn), turned back a quarter turn. */
        u16 angle = mathAtan2AngleU16(deltaY, deltaX) - 0x4000;
        u32 degrees = (angle * 360u) >> 16;
        state->yaw = degrees;
        if (reverse) {
            state->yaw = -degrees;
        }
    }
}
