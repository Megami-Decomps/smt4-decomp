#include "shard/W6_W6Match5_TouchOwner.h"

extern "C" {
void ifTouchRegionRemove(void);
void asdOperatorDelete(void *);

// Remove the owner's touch regions before releasing its storage.
void FUN_004d0b58(TouchRegionOwner *owner, void *vtable)
{
    owner->vtable = vtable;
    for (s32 i = 0; i < owner->regionCount; ++i)
        ifTouchRegionRemove();
    owner->regionCount = 0;
    asdOperatorDelete(owner);
}
}
