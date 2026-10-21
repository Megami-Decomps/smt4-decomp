#include "shard/W6_W6Match5_TouchOwner.h"

extern "C" {
void ifTouchRegionRemove(void);
void asdMemFreeNonNull(void *);

// Remove the owner's touch regions before releasing its storage.
void FUN_003c2f40(TouchRegionOwner *owner, void *vtable)
{
    owner->vtable = vtable;
    for (s32 i = 0; i < owner->regionCount; ++i)
        ifTouchRegionRemove();
    owner->regionCount = 0;
    asdMemFreeNonNull(owner);
}
}
