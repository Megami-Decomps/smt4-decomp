/* NON_MATCHING: 168 lines. The straight up/down arm and the perspective's stores are retail's. Retail loads the eye and target y/z in vldmia pairs, interleaves the two normalisations, computes the look-at's translations from one load of the eye before its stores (the build reloads it after each row, as in smt4 asdCameraSetLookAtRoll), addresses the render-side flags and view from a base at +0x48, and swaps the near/aspect registers. */
#include "common.h"
#include "nw/math/VEC3.h"
#include "nw/math/MTX44.h"
#include "nw/math/MTX44Perspective.h"

using nw::math::MTX34;
using nw::math::MTX44;
using nw::math::VEC3;

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
    /* 0x3c */ MTX44 projection;
    /* 0x7c */ MTX34 view;
    /* 0xac */ VEC3 eye;
    /* 0xb8 */ VEC3 target;
};

/* The render-side copy of the camera. */
struct CameraOut {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 flags;                 /* bit 0: view matrix changed */
    /* 0x49 */ u8 unk49[0x33];
    /* 0x7c */ MTX34 view;
    /* 0xac */ u8 unkac[0x28];
    /* 0xd4 */ u32 roll;
};
}

extern "C" {

/* Rebuilds the camera's look-at view matrix (from eye and target, no twist), copies it to the render side and
   rebuilds the perspective matrix. */
void cameraUpdateViewAndProjection(CameraState *camera, CameraOut *out)
{
    out->roll = camera->roll;
    nw::math::MTX34LookAt(&camera->view, &camera->eye, 0.0f, &camera->target);
    out->view = camera->view;
    out->flags |= 1;
    mtx44PerspectiveRad(&camera->projection, camera->fieldOfView, camera->aspect, camera->nearPlane,
                        camera->farPlane);
}

} /* extern "C" */
