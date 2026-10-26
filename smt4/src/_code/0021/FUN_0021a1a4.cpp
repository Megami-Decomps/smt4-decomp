/* NON_MATCHING: the member-wise translation copy (ldr/str) now matches retail; retail also reserves a 12-byte slot below the vector (88-byte frame, matrix at sp+24, its address cached in r6) that nothing in the source explains. */
#include "common.h"

struct XformVec21a1a4 {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
};

struct XformMtx21a1a4 {
    /* 0x00 */ f32 m[4][4];
};

struct XformOwner21a1a4 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 transform[1];
};

extern "C" {

void FUN_0025009c(XformMtx21a1a4 *dest, const XformMtx21a1a4 *src);
void matrix44SetIdentity(XformMtx21a1a4 *mtx);
void mathMatrixApplyScale(XformMtx21a1a4 *mtx, const XformVec21a1a4 *scale, s32 order);
void FUN_0024fd70(XformMtx21a1a4 *mtx, const XformVec21a1a4 *translation, s32 order);
void matrixApplyByMode(void *dest, const XformMtx21a1a4 *mtx, s32 arg);

// Build base (or identity) x uniform scale x translation and store it into the owner's transform.
void FUN_0021a1a4(XformOwner21a1a4 *owner, const XformVec21a1a4 *translation, const XformMtx21a1a4 *base,
                  f32 scale)
{
    XformMtx21a1a4 mtx;
    XformVec21a1a4 vec;
    if (base != NULL) {
        FUN_0025009c(&mtx, base);
    } else {
        matrix44SetIdentity(&mtx);
    }
    if (scale != 1.0f) {
        vec.x = vec.y = vec.z = scale;
        mathMatrixApplyScale(&mtx, &vec, 2);
    }
    if (translation != NULL) {
        vec.x = translation->x;
        vec.y = translation->y;
        vec.z = translation->z;
        FUN_0024fd70(&mtx, &vec, 2);
    }
    matrixApplyByMode(owner->transform, &mtx, 0);
}

} /* extern "C" */
