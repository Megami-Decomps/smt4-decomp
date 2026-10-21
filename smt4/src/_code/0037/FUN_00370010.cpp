/* NON_MATCHING: retail parameter lifetime, address formation or grouped-store selection differs. */
#include "common.h"
struct RelativeResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 offset;
    /* 0x0c */ u8 unk0c[32];
    /* 0x2c */ u32 active;
};
extern "C" void FUN_002c3364(void **resource);
/* Clears active state and releases the resolved relative resource. */
extern "C" void FUN_00370010(RelativeResource *owner)
{
    owner->active = 0;
    void *resource = owner->offset ? (u8 *)&owner->offset + owner->offset : NULL;
    if (resource)
        FUN_002c3364(&resource);
}
