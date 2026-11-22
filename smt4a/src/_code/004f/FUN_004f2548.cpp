/* NON_MATCHING: 76 lines (97 vs 99 rows): routingMode == 2 branch matches completely using sibling vectorSubtract/vectorScale/vectorAdd helpers; retail addresses g_cameraAlternateProgressStart relative to g_cameraAlternateProgressPrevious (same TU) and groups mode 1 vldmia/vstmia differently. */
#include "shard/W5_W5Match8_CameraTransition.h"
#include "battle/btlCamera.h"

/* Same vector helpers as siblings FUN_004f1708 and FUN_004f0c80. */
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
f32 easeEvaluate(u32, u32, u32);
extern BtlCameraStatics g_btlCamera;
extern W5Match8Vec3 g_cameraAlternateProgressStart;
extern W5Match8Vec3 g_cameraAlternateProgressPrevious;
extern W5Match8Vec3 g_cameraUnoffsetStartPosition;

/* Advances the battle camera's target progress for routing modes 1 and 2. */
void FUN_004f2548(W5Match8CameraTransition *camera)
{
    if (g_btlCamera.routingMode == 2) {
        W5Match8Vec3 delta;
        vectorSubtract(&delta, &camera->alternateTarget, &g_cameraUnoffsetStartPosition);
        f32 progress = easeEvaluate(camera->targetMode, camera->targetDuration, camera->targetFrame);
        vectorScale(&delta, &delta, progress);
        vectorAdd(&camera->targetProgress, &camera->targetStart, &delta);
    } else if (g_btlCamera.routingMode == 1) {
        camera->alternateProgress = g_cameraAlternateProgressPrevious;
        f32 progress = easeEvaluate(camera->targetMode, camera->targetDuration, camera->targetFrame);
        W5Match8Vec3 diff;
        vectorSubtract(&diff, &camera->reference.position, &camera->alternateProgress);
        vectorSubtract(&diff, &camera->alternateTarget, &diff);
        vectorScale(&camera->alternateProgress, &diff, progress);
        g_cameraAlternateProgressPrevious = camera->alternateProgress;
        camera->alternateProgress = g_cameraAlternateProgressStart;
        vectorAdd(&camera->targetProgress, &g_cameraAlternateProgressPrevious, &camera->targetStart);
    }
}
}
