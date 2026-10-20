/* Latches `matrix` as the camera's matrix B (when it changed or the camera is dirty), derives matrix A as its transpose and refreshes the dependent transforms. */
#include "common.h"

extern "C" {

typedef struct Mtx44 {
    f32 m[4][4];
} Mtx44;

typedef struct Camera {
    /* 0x0000 */ u8 unk0000[0x530];
    /* 0x0530 */ u32 owner;
    /* 0x0534 */ Mtx44 matrixA;
    /* 0x0574 */ Mtx44 matrixB;
    /* 0x05B4 */ u8 dirty;       /* set when a matrix changed */
    /* 0x05B5 */ u8 unk5B5[0xB63];
    /* 0x1118 */ Mtx44 out1;
    /* 0x1158 */ Mtx44 out2;
    /* 0x1198 */ Mtx44 out3;
} Camera;

extern void FUN_00187a84(Camera *camera, Mtx44 *a, Mtx44 *b, Mtx44 *c);
extern void FUN_00187d90(u32 owner, Mtx44 *out);
extern void mtx44Copy(Mtx44 *dest, const Mtx44 *src);
extern void nn_math_ARMv6_MTX44TransposeAsm(Mtx44 *dest, const Mtx44 *src);
extern s32 rt_memcmp(const Mtx44 *a, const Mtx44 *b, u32 size);

void camSetMatrixB(Camera *camera, const Mtx44 *matrix)
{
    if (camera->dirty != 0 || rt_memcmp(matrix, &camera->matrixB, sizeof(Mtx44)) != 0) {
        mtx44Copy(&camera->matrixB, matrix);
        nn_math_ARMv6_MTX44TransposeAsm(&camera->matrixA, &camera->matrixB);
        FUN_00187a84(camera, &camera->out2, &camera->out1, &camera->matrixA);
        FUN_00187d90(camera->owner, &camera->out3);
        camera->dirty = 0;
    }
}

}
