#include "common.h"
#include "code/Code0012_Smt4.h"

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
    s32 offset = owner->baseOffset;
    u8 *base = owner->base;
    VBaseTarget *target = (VBaseTarget *)(base + offset);
    return target->value;
}

} /* extern "C" */
