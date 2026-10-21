#include "common.h"

struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
};

struct TransformState {
    /* 0x00 */ u8 unk00[12];
    /* 0x0c */ Vector3 first;
    /* 0x18 */ Vector3 second;
};

/* Clears both transform vectors. */
extern "C" void transformClearVectors(TransformState *transform)
{
    transform->first.z = 0.0f;
    transform->first.y = 0.0f;
    transform->first.x = 0.0f;
    transform->second.z = 0.0f;
    transform->second.y = 0.0f;
    transform->second.x = 0.0f;
}
