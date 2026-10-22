#include "common.h"

extern "C" {

typedef struct Mtx44 {
    f32 m[4][4];
} Mtx44;

typedef struct SkinObject {
    /* 0x000 */ u8 unk000[0x530];
    /* 0x530 */ u32 handle;
    /* 0x534 */ Mtx44 bind;       /* bind-pose matrix */
    /* 0x574 */ Mtx44 inverse;
    /* 0x5B4 */ u8 dirty;
    /* 0x5B5 */ u8 unk5B5[0xB63];
    /* 0x1118 */ u8 skinA[0x40];
    /* 0x1158 */ u8 skinB[0x40];
    /* 0x1198 */ u8 skinC[1];
} SkinObject;

extern int FUN_00187a84(SkinObject *obj, void *a, void *b, Mtx44 *bind);
extern int FUN_00187d90(u32 handle, void *b);
extern void mathCopyIdentityMatrix(Mtx44 *mtx);

/* Whether `mtx` is the identity matrix. */
static __inline int mtxIsIdentity(const Mtx44 *mtx)
{
    return mtx->m[0][0] == 1.0f && mtx->m[0][1] == 0.0f && mtx->m[0][2] == 0.0f && mtx->m[0][3] == 0.0f
        && mtx->m[1][0] == 0.0f && mtx->m[1][1] == 1.0f && mtx->m[1][2] == 0.0f && mtx->m[1][3] == 0.0f
        && mtx->m[2][0] == 0.0f && mtx->m[2][1] == 0.0f && mtx->m[2][2] == 1.0f && mtx->m[2][3] == 0.0f
        && mtx->m[3][0] == 0.0f && mtx->m[3][1] == 0.0f && mtx->m[3][2] == 0.0f && mtx->m[3][3] == 1.0f;
}

/* Rebuilds the skin matrices when the object is dirty or its bind matrix is not the identity, then clears the dirty flag. */
void skinObjectUpdateMatrices(SkinObject *obj)
{
    if (obj->dirty == 0 && mtxIsIdentity(&obj->bind)) {
        return;
    }
    mathCopyIdentityMatrix(&obj->bind);
    mathCopyIdentityMatrix(&obj->inverse);
    FUN_00187a84(obj, obj->skinB, obj->skinA, &obj->bind);
    FUN_00187d90(obj->handle, obj->skinC);
    obj->dirty = 0;
}

} /* extern "C" */
