/* NON_MATCHING: retail 58 vs built 43 rows; compiler combines interpolation multiply/add instructions unlike retail's separate operations. */
#include "shard/W5_W5Match8_CameraTransition.h"

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
    state->progress.x = g_cameraAlternateProgressStart.x + (state->target.x - g_cameraAlternateProgressStart.x) * progress;
    state->progress.y = g_cameraAlternateProgressStart.y + (state->target.y - g_cameraAlternateProgressStart.y) * progress;
    state->progress.z = g_cameraAlternateProgressStart.z + (state->target.z - g_cameraAlternateProgressStart.z) * progress;
    state->progress.x -= (state->source.x - state->current.x) * progress;
    state->progress.y -= (state->source.y - state->current.y) * progress;
    state->progress.z -= (state->source.z - state->current.z) * progress;
}
}
