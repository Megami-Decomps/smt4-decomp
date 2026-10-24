/* NON_MATCHING: retail reads the dirty flag through a 0x11DC offset register (ldrb [r1, r0]) before using this+0x1000; ours addresses it from the hoisted base. Everything else matches. */
#include "common.h"

extern "C" {

struct Vec4f {
    f32 x, y, z, w;
};

/* An object holding a cached vec4 and a dirty flag, and the resource handle the vec4 is applied to. */
struct CachedVectorOwner {
    /* 0x0000 */ u8 unk0000[0x52C];
    /* 0x052C */ u32 resource;
    /* 0x0530 */ u8 unk0530[0xC9C];
    /* 0x11CC */ Vec4f cached;
    /* 0x11DC */ u8 dirty;
};

void FUN_002b634c(u32 resource, Vec4f *vector);

/* Applies a vec4 to the resource when it changed or was marked dirty, then clears the dirty flag. */
void FUN_00343810(CachedVectorOwner *owner, f32 x, f32 y, f32 z, f32 w)
{
    if (owner->dirty != 0 || owner->cached.x != x || owner->cached.y != y || owner->cached.z != z || owner->cached.w != w) {
        owner->cached.x = x;
        owner->cached.y = y;
        owner->cached.z = z;
        owner->cached.w = w;
        FUN_002b634c(owner->resource, &owner->cached);
    }
    owner->dirty = 0;
}

} /* extern "C" */
