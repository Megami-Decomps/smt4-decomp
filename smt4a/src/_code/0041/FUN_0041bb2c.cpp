/* NON_MATCHING: retail reloads each velocity/position component from memory between the adds and uses a 76-byte frame; ours forwards the stored velocity in registers (84-byte frame). */
#include "nw/math/MTX34.h"
#include <stddef.h>

using nw::math::MTX34;

struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
};

/* The controller an effect drives (flags at +4). */
struct EffectController {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
};

struct EffectOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ EffectController *controller;
};

/* A scripted move/rotate of an effect: position and angle advance each frame by a velocity that
 * itself accelerates, and the result is turned into the controller's transform. */
struct EffectMotion {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ EffectOwner *owner;
    /* 0x08 */ s32 framesLeft;
    /* 0x0C */ Vector3 pivot;
    /* 0x18 */ Vector3 position;
    /* 0x24 */ Vector3 angle;         /* degrees */
    /* 0x30 */ u8 unk30[0xC];
    /* 0x3C */ Vector3 velocity;
    /* 0x48 */ Vector3 acceleration;
    /* 0x54 */ Vector3 angularVelocity;
    /* 0x60 */ MTX34 transform;
    /* 0x90 */ Vector3 finalPosition;
    /* 0x9C */ Vector3 finalAngle;
    /* 0xA8 */ u32 finalTriple[3];
};

typedef char EffectMotionLayoutCheck[offsetof(EffectMotion, transform) == 0x60 &&
    offsetof(EffectMotion, finalTriple) == 0xA8 ? 1 : -1];

extern "C" {

void controllerSetDestination(EffectController *controller, const Vector3 *destination);
void controllerSetRotationEulerDegrees(EffectController *controller, f32 x, f32 y, f32 z);
void tripleOwnerSetValue(EffectController *controller, const u32 *triple);
void nn_math_ARMv6_MTX34CopyAsm(MTX34 *destination, const MTX34 *source);
void nn_math_ARMv6_MTX34MultAsm(MTX34 *destination, const MTX34 *first, const MTX34 *second);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(Vector3 *out, const MTX34 *matrix, const Vector3 *in);
void FUN_0017fc94(MTX34 *destination, const Vector3 *translation, const MTX34 *source);
void FUN_001aff14(MTX34 *matrix, s32 clearTranslation, f32 x, f32 y, f32 z);
void FUN_001ab810(EffectController *controller, const MTX34 *matrix);

/* One frame of the effect motion; on the last frame it snaps the controller to the final values. */
void FUN_0041bb2c(EffectMotion *motion)
{
    EffectController *controller;
    MTX34 rotation;
    Vector3 origin;
    Vector3 negPivot;

    motion->framesLeft--;
    if (motion->framesLeft == 0) {
        controller = motion->owner->controller;
        controllerSetDestination(controller, &motion->finalPosition);
        controllerSetRotationEulerDegrees(controller, motion->finalAngle.x, motion->finalAngle.y, motion->finalAngle.z);
        tripleOwnerSetValue(controller, motion->finalTriple);
        controller->flags |= 3;
        return;
    }
    motion->velocity.x += motion->acceleration.x;
    motion->velocity.y += motion->acceleration.y;
    motion->velocity.z += motion->acceleration.z;
    motion->position.x += motion->velocity.x;
    motion->position.y += motion->velocity.y;
    motion->position.z += motion->velocity.z;
    motion->angle.x += motion->angularVelocity.x;
    motion->angle.y += motion->angularVelocity.y;
    motion->angle.z += motion->angularVelocity.z;
    negPivot.x = -motion->pivot.x;
    negPivot.y = -motion->pivot.y;
    negPivot.z = -motion->pivot.z;
    nn_math_ARMv6_MTX34CopyAsm(&motion->transform, &MTX34::Identity());
    FUN_0017fc94(&motion->transform, &negPivot, &motion->transform);
    FUN_001aff14(&rotation, 1, motion->angle.x * 0.7111111f, motion->angle.y * 0.7111111f, motion->angle.z * 0.7111111f);
    nn_math_ARMv6_MTX34MultAsm(&motion->transform, &rotation, &motion->transform);
    FUN_0017fc94(&motion->transform, &motion->pivot, &motion->transform);
    FUN_0017fc94(&motion->transform, &motion->position, &motion->transform);
    controller = motion->owner->controller;
    FUN_001ab810(controller, &rotation);
    origin.x = 0.0f;
    origin.y = 0.0f;
    origin.z = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&origin, &motion->transform, &origin);
    controllerSetDestination(controller, &origin);
}

} /* extern "C" */
