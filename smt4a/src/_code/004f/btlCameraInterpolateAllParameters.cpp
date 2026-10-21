/* NON_MATCHING: scalar VMLA/stores replace retail's batched VMUL/VADD vector arithmetic; lower optimization may change scheduling. */
#include "shard/W5_W5Match8_CameraTransition.h"

namespace {
struct CameraBlendValues {
    W5Match8Vec3 position;
    u8 unk0C[0xC];
    W5Match8Vec3 target;
    u8 unk24[0xC];
    W5Match8Vec3 up;
    u8 unk3C[4];
    f32 angle;
};

struct CameraBlendState {
    u8 unk000[0x580];
    CameraBlendValues current;
    CameraBlendValues destination;
    CameraBlendValues source;
    u32 flags;
    s32 duration;
};
}

extern "C" f32 FUN_003d4dd4(s32 mode, s32 duration, s32 frame);

extern "C" void btlCameraInterpolateAllParameters(W5Match8CameraTransition* object, s32 frame)
{
    CameraBlendState* camera = reinterpret_cast<CameraBlendState*>(object);
    const f32 progress = FUN_003d4dd4(0, camera->duration, frame);
    camera->current.angle =
        (camera->destination.angle - camera->source.angle) * progress + camera->source.angle;
    camera->current.target.x =
        (camera->destination.target.x - camera->source.target.x) * progress + camera->source.target.x;
    camera->current.target.y =
        (camera->destination.target.y - camera->source.target.y) * progress + camera->source.target.y;
    camera->current.target.z =
        (camera->destination.target.z - camera->source.target.z) * progress + camera->source.target.z;
    camera->current.position.x =
        (camera->destination.position.x - camera->source.position.x) * progress + camera->source.position.x;
    camera->current.position.y =
        (camera->destination.position.y - camera->source.position.y) * progress + camera->source.position.y;
    camera->current.position.z =
        (camera->destination.position.z - camera->source.position.z) * progress + camera->source.position.z;
    camera->current.up.x =
        (camera->destination.up.x - camera->source.up.x) * progress + camera->source.up.x;
    camera->current.up.y =
        (camera->destination.up.y - camera->source.up.y) * progress + camera->source.up.y;
    camera->current.up.z =
        (camera->destination.up.z - camera->source.up.z) * progress + camera->source.up.z;
}
