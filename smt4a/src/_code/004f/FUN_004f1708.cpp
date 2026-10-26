/* NON_MATCHING: 60 vs 58 rows; separate vector subtract/scale/add helpers now keep the VFP operations unfused, but retail loads and subtracts the first delta z-first and schedules the multiplies in another order. */
#include "shard/W5_W5Match8_CameraTransition.h"

static __inline void vectorSubtract(W5Match8Vec3 *result, const W5Match8Vec3 *left, const W5Match8Vec3 *right)
{
    result->x = left->x - right->x;
    result->y = left->y - right->y;
    result->z = left->z - right->z;
}

static __inline void vectorScale(W5Match8Vec3 *result, const W5Match8Vec3 *vector, f32 scale)
{
    result->x = vector->x * scale;
    result->y = vector->y * scale;
    result->z = vector->z * scale;
}

static __inline void vectorAdd(W5Match8Vec3 *result, const W5Match8Vec3 *left, const W5Match8Vec3 *right)
{
    result->x = left->x + right->x;
    result->y = left->y + right->y;
    result->z = left->z + right->z;
}

extern "C" {
f32 FUN_003d4dd4(u32 mode, u32 duration, u32 frame);
extern W5Match8Vec3 g_cameraAlternateProgressStart;

void FUN_004f1708(void *camera)
{
    struct SecondaryPositionView {
        u8 unk000[0x608];
        W5Match8Vec3 current;
        u8 unk614[0x13C];
        W5Match8Vec3 progress;
        u8 unk75C[0xC];
        W5Match8Vec3 source;
        W5Match8Vec3 target;
        u32 duration;
        u32 frame;
        u32 mode;
    };
    SecondaryPositionView *state = static_cast<SecondaryPositionView *>(camera);
    f32 progress = FUN_003d4dd4(state->mode, state->duration, state->frame);
    W5Match8Vec3 first;
    vectorSubtract(&first, &state->target, &g_cameraAlternateProgressStart);
    W5Match8Vec3 second;
    vectorSubtract(&second, &state->source, &state->current);
    vectorScale(&first, &first, progress);
    vectorScale(&second, &second, progress);
    vectorAdd(&state->progress, &g_cameraAlternateProgressStart, &first);
    vectorSubtract(&state->progress, &state->progress, &second);
}
}
