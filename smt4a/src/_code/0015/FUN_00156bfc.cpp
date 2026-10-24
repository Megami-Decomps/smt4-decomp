/* NON_MATCHING: VFP register allocation and block order differ (retail hoists the eye/target subtractions into vldmia pairs, emits the general basis before the fixed one, and writes the zeroed projection entries with vstmia pairs); same arithmetic. */
#include "common.h"
#include <math.h>

namespace {
/* A camera: the view matrix (3x4, rows of the basis plus the translation) is rebuilt from the eye and the target,
   the perspective matrix from the clip planes and the field of view. */
struct CameraState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 roll;
    /* 0x24 */ f32 nearPlane;
    /* 0x28 */ f32 farPlane;
    /* 0x2c */ f32 fieldOfView;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ f32 aspect;
    /* 0x38 */ u8 unk38[4];
    /* 0x3c */ f32 projection[16];
    /* 0x7c */ f32 view[12];
    /* 0xac */ f32 eye[3];
    /* 0xb8 */ f32 target[3];
};

/* The render-side copy of the camera. */
struct CameraOut {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 flags;                 /* bit 0: view matrix changed */
    /* 0x49 */ u8 unk49[0x33];
    /* 0x7c */ f32 view[12];
    /* 0xac */ u8 unkac[0x28];
    /* 0xd4 */ u32 roll;
};
}

extern "C" {
void FUN_0018a924(f32 angle, f32 *sine, f32 *cosine);

/* Rebuilds the camera's look-at view matrix (from eye and target, looking down the eye-to-target axis with no
   roll), copies it to the render side and rebuilds the perspective matrix. */
void FUN_00156bfc(CameraState *camera, CameraOut *out)
{
    out->roll = camera->roll;
    f32 dx = camera->eye[0] - camera->target[0];
    f32 dy = camera->eye[1] - camera->target[1];
    f32 dz = camera->eye[2] - camera->target[2];
    f32 *view = camera->view;
    if (dx == 0.0f && dz == 0.0f) {
        /* Looking straight up or down: the basis is fixed. */
        view[0] = 1.0f;
        view[1] = 0.0f;
        view[2] = 0.0f;
        view[3] = -camera->eye[0];
        view[4] = 0.0f;
        view[5] = 0.0f;
        view[8] = 0.0f;
        view[10] = 0.0f;
        if (0.0f >= dy) {
            view[6] = 1.0f;
            view[7] = -camera->eye[2];
            view[9] = -1.0f;
            view[11] = camera->eye[1];
        } else {
            view[6] = -1.0f;
            view[7] = camera->eye[2];
            view[9] = 1.0f;
            view[11] = -camera->eye[1];
        }
    } else {
        f32 forwardScale = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);
        f32 fx = dx * forwardScale;
        f32 fy = dy * forwardScale;
        f32 fz = dz * forwardScale;
        f32 rightScale = 1.0f / sqrtf(dz * dz + dx * dx);
        f32 rx = dz * rightScale;
        f32 rz = -(dx * rightScale);
        f32 ux = fx * 0.0f - fy * rx;
        f32 uy = fz * rx - fx * rz;
        f32 uz = fy * rz - fz * 0.0f;
        f32 sine;
        f32 cosine;
        FUN_0018a924(0.0f, &sine, &cosine);
        f32 ex = camera->eye[0];
        f32 ey = camera->eye[1];
        f32 ez = camera->eye[2];
        f32 a0 = sine * uz + cosine * rx;
        f32 a2 = sine * ux + cosine * rz;
        f32 b0 = cosine * uz - sine * rx;
        f32 b2 = cosine * ux - sine * rz;
        view[0] = a0;
        view[1] = sine * uy;
        view[2] = a2;
        view[3] = -(ex * a0 + ey * sine * uy + ez * a2);
        view[4] = b0;
        view[5] = cosine * uy;
        view[6] = b2;
        view[7] = -(ex * b0 + ey * cosine * uy + ez * b2);
        view[8] = fx;
        view[9] = fy;
        view[10] = fz;
        view[11] = -(ex * fx + ey * fy + ez * fz);
    }
    for (s32 i = 0; i < 12; i++) {
        out->view[i] = camera->view[i];
    }
    out->flags |= 1;
    f32 nearPlane = camera->nearPlane;
    f32 farPlane = camera->farPlane;
    f32 aspect = camera->aspect;
    f32 sine;
    f32 cosine;
    FUN_0018a924(camera->fieldOfView * 0.5f * 40.743664f, &sine, &cosine);
    f32 cotangent = cosine / sine;
    f32 range = 1.0f / (farPlane - nearPlane);
    f32 *projection = camera->projection;
    projection[1] = 0.0f;
    projection[2] = 0.0f;
    projection[3] = 0.0f;
    projection[4] = 0.0f;
    projection[6] = 0.0f;
    projection[7] = 0.0f;
    projection[8] = 0.0f;
    projection[9] = 0.0f;
    projection[12] = 0.0f;
    projection[13] = 0.0f;
    projection[14] = -1.0f;
    projection[15] = 0.0f;
    projection[0] = cotangent / aspect;
    projection[5] = cotangent;
    projection[10] = farPlane * range;
    projection[11] = farPlane * nearPlane * range;
}

} /* extern "C" */
