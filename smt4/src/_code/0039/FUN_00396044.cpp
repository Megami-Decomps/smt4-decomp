/* NON_MATCHING: only the flag temporary register differs (retail r2, build r1); vector store grouping and constant loads match. */
#include "common.h"
struct TargetVector {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
};
struct TargetState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 flags;
    /* 0x09 */ u8 unk09[0x67];
    /* 0x70 */ u32 state;
    /* 0x74 */ u8 unk74[0x1c];
    /* 0x90 */ TargetVector offset;
};
static void targetVectorSet(TargetVector *vector, f32 x, f32 y, f32 z)
{
    vector->x = x;
    vector->y = y;
    vector->z = z;
}
static void targetEnable(TargetState *target)
{
    target->flags |= 4;
    target->state |= 4;
}
/* Enables the interpolation state and installs its initial parameters. */
extern "C" void FUN_00396044(TargetState *target)
{
    targetEnable(target);
    targetVectorSet(&target->offset, 0.0f, -500.0f, 0.0f);
}
