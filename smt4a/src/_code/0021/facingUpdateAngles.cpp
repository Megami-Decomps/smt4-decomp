/* NON_MATCHING: target coordinates use scalar VLDRs instead of retail's VLDMIA pair; angle scaling r0/r1 operands and zero/Y load order differ. */
#include "shard/W6_W6Match7_FacingAngles.h"

extern "C" u32 FUN_0043bb48(f32 y, f32 x);

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
        u32 angle = FUN_0043bb48(state->direction.y - state->target.y, state->direction.x - state->target.x);
        u32 degrees = (static_cast<u16>(angle - 0x4000) * 360u) >> 16;
        state->yaw = degrees;
        if (reverse) {
            state->yaw = -degrees;
        }
    }
}
