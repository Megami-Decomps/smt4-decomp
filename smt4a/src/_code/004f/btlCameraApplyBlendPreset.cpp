/* NON_MATCHING: VFP register assignment differs from retail (retail hoists seven literals, 2.3/55 land in adjacent s2/s3 for vstm, 180 in s4, 35 in s5); retail also treats cases 1 and 4 as separate identical arms the compiler merged, which the build cannot reproduce without growing the diff. */
#include "shard/W5_W5Match8_CameraTransition.h"

namespace {
struct CameraBlendValues {
    W5Match8Vec3 position;
    u8 unk0c[0xc];
    W5Match8Vec3 target;
    u8 unk24[0xc];
    W5Match8Vec3 up;
    u8 unk3c[4];
    f32 angle;
};
struct CameraBlendState {
    u8 unk000[0x580];
    CameraBlendValues current;
    CameraBlendValues destination;
    CameraBlendValues source;
};

void setCameraVector(W5Match8Vec3& vector, f32 x, f32 y, f32 z)
{
    vector.x = x;
    vector.y = y;
    vector.z = z;
}
}

extern "C" void btlCameraApplyBlendPreset(W5Match8CameraTransition* object, u32 preset, s32 slot)
{
    CameraBlendState* camera = reinterpret_cast<CameraBlendState*>(object);
    CameraBlendValues* values;
    if (slot == 1) {
        values = &camera->destination;
    } else if (slot == 2) {
        values = &camera->source;
    } else {
        values = &camera->current;
    }
    switch (preset) {
    case 0:
        values->angle = 35.0f;
        setCameraVector(values->target, 0.0f, 0.0f, -1.0f);
        setCameraVector(values->position, 0.0f, 7.5f, 44.5f);
        setCameraVector(values->up, 44.5f, 0.0f, 0.0f);
        return;
    case 2:
        values->angle = 35.0f;
        setCameraVector(values->target, 0.8f, 0.0f, -0.6f);
        setCameraVector(values->position, 0.7f, 5.3f, 39.6f);
        setCameraVector(values->up, 39.6f, -6.2f, 180.0f);
        return;
    case 3:
        values->angle = 30.0f;
        setCameraVector(values->target, 0.0f, 0.0f, -1.0f);
        setCameraVector(values->position, 1.8f, 4.0f, 46.5f);
        setCameraVector(values->up, 46.5f, -9.9f, 180.0f);
        return;
    case 1:
    case 4:
        values->angle = 35.0f;
        setCameraVector(values->target, 0.0f, 0.0f, -1.0f);
        setCameraVector(values->position, 0.0f, 2.3f, 55.0f);
        setCameraVector(values->up, 55.0f, -7.7f, 180.0f);
        return;
    case 5:
        values->angle = 35.0f;
        setCameraVector(values->target, 0.0f, 0.0f, -1.0f);
        setCameraVector(values->position, 0.0f, 2.3f, 53.3f);
        setCameraVector(values->up, 53.3f, -7.7f, 180.0f);
        return;
    default:
        return;
    }
}
