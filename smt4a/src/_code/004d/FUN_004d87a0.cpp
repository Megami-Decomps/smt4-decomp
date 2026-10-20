/* NON_MATCHING: the tail call goes to 0x3fd720, which has no symbol; retail's `b` carries no relocation. */
#include "common.h"

extern "C" {

typedef struct Handle {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 id;
} Handle;

typedef struct HandleOwner {
    /* 0x00 */ Handle *handle;
} HandleOwner;

s32 func_0x003fd720(u32 id);

/* Queries the owner's handle; an owner without one reports 1. */
s32 FUN_004d87a0(HandleOwner *owner)
{
    if (owner->handle != NULL) {
        return func_0x003fd720(owner->handle->id);
    }
    return 1;
}

} /* extern "C" */
