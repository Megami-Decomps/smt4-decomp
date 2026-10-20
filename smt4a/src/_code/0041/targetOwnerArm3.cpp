#include "shard/Shard0041.h"

extern "C" {

extern s32 resourceIsReady(Target *target);

/* True when resourceIsReady accepts the target; also arms the target's inner object (state 3). */
u8 targetOwnerArm3(TargetOwner *owner)
{
    s32 result = resourceIsReady(owner->target);

    if (result != 0) {
        owner->target->inner->unk3C = 1;
        owner->target->inner->unk40 = 1;
        owner->target->inner->unk38 = 3;
    }
    return result != 0;
}

} /* extern "C" */
