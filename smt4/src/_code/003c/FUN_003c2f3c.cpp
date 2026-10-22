/* NON_MATCHING: retail loads the destructor vtable into r1 before the prologue; C loads it into r0 after the prologue, changing loop setup registers. */
#include "shard/W6_W6Match5_TouchOwner.h"

extern "C" {
void ifTouchRegionRemove(void);
void asdMemFreeNonNull(void *);
extern unsigned char _ZTV9Obj422594[];

// Remove the owner's touch regions before releasing its storage.
void FUN_003c2f3c(TouchRegionOwner *owner)
{
    owner->vtable = _ZTV9Obj422594 + 8;
    for (s32 i = 0; i < owner->regionCount; ++i)
        ifTouchRegionRemove();
    owner->regionCount = 0;
    asdMemFreeNonNull(owner);
}
}
