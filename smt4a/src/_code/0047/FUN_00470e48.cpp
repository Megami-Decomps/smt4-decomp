#include "common.h"

struct ResourceState {
    /* 0x00 */ u8 unk00[13];
    /* 0x0d */ s8 value;
};
extern "C" {
ResourceState *FUN_001b2ca4(u32 id, u32 kind, u32 index);
/* Returns the resource value or zero if lookup fails. */
s32 FUN_00470e48(u32 id, u32 index)
{
    ResourceState *resource = FUN_001b2ca4(id, 16, index);
    return resource ? resource->value : 0;
}
}
