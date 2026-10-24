#include "nw/math/MTX34.h"

using nw::math::MTX34;

/* A 4x4 matrix: the three rows of a MTX34 and the bottom row. */
struct Matrix44Rows {
    MTX34 rows;
    f32 last[4];
};

struct TitleSceneView {
    /* 0x000 */ u8 unk000[0x6F8];
    /* 0x6F8 */ u8 *camera;
};

extern "C" {

extern TitleSceneView *g_titleScene;

s32 FUN_002a81a8(MTX34 *out, const void *source);
void nn_math_ARMv6_MTX34CopyAsm(MTX34 *destination, const MTX34 *source);
void nn_math_ARMv6_MTX44MultAsm(Matrix44Rows *destination, const Matrix44Rows *left, const Matrix44Rows *right);

/* Multiplies `right` by the title scene camera's view matrix (the identity when the camera has none), written to `destination`. */
void titleSceneMultiplyByCameraView(u32 unused, Matrix44Rows *destination, const Matrix44Rows *right)
{
    u8 *camera = g_titleScene->camera;
    if (camera != NULL) {
        MTX34 view;
        if (FUN_002a81a8(&view, camera + 0x38) == 0) {
            nn_math_ARMv6_MTX34CopyAsm(&view, &MTX34::Identity());
        }
        Matrix44Rows matrix;
        MTX34 *rows = &matrix.rows;
        nn_math_ARMv6_MTX34CopyAsm(rows, &view);
        matrix.last[2] = 0.0f;
        matrix.last[1] = 0.0f;
        matrix.last[0] = 0.0f;
        matrix.last[3] = 1.0f;
        nn_math_ARMv6_MTX44MultAsm(destination, &matrix, right);
    }
}

} /* extern "C" */
