/* NON_MATCHING: vector load/store grouping, separate history-global literals, saved registers and final multiply/add contraction differ. */
#include "shard/W5_W5Match8_CameraTransition.h"

static inline W5Match8Vec3 operator-(const W5Match8Vec3& first, const W5Match8Vec3& second)
{
    W5Match8Vec3 result = { first.x - second.x, first.y - second.y, first.z - second.z };
    return result;
}
static inline W5Match8Vec3 operator+(const W5Match8Vec3& first, const W5Match8Vec3& second)
{
    W5Match8Vec3 result = { first.x + second.x, first.y + second.y, first.z + second.z };
    return result;
}
static inline W5Match8Vec3 operator*(const W5Match8Vec3& vector, f32 scale)
{
    W5Match8Vec3 result = { vector.x * scale, vector.y * scale, vector.z * scale };
    return result;
}

extern "C" {
extern CameraTransitionGlobals g_btlCamera;
extern W5Match8Vec3 g_cameraAlternateProgressStart;
extern W5Match8Vec3 g_cameraAlternateProgressPrevious;
extern W5Match8Vec3 g_cameraUnoffsetStartPosition;
f32 FUN_003d4dd4(s32 mode, s32 duration, s32 frame);

void FUN_004f2094(W5Match8CameraTransition* camera)
{
    // These transition fields follow the canonical camera prefix; keep its published size intact.
    struct AlternateTransitionView {
        W5Match8CameraTransition camera;
        W5Match8Vec3 progress;
        u8 reserved[0x18];
        u32 duration;
        u32 frame;
        u32 mode;
    };
    AlternateTransitionView* state = reinterpret_cast<AlternateTransitionView*>(camera);
    if (g_btlCamera.mode == 2) {
        W5Match8Vec3 delta = camera->alternateTarget - g_cameraUnoffsetStartPosition;
        f32 factor = FUN_003d4dd4(state->mode, state->duration, state->frame);
        camera->positionProgress = camera->targetStart + delta * factor;
    } else if (g_btlCamera.mode == 1) {
        state->progress = g_cameraAlternateProgressPrevious;
        f32 factor = FUN_003d4dd4(state->mode, state->duration, state->frame);
        state->progress = (camera->alternateTarget - (camera->reference.position - state->progress)) * factor;
        g_cameraAlternateProgressPrevious = state->progress;
        state->progress = g_cameraAlternateProgressStart;
        camera->positionProgress = g_cameraAlternateProgressPrevious + camera->targetStart;
        camera->targetProgress.z = camera->positionProgress.z +
            (camera->alternateTarget.z - g_cameraAlternateProgressStart.z) * factor;
    } else {
        W5Match8Vec3 delta = camera->alternateTarget - (camera->reference.position - state->progress);
        f32 factor = FUN_003d4dd4(state->mode, state->duration, state->frame);
        state->progress = delta * factor;
    }
}
}
