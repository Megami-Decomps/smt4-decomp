/* NON_MATCHING: the control flow, the batched MTX34RotXYZFIdx (two wrap loops, then the lookups) and the scaled velocity written in each arm are retail's; retail needs only d8 and a 64-byte frame (this build saves d8-d10 and uses 100 bytes), stores the matrix translation zeros from an integer register, copies the scene position into the direction with ldm/stm and reaches the owner's position through a base at +0x24, and orders the rotation products differently. */
#include "common.h"
#include "map/LmapGlobals.h"
#include "map/MapVector.h"
#include "gfx/EulerPhaseRotation.h"
#include <math.h>

/* An object with a world position (accessed fields). */
struct PositionedObject {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ MapVector position;
};

/* A drifting effect: its owner and the velocity set here. */
struct DriftEffect {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ PositionedObject *owner;
    /* 0x10 */ MapVector velocity;
};

extern "C" {
extern const PhaseTrigEntry g_sinCosTable[];
u32 randNextInRange(u32 maximum);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(MapVector *out, const Matrix34Data *matrix, const MapVector *v);
}

/* Give the effect a velocity: usually a random heading, one time in ten straight toward the scene focus. */
extern "C" void driftEffectSetVelocity(DriftEffect *effect)
{
    PositionedObject *owner = effect->owner;
    f32 speed = 40.0f;
    MapVector direction;

    if (randNextInRange(99) % 10 == 0) {
        direction = g_lmapScene->pose.position;
        direction.x -= owner->position.x;
        direction.y -= owner->position.y;
        direction.z -= owner->position.z;
        f32 scale = 1.0f / sqrtf(direction.x * direction.x + direction.y * direction.y + direction.z * direction.z);
        direction.x = direction.x * scale;
        direction.y = direction.y * scale;
        direction.z = direction.z * scale;
        mapVectorScale(&effect->velocity, &direction, speed);
    } else {
        /* A heading in whole degrees, as an index of 256 steps a turn. */
        f32 heading = (f32)randNextInRange(360) * 0.7111111f;
        Matrix34Data rotation;
        buildEulerPhaseRotationBatched(&rotation, g_sinCosTable, 0.0f, heading, 0.0f);
        rotation.values[3] = 0.0f;
        rotation.values[7] = 0.0f;
        rotation.values[11] = 0.0f;
        direction.x = 1.0f;
        direction.y = 0.0f;
        direction.z = 0.0f;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&direction, &rotation, &direction);
        mapVectorScale(&effect->velocity, &direction, speed);
    }
}
