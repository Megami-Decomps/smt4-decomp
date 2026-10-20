/* NON_MATCHING: retail keeps the +8 base adjust separate and loads through +0x14; built folds the constants into one pre-indexed load */
#include "common.h"

extern "C" {

typedef struct VBaseTarget {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 value;
} VBaseTarget;

typedef struct VBaseOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 base[0x10];
    /* 0x18 */ s32 baseOffset;      /* offset of the target from `base` */
} VBaseOwner;

/* Returns the value of the target object located `baseOffset` bytes past the owner's base. */
u32 FUN_00129020(VBaseOwner *owner)
{
    return ((VBaseTarget *)(owner->base + owner->baseOffset))->value;
}

} /* extern "C" */
