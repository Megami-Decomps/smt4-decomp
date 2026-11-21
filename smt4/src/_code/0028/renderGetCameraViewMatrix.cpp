#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
void *asdCameraValueGet(s32);
s32 gxIsStereoscopic3dEnabled(void);
void *FUN_0034334c(RenderCtx *);
void *renderCtxGetBuiltinCamera(RenderCtx *);

/* unit-local: a camera's 3x4 view matrix and the 4x4 matrix this function widens it into */
struct Matrix3x4 {
    f32 values[3][4];
};
struct Matrix4x4 {
    Matrix3x4 transform;
    f32 lastRow[4];
};

/* Copies the active camera's view matrix (the eye's for stereoscopic 3D) into a 4x4 matrix. */
void renderGetCameraViewMatrix(Matrix4x4 *out)
{
    /* The stereo alternatives extend past the shared primary-matrix view. */
    struct CameraMatrixViews {
        u8 unk000[0x38];
        Matrix3x4 primary;
        u8 unk068[0x170];
        Matrix3x4 secondary;
        u8 unk208[0x80];
        Matrix3x4 tertiary;
    };
    s32 mode = renderCtxGetStereoMode(g_titleScene);
    bool special = false;
    CameraMatrixViews *camera;
    if (g_titleScene->cameraSelection.type == 3) {
        camera = static_cast<CameraMatrixViews *>(renderCtxGetBuiltinCamera(g_titleScene));
        special = true;
    } else if (g_titleScene->cameraSelection.type == 4) {
        camera = static_cast<CameraMatrixViews *>(FUN_0034334c(g_titleScene));
        special = true;
    } else {
        camera = static_cast<CameraMatrixViews *>(asdCameraValueGet(mode));
    }
    const Matrix3x4 *matrix;
    if (mode == 2) {
        matrix = &camera->primary;
    } else if (gxIsStereoscopic3dEnabled() == 1 && !special) {
        matrix = mode == 1 ? &camera->tertiary : &camera->secondary;
    } else {
        matrix = &camera->primary;
    }
    out->transform = *matrix;
    out->lastRow[0] = 0;
    out->lastRow[1] = 0;
    out->lastRow[2] = 0;
    out->lastRow[3] = 1;
}
}
