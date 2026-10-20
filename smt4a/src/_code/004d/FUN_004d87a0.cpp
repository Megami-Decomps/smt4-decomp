#include "common.h"

extern "C" {

typedef struct Handle {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 id;
} Handle;

typedef struct HandleOwner {
    /* 0x00 */ Handle *handle;
} HandleOwner;

s32 FUN_003fd720(u32 id);

/* Queries the owner's handle; an owner without one reports 1. */
s32 FUN_004d87a0(HandleOwner *owner)
{
    if (owner->handle != NULL) {
        return FUN_003fd720(owner->handle->id);
    }
    return 1;
}

} /* extern "C" */
