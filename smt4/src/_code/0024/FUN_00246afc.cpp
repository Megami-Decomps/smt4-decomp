/* NON_MATCHING: stack layout differs (retail: vector at sp+4, matrices at sp+16/+80/+144 in a 220-byte frame, &matrix cached in r7); member-wise vector copies match. */
#include "status/StatusCamera.h"

extern "C" {

typedef struct Mtx44 {
    /* 0x00 */ f32 m[4][4];
} Mtx44;

/* The 0x4C-byte rotation matrix FUN_0025009c builds. */
typedef struct RotationMtx {
    /* 0x00 */ Mtx44 matrix;
    /* 0x40 */ u8 unk40[0xC];
} RotationMtx;
void mathMatrixApplyScale(Mtx44 *out, Vec3 *scale, s32 mode);
void matrix44SetIdentity(Mtx44 *out);
void FUN_0025009c(RotationMtx *out, void *rotation);
void matrix43Multiply(Mtx44 *out, Mtx44 *a, RotationMtx *b);
void matrixCopyFull(Mtx44 *out, Mtx44 *in);
void FUN_0024fd70(Mtx44 *out, Vec3 *translation, s32 mode);
void matrixApplyByMode(void *transform, Mtx44 *matrix, s32 mode);

/* Builds a scale * rotation * translation matrix (each part optional) and stores it in the transform at 0x10. */
void FUN_00246afc(u8 *object, Vec3 *translation, void *rotation, Vec3 *scale)
{
    Vec3 vector;
    Mtx44 scaled;
    Mtx44 matrix;
    RotationMtx rotated;

    if (scale != NULL) {
        vector.x = scale->x;
        vector.y = scale->y;
        vector.z = scale->z;
        mathMatrixApplyScale(&scaled, &vector, 0);
    } else {
        matrix44SetIdentity(&scaled);
    }
    if (rotation != NULL) {
        FUN_0025009c(&rotated, rotation);
        matrix43Multiply(&matrix, &scaled, &rotated);
    } else {
        matrixCopyFull(&matrix, &scaled);
    }
    if (translation != NULL) {
        vector.x = translation->x;
        vector.y = translation->y;
        vector.z = translation->z;
        FUN_0024fd70(&matrix, &vector, 2);
    }
    matrixApplyByMode(object + 0x10, &matrix, 0);
}

} /* extern "C" */
