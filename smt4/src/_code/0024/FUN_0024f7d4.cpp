/* NON_MATCHING: stack layout: retail reserves 88 bytes with the vector at sp+8 and the matrix at sp+24 (kept in r6); ours packs the matrix at sp+0 in 76 bytes. */
#include "common.h"

extern "C" {

typedef struct XformVec3 {
    f32 x;
    f32 y;
    f32 z;
} XformVec3;

typedef struct XformMtx44 {
    f32 m[4][4];
} XformMtx44;

/* An object with a transform at 0x18. */
typedef struct XformObject {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 transform[1];
} XformObject;

void FUN_0025009c(XformMtx44 *dst, const XformMtx44 *src);
void matrix44SetIdentity(XformMtx44 *mtx);
void mathMatrixApplyScale(XformMtx44 *mtx, const XformVec3 *scale, s32 order);
void FUN_0024fd70(XformMtx44 *mtx, const XformVec3 *translation, s32 order);
void matrixApplyByMode(void *transform, const XformMtx44 *mtx, s32 arg);

/* Sets the object's transform from `base` (identity when NULL), a uniform scale and a translation. */
void FUN_0024f7d4(XformObject *object, const XformVec3 *translation, const XformMtx44 *base,
                  f32 scale)
{
    XformMtx44 mtx;

    if (base != NULL) {
        FUN_0025009c(&mtx, base);
    } else {
        matrix44SetIdentity(&mtx);
    }
    if (scale != 1.0f) {
        XformVec3 scaleVec;

        scaleVec.x = scaleVec.y = scaleVec.z = scale;
        mathMatrixApplyScale(&mtx, &scaleVec, 2);
    }
    if (translation != NULL) {
        XformVec3 position;

        position.x = translation->x;
        position.y = translation->y;
        position.z = translation->z;
        FUN_0024fd70(&mtx, &position, 2);
    }
    matrixApplyByMode(object->transform, &mtx, 0);
}

} /* extern "C" */
