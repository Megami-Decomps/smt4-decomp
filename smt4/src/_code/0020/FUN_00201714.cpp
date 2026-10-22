/* NON_MATCHING: in the step-advance path retail builds &from->z in r3 (then reuses r3 for from) where armcc uses r1; one-register scheduling difference. */
#include "common.h"

struct KeyVec4 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ f32 w;
};

extern "C" {

void vectorKeyPrepareNextStep(u32 key, s32 *step, s32 *length, KeyVec4 *from, KeyVec4 *to);
void FUN_00291008(f32 *out, f32 from, f32 to);

static __inline void keyVecSetNeutral(KeyVec4 *vec)
{
    vec->x = 0.5f;
    vec->y = 0.5f;
    vec->z = 0.5f;
    vec->w = 0.0f;
}

/* Advance a vector key animation by one frame: interpolate out between from and to, moving to the next step at the end. */
void FUN_00201714(u32 key, s32 *frame, s32 *step, s32 *length, KeyVec4 *out, KeyVec4 *from, KeyVec4 *to)
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
    FUN_00291008(&out->x, from->x, to->x);
    FUN_00291008(&out->y, from->y, to->y);
    FUN_00291008(&out->z, from->z, to->z);
}

} /* extern "C" */
