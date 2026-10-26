#include "common.h"
struct RelativeResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 offset;
    /* 0x0c */ u8 unk0c[32];
    /* 0x2c */ u32 active;
};
extern "C" void FUN_002c3364(void **resource);
/* The node a self-relative offset field points at, or NULL for a zero offset. */
static __inline void *linkResolve(s32 *field)
{
    void *target = NULL;
    if (*field != 0) {
        target = (u8 *)field + *field;
    }
    return target;
}

/* Clears active state and releases the resolved relative resource. */
extern "C" void resourceClearActiveAndRelease(RelativeResource *owner)
{
    owner->active = 0;
    void *resource = linkResolve(&owner->offset);
    if (resource)
        FUN_002c3364(&resource);
}
