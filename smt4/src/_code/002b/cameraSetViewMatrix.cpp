#include "common.h"

extern "C" {

typedef struct Camera {
    /* 0x000 */ u8 unk000[0x52C];
    /* 0x52C */ u32 unk52C;
    /* 0x530 */ f32 view[16];           /* 4x4 matrix */
    /* 0x570 */ f32 viewTransposed[16];
    /* 0x5B0 */ u8 dirty;
    /* 0x5B1 */ u8 unk5B1[0xB5B];
    /* 0x110C */ f32 matrixA[16];
    /* 0x114C */ f32 matrixB[16];
    /* 0x118C */ f32 matrixC[16];
} Camera;

int FUN_002bbb74(u32 arg0, void *dst);
int FUN_002bbbc8(Camera *cam, void *a, void *b, void *view);
int mtx44Copy(void *dst, void *src);
int rt_memcmp(void *a, void *b, u32 size);
int nn_math_ARMv6_MTX44TransposeAsm(void *dst, void *src);

/* Updates the camera's view matrix from `matrix` when it changed (or is dirty) and rebuilds the data derived from it. */
void cameraSetViewMatrix(Camera *cam, void *matrix)
{
    if (cam->dirty != 0 || rt_memcmp(matrix, cam->view, 0x40) != 0) {
        mtx44Copy(cam->view, matrix);
        nn_math_ARMv6_MTX44TransposeAsm(cam->viewTransposed, cam->view);
        FUN_002bbbc8(cam, cam->matrixB, cam->matrixA, cam->view);
        FUN_002bbb74(cam->unk52C, cam->matrixC);
        cam->dirty = 0;
    }
}

} /* extern "C" */
