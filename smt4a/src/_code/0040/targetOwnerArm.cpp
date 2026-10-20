#include "shard/Shard0040.h"

extern "C" {

extern s32 FUN_00341930(Target *target);

/* True when FUN_00341930 accepts the target; also arms the target's inner object. */
u8 targetOwnerArm(TargetOwner *owner)
{
    s32 result = FUN_00341930(owner->target);

    if (result != 0) {
        owner->target->inner->unk3C = 1;
        owner->target->inner->unk40 = 1;
        owner->target->inner->unk38 = 2;
    }
    return result != 0;
}

} /* extern "C" */
