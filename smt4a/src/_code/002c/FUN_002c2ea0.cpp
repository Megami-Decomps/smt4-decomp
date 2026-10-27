#include "common.h"

struct KeyVec4 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ f32 w;
};

extern "C" {

void vectorKeyPrepareNextStep(u32 key, s32 *step, s32 *length, KeyVec4 *from, KeyVec4 *to);
void FUN_00229264(f32 *out, f32 from, f32 to);

static __inline void keyVecSetNeutral(KeyVec4 *vec)
{
    vec->x = 0.5f;
    vec->y = 0.5f;
    vec->z = 0.5f;
    vec->w = 0.0f;
}

/* Advance a vector key animation by one frame: interpolate out between from and to, moving to the next step at the end. */
void FUN_002c2ea0(u32 key, s32 *frame, s32 *step, s32 *length, KeyVec4 *out, KeyVec4 *from, KeyVec4 *to)
{
    if (*step >= 4) {
        keyVecSetNeutral(out);
        return;
    }
    if (++*frame > *length) {
        *frame = 0;
        keyVecSetNeutral(from);
        vectorKeyPrepareNextStep(key, step, length, from, to);
        return;
    }
    FUN_00229264(&out->x, from->x, to->x);
    FUN_00229264(&out->y, from->y, to->y);
    FUN_00229264(&out->z, from->z, to->z);
}

} /* extern "C" */
