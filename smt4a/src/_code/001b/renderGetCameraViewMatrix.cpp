#include "camp/RenderCtxA.h"

extern "C" {

/* unit-local: the camera's view matrices and the 4x4 matrix this function widens one into */
typedef struct ViewMtx34 {
    f32 m[3][4];
} ViewMtx34;

typedef struct ViewMtx44 {
    ViewMtx34 rows;    /* 0x00: rows 0-2 */
    f32 last[4];       /* 0x30: row 3 */
} ViewMtx44;

typedef struct RenderCamera {
    /* 0x000 */ u8 unk000[0x38];
    /* 0x038 */ ViewMtx34 view;
    /* 0x068 */ u8 unk068[0x170];
    /* 0x1D8 */ ViewMtx34 viewLeft;
    /* 0x208 */ u8 unk208[0x80];
    /* 0x288 */ ViewMtx34 viewRight;
} RenderCamera;

s32 gxIsStereoscopic3dEnabled(void);
RenderCamera *asdCameraValueGet(s32 eye);
RenderCamera *FUN_001c5bd8(RenderCtxA *context);
RenderCamera *renderCtxGetBuiltinCamera(RenderCtxA *context);

/* Copies the active camera's view matrix for the current eye into `out` as a 4x4 matrix. */
void renderGetCameraViewMatrix(ViewMtx44 *out)
{
    s32 eye = renderCtxGetStereoMode(g_renderCtx);
    bool fixed = false;
    RenderCamera *camera;
    if (g_renderCtx->shownMode == 3) {
        camera = renderCtxGetBuiltinCamera(g_renderCtx);
        fixed = true;
    } else if (g_renderCtx->shownMode == 4) {
        camera = FUN_001c5bd8(g_renderCtx);
        fixed = true;
    } else {
        camera = asdCameraValueGet(eye);
    }
    const ViewMtx34 *view;
    if (eye == 2) {
        view = &camera->view;
    } else if (gxIsStereoscopic3dEnabled() == 1 && !fixed) {
        view = eye == 1 ? &camera->viewRight : &camera->viewLeft;
    } else {
        view = &camera->view;
    }
    out->rows = *view;
    out->last[0] = 0.0f;
    out->last[1] = 0.0f;
    out->last[2] = 0.0f;
    out->last[3] = 1.0f;
}

} /* extern "C" */
