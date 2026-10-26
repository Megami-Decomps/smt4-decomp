/* NON_MATCHING: retail reloads g_renderCtx after reading the eye and keeps the camera-kind cases out of line; this build loads it once and predicates the kind-3 case. */
#include "common.h"

extern "C" {

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

typedef struct RenderContext {
    /* 0x000 */ u8 unk000[0x52c];
    /* 0x52C */ s32 eye;          /* 1 = right, 2 = center */
    /* 0x530 */ u8 unk530[0xc8];
    /* 0x5F8 */ u8 cameraKind;    /* 3 = built-in camera, 4 = override camera */
    /* 0x5F9 */ u8 unk5F9[0x107];
    /* 0x700 */ RenderCamera camera;
} RenderContext;

extern RenderContext *g_renderCtx;

s32 FUN_001696f4(void);
RenderCamera *FUN_001c5b4c(s32 eye);
RenderCamera *FUN_001c5bd8(RenderContext *context);

/* Copies the active camera's view matrix for the current eye into `out` as a 4x4 matrix. */
void FUN_001bced4(ViewMtx44 *out)
{
    s32 eye = g_renderCtx->eye;
    bool fixed = false;
    RenderCamera *camera;

    switch (g_renderCtx->cameraKind) {
    case 3:
        camera = &g_renderCtx->camera;
        fixed = true;
        break;
    case 4:
        camera = FUN_001c5bd8(g_renderCtx);
        fixed = true;
        break;
    default:
        camera = FUN_001c5b4c(eye);
        break;
    }

    const ViewMtx34 *view;
    if (eye != 2 && FUN_001696f4() == 1 && !fixed) {
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
