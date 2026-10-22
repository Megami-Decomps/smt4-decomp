#include "common.h"

struct CameraDefaultParameters {
    u8 unk000[0x168];
    f32 position[3];
    u8 unk174[0xC];
    f32 direction[3];
    u8 unk18C[0xC];
    f32 distance;
    u8 unk19C[0xC];
    f32 fieldOfView;
    u8 unk1AC[0xEC];
    f32 distanceProgress;
    u8 unk29C[0xC];
    f32 angleProgress;
    u8 unk2AC[0x20];
    f32 targetProgress[3];
    u8 unk2D8[0xC];
    f32 alternateProgress[3];
};
struct CameraDefaultView {
    u8 unk000[0x400];
    CameraDefaultParameters parameters;
};

/* Check the default camera pose and that all interpolation progress is zero. */
extern "C" u32 cameraTestDefaultPose(const CameraDefaultView *camera)
{
    const CameraDefaultParameters *state = &camera->parameters;
    return state->fieldOfView == 35.0f &&
        state->direction[0] == 0.0f && state->direction[1] == 0.0f &&
        state->direction[2] == -1.0f && state->position[0] == 0.0f &&
        state->position[1] == 6.3f && state->position[2] == 44.5f && state->distance == 44.5f &&
        state->alternateProgress[0] == 0.0f && state->alternateProgress[1] == 0.0f &&
        state->alternateProgress[2] == 0.0f && state->distanceProgress == 0.0f &&
        state->angleProgress == 0.0f && state->targetProgress[0] == 0.0f &&
        state->targetProgress[1] == 0.0f && state->targetProgress[2] == 0.0f;
}
