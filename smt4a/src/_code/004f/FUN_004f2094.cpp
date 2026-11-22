/* NON_MATCHING: 130 lines (128 vs 134 rows): routingMode == 2 and mode 1 vector ops improved with sibling vectorSubtract/vectorScale/vectorAdd helpers; retail anchors g_cameraAlternateProgressStart relative to g_cameraAlternateProgressPrevious (same TU) and keeps the final z multiply/add unfused. */
#include "shard/W5_W5Match8_CameraTransition.h"
#include "battle/btlCamera.h"

/* Same vector helpers as siblings FUN_004f1708, FUN_004f0c80, and FUN_004f2548. */
static __inline void vectorSubtract(W5Match8Vec3 *out, const W5Match8Vec3 *a, const W5Match8Vec3 *b)
{
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
}

static __inline void vectorScale(W5Match8Vec3 *out, const W5Match8Vec3 *a, f32 scale)
{
    out->x = a->x * scale;
    out->y = a->y * scale;
    out->z = a->z * scale;
}

static __inline void vectorAdd(W5Match8Vec3 *out, const W5Match8Vec3 *a, const W5Match8Vec3 *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
}

extern "C" {
extern BtlCameraStatics g_btlCamera;
extern W5Match8Vec3 g_cameraAlternateProgressStart;
extern W5Match8Vec3 g_cameraAlternateProgressPrevious;
extern W5Match8Vec3 g_cameraUnoffsetStartPosition;
f32 easeEvaluate(s32 mode, s32 duration, s32 frame);

/* Advances the battle camera's position and alternate progress for routing modes 0, 1, and 2. */
void FUN_004f2094(W5Match8CameraTransition *camera)
{
    /* These transition fields follow the canonical camera prefix; keep its published size intact. */
    struct AlternateTransitionView {
        W5Match8CameraTransition camera;
        W5Match8Vec3 progress;
        u8 reserved[0x18];
        u32 duration;
        u32 frame;
        u32 mode;
    };
    AlternateTransitionView *state = (AlternateTransitionView *)camera;
    if (g_btlCamera.routingMode == 2) {
        W5Match8Vec3 delta;
        vectorSubtract(&delta, &camera->alternateTarget, &g_cameraUnoffsetStartPosition);
        f32 factor = easeEvaluate(state->mode, state->duration, state->frame);
        vectorScale(&delta, &delta, factor);
        vectorAdd(&camera->positionProgress, &camera->targetStart, &delta);
    } else if (g_btlCamera.routingMode == 1) {
        state->progress = g_cameraAlternateProgressPrevious;
        f32 factor = easeEvaluate(state->mode, state->duration, state->frame);
        W5Match8Vec3 diff;
        vectorSubtract(&diff, &camera->reference.position, &state->progress);
        vectorSubtract(&diff, &camera->alternateTarget, &diff);
        vectorScale(&state->progress, &diff, factor);
        g_cameraAlternateProgressPrevious = state->progress;
        state->progress = g_cameraAlternateProgressStart;
        vectorAdd(&camera->positionProgress, &g_cameraAlternateProgressPrevious, &camera->targetStart);
        camera->targetProgress.z = camera->positionProgress.z +
            (camera->alternateTarget.z - g_cameraAlternateProgressStart.z) * factor;
    } else {
        f32 factor = easeEvaluate(state->mode, state->duration, state->frame);
        W5Match8Vec3 diff;
        vectorSubtract(&diff, &camera->reference.position, &state->progress);
        vectorSubtract(&diff, &camera->alternateTarget, &diff);
        vectorScale(&state->progress, &diff, factor);
    }
}
}
