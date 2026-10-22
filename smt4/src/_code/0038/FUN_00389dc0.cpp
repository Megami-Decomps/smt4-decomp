#include "common.h"

struct ResourceState {
    /* 0x00 */ u8 unk00[13];
    /* 0x0d */ s8 value;
};
extern "C" {
ResourceState *packageFindFileRefByName(u32 id, u32 kind, u32 index);
/* Returns the resource value or zero if lookup fails. */
s32 FUN_00389dc0(u32 id, u32 index)
{
    ResourceState *resource = packageFindFileRefByName(id, 16, index);
    return resource ? resource->value : 0;
}
}
