/* NON_MATCHING: retail 54 vs built 52 rows; camera-selection branches and matrix block-copy scheduling differ. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
void *asdCameraValueGet(s32);
s32 FUN_002c5210(void);
void *FUN_0034334c(RenderCtx *);
void *FUN_00343358(RenderCtx *);

void FUN_0028c92c(void *destination)
{
    struct Matrix3x4 {
        f32 values[3][4];
    };
    struct Matrix4x4 {
        Matrix3x4 transform;
        f32 lastRow[4];
    };
    // The stereo alternatives extend past the shared primary-matrix view.
    struct CameraMatrixViews {
        u8 unk000[0x38];
        Matrix3x4 primary;
        u8 unk068[0x170];
        Matrix3x4 secondary;
        u8 unk208[0x80];
        Matrix3x4 tertiary;
    };
    s32 mode = g_titleScene->stereoMode;
    bool special = false;
    CameraMatrixViews *camera;
    if (g_titleScene->cameraSelection.type == 3) {
        camera = static_cast<CameraMatrixViews *>(FUN_00343358(g_titleScene));
        special = true;
    } else if (g_titleScene->cameraSelection.type == 4) {
        camera = static_cast<CameraMatrixViews *>(FUN_0034334c(g_titleScene));
        special = true;
    } else {
        camera = static_cast<CameraMatrixViews *>(asdCameraValueGet(mode));
    }
    const Matrix3x4 *matrix = &camera->primary;
    if (mode != 2 && FUN_002c5210() == 1 && !special)
        matrix = mode == 1 ? &camera->tertiary : &camera->secondary;
    Matrix4x4 *out = static_cast<Matrix4x4 *>(destination);
    out->transform = *matrix;
    out->lastRow[0] = 0;
    out->lastRow[1] = 0;
    out->lastRow[2] = 0;
    out->lastRow[3] = 1;
}
}
