/* NON_MATCHING: every channel, the orbit matrix, the eye/target sums and the calls are retail's (1055 rows
 * against 1043), and the two pans sit where retail has them (sp+96, sp+136); the rest of the frame does not:
 * retail's is 204 bytes with the target at sp+8, the eye at sp+20 and the matrix at sp+40 (here 212, with the eye
 * at sp+8, the target at sp+24 and the matrix at sp+48), so the stack-relative rows of the tail differ. Retail
 * also keeps more field addresses alive (the frame counters and vectors of the alternate channels are computed
 * once before the 0x100 test and spilled) and loads 1.0f before 0.0f. */
#include "common.h"
#include "battle/btlCamera.h"
#include <math.h>

struct BtlCameraMatrix {
    f32 m[3][4];
};

struct BtlCameraPan {
    f32 x, y;
};

extern "C" {

extern BtlCameraStatics g_btlMain; // declcheck: local (the statics view of battle/btlCamera.h, as its users declare it)
extern BtlCameraVector3 DAT_00493530; /* the look shift's base while flag 0x8000 runs */

f32 FUN_00227280(s32 mode, s32 duration, s32 frame);
s32 randBetween(s32 minimum, s32 maximum);
f32 mathSinFixedAngle(f32 angle);
void mathSinCos(f32 *sine, f32 *cosine, f32 angle);
void FUN_002929d8(BtlCameraMatrix *matrix, s32 clearTranslation, f32 x, f32 y, f32 z);
void FUN_003d62a0(BtlCamera *camera, u32 frame);
void FUN_003d5698(BtlCamera *camera, u32 frame);
void FUN_003d681c(BtlCamera *camera);
void FUN_003d6e20(BtlCamera *camera);
void battleVectorTransitionUpdatePath(BtlCamera *camera);
void battleCameraBlendTargetOffset(BtlCamera *camera);
void FUN_003d5af0(void *owner, AsdCamera *view, const BtlCameraVector3 *eye, const BtlCameraVector3 *target,
                  const BtlCameraVector3 *up, const BtlCameraVector3 *rotation);
void FUN_002c159c(AsdCamera *view, f32 first, f32 second);
void FUN_001db388(AsdCamera *view, s32 lowerScreen, f32 fieldOfView, f32 nearClip, f32 farClip);
void effectSetPrimaryPosition(const BtlCameraVector3 *position);
void effectSetSecondaryPosition(const BtlCameraVector3 *position);
void effectSetProcessScalar(f32 value);
u32 eventCommandGetPendingCleanup(void);
u8 *FUN_0018f654(u8 *object);
void FUN_00257e74(BtlCameraShake *shake);
void pairSourceGet(BtlCameraShake *shake, f32 *x, f32 *y);
u32 rangeIsValid(BtlCameraShake *shake);

#define FIXED_ANGLE_PER_RADIAN 40.743664f  /* 256 / (2 * pi): the sine table's units */
#define RADIAN_PER_FIXED_ANGLE 0.024543693f /* 2 * pi / 256 */

static __inline void vecAdd(BtlCameraVector3 *value, const BtlCameraVector3 *other)
{
    value->x += other->x;
    value->y += other->y;
    value->z += other->z;
}

static __inline void vecSubtract(BtlCameraVector3 *result, const BtlCameraVector3 *left, const BtlCameraVector3 *right)
{
    result->x = left->x - right->x;
    result->y = left->y - right->y;
    result->z = left->z - right->z;
}

static __inline void matrixTransform(BtlCameraVector3 *result, const BtlCameraMatrix *matrix, const BtlCameraVector3 *vector)
{
    result->x = matrix->m[0][0] * vector->x + matrix->m[0][1] * vector->y + matrix->m[0][2] * vector->z;
    result->y = matrix->m[1][0] * vector->x + matrix->m[1][1] * vector->y + matrix->m[1][2] * vector->z;
    result->z = matrix->m[2][0] * vector->x + matrix->m[2][1] * vector->y + matrix->m[2][2] * vector->z;
}

static __inline void vecScale(BtlCameraVector3 *result, const BtlCameraVector3 *vector, f32 scale)
{
    result->x = vector->x * scale;
    result->y = vector->y * scale;
    result->z = vector->z * scale;
}

static __inline void vecSum(BtlCameraVector3 *result, const BtlCameraVector3 *left, const BtlCameraVector3 *right)
{
    result->x = left->x + right->x;
    result->y = left->y + right->y;
    result->z = left->z + right->z;
}

/* The battle camera's per-frame update: advances every running channel (flags), then builds the eye and
 * target from the pose and the channel values, sets the view and its lens and tells the effect system where
 * the camera is. Returns -1 once the camera has finished (state 2), else 0. */
s32 btlCameraUpdate(BtlCamera *camera)
{
    if (camera->state == 0) {
        /* not started: nothing to update */
    } else if (camera->state == 1) {
        if (camera->flags & 1) {
            FUN_003d62a0(camera, camera->blendFrame);
            if (++camera->blendFrame > camera->blendDuration) {
                camera->flags &= ~1;
            }
        }
        if (camera->flags & 2) {
            /* A new random offset of up to `strength` on each axis. */
            f32 strength = 0.0f;
            if (camera->jitterMode == 0) {
                strength = 0.2f;
            } else if (camera->jitterMode == 1) {
                strength = 1.0f;
            }
            f32 x = strength * randBetween(-100, 100) * 0.01f;
            f32 y = strength * randBetween(-100, 100) * 0.01f;
            f32 z = strength * randBetween(-100, 100) * 0.01f;
            camera->jitter.x = x;
            camera->jitter.y = y;
            camera->jitter.z = z;
            if (++camera->jitterFrame > camera->jitterDuration) {
                camera->flags &= ~2;
                camera->jitter.x = camera->jitter.y = camera->jitter.z = 0.0f;
            }
        }
        if (camera->flags & 4) {
            BtlCameraVector3 span;
            vecSubtract(&span, &camera->endPose.position, &camera->offset);
            camera->eyeSlide.x = FUN_00227280(camera->eyeSlideMode, camera->eyeSlideDuration, camera->eyeSlideFrame) * span.x;
            if (++camera->eyeSlideFrame > camera->eyeSlideDuration) {
                camera->flags &= ~4;
            }
        }
        if (camera->flags & 8) {
            f32 span = camera->endPose.distance - camera->distance;
            camera->eyeRise = FUN_00227280(camera->eyeRiseMode, camera->eyeRiseDuration, camera->eyeRiseFrame) * span;
            if (++camera->eyeRiseFrame > camera->eyeRiseDuration) {
                camera->flags &= ~8;
            }
        }
        if (camera->flags & 0x10) {
            FUN_003d5698(camera, camera->poseFrame);
            if (++camera->poseFrame > camera->poseDuration) {
                camera->flags &= ~0x10;
            }
        }
        if (camera->flags & 0x20) {
            camera->sway.y = mathSinFixedAngle(camera->swayFrame * g_btlMain.alt.swaySpeed * FIXED_ANGLE_PER_RADIAN) *
                             g_btlMain.alt.swayAmplitude;
            camera->swayFrame++;
        }
        if (camera->flags & 0x80000) {
            /* Move the whole camera from the first editor pose to the second. */
            BtlCameraVector3 span;
            vecSubtract(&span, &camera->movePoints[1], &camera->movePoints[0]);
            f32 factor = FUN_00227280(0, camera->moveDuration, camera->moveFrame);
            camera->position.z = camera->movePoints[0].z + span.z * factor;
            camera->position.x = camera->movePoints[0].x + span.x * factor;
            camera->position.y = camera->movePoints[0].y + span.y * factor;
            if (++camera->moveFrame > camera->moveDuration) {
                camera->position = camera->movePoints[1];
                camera->flags &= ~0x80000;
            }
        }
        if (camera->flags & 0x800000) {
            FUN_003d681c(camera);
        }

        if (!(camera->flags & 0x100)) {
            if (camera->flags & 0x200) {
                camera->eyeDip = FUN_00227280(camera->eyeDipMode, camera->eyeDipDuration, camera->eyeDipFrame) *
                                 camera->endPose.distance;
                if (++camera->eyeDipFrame > camera->eyeDipDuration) {
                    camera->flags &= ~0x200;
                }
            }
            if (camera->flags & 0x400) {
                if ((camera->flags & 0x200000) == 0) {
                    camera->fovShift = FUN_00227280(camera->fovShiftMode, camera->fovShiftDuration, camera->fovShiftFrame) *
                                       camera->endPose.fov;
                } else {
                    f32 span = camera->endPose.fov - camera->startPose.fov;
                    camera->fovShift = camera->startPose.fov +
                                       span * FUN_00227280(camera->fovShiftMode, camera->fovShiftDuration, camera->fovShiftFrame);
                }
                if (++camera->fovShiftFrame > camera->fovShiftDuration) {
                    camera->flags &= ~0x200000;
                    camera->flags &= ~0x400;
                }
            }
            if (camera->flags & 0x800) {
                f32 span = camera->endPose.roll - camera->startPose.roll;
                camera->roll = FUN_00227280(camera->rollMode, camera->rollDuration, camera->rollFrame) * span;
                if (++camera->rollFrame > camera->rollDuration) {
                    camera->flags &= ~0x800;
                }
            }
            if (camera->flags & 0x1000) {
                BtlCameraVector3 span;
                vecSubtract(&span, &camera->endPose.position, &camera->offset);
                camera->eyeShift.x = span.x * FUN_00227280(camera->eyeShiftMode, camera->eyeShiftDuration, camera->eyeShiftFrame);
                if (++camera->eyeShiftFrame > camera->eyeShiftDuration) {
                    camera->flags &= ~0x1000;
                }
            }
            if (camera->flags & 0x2000) {
                /* Towards the end pose's direction, measured from where the target sits without the shift. */
                BtlCameraVector3 base;
                BtlCameraVector3 span;
                vecSubtract(&base, &camera->lookAt, &camera->lookShift);
                vecSubtract(&span, &camera->endPose.direction, &base);
                vecScale(&camera->lookShift, &span,
                         FUN_00227280(camera->lookShiftMode, camera->lookShiftDuration, camera->lookShiftFrame));
                if (++camera->lookShiftFrame > camera->lookShiftDuration) {
                    camera->flags &= ~0x2000;
                }
            }
            if (camera->flags & 0x8000) {
                BtlCameraVector3 span;
                vecSubtract(&span, &camera->endPose.direction, &DAT_00493530);
                vecScale(&span, &span,
                         FUN_00227280(camera->lookShiftMode, camera->lookShiftDuration, camera->lookShiftFrame));
                vecSum(&camera->lookShift, &DAT_00493530, &span);
                if (++camera->lookShiftFrame > camera->lookShiftDuration) {
                    camera->flags &= ~0x8000;
                }
            }
            if (camera->flags & 0x10000) {
                battleVectorTransitionUpdatePath(camera);
                if (++camera->pathFrame > camera->pathDuration) {
                    camera->flags &= ~0x10000;
                }
            }
            if (camera->flags & 0x20000) {
                FUN_003d6e20(camera);
                if (++camera->eyeShiftFrame > camera->eyeShiftDuration) {
                    camera->flags &= ~0x20000;
                }
            }
        }
        if (camera->flags & 0x100) {
            /* The alternate mode's own channels; the module's statics hold their durations. */
            if (camera->flags & 0x200) {
                f32 target = g_btlMain.transitionTarget;
                camera->altEyeRise = FUN_00227280(g_btlMain.alt.mode, g_btlMain.alt.duration, camera->altEyeRiseFrame) * target;
                if (++camera->altEyeRiseFrame > g_btlMain.alt.duration) {
                    camera->flags &= ~0x200;
                }
            }
            if (camera->flags & 0x400) {
                f32 target = camera->endPose.fov;
                camera->altFovShift =
                    FUN_00227280(camera->altFovShiftMode, camera->altFovShiftDuration, camera->altFovShiftFrame) * target;
                if (++camera->altFovShiftFrame > g_btlMain.altDurations[0]) {
                    camera->flags &= ~0x400;
                }
            }
            if (camera->flags & 0x800) {
                f32 span = camera->endPose.roll - camera->startPose.roll;
                camera->altRoll = FUN_00227280(camera->altRollMode, camera->altRollDuration, camera->altRollFrame) * span;
                if (++camera->altRollFrame > g_btlMain.altDurations[1]) {
                    camera->flags &= ~0x800;
                }
            }
            if (camera->flags & 0x1000) {
                BtlCameraVector3 span;
                vecSubtract(&span, &camera->endPose.position, &camera->offset);
                camera->altEyeShift.x =
                    FUN_00227280(camera->altEyeShiftMode, camera->altEyeShiftDuration, camera->altEyeShiftFrame) * span.x;
                if (++camera->altEyeShiftFrame > g_btlMain.altDurations[2]) {
                    camera->flags &= ~0x1000;
                }
            }
            if (camera->flags & 0x2000) {
                battleCameraBlendTargetOffset(camera);
                if (++camera->altLookShiftFrame > g_btlMain.altDurations[3]) {
                    camera->flags &= ~0x2000;
                }
            }
        } else {
            camera->altEyeRise = 0.0f;
            camera->altFovShift = 0.0f;
            camera->unk7D0 = 0.0f;
            camera->altRoll = 0.0f;
            camera->altEyeShift.x = camera->altEyeShift.y = camera->altEyeShift.z = 0.0f;
            camera->altLookShift.x = camera->altLookShift.y = camera->altLookShift.z = 0.0f;
            camera->altEyeRiseFrame = 0;
            camera->altFovShiftFrame = 0;
            camera->altRollFrame = 0;
            camera->altEyeShiftFrame = 0;
            camera->altLookShiftFrame = 0;
        }

        /* The screen shakes: the event's, then the camera's own two. */
        BtlCameraPan pan;
        pan.y = 0.0f;
        pan.x = 0.0f;
        if (camera->flags & 0x4000) {
            FUN_00257e74((BtlCameraShake *)eventCommandGetPendingCleanup());
            pan = *(BtlCameraPan *)FUN_0018f654((u8 *)eventCommandGetPendingCleanup());
        }
        if (camera->flags & 0x40000) {
            FUN_00257e74(&camera->shake);
            pairSourceGet(&camera->shake, &pan.x, &pan.y);
            if (rangeIsValid(&camera->shake)) {
                camera->shake = BtlCameraShake();
                camera->flags &= ~0x40000;
            }
        }
        BtlCameraPan panExtra;
        panExtra.y = 0.0f;
        panExtra.x = 0.0f;
        if (camera->flags & 0x400000) {
            FUN_00257e74(&camera->shakeExtra);
            pairSourceGet(&camera->shakeExtra, &panExtra.x, &panExtra.y);
            if (rangeIsValid(&camera->shakeExtra)) {
                camera->shakeExtra = BtlCameraShake();
                camera->flags &= ~0x400000;
            }
        }

        /* Turn the direction by `orbit` about the axis a quarter turn round the vertical takes it to. */
        BtlCameraVector3 up;
        up.x = 0.0f;
        up.y = 1.0f;
        up.z = 0.0f;
        BtlCameraMatrix matrix;
        FUN_002929d8(&matrix, 1, 0.0f, 64.0f, 0.0f);
        BtlCameraVector3 axis;
        matrixTransform(&axis, &matrix, &camera->direction);
        f32 sine;
        f32 cosine;
        mathSinCos(&sine, &cosine, camera->orbit * RADIAN_PER_FIXED_ANGLE * FIXED_ANGLE_PER_RADIAN);
        f32 versine = 1.0f - cosine;
        vecScale(&axis, &axis, 1.0f / sqrtf(axis.x * axis.x + axis.y * axis.y + axis.z * axis.z));
        f32 axisX = axis.x;
        f32 axisY = axis.y;
        f32 axisZ = axis.z;
        f32 xy = versine * axisX * axisY;
        f32 xz = versine * axisX * axisZ;
        f32 yz = versine * axisY * axisZ;
        matrix.m[0][0] = cosine + versine * (axisX * axisX);
        matrix.m[0][1] = xy - sine * axisZ;
        matrix.m[0][2] = xz + sine * axisY;
        matrix.m[0][3] = 0.0f;
        matrix.m[1][0] = xy + sine * axisZ;
        matrix.m[1][1] = cosine + versine * (axisY * axisY);
        matrix.m[1][2] = yz - sine * axisX;
        matrix.m[1][3] = 0.0f;
        matrix.m[2][0] = xz - sine * axisY;
        matrix.m[2][1] = yz + sine * axisX;
        matrix.m[2][2] = cosine + versine * (axisZ * axisZ);
        matrix.m[2][3] = 0.0f;

        BtlCameraVector3 target;
        matrixTransform(&target, &matrix, &camera->direction);

        /* The eye: the pose position and its channels. The target: the turned direction, `distance` away. */
        BtlCameraVector3 eye = camera->offset;
        vecAdd(&eye, &camera->eyeSlide);
        vecAdd(&eye, &camera->altEyeShift);
        vecAdd(&eye, &camera->eyeShift);
        eye.z += camera->eyeRise;
        eye.z += camera->altEyeRise;
        eye.z += camera->eyeDip;
        vecScale(&target, &target, camera->distance);
        vecSum(&target, &target, &eye);
        vecAdd(&target, &camera->altLookShift);
        vecAdd(&target, &camera->lookShift);
        vecAdd(&target, &camera->jitter);
        if (camera->flags & 0x40) {
            vecAdd(&target, &camera->sway);
        }
        if (camera->flags & 0x80) {
            vecAdd(&eye, &camera->sway);
        }
        target.x += pan.x;
        target.y += pan.y;
        target.x += panExtra.x;
        target.y += panExtra.y;
        eye.x += pan.x;
        eye.y += pan.y;
        eye.x += panExtra.x;
        eye.y += panExtra.y;
        vecAdd(&target, &camera->lookOrigin);
        vecAdd(&target, &camera->position);
        vecAdd(&eye, &camera->position);
        vecAdd(&eye, &camera->eyeOrigin);

        if (camera->flags & 0xC000000) {
            FUN_002c159c(btlCameraView(camera), camera->debugScalarWide, 1.0f);
        } else {
            FUN_002c159c(btlCameraView(camera), camera->debugScalar, 1.0f);
        }
        BtlCameraVector3 rotation;
        rotation.x = 0.0f;
        rotation.y = 0.0f;
        rotation.z = camera->roll + camera->altRoll;
        FUN_003d5af0(camera, btlCameraView(camera), &eye, &target, &up, &rotation);
        f32 fov = camera->fov + camera->altFovShift + camera->fovShift;
        FUN_001db388(btlCameraView(camera), 0, fov, 0.1f, 25600.0f);
        effectSetPrimaryPosition(&eye);
        effectSetSecondaryPosition(&target);
        effectSetProcessScalar(fov);

        camera->eye = eye;
        camera->lookAt = target;
        vecSubtract(&camera->lookAt, &camera->lookAt, &camera->lookOrigin);
        vecSubtract(&camera->eyeLocal, &eye, &camera->eyeOrigin);
        vecSubtract(&camera->lookLocal, &target, &camera->lookOrigin);
    } else if (camera->state == 2) {
        return -1;
    }
    return 0;
}

} /* extern "C" */
